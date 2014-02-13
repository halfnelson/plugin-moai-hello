cmake_minimum_required ( VERSION 2.8.8 )
project ( moai-hello )

set (PLUGIN_TARGET moai-hello)

set (PLUGIN_ROOT "${CMAKE_CURRENT_SOURCE_DIR}")


set (PLUGIN_SRC
    ${PLUGIN_ROOT}/MOAIHello.cpp
    ${PLUGIN_ROOT}/host.cpp
  )

#includes that hosts need to be able to find (anything host.h points to that isnt 
# already included via moaicore etc)
set (PLUGIN_INCLUDES 
	${PLUGIN_ROOT}
)

add_library(${PLUGIN_TARGET} STATIC ${PLUGIN_SRC})
target_include_directories(${PLUGIN_TARGET} PUBLIC ${PLUGIN_INCLUDES})
target_link_libraries(${PLUGIN_TARGET} moai-core moai-util moai-sim zlcore)