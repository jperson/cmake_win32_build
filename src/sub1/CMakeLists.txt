# setting up sources
add_library(sub1_lib
    ./src/sub1.cpp)

# setting up include directories
target_include_directories(sub1_lib
    PUBLIC include
    PRIVATE src)

# # linking against the desired targets
# target_link_libraries(sub1_lib
#     PRIVATE
#     project_options
#     project_warnings)

install(TARGETS sub1_lib
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}/
    RUNTIME DESTINATION       ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION       ${CMAKE_INSTALL_LIBDIR}
    INCLUDES DESTINATION      ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}/
    ARCHIVE DESTINATION       ${CMAKE_INSTALL_SHAREDSTATEDIR})
