
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#include "../global.h"
#include "../matlab_headers/global.h"

#include <vector>

#include <mex.h>

#include "../matlab_headers/__functions_standard_forests.h"
#include <fertilized/fertilized.h>

using namespace fertilized;


void * StandardClassificationForest_i (

        unsigned int n_classes,
        size_t n_features,
        unsigned int max_depth,
        size_t test_n_features_per_node,
        size_t n_thresholds_per_feature,
        unsigned int n_trees,
        unsigned int min_samples_per_leaf,
        unsigned int min_samples_per_split,
        float min_gain_threshold,
        int allow_redraw,
        unsigned int random_seed,
        char* entropy_name,
        float entropy_p1,
        unsigned int threshold_optimization_threads
) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto libfunc_result = construct_classifier_forest<
              int
>(
          n_classes,
          n_features,
          max_depth,
          test_n_features_per_node,
          n_thresholds_per_feature,
          n_trees,
          min_samples_per_leaf,
          min_samples_per_split,
          min_gain_threshold,
          allow_redraw,
          random_seed,
          entropy_name,
          entropy_p1,
          threshold_optimization_threads
          );
#pragma warning( pop )
  // Result conversion.

    void * __converted_return_value = copy_to_heap(libfunc_result);
    
  return __converted_return_value;
}

void * StandardClassificationForest_f (

        unsigned int n_classes,
        size_t n_features,
        unsigned int max_depth,
        size_t test_n_features_per_node,
        size_t n_thresholds_per_feature,
        unsigned int n_trees,
        unsigned int min_samples_per_leaf,
        unsigned int min_samples_per_split,
        float min_gain_threshold,
        int allow_redraw,
        unsigned int random_seed,
        char* entropy_name,
        float entropy_p1,
        unsigned int threshold_optimization_threads
) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto libfunc_result = construct_classifier_forest<
              float
>(
          n_classes,
          n_features,
          max_depth,
          test_n_features_per_node,
          n_thresholds_per_feature,
          n_trees,
          min_samples_per_leaf,
          min_samples_per_split,
          min_gain_threshold,
          allow_redraw,
          random_seed,
          entropy_name,
          entropy_p1,
          threshold_optimization_threads
          );
#pragma warning( pop )
  // Result conversion.

    void * __converted_return_value = copy_to_heap(libfunc_result);
    
  return __converted_return_value;
}

void * StandardClassificationForest_d (

        unsigned int n_classes,
        size_t n_features,
        unsigned int max_depth,
        size_t test_n_features_per_node,
        size_t n_thresholds_per_feature,
        unsigned int n_trees,
        unsigned int min_samples_per_leaf,
        unsigned int min_samples_per_split,
        float min_gain_threshold,
        int allow_redraw,
        unsigned int random_seed,
        char* entropy_name,
        float entropy_p1,
        unsigned int threshold_optimization_threads
) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto libfunc_result = construct_classifier_forest<
              double
>(
          n_classes,
          n_features,
          max_depth,
          test_n_features_per_node,
          n_thresholds_per_feature,
          n_trees,
          min_samples_per_leaf,
          min_samples_per_split,
          min_gain_threshold,
          allow_redraw,
          random_seed,
          entropy_name,
          entropy_p1,
          threshold_optimization_threads
          );
#pragma warning( pop )
  // Result conversion.

    void * __converted_return_value = copy_to_heap(libfunc_result);
    
  return __converted_return_value;
}

void * StandardClassificationForest_uint8 (

        unsigned int n_classes,
        size_t n_features,
        unsigned int max_depth,
        size_t test_n_features_per_node,
        size_t n_thresholds_per_feature,
        unsigned int n_trees,
        unsigned int min_samples_per_leaf,
        unsigned int min_samples_per_split,
        float min_gain_threshold,
        int allow_redraw,
        unsigned int random_seed,
        char* entropy_name,
        float entropy_p1,
        unsigned int threshold_optimization_threads
) {
  // From C types conversions.

#pragma warning( push )
#pragma warning( disable : 4800 )
  // Get the libraries' result.
  auto libfunc_result = construct_classifier_forest<
              uint8_t
>(
          n_classes,
          n_features,
          max_depth,
          test_n_features_per_node,
          n_thresholds_per_feature,
          n_trees,
          min_samples_per_leaf,
          min_samples_per_split,
          min_gain_threshold,
          allow_redraw,
          random_seed,
          entropy_name,
          entropy_p1,
          threshold_optimization_threads
          );
#pragma warning( pop )
  // Result conversion.

    void * __converted_return_value = copy_to_heap(libfunc_result);
    
  return __converted_return_value;
}

