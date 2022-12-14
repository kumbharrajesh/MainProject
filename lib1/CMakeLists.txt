project(lib1)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/*.cpp)

add_library(${PROJECT_NAME} ${SOURCES})

add_library(sub::lib1 ALIAS ${PROJECT_NAME})

message("Lib source dir: ${PROJECT_SOURCE_DIR}")
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/)
