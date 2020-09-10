ocv_install_example_src(basic *.cpp *.hpp CMakeLists.txt)

set(OPENCV_BASIC_SAMPLES_REQUIRED_DEPS
  opencv_core
  opencv_imgproc
  opencv_dnn
  opencv_imgcodecs
  opencv_videoio
  opencv_highgui
  opencv_objdetect)
ocv_check_dependencies(${OPENCV_BASIC_SAMPLES_REQUIRED_DEPS})

if(NOT BUILD_EXAMPLES OR NOT OCV_DEPENDENCIES_FOUND)
  return()
endif()

project(basic_samples)
ocv_include_modules_recurse(${OPENCV_BASIC_SAMPLES_REQUIRED_DEPS})
ocv_define_sample(tgt main.cpp basic)
ocv_target_link_libraries(${tgt} PRIVATE ${OPENCV_LINKER_LIBS} ${OPENCV_BASIC_SAMPLES_REQUIRED_DEPS})
