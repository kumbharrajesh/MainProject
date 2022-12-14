project(project1)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/private)

target_link_libraries(${PROJECT_NAME} sub::lib1)
