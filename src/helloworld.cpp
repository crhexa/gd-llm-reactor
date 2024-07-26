#include "helloworld.h"

#include <iostream>

#include <onnxruntime_cxx_api.h>

int main(int argc, char* argv[]) {
    std::string inst_name("onnx_test");
    std::string model_path(argv[1]);
    std::string prompt(argv[2]);

    Ort::Env env(ORT_LOGGING_LEVEL_WARNING, inst_name.c_str());
    Ort::SessionOptions session_options;

    session_options.SetIntraOpNumThreads(1);
    session_options.SetGraphOptimizationLevel(GraphOptimizationLevel::ORT_ENABLE_ALL);

    Ort::Session session(env, model_path.c_str(), session_options);
}