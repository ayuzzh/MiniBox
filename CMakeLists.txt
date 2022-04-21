cmake_minimum_required(VERSION 3.20.3)

project(MiniBox VERSION 0.1)

set(TARGET_BINARY "minibox")

option(ECHO "compile ECHO command" ON)

set(ECHO_BUILD ${ECHO})

configure_file(MiniBoxConfig.h.in config.h)

add_executable(
	${TARGET_BINARY}

	src/MiniBox.cpp
	src/applets.cpp

	src/coreutils/echo.cpp
)

target_include_directories(
	${TARGET_BINARY} PUBLIC
	include/
	${CMAKE_BINARY_DIR}
)
