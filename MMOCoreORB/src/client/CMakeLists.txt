# Copyright (C) 2007 <SWGEmu>. All rights reserved.
# Distribution of this file for usage outside of Core3 is prohibited.

include_directories(.)

file(GLOB_RECURSE core3client_sources "*.cpp")
file(GLOB_RECURSE core3client_headers "*.h")

# Create core3client binary
add_executable(core3client ${core3client_sources} ${core3client_headers})

add_dependencies(core3client engine3)

target_link_libraries(core3client engine3 ${ZLIB_LIBRARIES} ${GCCLIBATOMIC_LIBRARY} ${PTHREAD_LIB_LINK} ${MYSQL_LIB} ${LUA_LIBRARIES} ${DB_LIBRARIES} ${CMAKE_DL_LIBS} ${OPENSSL_LIBRARIES})

if(ENABLE_MULTITHREADED_LINKER)
	use_gold(core3client)
endif(ENABLE_MULTITHREADED_LINKER)

add_custom_command(
        TARGET core3client POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:core3client>
        ${CMAKE_SOURCE_DIR}/bin/)