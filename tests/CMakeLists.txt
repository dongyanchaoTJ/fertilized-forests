
FILE(GLOB_RECURSE Test_CPP "*.cpp")
foreach (OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES})
  string (TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG)
  set (CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_CURRENT_BINARY_DIR}/)
endforeach (OUTPUTCONFIG CMAKE_CONFIGURATION_TYPES)

add_executable (fertilized_tests ${Test_CPP})
target_compile_features(fertilized_tests PRIVATE ${REQ_CPP11_FEATURES})
target_compile_definitions(fertilized_tests
  PRIVATE -DBOOST_TEST_DYN_LINK)
if (WITH_CAFFE)
  target_compile_definitions(fertilized_tests
    PRIVATE -DCAFFE_FEATURE_EXTRACTION_ENABLED)
  if (CAFFE_CPU_ONLY)
    target_compile_definitions(fertilized_tests
    PRIVATE -DCAFFE_CPU_ONLY)
  endif()
endif()
if (APPLE)
  set_target_properties (fertilized_tests PROPERTIES INSTALL_RPATH "@loader_path/")
else()
  set_target_properties (fertilized_tests PROPERTIES INSTALL_RPATH "$ORIGIN/:$$ORIGIN")
endif()
target_link_libraries(fertilized_tests
  fertilized ${Boost_LIBRARIES} ${OpenCV_COMPATIBLE_LIBRARIES})
# Add the test supplementaries.
file(COPY netspec.prototxt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY netweights.prototxt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Installation.
install (TARGETS fertilized_tests DESTINATION tests)
install (FILES netspec.prototxt DESTINATION tests)
install (FILES netweights.prototxt DESTINATION tests)

# Add the test to the test suite.
add_test (NAME TestsRun
  COMMAND fertilized_tests --run_test=Correctness*/*
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
enable_testing()
