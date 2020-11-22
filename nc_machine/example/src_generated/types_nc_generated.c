/* Generated from Opc.Ua.CNC.NodeSet.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host hyper-debian by user nb at 2020-11-19 10:54:48 */

#include "types_nc_generated.h"

/* CncPositionDataType */
static UA_DataTypeMember CncPositionDataType_members[3] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ActPos") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CncPositionDataType, cmdPos) - offsetof(UA_CncPositionDataType, actPos) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CmdPos") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CncPositionDataType, remDist) - offsetof(UA_CncPositionDataType, cmdPos) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RemDist") /* .memberName */
},};

/* CncChannelStatus */
#define CncChannelStatus_members NULL

/* CncChannelProgramStatus */
#define CncChannelProgramStatus_members NULL

/* CncOperationMode */
#define CncOperationMode_members NULL

/* CncSpindleTurnDirection */
#define CncSpindleTurnDirection_members NULL

/* CncAxisStatus */
#define CncAxisStatus_members NULL

/* CncSpindleStatus */
#define CncSpindleStatus_members NULL
const UA_DataType UA_TYPES_NC[UA_TYPES_NC_COUNT] = {
/* CncPositionDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {3007}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {5001}}, /* .binaryEncodingId */
    sizeof(UA_CncPositionDataType), /* .memSize */
    UA_TYPES_NC_CNCPOSITIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CncPositionDataType_members  /* .members */
    UA_TYPENAME("CncPositionDataType") /* .typeName */
},
/* CncChannelStatus */
{
    {2, UA_NODEIDTYPE_NUMERIC, {3003}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CncChannelStatus), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CncChannelStatus_members  /* .members */
    UA_TYPENAME("CncChannelStatus") /* .typeName */
},
/* CncChannelProgramStatus */
{
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CncChannelProgramStatus), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CncChannelProgramStatus_members  /* .members */
    UA_TYPENAME("CncChannelProgramStatus") /* .typeName */
},
/* CncOperationMode */
{
    {2, UA_NODEIDTYPE_NUMERIC, {3006}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CncOperationMode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CncOperationMode_members  /* .members */
    UA_TYPENAME("CncOperationMode") /* .typeName */
},
/* CncSpindleTurnDirection */
{
    {2, UA_NODEIDTYPE_NUMERIC, {3001}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CncSpindleTurnDirection), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CncSpindleTurnDirection_members  /* .members */
    UA_TYPENAME("CncSpindleTurnDirection") /* .typeName */
},
/* CncAxisStatus */
{
    {2, UA_NODEIDTYPE_NUMERIC, {3004}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CncAxisStatus), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CncAxisStatus_members  /* .members */
    UA_TYPENAME("CncAxisStatus") /* .typeName */
},
/* CncSpindleStatus */
{
    {2, UA_NODEIDTYPE_NUMERIC, {3005}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CncSpindleStatus), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CncSpindleStatus_members  /* .members */
    UA_TYPENAME("CncSpindleStatus") /* .typeName */
},
};

