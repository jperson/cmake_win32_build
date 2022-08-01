# setting up sources
add_executable(${PROJECT_NAME} ./src/main.cpp)

# Dependencies
#find_package(Boost COMPONENTS log REQUIRED)
find_package(spdlog)

# linking against the desired targets
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    project_options
    project_warnings
    PUBLIC
    spdlog::spdlog
    #Boost::log
    dbgcam
    pvcam)


install(TARGETS ${PROJECT_NAME}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}/
    RUNTIME DESTINATION       ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION       ${CMAKE_INSTALL_LIBDIR}
    INCLUDES DESTINATION      ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}/
    ARCHIVE DESTINATION       ${CMAKE_INSTALL_SHAREDSTATEDIR})
