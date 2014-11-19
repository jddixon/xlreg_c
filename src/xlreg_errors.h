/* xlreg_c/src/xlreg_errors.h */

#ifndef XLREG_ERRORS_H
#define XLREG_ERRORS_H

#define BAD_ATTRS_LINE = -1
#define BAD_VERSION = -2
#define CANT_FIND_CLUSTER_BY_ID = -3
#define CANT_FIND_CLUSTER_BY_NAME = -4
#define CLUSTER_MEMBER_ID_IN_USE = -5
#define CLUSTER_MEMBERS_MUST_HAVE_END_POINT = -6
#define CLUSTER_MEMBER_NAME_IN_USE = -7
#define CLUSTER_MUST_HAVE_MEMBER = -8
#define CLUSTER_MUST_HAVE_TWO = -9
#define ID_ALREADY_IN_USE = -10
#define ILL_FORMED_CLUSTER = -11
#define ILL_FORMED_CLUSTER_MEMBER = -12
#define ILL_FORMED_REG_CRED = -13
#define MEMBER_MUST_HAVE_END_POINT = -14
#define MISSING_CLOSING_BRACE = -15
#define MISSING_CLUSTER_NAME_OR_ID = -16
#define MISSING_END_POINTS_SECTION = -17
#define MISSING_MEMBERS_LIST = -18
#define MISSING_NODE = -19
#define MISSING_PRIVATE_KEY = -20
#define MISSING_REG_NODE_LINE = -21
#define MISSING_SERVER_INFO = -22
#define NAME_ALREADY_IN_USE = -23
#define NIL_CLUSTER = -24
#define NIL_CLUSTER_MEMBER = -25
#define NIL_NODE = -26
#define NIL_PRIVATE_KEY = -27
#define NIL_REGISTRY = -28
#define NIL_REG_NODE = -29
#define NIL_TOKEN = -30
#define RCVD_INVALID_MSG_FOR_STATE = -31
#define TAG_OUT_OF_RANGE = -32
#define UNEXPECTED_MSG_TYPE = -33
#define WRONG_NUMBER_OF_BYTES_IN_ATTRS = -34

char *XLREG_ERRORS[] = {
	"badly formed attrs line",
	"badly formated VERSION",
	"cannot find cluster with this ID",
	"cannot find cluster with this name",
	"cluster member id already in use",
	"cluster members must have at least one endPoint",
	"cluster member name already in use",
	"cluster must have a member!",
	"cluster must have at least two members",
	"ID already in use",
	"ill-formed cluster serialization",
	"ill-formed cluster member serialization",
	"ill-formed regCred serialization",
	"member must have at least one endPoint",
	"missing closing brace",
	"missing cluster name or ID",
	"missing endPoints section",
	"missing members list",
	"missing node parameter",
	"missing private key line",
	"missing regNode line",
	"missing server info",
	"name already in use",
	"nil cluster argument",
	"nil cluster member argument",
	"nil node argument",
	"nil private key argument",
	"nil registry argument",
	"nil RegNode argument",
	"nil XLRegMsg_Token argument",
	"invalid msg type for current state",
	"message tag out of range",
	"unexpected message type",
	"wrong number of bytes in attrs",
};

#endif /* XLREG_ERRORS_H */
