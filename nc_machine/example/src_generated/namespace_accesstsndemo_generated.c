/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_accesstsndemo_generated.h"


/* http://accesstsn.com/demo/ - ns=2;i=5010 */

static UA_StatusCode function_namespace_accesstsndemo_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://accesstsn.com/demo/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[0], 11715),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "http://accesstsn.com/demo/"),
UA_NODEID_NUMERIC(ns[0], 11616),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5010)
);
}

/* NamespacePublicationDate - ns=2;i=6275 */

static UA_StatusCode function_namespace_accesstsndemo_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
UA_DateTime *variablenode_ns_2_i_6275_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_2_i_6275_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_2_i_6275_variant_DataContents);
*variablenode_ns_2_i_6275_variant_DataContents = ( (UA_DateTime)(1604417866000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6275_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6275),
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_2_i_6275_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6275)
);
}

/* IsNamespaceSubset - ns=2;i=6274 */

static UA_StatusCode function_namespace_accesstsndemo_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6274_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6274_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6274_variant_DataContents);
*variablenode_ns_2_i_6274_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6274_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6274),
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6274_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6274)
);
}

/* NamespaceVersion - ns=2;i=6277 */

static UA_StatusCode function_namespace_accesstsndemo_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6277_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6277_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6277_variant_DataContents);
*variablenode_ns_2_i_6277_variant_DataContents = UA_STRING_ALLOC("1.0.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6277_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6277),
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6277_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6277)
);
}

/* NamespaceUri - ns=2;i=6276 */

static UA_StatusCode function_namespace_accesstsndemo_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6276_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6276_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6276_variant_DataContents);
*variablenode_ns_2_i_6276_variant_DataContents = UA_STRING_ALLOC("http://accesstsn.com/demo/");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6276_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6276),
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6276_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6276)
);
}

/* StaticStringNodeIdPattern - ns=2;i=6280 */

static UA_StatusCode function_namespace_accesstsndemo_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6280),
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6280)
);
}

/* StaticNumericNodeIdRange - ns=2;i=6279 */

static UA_StatusCode function_namespace_accesstsndemo_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6279),
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6279)
);
}

/* StaticNodeIdTypes - ns=2;i=6278 */

static UA_StatusCode function_namespace_accesstsndemo_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6278),
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6278)
);
}

/* AccessTSN_CNC - ns=2;i=5002 */

static UA_StatusCode function_namespace_accesstsndemo_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AccessTSN_CNC");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "AccessTSN_CNC"),
UA_NODEID_NUMERIC(ns[1], 1007),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5002)
);
}

/* CncChannelList - ns=2;i=5003 */

static UA_StatusCode function_namespace_accesstsndemo_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CncChannelList");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "List of CNC channel objects.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5003),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CncChannelList"),
UA_NODEID_NUMERIC(ns[1], 1010),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5003)
);
}

/* Channel_1 - ns=2;i=5008 */

static UA_StatusCode function_namespace_accesstsndemo_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Channel_1");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNC channel component.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[2], 5003),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Channel_1"),
UA_NODEID_NUMERIC(ns[1], 1002),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5008)
);
}

/* PosTcpWcsA - ns=2;i=6237 */

static UA_StatusCode function_namespace_accesstsndemo_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6237_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6237_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6237_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6237_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6237_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6237_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpWcsA");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian workpiece coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6237),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpWcsA"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6237)
);
}

/* RemDist - ns=2;i=6242 */

static UA_StatusCode function_namespace_accesstsndemo_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6242_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6242_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6242_variant_DataContents);
*variablenode_ns_2_i_6242_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6242_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6242),
UA_NODEID_NUMERIC(ns[2], 6237),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6242_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6242)
);
}

/* ActPos - ns=2;i=6238 */

static UA_StatusCode function_namespace_accesstsndemo_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6238_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6238_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6238_variant_DataContents);
*variablenode_ns_2_i_6238_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6238_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6238),
UA_NODEID_NUMERIC(ns[2], 6237),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6238_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6238)
);
}

/* CmdPos - ns=2;i=6239 */

static UA_StatusCode function_namespace_accesstsndemo_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6239_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6239_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6239_variant_DataContents);
*variablenode_ns_2_i_6239_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6239_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6239),
UA_NODEID_NUMERIC(ns[2], 6237),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6239_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6239)
);
}

/* EngineeringUnits - ns=2;i=6240 */

static UA_StatusCode function_namespace_accesstsndemo_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6240),
UA_NODEID_NUMERIC(ns[2], 6237),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6240)
);
}

/* EURange - ns=2;i=6241 */

static UA_StatusCode function_namespace_accesstsndemo_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6241),
UA_NODEID_NUMERIC(ns[2], 6237),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6241)
);
}

/* PosTcpBcsC - ns=2;i=6213 */

static UA_StatusCode function_namespace_accesstsndemo_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6213_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6213_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6213_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6213_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6213_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6213_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpBcsC");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian base coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6213),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpBcsC"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6213)
);
}

/* EURange - ns=2;i=6217 */

static UA_StatusCode function_namespace_accesstsndemo_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6217),
UA_NODEID_NUMERIC(ns[2], 6213),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6217)
);
}

/* EngineeringUnits - ns=2;i=6216 */

static UA_StatusCode function_namespace_accesstsndemo_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6216),
UA_NODEID_NUMERIC(ns[2], 6213),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6216)
);
}

/* ActPos - ns=2;i=6214 */

static UA_StatusCode function_namespace_accesstsndemo_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6214_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6214_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6214_variant_DataContents);
*variablenode_ns_2_i_6214_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6214_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6214),
UA_NODEID_NUMERIC(ns[2], 6213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6214_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6214)
);
}

/* CmdPos - ns=2;i=6215 */

static UA_StatusCode function_namespace_accesstsndemo_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6215_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6215_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6215_variant_DataContents);
*variablenode_ns_2_i_6215_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6215_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6215),
UA_NODEID_NUMERIC(ns[2], 6213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6215_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6215)
);
}

/* RemDist - ns=2;i=6218 */

static UA_StatusCode function_namespace_accesstsndemo_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6218_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6218_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6218_variant_DataContents);
*variablenode_ns_2_i_6218_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6218_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6218),
UA_NODEID_NUMERIC(ns[2], 6213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6218_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6218)
);
}

/* PosTcpBcsZ - ns=2;i=6231 */

static UA_StatusCode function_namespace_accesstsndemo_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6231_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6231_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6231_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6231_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6231_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6231_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpBcsZ");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian base coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6231),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpBcsZ"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6231)
);
}

/* EURange - ns=2;i=6235 */

static UA_StatusCode function_namespace_accesstsndemo_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6235),
UA_NODEID_NUMERIC(ns[2], 6231),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6235)
);
}

/* EngineeringUnits - ns=2;i=6234 */

static UA_StatusCode function_namespace_accesstsndemo_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6234),
UA_NODEID_NUMERIC(ns[2], 6231),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6234)
);
}

/* ActPos - ns=2;i=6232 */

static UA_StatusCode function_namespace_accesstsndemo_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6232_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6232_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6232_variant_DataContents);
*variablenode_ns_2_i_6232_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6232_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6232),
UA_NODEID_NUMERIC(ns[2], 6231),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6232_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6232)
);
}

/* CmdPos - ns=2;i=6233 */

static UA_StatusCode function_namespace_accesstsndemo_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6233_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6233_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6233_variant_DataContents);
*variablenode_ns_2_i_6233_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6233_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6233),
UA_NODEID_NUMERIC(ns[2], 6231),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6233_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6233)
);
}

/* RemDist - ns=2;i=6236 */

static UA_StatusCode function_namespace_accesstsndemo_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6236_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6236_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6236_variant_DataContents);
*variablenode_ns_2_i_6236_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6236_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6236),
UA_NODEID_NUMERIC(ns[2], 6231),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6236_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6236)
);
}

/* PosTcpBcsX - ns=2;i=6219 */

static UA_StatusCode function_namespace_accesstsndemo_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6219_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6219_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6219_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6219_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6219_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6219_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpBcsX");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian base coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6219),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpBcsX"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6219)
);
}

/* EngineeringUnits - ns=2;i=6222 */

static UA_StatusCode function_namespace_accesstsndemo_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6222),
UA_NODEID_NUMERIC(ns[2], 6219),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6222)
);
}

/* RemDist - ns=2;i=6224 */

static UA_StatusCode function_namespace_accesstsndemo_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6224_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6224_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6224_variant_DataContents);
*variablenode_ns_2_i_6224_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6224_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6224),
UA_NODEID_NUMERIC(ns[2], 6219),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6224_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6224)
);
}

/* CmdPos - ns=2;i=6221 */

static UA_StatusCode function_namespace_accesstsndemo_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6221_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6221_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6221_variant_DataContents);
*variablenode_ns_2_i_6221_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6221_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6221),
UA_NODEID_NUMERIC(ns[2], 6219),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6221_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6221)
);
}

/* ActPos - ns=2;i=6220 */

static UA_StatusCode function_namespace_accesstsndemo_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6220_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6220_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6220_variant_DataContents);
*variablenode_ns_2_i_6220_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6220_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6220),
UA_NODEID_NUMERIC(ns[2], 6219),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6220_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6220)
);
}

/* EURange - ns=2;i=6223 */

static UA_StatusCode function_namespace_accesstsndemo_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6223),
UA_NODEID_NUMERIC(ns[2], 6219),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6223)
);
}

/* ToolId - ns=2;i=6273 */

static UA_StatusCode function_namespace_accesstsndemo_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6273_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6273_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6273_variant_DataContents);
*variablenode_ns_2_i_6273_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6273_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ToolId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ID of active tool; returns zero if no tool is present.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6273),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ToolId"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6273_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6273)
);
}

/* ActJogIncrement - ns=2;i=6107 */

static UA_StatusCode function_namespace_accesstsndemo_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6107_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6107_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6107_variant_DataContents);
*variablenode_ns_2_i_6107_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6107_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActJogIncrement");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active JOG increment.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6107),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActJogIncrement"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6107_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6107)
);
}

/* EURange - ns=2;i=6109 */

static UA_StatusCode function_namespace_accesstsndemo_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6109),
UA_NODEID_NUMERIC(ns[2], 6107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6109)
);
}

/* EngineeringUnits - ns=2;i=6108 */

static UA_StatusCode function_namespace_accesstsndemo_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6108_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6108_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6108_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6108_EUInformation_0->unitId = (UA_Int32) 5066068;
variablenode_ns_2_i_6108_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm");
variablenode_ns_2_i_6108_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6108_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6108),
UA_NODEID_NUMERIC(ns[2], 6107),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6108)
);
}

/* PosTcpWcsX - ns=2;i=6255 */

static UA_StatusCode function_namespace_accesstsndemo_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6255_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6255_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6255_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6255_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6255_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6255_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpWcsX");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian workpiece coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6255),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpWcsX"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6255)
);
}

/* ActPos - ns=2;i=6256 */

static UA_StatusCode function_namespace_accesstsndemo_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6256_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6256_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6256_variant_DataContents);
*variablenode_ns_2_i_6256_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6256_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6256),
UA_NODEID_NUMERIC(ns[2], 6255),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6256_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6256)
);
}

/* CmdPos - ns=2;i=6257 */

static UA_StatusCode function_namespace_accesstsndemo_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6257_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6257_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6257_variant_DataContents);
*variablenode_ns_2_i_6257_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6257_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6257),
UA_NODEID_NUMERIC(ns[2], 6255),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6257_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6257)
);
}

/* EURange - ns=2;i=6259 */

static UA_StatusCode function_namespace_accesstsndemo_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6259),
UA_NODEID_NUMERIC(ns[2], 6255),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6259)
);
}

/* EngineeringUnits - ns=2;i=6258 */

static UA_StatusCode function_namespace_accesstsndemo_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6258),
UA_NODEID_NUMERIC(ns[2], 6255),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6258)
);
}

/* RemDist - ns=2;i=6260 */

static UA_StatusCode function_namespace_accesstsndemo_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6260_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6260_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6260_variant_DataContents);
*variablenode_ns_2_i_6260_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6260_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6260),
UA_NODEID_NUMERIC(ns[2], 6255),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6260_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6260)
);
}

/* DryRunFeed - ns=2;i=6131 */

static UA_StatusCode function_namespace_accesstsndemo_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6131_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6131_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6131_variant_DataContents);
*variablenode_ns_2_i_6131_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6131_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "DryRunFeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Test feedrate.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6131),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DryRunFeed"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6131_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6131)
);
}

/* EURange - ns=2;i=6133 */

static UA_StatusCode function_namespace_accesstsndemo_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6133),
UA_NODEID_NUMERIC(ns[2], 6131),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6133)
);
}

/* EngineeringUnits - ns=2;i=6132 */

static UA_StatusCode function_namespace_accesstsndemo_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6132_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6132_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6132_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6132_EUInformation_0->unitId = (UA_Int32) 4732977;
variablenode_ns_2_i_6132_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm/min");
variablenode_ns_2_i_6132_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre per minute");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6132_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6132),
UA_NODEID_NUMERIC(ns[2], 6131),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6132)
);
}

/* ActProgramBlock - ns=2;i=6118 */

static UA_StatusCode function_namespace_accesstsndemo_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramBlock");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Block of lines containing the previous, actual and subsequent lines of a CNC part program.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6118),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramBlock"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6118)
);
}

/* ActProgramFile - ns=2;i=6119 */

static UA_StatusCode function_namespace_accesstsndemo_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6119_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6119_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6119_variant_DataContents);
*variablenode_ns_2_i_6119_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6119_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramFile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Path of active CNC program file (main or subprogram).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6119),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramFile"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6119_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6119)
);
}

/* FeedHold - ns=2;i=6134 */

static UA_StatusCode function_namespace_accesstsndemo_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6134_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6134_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6134_variant_DataContents);
*variablenode_ns_2_i_6134_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6134_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeedHold");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Feed status (true in case of feed hold active, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6134),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FeedHold"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6134_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6134)
);
}

/* ActGFunctions - ns=2;i=6106 */

static UA_StatusCode function_namespace_accesstsndemo_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "ActGFunctions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Array of active G functions; there can be several G functions active at a time (modal and non-modal G functions).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6106),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActGFunctions"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6106)
);
}

/* ActMFunctions - ns=2;i=6112 */

static UA_StatusCode function_namespace_accesstsndemo_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "ActMFunctions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Array of active M functions: there can be several M functions active at a time (modal and non-modal M functions).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6112),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActMFunctions"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6112)
);
}

/* ActModalOffsetFunction - ns=2;i=6113 */

static UA_StatusCode function_namespace_accesstsndemo_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6113_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6113_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6113_variant_DataContents);
*variablenode_ns_2_i_6113_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6113_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActModalOffsetFunction");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active zero offset function.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6113),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActModalOffsetFunction"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6113_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6113)
);
}

/* ActMainProgramFile - ns=2;i=6110 */

static UA_StatusCode function_namespace_accesstsndemo_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6110_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6110_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6110_variant_DataContents);
*variablenode_ns_2_i_6110_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6110_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActMainProgramFile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Path of active CNC main program.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6110),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActMainProgramFile"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6110_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6110)
);
}

/* ActMainProgramName - ns=2;i=6111 */

static UA_StatusCode function_namespace_accesstsndemo_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6111_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6111_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6111_variant_DataContents);
*variablenode_ns_2_i_6111_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6111_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActMainProgramName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of active CNC main program.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6111),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActMainProgramName"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6111_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6111)
);
}

/* ActOperationMode - ns=2;i=6114 */

static UA_StatusCode function_namespace_accesstsndemo_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3006);
UA_Int32 *variablenode_ns_2_i_6114_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6114_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6114_variant_DataContents);
*variablenode_ns_2_i_6114_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6114_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActOperationMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Channel's active mode of operation.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6114),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActOperationMode"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6114_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6114)
);
}

/* ActOverride - ns=2;i=6115 */

static UA_StatusCode function_namespace_accesstsndemo_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6115_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6115_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6115_variant_DataContents);
*variablenode_ns_2_i_6115_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6115_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axis override actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6115),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActOverride"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6115_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6115)
);
}

/* EngineeringUnits - ns=2;i=6116 */

static UA_StatusCode function_namespace_accesstsndemo_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6116_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6116_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6116_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6116_EUInformation_0->unitId = (UA_Int32) 20529;
variablenode_ns_2_i_6116_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "%");
variablenode_ns_2_i_6116_EUInformation_0->description = UA_LOCALIZEDTEXT("", "percent");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6116_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6116),
UA_NODEID_NUMERIC(ns[2], 6115),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6116)
);
}

/* EURange - ns=2;i=6117 */

static UA_StatusCode function_namespace_accesstsndemo_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6117),
UA_NODEID_NUMERIC(ns[2], 6115),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6117)
);
}

/* PosTcpBcsA - ns=2;i=6201 */

static UA_StatusCode function_namespace_accesstsndemo_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6201_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6201_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6201_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6201_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6201_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6201_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpBcsA");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian base coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6201),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpBcsA"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6201)
);
}

/* ActPos - ns=2;i=6202 */

static UA_StatusCode function_namespace_accesstsndemo_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6202_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6202_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6202_variant_DataContents);
*variablenode_ns_2_i_6202_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6202_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6202),
UA_NODEID_NUMERIC(ns[2], 6201),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6202_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6202)
);
}

/* CmdPos - ns=2;i=6203 */

static UA_StatusCode function_namespace_accesstsndemo_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6203_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6203_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6203_variant_DataContents);
*variablenode_ns_2_i_6203_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6203_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6203),
UA_NODEID_NUMERIC(ns[2], 6201),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6203_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6203)
);
}

/* EURange - ns=2;i=6205 */

static UA_StatusCode function_namespace_accesstsndemo_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6205),
UA_NODEID_NUMERIC(ns[2], 6201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6205)
);
}

/* EngineeringUnits - ns=2;i=6204 */

static UA_StatusCode function_namespace_accesstsndemo_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6204),
UA_NODEID_NUMERIC(ns[2], 6201),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6204)
);
}

/* RemDist - ns=2;i=6206 */

static UA_StatusCode function_namespace_accesstsndemo_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6206_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6206_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6206_variant_DataContents);
*variablenode_ns_2_i_6206_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6206_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6206),
UA_NODEID_NUMERIC(ns[2], 6201),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6206_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6206)
);
}

/* PosTcpBcsB - ns=2;i=6207 */

static UA_StatusCode function_namespace_accesstsndemo_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6207_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6207_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6207_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6207_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6207_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6207_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpBcsB");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian base coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6207),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpBcsB"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6207)
);
}

/* RemDist - ns=2;i=6212 */

static UA_StatusCode function_namespace_accesstsndemo_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6212_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6212_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6212_variant_DataContents);
*variablenode_ns_2_i_6212_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6212_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6212),
UA_NODEID_NUMERIC(ns[2], 6207),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6212_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6212)
);
}

/* ActPos - ns=2;i=6208 */

static UA_StatusCode function_namespace_accesstsndemo_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6208_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6208_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6208_variant_DataContents);
*variablenode_ns_2_i_6208_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6208_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6208),
UA_NODEID_NUMERIC(ns[2], 6207),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6208_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6208)
);
}

/* CmdPos - ns=2;i=6209 */

static UA_StatusCode function_namespace_accesstsndemo_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6209_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6209_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6209_variant_DataContents);
*variablenode_ns_2_i_6209_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6209_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6209),
UA_NODEID_NUMERIC(ns[2], 6207),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6209_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6209)
);
}

/* EngineeringUnits - ns=2;i=6210 */

static UA_StatusCode function_namespace_accesstsndemo_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6210),
UA_NODEID_NUMERIC(ns[2], 6207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6210)
);
}

/* EURange - ns=2;i=6211 */

static UA_StatusCode function_namespace_accesstsndemo_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6211),
UA_NODEID_NUMERIC(ns[2], 6207),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6211)
);
}

/* PosTcpBcsY - ns=2;i=6225 */

static UA_StatusCode function_namespace_accesstsndemo_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6225_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6225_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6225_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6225_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6225_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6225_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpBcsY");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian base coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6225),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpBcsY"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6225)
);
}

/* ActPos - ns=2;i=6226 */

static UA_StatusCode function_namespace_accesstsndemo_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6226_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6226_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6226_variant_DataContents);
*variablenode_ns_2_i_6226_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6226_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6226),
UA_NODEID_NUMERIC(ns[2], 6225),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6226_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6226)
);
}

/* CmdPos - ns=2;i=6227 */

static UA_StatusCode function_namespace_accesstsndemo_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6227_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6227_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6227_variant_DataContents);
*variablenode_ns_2_i_6227_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6227_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6227),
UA_NODEID_NUMERIC(ns[2], 6225),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6227_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6227)
);
}

/* EURange - ns=2;i=6229 */

static UA_StatusCode function_namespace_accesstsndemo_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6229),
UA_NODEID_NUMERIC(ns[2], 6225),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6229)
);
}

/* EngineeringUnits - ns=2;i=6228 */

static UA_StatusCode function_namespace_accesstsndemo_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6228),
UA_NODEID_NUMERIC(ns[2], 6225),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6228)
);
}

/* RemDist - ns=2;i=6230 */

static UA_StatusCode function_namespace_accesstsndemo_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6230_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6230_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6230_variant_DataContents);
*variablenode_ns_2_i_6230_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6230_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6230),
UA_NODEID_NUMERIC(ns[2], 6225),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6230_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6230)
);
}

/* PosTcpWcsZ - ns=2;i=6267 */

static UA_StatusCode function_namespace_accesstsndemo_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6267_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6267_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6267_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6267_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6267_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6267_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpWcsZ");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian workpiece coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6267),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpWcsZ"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6267)
);
}

/* ActPos - ns=2;i=6268 */

static UA_StatusCode function_namespace_accesstsndemo_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6268_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6268_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6268_variant_DataContents);
*variablenode_ns_2_i_6268_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6268_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6268),
UA_NODEID_NUMERIC(ns[2], 6267),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6268_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6268)
);
}

/* CmdPos - ns=2;i=6269 */

static UA_StatusCode function_namespace_accesstsndemo_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6269_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6269_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6269_variant_DataContents);
*variablenode_ns_2_i_6269_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6269_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6269),
UA_NODEID_NUMERIC(ns[2], 6267),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6269_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6269)
);
}

/* EngineeringUnits - ns=2;i=6270 */

static UA_StatusCode function_namespace_accesstsndemo_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6270),
UA_NODEID_NUMERIC(ns[2], 6267),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6270)
);
}

/* EURange - ns=2;i=6271 */

static UA_StatusCode function_namespace_accesstsndemo_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6271),
UA_NODEID_NUMERIC(ns[2], 6267),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6271)
);
}

/* RemDist - ns=2;i=6272 */

static UA_StatusCode function_namespace_accesstsndemo_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6272_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6272_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6272_variant_DataContents);
*variablenode_ns_2_i_6272_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6272_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6272),
UA_NODEID_NUMERIC(ns[2], 6267),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6272_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6272)
);
}

/* PosTcpWcsY - ns=2;i=6261 */

static UA_StatusCode function_namespace_accesstsndemo_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6261_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6261_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6261_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6261_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6261_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6261_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpWcsY");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian workpiece coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6261),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpWcsY"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6261)
);
}

/* EURange - ns=2;i=6265 */

static UA_StatusCode function_namespace_accesstsndemo_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6265),
UA_NODEID_NUMERIC(ns[2], 6261),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6265)
);
}

/* EngineeringUnits - ns=2;i=6264 */

static UA_StatusCode function_namespace_accesstsndemo_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6264),
UA_NODEID_NUMERIC(ns[2], 6261),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6264)
);
}

/* RemDist - ns=2;i=6266 */

static UA_StatusCode function_namespace_accesstsndemo_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6266_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6266_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6266_variant_DataContents);
*variablenode_ns_2_i_6266_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6266_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6266),
UA_NODEID_NUMERIC(ns[2], 6261),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6266_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6266)
);
}

/* ActPos - ns=2;i=6262 */

static UA_StatusCode function_namespace_accesstsndemo_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6262_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6262_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6262_variant_DataContents);
*variablenode_ns_2_i_6262_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6262_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6262),
UA_NODEID_NUMERIC(ns[2], 6261),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6262_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6262)
);
}

/* CmdPos - ns=2;i=6263 */

static UA_StatusCode function_namespace_accesstsndemo_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6263_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6263_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6263_variant_DataContents);
*variablenode_ns_2_i_6263_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6263_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6263),
UA_NODEID_NUMERIC(ns[2], 6261),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6263_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6263)
);
}

/* PosTcpWcsC - ns=2;i=6249 */

static UA_StatusCode function_namespace_accesstsndemo_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6249_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6249_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6249_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6249_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6249_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6249_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpWcsC");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian workpiece coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6249),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpWcsC"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6249)
);
}

/* RemDist - ns=2;i=6254 */

static UA_StatusCode function_namespace_accesstsndemo_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6254_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6254_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6254_variant_DataContents);
*variablenode_ns_2_i_6254_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6254_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6254),
UA_NODEID_NUMERIC(ns[2], 6249),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6254_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6254)
);
}

/* EngineeringUnits - ns=2;i=6252 */

static UA_StatusCode function_namespace_accesstsndemo_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6252),
UA_NODEID_NUMERIC(ns[2], 6249),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6252)
);
}

/* EURange - ns=2;i=6253 */

static UA_StatusCode function_namespace_accesstsndemo_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6253),
UA_NODEID_NUMERIC(ns[2], 6249),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6253)
);
}

/* CmdPos - ns=2;i=6251 */

static UA_StatusCode function_namespace_accesstsndemo_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6251_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6251_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6251_variant_DataContents);
*variablenode_ns_2_i_6251_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6251_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6251),
UA_NODEID_NUMERIC(ns[2], 6249),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6251_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6251)
);
}

/* ActPos - ns=2;i=6250 */

static UA_StatusCode function_namespace_accesstsndemo_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6250_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6250_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6250_variant_DataContents);
*variablenode_ns_2_i_6250_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6250_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6250),
UA_NODEID_NUMERIC(ns[2], 6249),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6250_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6250)
);
}

/* PosTcpWcsB - ns=2;i=6243 */

static UA_StatusCode function_namespace_accesstsndemo_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6243_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6243_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6243_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6243_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6243_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6243_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosTcpWcsB");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual position of the tool center point in machine’s Cartesian workpiece coordinate system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6243),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosTcpWcsB"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6243)
);
}

/* EURange - ns=2;i=6247 */

static UA_StatusCode function_namespace_accesstsndemo_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6247),
UA_NODEID_NUMERIC(ns[2], 6243),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6247)
);
}

/* EngineeringUnits - ns=2;i=6246 */

static UA_StatusCode function_namespace_accesstsndemo_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6246),
UA_NODEID_NUMERIC(ns[2], 6243),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6246)
);
}

/* ActPos - ns=2;i=6244 */

static UA_StatusCode function_namespace_accesstsndemo_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6244_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6244_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6244_variant_DataContents);
*variablenode_ns_2_i_6244_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6244_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6244),
UA_NODEID_NUMERIC(ns[2], 6243),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6244_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6244)
);
}

/* CmdPos - ns=2;i=6245 */

static UA_StatusCode function_namespace_accesstsndemo_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6245_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6245_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6245_variant_DataContents);
*variablenode_ns_2_i_6245_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6245_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6245),
UA_NODEID_NUMERIC(ns[2], 6243),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6245_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6245)
);
}

/* RemDist - ns=2;i=6248 */

static UA_StatusCode function_namespace_accesstsndemo_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6248_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6248_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6248_variant_DataContents);
*variablenode_ns_2_i_6248_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6248_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6248),
UA_NODEID_NUMERIC(ns[2], 6243),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6248_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6248)
);
}

/* Id - ns=2;i=6135 */

static UA_StatusCode function_namespace_accesstsndemo_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6135_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6135_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6135_variant_DataContents);
*variablenode_ns_2_i_6135_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6135_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Unique numeric channel identifier.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6135),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6135_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6135)
);
}

/* CmdOverride - ns=2;i=6128 */

static UA_StatusCode function_namespace_accesstsndemo_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6128_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6128_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6128_variant_DataContents);
*variablenode_ns_2_i_6128_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6128_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Override setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6128),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdOverride"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6128_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6128)
);
}

/* EURange - ns=2;i=6130 */

static UA_StatusCode function_namespace_accesstsndemo_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6130),
UA_NODEID_NUMERIC(ns[2], 6128),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6130)
);
}

/* EngineeringUnits - ns=2;i=6129 */

static UA_StatusCode function_namespace_accesstsndemo_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6129_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6129_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6129_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6129_EUInformation_0->unitId = (UA_Int32) 20529;
variablenode_ns_2_i_6129_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "%");
variablenode_ns_2_i_6129_EUInformation_0->description = UA_LOCALIZEDTEXT("", "percent");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6129_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6129),
UA_NODEID_NUMERIC(ns[2], 6128),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6129)
);
}

/* CmdOperationMode - ns=2;i=6127 */

static UA_StatusCode function_namespace_accesstsndemo_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3006);
UA_Int32 *variablenode_ns_2_i_6127_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6127_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6127_variant_DataContents);
*variablenode_ns_2_i_6127_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6127_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdOperationMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Channel’s mode of operation setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6127),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdOperationMode"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6127_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6127)
);
}

/* ActFeedrate - ns=2;i=6103 */

static UA_StatusCode function_namespace_accesstsndemo_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6103_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6103_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6103_variant_DataContents);
*variablenode_ns_2_i_6103_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6103_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActFeedrate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Feedrate actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6103),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActFeedrate"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6103_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6103)
);
}

/* EURange - ns=2;i=6105 */

static UA_StatusCode function_namespace_accesstsndemo_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6105),
UA_NODEID_NUMERIC(ns[2], 6103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6105)
);
}

/* EngineeringUnits - ns=2;i=6104 */

static UA_StatusCode function_namespace_accesstsndemo_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6104_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6104_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6104_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6104_EUInformation_0->unitId = (UA_Int32) 4732977;
variablenode_ns_2_i_6104_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm/min");
variablenode_ns_2_i_6104_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre per minute");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6104_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6104),
UA_NODEID_NUMERIC(ns[2], 6103),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6104)
);
}

/* CmdFeedrate - ns=2;i=6124 */

static UA_StatusCode function_namespace_accesstsndemo_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6124_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6124_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6124_variant_DataContents);
*variablenode_ns_2_i_6124_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6124_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdFeedrate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Feedrate setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6124),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdFeedrate"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6124_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6124)
);
}

/* EURange - ns=2;i=6126 */

static UA_StatusCode function_namespace_accesstsndemo_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6126),
UA_NODEID_NUMERIC(ns[2], 6124),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6126)
);
}

/* EngineeringUnits - ns=2;i=6125 */

static UA_StatusCode function_namespace_accesstsndemo_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6125_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6125_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6125_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6125_EUInformation_0->unitId = (UA_Int32) 4732977;
variablenode_ns_2_i_6125_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm/min");
variablenode_ns_2_i_6125_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre per minute");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6125_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6125),
UA_NODEID_NUMERIC(ns[2], 6124),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6125)
);
}

/* BlockMode - ns=2;i=6123 */

static UA_StatusCode function_namespace_accesstsndemo_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6123_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6123_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6123_variant_DataContents);
*variablenode_ns_2_i_6123_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6123_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "BlockMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Block mode status (true in case of block mode is active, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6123),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BlockMode"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6123_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6123)
);
}

/* ActStatus - ns=2;i=6122 */

static UA_StatusCode function_namespace_accesstsndemo_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3003);
UA_Int32 *variablenode_ns_2_i_6122_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6122_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6122_variant_DataContents);
*variablenode_ns_2_i_6122_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6122_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active status of channel.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6122),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActStatus"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6122_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6122)
);
}

/* ActProgramStatus - ns=2;i=6121 */

static UA_StatusCode function_namespace_accesstsndemo_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3002);
UA_Int32 *variablenode_ns_2_i_6121_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6121_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6121_variant_DataContents);
*variablenode_ns_2_i_6121_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6121_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active channel program status");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6121),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramStatus"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6121_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6121)
);
}

/* ActProgramName - ns=2;i=6120 */

static UA_StatusCode function_namespace_accesstsndemo_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6120_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6120_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6120_variant_DataContents);
*variablenode_ns_2_i_6120_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6120_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of active CNC program (main or subprogram).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6120),
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramName"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6120_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6120)
);
}

/* CncAxisList - ns=2;i=5001 */

static UA_StatusCode function_namespace_accesstsndemo_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CncAxisList");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "List of CNC axis objects.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5001),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CncAxisList"),
UA_NODEID_NUMERIC(ns[1], 1008),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5001)
);
}

/* Axis_y - ns=2;i=5006 */

static UA_StatusCode function_namespace_accesstsndemo_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_y");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNC axis component.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[2], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Axis_y"),
UA_NODEID_NUMERIC(ns[1], 1004),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5006)
);
}

/* ActChannel - ns=2;i=6037 */

static UA_StatusCode function_namespace_accesstsndemo_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
UA_NodeId *variablenode_ns_2_i_6037_variant_DataContents =  UA_NodeId_new();
if (!variablenode_ns_2_i_6037_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_NodeId_init(variablenode_ns_2_i_6037_variant_DataContents);
*variablenode_ns_2_i_6037_variant_DataContents = UA_NODEID_NUMERIC(ns[0], 0);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6037_variant_DataContents, &UA_TYPES[UA_TYPES_NODEID]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActChannel");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "NodeId of the channel object (CncChannelType) that administrates this drive to expose drive’s channel affiliation.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6037),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActChannel"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_NodeId_delete(variablenode_ns_2_i_6037_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6037)
);
}

/* ActLoad - ns=2;i=6038 */

static UA_StatusCode function_namespace_accesstsndemo_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6038_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6038_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6038_variant_DataContents);
*variablenode_ns_2_i_6038_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6038_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive load actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6038),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActLoad"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6038_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6038)
);
}

/* EURange - ns=2;i=6040 */

static UA_StatusCode function_namespace_accesstsndemo_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6040),
UA_NODEID_NUMERIC(ns[2], 6038),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6040)
);
}

/* EngineeringUnits - ns=2;i=6039 */

static UA_StatusCode function_namespace_accesstsndemo_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6039_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6039_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6039_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6039_EUInformation_0->unitId = (UA_Int32) 20529;
variablenode_ns_2_i_6039_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "%");
variablenode_ns_2_i_6039_EUInformation_0->description = UA_LOCALIZEDTEXT("", "percent");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6039_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[2], 6038),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6039)
);
}

/* ZeroOffset - ns=2;i=6067 */

static UA_StatusCode function_namespace_accesstsndemo_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6067_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6067_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6067_variant_DataContents);
*variablenode_ns_2_i_6067_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6067_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZeroOffset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active axis zero offset.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6067),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZeroOffset"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6067_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6067)
);
}

/* EURange - ns=2;i=6069 */

static UA_StatusCode function_namespace_accesstsndemo_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6069),
UA_NODEID_NUMERIC(ns[2], 6067),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6069)
);
}

/* EngineeringUnits - ns=2;i=6068 */

static UA_StatusCode function_namespace_accesstsndemo_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6068_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6068_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6068_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6068_EUInformation_0->unitId = (UA_Int32) 5066068;
variablenode_ns_2_i_6068_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm");
variablenode_ns_2_i_6068_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6068_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6068),
UA_NODEID_NUMERIC(ns[2], 6067),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6068)
);
}

/* PosIndirect - ns=2;i=6061 */

static UA_StatusCode function_namespace_accesstsndemo_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6061_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6061_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6061_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6061_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6061_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6061_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosIndirect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position actual value referring to axis' indirect measurement system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6061),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosIndirect"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6061)
);
}

/* EURange - ns=2;i=6065 */

static UA_StatusCode function_namespace_accesstsndemo_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6065),
UA_NODEID_NUMERIC(ns[2], 6061),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6065)
);
}

/* EngineeringUnits - ns=2;i=6064 */

static UA_StatusCode function_namespace_accesstsndemo_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6064),
UA_NODEID_NUMERIC(ns[2], 6061),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6064)
);
}

/* ActPos - ns=2;i=6062 */

static UA_StatusCode function_namespace_accesstsndemo_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6062_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6062_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6062_variant_DataContents);
*variablenode_ns_2_i_6062_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6062_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6062),
UA_NODEID_NUMERIC(ns[2], 6061),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6062_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6062)
);
}

/* CmdPos - ns=2;i=6063 */

static UA_StatusCode function_namespace_accesstsndemo_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6063_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6063_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6063_variant_DataContents);
*variablenode_ns_2_i_6063_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6063_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6063),
UA_NODEID_NUMERIC(ns[2], 6061),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6063_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6063)
);
}

/* RemDist - ns=2;i=6066 */

static UA_StatusCode function_namespace_accesstsndemo_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6066_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6066_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6066_variant_DataContents);
*variablenode_ns_2_i_6066_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6066_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6066),
UA_NODEID_NUMERIC(ns[2], 6061),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6066_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6066)
);
}

/* CmdTorque - ns=2;i=6048 */

static UA_StatusCode function_namespace_accesstsndemo_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6048_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6048_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6048_variant_DataContents);
*variablenode_ns_2_i_6048_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6048_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdTorque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive torque setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6048),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdTorque"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6048_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6048)
);
}

/* EURange - ns=2;i=6050 */

static UA_StatusCode function_namespace_accesstsndemo_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_6050_Range_0, 1);
UA_init(variablenode_ns_2_i_6050_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_6050_Range_0->low = (UA_Double) 0;
variablenode_ns_2_i_6050_Range_0->high = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6050_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6050),
UA_NODEID_NUMERIC(ns[2], 6048),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6050)
);
}

/* EngineeringUnits - ns=2;i=6049 */

static UA_StatusCode function_namespace_accesstsndemo_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6049_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6049_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6049_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6049_EUInformation_0->unitId = (UA_Int32) 20053;
variablenode_ns_2_i_6049_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "N·m");
variablenode_ns_2_i_6049_EUInformation_0->description = UA_LOCALIZEDTEXT("", "newton metre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6049_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6049),
UA_NODEID_NUMERIC(ns[2], 6048),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6049)
);
}

/* IsRotational - ns=2;i=6053 */

static UA_StatusCode function_namespace_accesstsndemo_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6053_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6053_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6053_variant_DataContents);
*variablenode_ns_2_i_6053_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6053_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsRotational");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axis type (true in case of rotational axis, in case of linear type or other false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6053),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsRotational"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6053_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6053)
);
}

/* PosDirect - ns=2;i=6055 */

static UA_StatusCode function_namespace_accesstsndemo_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6055_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6055_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6055_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6055_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6055_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6055_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosDirect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position actual value referring to axis' direct measurement system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6055),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosDirect"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6055)
);
}

/* EngineeringUnits - ns=2;i=6058 */

static UA_StatusCode function_namespace_accesstsndemo_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6058),
UA_NODEID_NUMERIC(ns[2], 6055),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6058)
);
}

/* EURange - ns=2;i=6059 */

static UA_StatusCode function_namespace_accesstsndemo_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6059),
UA_NODEID_NUMERIC(ns[2], 6055),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6059)
);
}

/* ActPos - ns=2;i=6056 */

static UA_StatusCode function_namespace_accesstsndemo_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6056_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6056_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6056_variant_DataContents);
*variablenode_ns_2_i_6056_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6056_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6056),
UA_NODEID_NUMERIC(ns[2], 6055),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6056_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6056)
);
}

/* CmdPos - ns=2;i=6057 */

static UA_StatusCode function_namespace_accesstsndemo_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6057_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6057_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6057_variant_DataContents);
*variablenode_ns_2_i_6057_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6057_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6057),
UA_NODEID_NUMERIC(ns[2], 6055),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6057_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6057)
);
}

/* RemDist - ns=2;i=6060 */

static UA_StatusCode function_namespace_accesstsndemo_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6060_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6060_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6060_variant_DataContents);
*variablenode_ns_2_i_6060_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6060_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6060),
UA_NODEID_NUMERIC(ns[2], 6055),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6060_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6060)
);
}

/* IsVirtual - ns=2;i=6054 */

static UA_StatusCode function_namespace_accesstsndemo_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6054_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6054_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6054_variant_DataContents);
*variablenode_ns_2_i_6054_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6054_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsVirtual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Virtual axis (no hardware present; true in case of virtual axis, else fals).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6054),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsVirtual"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6054_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6054)
);
}

/* ActStatus - ns=2;i=6044 */

static UA_StatusCode function_namespace_accesstsndemo_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3004);
UA_Int32 *variablenode_ns_2_i_6044_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6044_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6044_variant_DataContents);
*variablenode_ns_2_i_6044_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6044_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual axis state.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6044),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActStatus"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6044_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6044)
);
}

/* ActTorque - ns=2;i=6045 */

static UA_StatusCode function_namespace_accesstsndemo_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6045_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6045_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6045_variant_DataContents);
*variablenode_ns_2_i_6045_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6045_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActTorque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive torque actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6045),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActTorque"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6045_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6045)
);
}

/* EngineeringUnits - ns=2;i=6046 */

static UA_StatusCode function_namespace_accesstsndemo_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6046_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6046_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6046_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6046_EUInformation_0->unitId = (UA_Int32) 20053;
variablenode_ns_2_i_6046_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "N·m");
variablenode_ns_2_i_6046_EUInformation_0->description = UA_LOCALIZEDTEXT("", "newton metre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6046_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6046),
UA_NODEID_NUMERIC(ns[2], 6045),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6046)
);
}

/* EURange - ns=2;i=6047 */

static UA_StatusCode function_namespace_accesstsndemo_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6047),
UA_NODEID_NUMERIC(ns[2], 6045),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6047)
);
}

/* IsInactive - ns=2;i=6051 */

static UA_StatusCode function_namespace_accesstsndemo_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6051_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6051_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6051_variant_DataContents);
*variablenode_ns_2_i_6051_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6051_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsInactive");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive inactive state (true in case of inactive drive, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6051),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsInactive"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6051_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6051)
);
}

/* IsReferenced - ns=2;i=6052 */

static UA_StatusCode function_namespace_accesstsndemo_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6052_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6052_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6052_variant_DataContents);
*variablenode_ns_2_i_6052_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6052_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsReferenced");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axis reference state (true in case of successfully refereneced axis, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6052),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsReferenced"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6052_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6052)
);
}

/* ActPower - ns=2;i=6041 */

static UA_StatusCode function_namespace_accesstsndemo_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6041_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6041_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6041_variant_DataContents);
*variablenode_ns_2_i_6041_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6041_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPower");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive power actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6041),
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPower"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6041_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6041)
);
}

/* EURange - ns=2;i=6043 */

static UA_StatusCode function_namespace_accesstsndemo_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6043),
UA_NODEID_NUMERIC(ns[2], 6041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6043)
);
}

/* EngineeringUnits - ns=2;i=6042 */

static UA_StatusCode function_namespace_accesstsndemo_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6042_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6042_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6042_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6042_EUInformation_0->unitId = (UA_Int32) 5723220;
variablenode_ns_2_i_6042_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "W");
variablenode_ns_2_i_6042_EUInformation_0->description = UA_LOCALIZEDTEXT("", "watt");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6042_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6042),
UA_NODEID_NUMERIC(ns[2], 6041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6042)
);
}

/* Axis_z - ns=2;i=5007 */

static UA_StatusCode function_namespace_accesstsndemo_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_z");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNC axis component.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[2], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Axis_z"),
UA_NODEID_NUMERIC(ns[1], 1004),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5007)
);
}

/* IsReferenced - ns=2;i=6085 */

static UA_StatusCode function_namespace_accesstsndemo_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6085_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6085_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6085_variant_DataContents);
*variablenode_ns_2_i_6085_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6085_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsReferenced");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axis reference state (true in case of successfully refereneced axis, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6085),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsReferenced"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6085_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6085)
);
}

/* CmdTorque - ns=2;i=6081 */

static UA_StatusCode function_namespace_accesstsndemo_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6081_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6081_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6081_variant_DataContents);
*variablenode_ns_2_i_6081_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6081_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdTorque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive torque setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6081),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdTorque"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6081_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6081)
);
}

/* EngineeringUnits - ns=2;i=6082 */

static UA_StatusCode function_namespace_accesstsndemo_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6082_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6082_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6082_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6082_EUInformation_0->unitId = (UA_Int32) 20053;
variablenode_ns_2_i_6082_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "N·m");
variablenode_ns_2_i_6082_EUInformation_0->description = UA_LOCALIZEDTEXT("", "newton metre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6082_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6082),
UA_NODEID_NUMERIC(ns[2], 6081),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6082)
);
}

/* EURange - ns=2;i=6083 */

static UA_StatusCode function_namespace_accesstsndemo_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_6083_Range_0, 1);
UA_init(variablenode_ns_2_i_6083_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_6083_Range_0->low = (UA_Double) 0;
variablenode_ns_2_i_6083_Range_0->high = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6083_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6083),
UA_NODEID_NUMERIC(ns[2], 6081),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6083)
);
}

/* PosIndirect - ns=2;i=6094 */

static UA_StatusCode function_namespace_accesstsndemo_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6094_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6094_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6094_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6094_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6094_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6094_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosIndirect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position actual value referring to axis' indirect measurement system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6094),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosIndirect"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6094)
);
}

/* RemDist - ns=2;i=6099 */

static UA_StatusCode function_namespace_accesstsndemo_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6099_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6099_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6099_variant_DataContents);
*variablenode_ns_2_i_6099_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6099_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6099),
UA_NODEID_NUMERIC(ns[2], 6094),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6099_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6099)
);
}

/* CmdPos - ns=2;i=6096 */

static UA_StatusCode function_namespace_accesstsndemo_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6096_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6096_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6096_variant_DataContents);
*variablenode_ns_2_i_6096_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6096_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6096),
UA_NODEID_NUMERIC(ns[2], 6094),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6096_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6096)
);
}

/* ActPos - ns=2;i=6095 */

static UA_StatusCode function_namespace_accesstsndemo_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6095_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6095_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6095_variant_DataContents);
*variablenode_ns_2_i_6095_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6095_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6095),
UA_NODEID_NUMERIC(ns[2], 6094),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6095_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6095)
);
}

/* EngineeringUnits - ns=2;i=6097 */

static UA_StatusCode function_namespace_accesstsndemo_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6097),
UA_NODEID_NUMERIC(ns[2], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6097)
);
}

/* EURange - ns=2;i=6098 */

static UA_StatusCode function_namespace_accesstsndemo_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6098),
UA_NODEID_NUMERIC(ns[2], 6094),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6098)
);
}

/* ActTorque - ns=2;i=6078 */

static UA_StatusCode function_namespace_accesstsndemo_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6078_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6078_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6078_variant_DataContents);
*variablenode_ns_2_i_6078_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6078_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActTorque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive torque actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6078),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActTorque"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6078_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6078)
);
}

/* EURange - ns=2;i=6080 */

static UA_StatusCode function_namespace_accesstsndemo_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6080),
UA_NODEID_NUMERIC(ns[2], 6078),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6080)
);
}

/* EngineeringUnits - ns=2;i=6079 */

static UA_StatusCode function_namespace_accesstsndemo_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6079_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6079_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6079_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6079_EUInformation_0->unitId = (UA_Int32) 20053;
variablenode_ns_2_i_6079_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "N·m");
variablenode_ns_2_i_6079_EUInformation_0->description = UA_LOCALIZEDTEXT("", "newton metre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6079_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6079),
UA_NODEID_NUMERIC(ns[2], 6078),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6079)
);
}

/* IsInactive - ns=2;i=6084 */

static UA_StatusCode function_namespace_accesstsndemo_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6084_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6084_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6084_variant_DataContents);
*variablenode_ns_2_i_6084_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6084_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsInactive");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive inactive state (true in case of inactive drive, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6084),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsInactive"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6084_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6084)
);
}

/* IsVirtual - ns=2;i=6087 */

static UA_StatusCode function_namespace_accesstsndemo_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6087_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6087_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6087_variant_DataContents);
*variablenode_ns_2_i_6087_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6087_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsVirtual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Virtual axis (no hardware present; true in case of virtual axis, else fals).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6087),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsVirtual"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6087_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6087)
);
}

/* ZeroOffset - ns=2;i=6100 */

static UA_StatusCode function_namespace_accesstsndemo_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6100_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6100_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6100_variant_DataContents);
*variablenode_ns_2_i_6100_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6100_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZeroOffset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active axis zero offset.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6100),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZeroOffset"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6100_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6100)
);
}

/* EURange - ns=2;i=6102 */

static UA_StatusCode function_namespace_accesstsndemo_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6102),
UA_NODEID_NUMERIC(ns[2], 6100),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6102)
);
}

/* EngineeringUnits - ns=2;i=6101 */

static UA_StatusCode function_namespace_accesstsndemo_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6101_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6101_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6101_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6101_EUInformation_0->unitId = (UA_Int32) 5066068;
variablenode_ns_2_i_6101_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm");
variablenode_ns_2_i_6101_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6101_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6101),
UA_NODEID_NUMERIC(ns[2], 6100),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6101)
);
}

/* IsRotational - ns=2;i=6086 */

static UA_StatusCode function_namespace_accesstsndemo_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6086_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6086_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6086_variant_DataContents);
*variablenode_ns_2_i_6086_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6086_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsRotational");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axis type (true in case of rotational axis, in case of linear type or other false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6086),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsRotational"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6086_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6086)
);
}

/* ActChannel - ns=2;i=6070 */

static UA_StatusCode function_namespace_accesstsndemo_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
UA_NodeId *variablenode_ns_2_i_6070_variant_DataContents =  UA_NodeId_new();
if (!variablenode_ns_2_i_6070_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_NodeId_init(variablenode_ns_2_i_6070_variant_DataContents);
*variablenode_ns_2_i_6070_variant_DataContents = UA_NODEID_NUMERIC(ns[0], 0);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6070_variant_DataContents, &UA_TYPES[UA_TYPES_NODEID]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActChannel");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "NodeId of the channel object (CncChannelType) that administrates this drive to expose drive’s channel affiliation.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6070),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActChannel"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_NodeId_delete(variablenode_ns_2_i_6070_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6070)
);
}

/* ActLoad - ns=2;i=6071 */

static UA_StatusCode function_namespace_accesstsndemo_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6071_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6071_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6071_variant_DataContents);
*variablenode_ns_2_i_6071_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6071_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive load actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6071),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActLoad"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6071_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6071)
);
}

/* EURange - ns=2;i=6073 */

static UA_StatusCode function_namespace_accesstsndemo_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6073),
UA_NODEID_NUMERIC(ns[2], 6071),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6073)
);
}

/* EngineeringUnits - ns=2;i=6072 */

static UA_StatusCode function_namespace_accesstsndemo_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6072_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6072_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6072_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6072_EUInformation_0->unitId = (UA_Int32) 20529;
variablenode_ns_2_i_6072_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "%");
variablenode_ns_2_i_6072_EUInformation_0->description = UA_LOCALIZEDTEXT("", "percent");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6072_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6072),
UA_NODEID_NUMERIC(ns[2], 6071),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6072)
);
}

/* ActPower - ns=2;i=6074 */

static UA_StatusCode function_namespace_accesstsndemo_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6074_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6074_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6074_variant_DataContents);
*variablenode_ns_2_i_6074_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6074_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPower");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive power actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6074),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPower"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6074_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6074)
);
}

/* EURange - ns=2;i=6076 */

static UA_StatusCode function_namespace_accesstsndemo_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6076),
UA_NODEID_NUMERIC(ns[2], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6076)
);
}

/* EngineeringUnits - ns=2;i=6075 */

static UA_StatusCode function_namespace_accesstsndemo_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6075_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6075_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6075_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6075_EUInformation_0->unitId = (UA_Int32) 5723220;
variablenode_ns_2_i_6075_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "W");
variablenode_ns_2_i_6075_EUInformation_0->description = UA_LOCALIZEDTEXT("", "watt");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6075_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6075),
UA_NODEID_NUMERIC(ns[2], 6074),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6075)
);
}

/* PosDirect - ns=2;i=6088 */

static UA_StatusCode function_namespace_accesstsndemo_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6088_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6088_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6088_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6088_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6088_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6088_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosDirect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position actual value referring to axis' direct measurement system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6088),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosDirect"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6088)
);
}

/* ActPos - ns=2;i=6089 */

static UA_StatusCode function_namespace_accesstsndemo_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6089_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6089_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6089_variant_DataContents);
*variablenode_ns_2_i_6089_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6089_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6089),
UA_NODEID_NUMERIC(ns[2], 6088),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6089_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6089)
);
}

/* CmdPos - ns=2;i=6090 */

static UA_StatusCode function_namespace_accesstsndemo_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6090_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6090_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6090_variant_DataContents);
*variablenode_ns_2_i_6090_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6090_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6090),
UA_NODEID_NUMERIC(ns[2], 6088),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6090_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6090)
);
}

/* EURange - ns=2;i=6092 */

static UA_StatusCode function_namespace_accesstsndemo_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6092),
UA_NODEID_NUMERIC(ns[2], 6088),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6092)
);
}

/* EngineeringUnits - ns=2;i=6091 */

static UA_StatusCode function_namespace_accesstsndemo_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6091),
UA_NODEID_NUMERIC(ns[2], 6088),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6091)
);
}

/* RemDist - ns=2;i=6093 */

static UA_StatusCode function_namespace_accesstsndemo_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6093_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6093_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6093_variant_DataContents);
*variablenode_ns_2_i_6093_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6093_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6093),
UA_NODEID_NUMERIC(ns[2], 6088),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6093_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6093)
);
}

/* ActStatus - ns=2;i=6077 */

static UA_StatusCode function_namespace_accesstsndemo_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3004);
UA_Int32 *variablenode_ns_2_i_6077_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6077_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6077_variant_DataContents);
*variablenode_ns_2_i_6077_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6077_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual axis state.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6077),
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActStatus"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6077_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6077)
);
}

/* Axis_x - ns=2;i=5005 */

static UA_StatusCode function_namespace_accesstsndemo_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axis_x");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNC axis component.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[2], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Axis_x"),
UA_NODEID_NUMERIC(ns[1], 1004),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5005)
);
}

/* IsInactive - ns=2;i=6018 */

static UA_StatusCode function_namespace_accesstsndemo_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6018_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6018_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6018_variant_DataContents);
*variablenode_ns_2_i_6018_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6018_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsInactive");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive inactive state (true in case of inactive drive, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6018),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsInactive"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6018_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6018)
);
}

/* IsReferenced - ns=2;i=6019 */

static UA_StatusCode function_namespace_accesstsndemo_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6019_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6019_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6019_variant_DataContents);
*variablenode_ns_2_i_6019_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6019_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsReferenced");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axis reference state (true in case of successfully refereneced axis, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6019),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsReferenced"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6019_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6019)
);
}

/* ActStatus - ns=2;i=6011 */

static UA_StatusCode function_namespace_accesstsndemo_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3004);
UA_Int32 *variablenode_ns_2_i_6011_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6011_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6011_variant_DataContents);
*variablenode_ns_2_i_6011_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6011_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual axis state.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6011),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActStatus"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6011_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6011)
);
}

/* ActTorque - ns=2;i=6012 */

static UA_StatusCode function_namespace_accesstsndemo_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6012_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6012_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6012_variant_DataContents);
*variablenode_ns_2_i_6012_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6012_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActTorque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive torque actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6012),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActTorque"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6012_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6012)
);
}

/* EngineeringUnits - ns=2;i=6013 */

static UA_StatusCode function_namespace_accesstsndemo_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6013_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6013_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6013_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6013_EUInformation_0->unitId = (UA_Int32) 20053;
variablenode_ns_2_i_6013_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "N·m");
variablenode_ns_2_i_6013_EUInformation_0->description = UA_LOCALIZEDTEXT("", "newton metre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6013_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6013),
UA_NODEID_NUMERIC(ns[2], 6012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6013)
);
}

/* EURange - ns=2;i=6014 */

static UA_StatusCode function_namespace_accesstsndemo_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6014),
UA_NODEID_NUMERIC(ns[2], 6012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6014)
);
}

/* CmdTorque - ns=2;i=6015 */

static UA_StatusCode function_namespace_accesstsndemo_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6015_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6015_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6015_variant_DataContents);
*variablenode_ns_2_i_6015_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6015_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdTorque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive torque setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6015),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdTorque"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6015_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6015)
);
}

/* EURange - ns=2;i=6017 */

static UA_StatusCode function_namespace_accesstsndemo_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_6017_Range_0, 1);
UA_init(variablenode_ns_2_i_6017_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_6017_Range_0->low = (UA_Double) 0;
variablenode_ns_2_i_6017_Range_0->high = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6017_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6017),
UA_NODEID_NUMERIC(ns[2], 6015),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6017)
);
}

/* EngineeringUnits - ns=2;i=6016 */

static UA_StatusCode function_namespace_accesstsndemo_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6016_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6016_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6016_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6016_EUInformation_0->unitId = (UA_Int32) 20053;
variablenode_ns_2_i_6016_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "N·m");
variablenode_ns_2_i_6016_EUInformation_0->description = UA_LOCALIZEDTEXT("", "newton metre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6016_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6016),
UA_NODEID_NUMERIC(ns[2], 6015),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6016)
);
}

/* PosDirect - ns=2;i=6022 */

static UA_StatusCode function_namespace_accesstsndemo_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6022_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6022_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6022_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6022_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6022_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6022_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosDirect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position actual value referring to axis' direct measurement system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6022),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosDirect"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6022)
);
}

/* ActPos - ns=2;i=6023 */

static UA_StatusCode function_namespace_accesstsndemo_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6023_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6023_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6023_variant_DataContents);
*variablenode_ns_2_i_6023_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6023_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6023),
UA_NODEID_NUMERIC(ns[2], 6022),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6023_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6023)
);
}

/* CmdPos - ns=2;i=6024 */

static UA_StatusCode function_namespace_accesstsndemo_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6024_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6024_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6024_variant_DataContents);
*variablenode_ns_2_i_6024_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6024_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6024),
UA_NODEID_NUMERIC(ns[2], 6022),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6024_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6024)
);
}

/* RemDist - ns=2;i=6027 */

static UA_StatusCode function_namespace_accesstsndemo_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6027_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6027_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6027_variant_DataContents);
*variablenode_ns_2_i_6027_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6027_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6027),
UA_NODEID_NUMERIC(ns[2], 6022),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6027_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6027)
);
}

/* EURange - ns=2;i=6026 */

static UA_StatusCode function_namespace_accesstsndemo_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6026),
UA_NODEID_NUMERIC(ns[2], 6022),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6026)
);
}

/* EngineeringUnits - ns=2;i=6025 */

static UA_StatusCode function_namespace_accesstsndemo_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6025),
UA_NODEID_NUMERIC(ns[2], 6022),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6025)
);
}

/* IsVirtual - ns=2;i=6021 */

static UA_StatusCode function_namespace_accesstsndemo_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6021_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6021_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6021_variant_DataContents);
*variablenode_ns_2_i_6021_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6021_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsVirtual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Virtual axis (no hardware present; true in case of virtual axis, else fals).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6021),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsVirtual"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6021_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6021)
);
}

/* IsRotational - ns=2;i=6020 */

static UA_StatusCode function_namespace_accesstsndemo_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6020_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6020_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6020_variant_DataContents);
*variablenode_ns_2_i_6020_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6020_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsRotational");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axis type (true in case of rotational axis, in case of linear type or other false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6020),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsRotational"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6020_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6020)
);
}

/* ActLoad - ns=2;i=6005 */

static UA_StatusCode function_namespace_accesstsndemo_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6005_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6005_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6005_variant_DataContents);
*variablenode_ns_2_i_6005_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6005_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive load actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6005),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActLoad"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6005_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6005)
);
}

/* EURange - ns=2;i=6007 */

static UA_StatusCode function_namespace_accesstsndemo_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6007),
UA_NODEID_NUMERIC(ns[2], 6005),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6007)
);
}

/* EngineeringUnits - ns=2;i=6006 */

static UA_StatusCode function_namespace_accesstsndemo_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6006_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6006_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6006_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6006_EUInformation_0->unitId = (UA_Int32) 20529;
variablenode_ns_2_i_6006_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "%");
variablenode_ns_2_i_6006_EUInformation_0->description = UA_LOCALIZEDTEXT("", "percent");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6006_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6006),
UA_NODEID_NUMERIC(ns[2], 6005),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6006)
);
}

/* ActChannel - ns=2;i=6004 */

static UA_StatusCode function_namespace_accesstsndemo_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
UA_NodeId *variablenode_ns_2_i_6004_variant_DataContents =  UA_NodeId_new();
if (!variablenode_ns_2_i_6004_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_NodeId_init(variablenode_ns_2_i_6004_variant_DataContents);
*variablenode_ns_2_i_6004_variant_DataContents = UA_NODEID_NUMERIC(ns[0], 0);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6004_variant_DataContents, &UA_TYPES[UA_TYPES_NODEID]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActChannel");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "NodeId of the channel object (CncChannelType) that administrates this drive to expose drive’s channel affiliation.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6004),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActChannel"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_NodeId_delete(variablenode_ns_2_i_6004_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6004)
);
}

/* ZeroOffset - ns=2;i=6034 */

static UA_StatusCode function_namespace_accesstsndemo_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6034_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6034_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6034_variant_DataContents);
*variablenode_ns_2_i_6034_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6034_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZeroOffset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active axis zero offset.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6034),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZeroOffset"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6034_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6034)
);
}

/* EURange - ns=2;i=6036 */

static UA_StatusCode function_namespace_accesstsndemo_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6036),
UA_NODEID_NUMERIC(ns[2], 6034),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6036)
);
}

/* EngineeringUnits - ns=2;i=6035 */

static UA_StatusCode function_namespace_accesstsndemo_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6035_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6035_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6035_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6035_EUInformation_0->unitId = (UA_Int32) 5066068;
variablenode_ns_2_i_6035_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm");
variablenode_ns_2_i_6035_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6035_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6035),
UA_NODEID_NUMERIC(ns[2], 6034),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6035)
);
}

/* PosIndirect - ns=2;i=6028 */

static UA_StatusCode function_namespace_accesstsndemo_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6028_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6028_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6028_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6028_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6028_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6028_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PosIndirect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position actual value referring to axis' indirect measurement system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6028),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PosIndirect"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6028)
);
}

/* ActPos - ns=2;i=6029 */

static UA_StatusCode function_namespace_accesstsndemo_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6029_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6029_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6029_variant_DataContents);
*variablenode_ns_2_i_6029_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6029_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[2], 6028),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6029_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6029)
);
}

/* CmdPos - ns=2;i=6030 */

static UA_StatusCode function_namespace_accesstsndemo_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6030_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6030_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6030_variant_DataContents);
*variablenode_ns_2_i_6030_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6030_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6030),
UA_NODEID_NUMERIC(ns[2], 6028),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6030_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6030)
);
}

/* RemDist - ns=2;i=6033 */

static UA_StatusCode function_namespace_accesstsndemo_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6033_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6033_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6033_variant_DataContents);
*variablenode_ns_2_i_6033_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6033_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6033),
UA_NODEID_NUMERIC(ns[2], 6028),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6033_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6033)
);
}

/* EURange - ns=2;i=6032 */

static UA_StatusCode function_namespace_accesstsndemo_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6032),
UA_NODEID_NUMERIC(ns[2], 6028),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6032)
);
}

/* EngineeringUnits - ns=2;i=6031 */

static UA_StatusCode function_namespace_accesstsndemo_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6031),
UA_NODEID_NUMERIC(ns[2], 6028),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6031)
);
}

/* ActPower - ns=2;i=6008 */

static UA_StatusCode function_namespace_accesstsndemo_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6008_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6008_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6008_variant_DataContents);
*variablenode_ns_2_i_6008_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6008_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPower");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive power actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6008),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPower"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6008_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6008)
);
}

/* EURange - ns=2;i=6010 */

static UA_StatusCode function_namespace_accesstsndemo_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6010),
UA_NODEID_NUMERIC(ns[2], 6008),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6010)
);
}

/* EngineeringUnits - ns=2;i=6009 */

static UA_StatusCode function_namespace_accesstsndemo_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6009_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6009_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6009_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6009_EUInformation_0->unitId = (UA_Int32) 5723220;
variablenode_ns_2_i_6009_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "W");
variablenode_ns_2_i_6009_EUInformation_0->description = UA_LOCALIZEDTEXT("", "watt");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6009_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6009),
UA_NODEID_NUMERIC(ns[2], 6008),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6009)
);
}

/* CncSpindleList - ns=2;i=5004 */

static UA_StatusCode function_namespace_accesstsndemo_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CncSpindleList");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "List of CNC spindle objects.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CncSpindleList"),
UA_NODEID_NUMERIC(ns[1], 1009),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5004)
);
}

/* Spindle_1 - ns=2;i=5009 */

static UA_StatusCode function_namespace_accesstsndemo_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Spindle_1");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNC spindle component.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Spindle_1"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5009)
);
}

/* BlockMode - ns=2;i=6180 */

static UA_StatusCode function_namespace_accesstsndemo_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6180_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6180_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6180_variant_DataContents);
*variablenode_ns_2_i_6180_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6180_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "BlockMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "block mode active");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6180),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BlockMode"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6180_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6180)
);
}

/* CmdFeedrate - ns=2;i=6181 */

static UA_StatusCode function_namespace_accesstsndemo_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6181_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6181_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6181_variant_DataContents);
*variablenode_ns_2_i_6181_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6181_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdFeedrate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "feedrate setpoint value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6181),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdFeedrate"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6181_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6181)
);
}

/* EURange - ns=2;i=6183 */

static UA_StatusCode function_namespace_accesstsndemo_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6183),
UA_NODEID_NUMERIC(ns[2], 6181),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6183)
);
}

/* EngineeringUnits - ns=2;i=6182 */

static UA_StatusCode function_namespace_accesstsndemo_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6182_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6182_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6182_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6182_EUInformation_0->unitId = (UA_Int32) 4732977;
variablenode_ns_2_i_6182_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm/min");
variablenode_ns_2_i_6182_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre per minute");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6182_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6182),
UA_NODEID_NUMERIC(ns[2], 6181),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6182)
);
}

/* CmdOverride - ns=2;i=6186 */

static UA_StatusCode function_namespace_accesstsndemo_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6186_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6186_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6186_variant_DataContents);
*variablenode_ns_2_i_6186_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6186_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Override setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6186),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdOverride"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6186_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6186)
);
}

/* EURange - ns=2;i=6187 */

static UA_StatusCode function_namespace_accesstsndemo_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6187),
UA_NODEID_NUMERIC(ns[2], 6186),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6187)
);
}

/* ActStatus - ns=2;i=6169 */

static UA_StatusCode function_namespace_accesstsndemo_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3005);
UA_Int32 *variablenode_ns_2_i_6169_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6169_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6169_variant_DataContents);
*variablenode_ns_2_i_6169_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6169_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Actual spindle state.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6169),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActStatus"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6169_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6169)
);
}

/* CmdGear - ns=2;i=6184 */

static UA_StatusCode function_namespace_accesstsndemo_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6184_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6184_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6184_variant_DataContents);
*variablenode_ns_2_i_6184_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6184_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdGear");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Gear stage setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6184),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdGear"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6184_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6184)
);
}

/* ActProgramName - ns=2;i=6164 */

static UA_StatusCode function_namespace_accesstsndemo_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6164_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6164_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6164_variant_DataContents);
*variablenode_ns_2_i_6164_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6164_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of active CNC program (main or subprogram).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6164),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramName"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6164_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6164)
);
}

/* ActProgStatus - ns=2;i=6165 */

static UA_StatusCode function_namespace_accesstsndemo_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3002);
UA_Int32 *variablenode_ns_2_i_6165_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6165_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6165_variant_DataContents);
*variablenode_ns_2_i_6165_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6165_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active channel program status");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6165),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramStatus"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6165_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6165)
);
}

/* CmdSpeed - ns=2;i=6188 */

static UA_StatusCode function_namespace_accesstsndemo_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6188_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6188_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6188_variant_DataContents);
*variablenode_ns_2_i_6188_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6188_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Speed setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6188),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdSpeed"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6188_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6188)
);
}

/* EURange - ns=2;i=6190 */

static UA_StatusCode function_namespace_accesstsndemo_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6190),
UA_NODEID_NUMERIC(ns[2], 6188),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6190)
);
}

/* EngineeringUnits - ns=2;i=6189 */

static UA_StatusCode function_namespace_accesstsndemo_generated_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6189_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6189_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6189_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6189_EUInformation_0->unitId = (UA_Int32) 4405556;
variablenode_ns_2_i_6189_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "min⁻¹");
variablenode_ns_2_i_6189_EUInformation_0->description = UA_LOCALIZEDTEXT("", "reciprocal minute");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6189_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6189),
UA_NODEID_NUMERIC(ns[2], 6188),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6189)
);
}

/* ActProgramBlock - ns=2;i=6160 */

static UA_StatusCode function_namespace_accesstsndemo_generated_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramBlock");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "previous, actual and subsequent CNC program lines");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6160),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramBlock"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6160)
);
}

/* ActProgramFile - ns=2;i=6161 */

static UA_StatusCode function_namespace_accesstsndemo_generated_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6161_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6161_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6161_variant_DataContents);
*variablenode_ns_2_i_6161_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6161_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramFile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Path of active CNC program file (main or subprogram).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6161),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramFile"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6161_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6161)
);
}

/* ActProgramFileOffset - ns=2;i=6162 */

static UA_StatusCode function_namespace_accesstsndemo_generated_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6162_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6162_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6162_variant_DataContents);
*variablenode_ns_2_i_6162_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6162_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramFileOffset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "File offset of active CNC program file (main or subprogram).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6162),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramFileOffset"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6162_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6162)
);
}

/* ActProgramLine - ns=2;i=6163 */

static UA_StatusCode function_namespace_accesstsndemo_generated_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6163_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6163_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6163_variant_DataContents);
*variablenode_ns_2_i_6163_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6163_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActProgramLine");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Line number of active CNC program (main or subprogram).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6163),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActProgramLine"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6163_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6163)
);
}

/* ToolId - ns=2;i=6200 */

static UA_StatusCode function_namespace_accesstsndemo_generated_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6200_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6200_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6200_variant_DataContents);
*variablenode_ns_2_i_6200_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6200_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ToolId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "active tool ID");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6200),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ToolId"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6200_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6200)
);
}

/* CmdOperationMode - ns=2;i=6185 */

static UA_StatusCode function_namespace_accesstsndemo_generated_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3006);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdOperationMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6185),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdOperationMode"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6185)
);
}

/* ActLoad - ns=2;i=6145 */

static UA_StatusCode function_namespace_accesstsndemo_generated_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6145_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6145_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6145_variant_DataContents);
*variablenode_ns_2_i_6145_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6145_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive load actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6145),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActLoad"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6145_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6145)
);
}

/* EURange - ns=2;i=6147 */

static UA_StatusCode function_namespace_accesstsndemo_generated_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6147),
UA_NODEID_NUMERIC(ns[2], 6145),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6147)
);
}

/* EngineeringUnits - ns=2;i=6146 */

static UA_StatusCode function_namespace_accesstsndemo_generated_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6146_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6146_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6146_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6146_EUInformation_0->unitId = (UA_Int32) 20529;
variablenode_ns_2_i_6146_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "%");
variablenode_ns_2_i_6146_EUInformation_0->description = UA_LOCALIZEDTEXT("", "percent");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6146_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6146),
UA_NODEID_NUMERIC(ns[2], 6145),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6146)
);
}

/* ActJogIncrement - ns=2;i=6142 */

static UA_StatusCode function_namespace_accesstsndemo_generated_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6142_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6142_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6142_variant_DataContents);
*variablenode_ns_2_i_6142_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6142_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActJogIncrement");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active JOG increment.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6142),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActJogIncrement"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6142_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6142)
);
}

/* EURange - ns=2;i=6144 */

static UA_StatusCode function_namespace_accesstsndemo_generated_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6144),
UA_NODEID_NUMERIC(ns[2], 6142),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6144)
);
}

/* EngineeringUnits - ns=2;i=6143 */

static UA_StatusCode function_namespace_accesstsndemo_generated_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6143_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6143_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6143_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6143_EUInformation_0->unitId = (UA_Int32) 5066068;
variablenode_ns_2_i_6143_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm");
variablenode_ns_2_i_6143_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6143_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6143),
UA_NODEID_NUMERIC(ns[2], 6142),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6143)
);
}

/* ActGear - ns=2;i=6140 */

static UA_StatusCode function_namespace_accesstsndemo_generated_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6140_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6140_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6140_variant_DataContents);
*variablenode_ns_2_i_6140_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6140_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActGear");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Gear stage actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6140),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActGear"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6140_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6140)
);
}

/* ActGFunctions - ns=2;i=6141 */

static UA_StatusCode function_namespace_accesstsndemo_generated_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "ActGFunctions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active G function.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6141),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActGFunctions"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6141)
);
}

/* ActMainProgramFile - ns=2;i=6148 */

static UA_StatusCode function_namespace_accesstsndemo_generated_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6148_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6148_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6148_variant_DataContents);
*variablenode_ns_2_i_6148_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6148_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActMainProgramFile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Path of active CNC main program.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6148),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActMainProgramFile"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6148_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6148)
);
}

/* ActMainProgramFileOffset - ns=2;i=6149 */

static UA_StatusCode function_namespace_accesstsndemo_generated_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6149_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6149_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6149_variant_DataContents);
*variablenode_ns_2_i_6149_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6149_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActMainProgramFileOffset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "File offset of active CNC main program file.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6149),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActMainProgramFileOffset"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6149_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6149)
);
}

/* ActSpeed - ns=2;i=6166 */

static UA_StatusCode function_namespace_accesstsndemo_generated_251_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6166_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6166_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6166_variant_DataContents);
*variablenode_ns_2_i_6166_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6166_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Speed actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6166),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActSpeed"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6166_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6166)
);
}

/* EngineeringUnits - ns=2;i=6167 */

static UA_StatusCode function_namespace_accesstsndemo_generated_252_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6167_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6167_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6167_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6167_EUInformation_0->unitId = (UA_Int32) 4405556;
variablenode_ns_2_i_6167_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "min⁻¹");
variablenode_ns_2_i_6167_EUInformation_0->description = UA_LOCALIZEDTEXT("", "reciprocal minute");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6167_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6167),
UA_NODEID_NUMERIC(ns[2], 6166),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6167)
);
}

/* EURange - ns=2;i=6168 */

static UA_StatusCode function_namespace_accesstsndemo_generated_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6168),
UA_NODEID_NUMERIC(ns[2], 6166),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6168)
);
}

/* DryRunFeed - ns=2;i=6194 */

static UA_StatusCode function_namespace_accesstsndemo_generated_254_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6194_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6194_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6194_variant_DataContents);
*variablenode_ns_2_i_6194_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6194_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "DryRunFeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "test feedrate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6194),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DryRunFeed"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6194_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6194)
);
}

/* EngineeringUnits - ns=2;i=6195 */

static UA_StatusCode function_namespace_accesstsndemo_generated_255_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6195_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6195_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6195_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6195_EUInformation_0->unitId = (UA_Int32) 4732977;
variablenode_ns_2_i_6195_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm/min");
variablenode_ns_2_i_6195_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre per minute");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6195_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6195),
UA_NODEID_NUMERIC(ns[2], 6194),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6195)
);
}

/* EURange - ns=2;i=6196 */

static UA_StatusCode function_namespace_accesstsndemo_generated_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6196),
UA_NODEID_NUMERIC(ns[2], 6194),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6196)
);
}

/* FeedHold - ns=2;i=6197 */

static UA_StatusCode function_namespace_accesstsndemo_generated_257_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6197_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6197_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6197_variant_DataContents);
*variablenode_ns_2_i_6197_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6197_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeedHold");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "feed hold active");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6197),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FeedHold"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6197_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6197)
);
}

/* ActTurnDirection - ns=2;i=6173 */

static UA_StatusCode function_namespace_accesstsndemo_generated_258_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3001);
UA_Int32 *variablenode_ns_2_i_6173_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_2_i_6173_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_2_i_6173_variant_DataContents);
*variablenode_ns_2_i_6173_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6173_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActTurnDirection");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Turn direction actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6173),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActTurnDirection"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_2_i_6173_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6173)
);
}

/* IsInactive - ns=2;i=6198 */

static UA_StatusCode function_namespace_accesstsndemo_generated_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6198_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6198_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6198_variant_DataContents);
*variablenode_ns_2_i_6198_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6198_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsInactive");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive inactive state (true in case of inactive drive, else false).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6198),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsInactive"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6198_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6198)
);
}

/* ActTorque - ns=2;i=6170 */

static UA_StatusCode function_namespace_accesstsndemo_generated_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6170_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6170_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6170_variant_DataContents);
*variablenode_ns_2_i_6170_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6170_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActTorque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive torque actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6170),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActTorque"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6170_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6170)
);
}

/* EURange - ns=2;i=6172 */

static UA_StatusCode function_namespace_accesstsndemo_generated_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6172),
UA_NODEID_NUMERIC(ns[2], 6170),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6172)
);
}

/* EngineeringUnits - ns=2;i=6171 */

static UA_StatusCode function_namespace_accesstsndemo_generated_262_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6171_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6171_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6171_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6171_EUInformation_0->unitId = (UA_Int32) 20053;
variablenode_ns_2_i_6171_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "N·m");
variablenode_ns_2_i_6171_EUInformation_0->description = UA_LOCALIZEDTEXT("", "newton metre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6171_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6171),
UA_NODEID_NUMERIC(ns[2], 6170),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6171)
);
}

/* AnglePos - ns=2;i=6174 */

static UA_StatusCode function_namespace_accesstsndemo_generated_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3007);

UA_STACKARRAY(UA_CncPositionDataType, variablenode_ns_2_i_6174_CncPositionDataType_0, 1);
UA_init(variablenode_ns_2_i_6174_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
variablenode_ns_2_i_6174_CncPositionDataType_0->actPos = (UA_Double) 0;
variablenode_ns_2_i_6174_CncPositionDataType_0->cmdPos = (UA_Double) 0;
variablenode_ns_2_i_6174_CncPositionDataType_0->remDist = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6174_CncPositionDataType_0, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AnglePos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Spindle angular position values in case of interpolated (position controlled) spindle movement. Returns zeros in case of regular spindle operation (velocity controlled).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6174),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AnglePos"),
UA_NODEID_NUMERIC(ns[1], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6174)
);
}

/* EURange - ns=2;i=6178 */

static UA_StatusCode function_namespace_accesstsndemo_generated_264_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6178),
UA_NODEID_NUMERIC(ns[2], 6174),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6178)
);
}

/* EngineeringUnits - ns=2;i=6177 */

static UA_StatusCode function_namespace_accesstsndemo_generated_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6177),
UA_NODEID_NUMERIC(ns[2], 6174),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6177)
);
}

/* CmdPos - ns=2;i=6176 */

static UA_StatusCode function_namespace_accesstsndemo_generated_266_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6176_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6176_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6176_variant_DataContents);
*variablenode_ns_2_i_6176_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6176_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6176),
UA_NODEID_NUMERIC(ns[2], 6174),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6176_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6176)
);
}

/* ActPos - ns=2;i=6175 */

static UA_StatusCode function_namespace_accesstsndemo_generated_267_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6175_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6175_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6175_variant_DataContents);
*variablenode_ns_2_i_6175_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6175_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Position current value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6175),
UA_NODEID_NUMERIC(ns[2], 6174),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPos"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6175_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6175)
);
}

/* RemDist - ns=2;i=6179 */

static UA_StatusCode function_namespace_accesstsndemo_generated_268_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6179_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6179_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6179_variant_DataContents);
*variablenode_ns_2_i_6179_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6179_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RemDist");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Remaining distance to go.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6179),
UA_NODEID_NUMERIC(ns[2], 6174),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RemDist"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6179_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_268_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6179)
);
}

/* IsVirtual - ns=2;i=6199 */

static UA_StatusCode function_namespace_accesstsndemo_generated_269_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6199_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6199_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6199_variant_DataContents);
*variablenode_ns_2_i_6199_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6199_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsVirtual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Virtual axis (no hardware present; true in case of virtual axis, else fals).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6199),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IsVirtual"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6199_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_269_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6199)
);
}

/* ActOverride - ns=2;i=6155 */

static UA_StatusCode function_namespace_accesstsndemo_generated_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6155_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6155_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6155_variant_DataContents);
*variablenode_ns_2_i_6155_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6155_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Override actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6155),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActOverride"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6155_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6155)
);
}

/* EURange - ns=2;i=6156 */

static UA_StatusCode function_namespace_accesstsndemo_generated_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6156),
UA_NODEID_NUMERIC(ns[2], 6155),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6156)
);
}

/* ActOperationMode - ns=2;i=6154 */

static UA_StatusCode function_namespace_accesstsndemo_generated_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 3006);
attr.displayName = UA_LOCALIZEDTEXT("", "ActOperationMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6154),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActOperationMode"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6154)
);
}

/* ActPower - ns=2;i=6157 */

static UA_StatusCode function_namespace_accesstsndemo_generated_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6157_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6157_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6157_variant_DataContents);
*variablenode_ns_2_i_6157_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6157_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActPower");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive power actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6157),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActPower"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6157_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6157)
);
}

/* EURange - ns=2;i=6159 */

static UA_StatusCode function_namespace_accesstsndemo_generated_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6159),
UA_NODEID_NUMERIC(ns[2], 6157),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6159)
);
}

/* EngineeringUnits - ns=2;i=6158 */

static UA_StatusCode function_namespace_accesstsndemo_generated_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6158_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6158_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6158_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6158_EUInformation_0->unitId = (UA_Int32) 5723220;
variablenode_ns_2_i_6158_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "W");
variablenode_ns_2_i_6158_EUInformation_0->description = UA_LOCALIZEDTEXT("", "watt");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6158_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6158),
UA_NODEID_NUMERIC(ns[2], 6157),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6158)
);
}

/* ActMainProgramName - ns=2;i=6151 */

static UA_StatusCode function_namespace_accesstsndemo_generated_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6151_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6151_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6151_variant_DataContents);
*variablenode_ns_2_i_6151_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6151_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActMainProgramName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of active CNC main program.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6151),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActMainProgramName"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6151_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6151)
);
}

/* ActMainProgramLine - ns=2;i=6150 */

static UA_StatusCode function_namespace_accesstsndemo_generated_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6150_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6150_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6150_variant_DataContents);
*variablenode_ns_2_i_6150_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6150_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActMainProgramLine");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Line number of active CNC main program.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6150),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActMainProgramLine"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6150_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6150)
);
}

/* ActModalOffsetFunction - ns=2;i=6153 */

static UA_StatusCode function_namespace_accesstsndemo_generated_278_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_2_i_6153_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_2_i_6153_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_2_i_6153_variant_DataContents);
*variablenode_ns_2_i_6153_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6153_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActModalOffsetFunction");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "active zero offset function");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6153),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActModalOffsetFunction"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_2_i_6153_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6153)
);
}

/* ActMFunctions - ns=2;i=6152 */

static UA_StatusCode function_namespace_accesstsndemo_generated_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "ActMFunctions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Active M function.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6152),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActMFunctions"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6152)
);
}

/* ActFeedrate - ns=2;i=6137 */

static UA_StatusCode function_namespace_accesstsndemo_generated_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6137_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6137_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6137_variant_DataContents);
*variablenode_ns_2_i_6137_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6137_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActFeedrate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Feedrate actual value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6137),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActFeedrate"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6137_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6137)
);
}

/* EURange - ns=2;i=6139 */

static UA_StatusCode function_namespace_accesstsndemo_generated_281_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6139),
UA_NODEID_NUMERIC(ns[2], 6137),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6139)
);
}

/* EngineeringUnits - ns=2;i=6138 */

static UA_StatusCode function_namespace_accesstsndemo_generated_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6138_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6138_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6138_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6138_EUInformation_0->unitId = (UA_Int32) 4732977;
variablenode_ns_2_i_6138_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "mm/min");
variablenode_ns_2_i_6138_EUInformation_0->description = UA_LOCALIZEDTEXT("", "millimetre per minute");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6138_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6138),
UA_NODEID_NUMERIC(ns[2], 6137),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6138)
);
}

/* ActChannel - ns=2;i=6136 */

static UA_StatusCode function_namespace_accesstsndemo_generated_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
UA_NodeId *variablenode_ns_2_i_6136_variant_DataContents =  UA_NodeId_new();
if (!variablenode_ns_2_i_6136_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_NodeId_init(variablenode_ns_2_i_6136_variant_DataContents);
*variablenode_ns_2_i_6136_variant_DataContents = UA_NODEID_NUMERIC(ns[0], 0);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6136_variant_DataContents, &UA_TYPES[UA_TYPES_NODEID]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActChannel");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "NodeId of the channel object (CncChannelType) that administrates this drive to expose drive’s channel affiliation.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6136),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActChannel"),
UA_NODEID_NUMERIC(ns[0], 2365),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_NodeId_delete(variablenode_ns_2_i_6136_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6136)
);
}

/* CmdTorque - ns=2;i=6191 */

static UA_StatusCode function_namespace_accesstsndemo_generated_284_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
UA_Double *variablenode_ns_2_i_6191_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_2_i_6191_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_2_i_6191_variant_DataContents);
*variablenode_ns_2_i_6191_variant_DataContents = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6191_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CmdTorque");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Drive torque setpoint value.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6191),
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CmdTorque"),
UA_NODEID_NUMERIC(ns[0], 2368),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_2_i_6191_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6191)
);
}

/* EURange - ns=2;i=6193 */

static UA_StatusCode function_namespace_accesstsndemo_generated_285_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);

UA_STACKARRAY(UA_Range, variablenode_ns_2_i_6193_Range_0, 1);
UA_init(variablenode_ns_2_i_6193_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
variablenode_ns_2_i_6193_Range_0->low = (UA_Double) 0;
variablenode_ns_2_i_6193_Range_0->high = (UA_Double) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6193_Range_0, &UA_TYPES[UA_TYPES_RANGE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6193),
UA_NODEID_NUMERIC(ns[2], 6191),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6193)
);
}

/* EngineeringUnits - ns=2;i=6192 */

static UA_StatusCode function_namespace_accesstsndemo_generated_286_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);

UA_STACKARRAY(UA_EUInformation, variablenode_ns_2_i_6192_EUInformation_0, 1);
UA_init(variablenode_ns_2_i_6192_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
variablenode_ns_2_i_6192_EUInformation_0->namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
variablenode_ns_2_i_6192_EUInformation_0->unitId = (UA_Int32) 20053;
variablenode_ns_2_i_6192_EUInformation_0->displayName = UA_LOCALIZEDTEXT("", "N·m");
variablenode_ns_2_i_6192_EUInformation_0->description = UA_LOCALIZEDTEXT("", "newton metre");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6192_EUInformation_0, &UA_TYPES[UA_TYPES_EUINFORMATION]);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6192),
UA_NODEID_NUMERIC(ns[2], 6191),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6192)
);
}

/* VendorName - ns=2;i=6001 */

static UA_StatusCode function_namespace_accesstsndemo_generated_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6001_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6001_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6001_variant_DataContents);
*variablenode_ns_2_i_6001_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6001_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "VendorName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of CNC system vendor. Format and content may be chosen by vendor.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6001),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "VendorName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6001_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6001)
);
}

/* Version - ns=2;i=6003 */

static UA_StatusCode function_namespace_accesstsndemo_generated_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6003_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6003_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6003_variant_DataContents);
*variablenode_ns_2_i_6003_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6003_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Version of CNC interface - corresponds to version of OPC UA companion standard.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6003),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6003_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6003)
);
}

/* VendorRevision - ns=2;i=6002 */

static UA_StatusCode function_namespace_accesstsndemo_generated_289_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6002_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6002_variant_DataContents);
*variablenode_ns_2_i_6002_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6002_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "VendorRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Vendor revision of CNC interface. Format and content may be chosen by vendor.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6002),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "VendorRevision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6002_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_accesstsndemo_generated_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6002)
);
}

UA_StatusCode namespace_accesstsndemo_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[3];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/CNC");
ns[2] = UA_Server_addNamespace(server, "http://accesstsn.com/demo/");
bool dummy = (
!(retVal = function_namespace_accesstsndemo_generated_0_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_1_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_2_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_3_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_4_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_5_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_6_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_7_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_8_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_9_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_10_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_11_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_12_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_13_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_14_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_15_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_16_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_17_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_18_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_19_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_20_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_21_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_22_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_23_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_24_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_25_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_26_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_27_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_28_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_29_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_30_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_31_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_32_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_33_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_34_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_35_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_36_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_37_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_38_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_39_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_40_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_41_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_42_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_43_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_44_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_45_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_46_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_47_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_48_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_49_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_50_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_51_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_52_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_53_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_54_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_55_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_56_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_57_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_58_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_59_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_60_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_61_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_62_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_63_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_64_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_65_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_66_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_67_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_68_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_69_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_70_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_71_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_72_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_73_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_74_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_75_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_76_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_77_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_78_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_79_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_80_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_81_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_82_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_83_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_84_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_85_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_86_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_87_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_88_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_89_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_90_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_91_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_92_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_93_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_94_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_95_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_96_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_97_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_98_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_99_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_100_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_101_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_102_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_103_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_104_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_105_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_106_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_107_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_108_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_109_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_110_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_111_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_112_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_113_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_114_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_115_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_116_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_117_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_118_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_119_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_120_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_121_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_122_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_123_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_124_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_125_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_126_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_127_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_128_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_129_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_130_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_131_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_132_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_133_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_134_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_135_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_136_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_137_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_138_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_139_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_140_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_141_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_142_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_143_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_144_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_145_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_146_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_147_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_148_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_149_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_150_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_151_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_152_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_153_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_154_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_155_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_156_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_157_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_158_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_159_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_160_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_161_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_162_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_163_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_164_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_165_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_166_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_167_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_168_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_169_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_170_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_171_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_172_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_173_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_174_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_175_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_176_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_177_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_178_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_179_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_180_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_181_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_182_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_183_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_184_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_185_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_186_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_187_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_188_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_189_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_190_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_191_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_192_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_193_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_194_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_195_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_196_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_197_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_198_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_199_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_200_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_201_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_202_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_203_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_204_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_205_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_206_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_207_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_208_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_209_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_210_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_211_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_212_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_213_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_214_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_215_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_216_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_217_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_218_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_219_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_220_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_221_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_222_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_223_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_224_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_225_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_226_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_227_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_228_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_229_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_230_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_231_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_232_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_233_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_234_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_235_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_236_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_237_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_238_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_239_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_240_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_241_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_242_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_243_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_244_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_245_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_246_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_247_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_248_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_249_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_250_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_251_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_252_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_253_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_254_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_255_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_256_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_257_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_258_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_259_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_260_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_261_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_262_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_263_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_264_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_265_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_266_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_267_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_268_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_269_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_270_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_271_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_272_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_273_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_274_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_275_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_276_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_277_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_278_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_279_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_280_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_281_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_282_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_283_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_284_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_285_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_286_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_287_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_288_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_289_begin(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_289_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_288_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_287_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_286_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_285_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_284_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_283_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_282_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_281_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_280_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_279_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_278_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_277_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_276_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_275_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_274_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_273_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_272_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_271_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_270_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_269_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_268_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_267_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_266_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_265_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_264_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_263_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_262_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_261_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_260_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_259_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_258_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_257_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_256_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_255_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_254_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_253_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_252_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_251_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_250_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_249_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_248_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_247_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_246_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_245_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_244_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_243_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_242_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_241_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_240_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_239_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_238_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_237_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_236_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_235_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_234_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_233_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_232_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_231_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_230_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_229_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_228_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_227_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_226_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_225_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_224_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_223_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_222_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_221_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_220_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_219_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_218_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_217_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_216_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_215_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_214_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_213_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_212_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_211_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_210_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_209_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_208_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_207_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_206_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_205_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_204_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_203_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_202_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_201_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_200_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_199_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_198_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_197_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_196_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_195_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_194_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_193_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_192_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_191_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_190_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_189_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_188_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_187_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_186_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_185_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_184_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_183_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_182_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_181_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_180_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_179_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_178_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_177_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_176_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_175_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_174_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_173_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_172_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_171_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_170_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_169_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_168_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_167_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_166_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_165_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_164_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_163_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_162_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_161_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_160_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_159_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_158_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_157_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_156_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_155_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_154_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_153_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_152_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_151_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_150_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_149_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_148_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_147_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_146_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_145_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_144_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_143_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_142_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_141_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_140_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_139_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_138_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_137_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_136_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_135_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_134_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_133_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_132_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_131_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_130_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_129_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_128_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_127_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_126_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_125_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_124_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_123_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_122_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_121_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_120_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_119_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_118_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_117_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_116_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_115_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_114_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_113_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_112_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_111_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_110_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_109_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_108_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_107_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_106_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_105_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_104_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_103_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_102_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_101_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_100_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_99_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_98_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_97_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_96_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_95_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_94_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_93_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_92_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_91_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_90_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_89_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_88_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_87_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_86_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_85_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_84_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_83_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_82_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_81_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_80_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_79_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_78_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_77_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_76_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_75_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_74_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_73_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_72_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_71_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_70_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_69_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_68_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_67_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_66_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_65_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_64_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_63_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_62_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_61_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_60_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_59_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_58_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_57_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_56_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_55_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_54_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_53_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_52_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_51_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_50_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_49_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_48_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_47_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_46_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_45_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_44_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_43_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_42_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_41_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_40_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_39_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_38_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_37_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_36_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_35_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_34_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_33_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_32_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_31_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_30_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_29_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_28_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_27_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_26_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_25_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_24_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_23_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_22_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_21_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_20_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_19_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_18_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_17_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_16_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_15_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_14_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_13_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_12_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_11_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_10_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_9_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_8_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_7_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_6_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_5_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_4_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_3_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_2_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_1_finish(server, ns))
&& !(retVal = function_namespace_accesstsndemo_generated_0_finish(server, ns))
); (void)(dummy);
return retVal;
}
