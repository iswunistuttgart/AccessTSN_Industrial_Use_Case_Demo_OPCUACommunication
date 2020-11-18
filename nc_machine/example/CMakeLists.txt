cmake_minimum_required(VERSION 3.10)
project(Access_TSN_Demo)

set(CMAKE_C_STANDARD 99)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)
find_package(open62541 REQUIRED)

# Generate types and namespace for DI
ua_generate_nodeset_and_datatypes(
        NAME "nc"
        FILE_CSV "${open62541_NODESET_DIR}/CNC/Opc.Ua.CNC.NodeIds.csv"
        FILE_BSD "${open62541_NODESET_DIR}/CNC/Opc.Ua.CNC.NodeSet.bsd"
        NAMESPACE_MAP "2:http://opcfoundation.org/UA/CNC"
        FILE_NS "${open62541_NODESET_DIR}/CNC/Opc.Ua.CNC.NodeSet.xml"
        OUTPUT_DIR "${PROJECT_SOURCE_DIR}/src_generated"
)

ua_generate_nodeset_and_datatypes(
        NAME "AccessTSNDemo"
        FILE_NS "${PROJECT_SOURCE_DIR}/models/accesstsn_demo.xml"
        FILE_CSV "${PROJECT_SOURCE_DIR}/models/accesstsn_demo.csv"
        FILE_BSD "${PROJECT_SOURCE_DIR}/models/accesstsn.bsd"
        OUTPUT_DIR "${PROJECT_SOURCE_DIR}/src_generated"
        NAMESPACE_MAP "3:http://accesstsn.com/demo/"
        DEPENDS nc
)

add_library(AccessTSNLib
        # Add dependend files to trigger the generation!
        src_generated/namespace_nc_generated.c
        src_generated/namespace_nc_generated.h
        src_generated/types_nc_generated.h
        src_generated/types_nc_generated.c
        src_generated/nc_nodeids.h
        src_generated/namespace_AccessTSNDemo_generated.c
        src_generated/namespace_AccessTSNDemo_generated.h
        src_generated/types_AccessTSNDemo_generated.h
        src_generated/types_AccessTSNDemo_generated.c
        src_generated/AccessTSNDemo_nodeids.h
        )
        
target_link_libraries(AccessTSNLib PUBLIC open62541::open62541)
set_target_properties(AccessTSNLib PROPERTIES DEBUG_POSTFIX "d")

add_executable(
        ${PROJECT_NAME}
        main.c
)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C)
set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "d")
target_link_libraries(${PROJECT_NAME} PUBLIC AccessTSNLib)