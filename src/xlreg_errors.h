/* xlreg_c/src/xlreg_errors.h */

#ifndef XLREG_ERRORS_H
#define XLREG_ERRORS_H

#define BAD_ATTRS_LINE = -1
#define BAD_VERSION = -2
#define CANT_FIND_CLUSTER_BY_ID = -3
#define CANT_FIND_CLUSTER_BY_NAME = -4
#define CLIENT_MUST_HAVE_END_POINT = -5
#define CLUSTER_MEMBERS_MUST_HAVE_END_POINT = -6
#define CLUSTER_MUST_HAVE_MEMBER = -7
#define CLUSTER_MUST_HAVE_TWO = -8
#define ID_ALREADY_IN_USE = -9
#define ILL_FORMED_CLUSTER = -10
#define ILL_FORMED_CLUSTER_MEMBER = -11
#define ILL_FORMED_REG_CRED = -12
#define MISSING_CLOSING_BRACE = -13
#define MISSING_CLUSTER_NAME_OR_ID = -14
#define MISSING_END_POINTS_SECTION = -15
#define MISSING_MEMBERS_LIST = -16
#define MISSING_PRIVATE_KEY = -17
#define MISSING_REG_NODE_LINE = -18
#define MISSING_SERVER_INFO = -19
#define NAME_ALREADY_IN_USE = -20
#define NIL_CLUSTER = -21
#define NIL_NODE = -22
#define NIL_PRIVATE_KEY = -23
#define NIL_REGISTRY = -24
#define NIL_REG_NODE = -25
#define NIL_TOKEN = -26
#define NO_NODE_NO_KEYS = -27
#define RCVD_INVALID_MSG_FOR_STATE = -28
#define TAG_OUT_OF_RANGE = -29
#define UNEXPECTED_MSG_TYPE = -30
#define UNKNOWN_CLIENT = -31
#define WRONG_NUMBER_OF_BYTES_IN_ATTRS = -32

char *XLREG_ERRORS[] = {
	"badly formed attrs line",
	"badly formated VERSION",
	"cannot find cluster with this ID",
	"cannot find cluster with this name",
	"client must have at least one endPoint",
	"cluster members must have at least one endPoint",
	"cluster must have a member!",
	"cluster must have at least two members",
	"ID already in use",
	"ill-formed cluster serialization",
	"ill-formed cluster member serialization",
	"ill-formed regCred serialization",
	"missing closing brace",
	"missing cluster name or ID",
	"missing endPoints section",
	"missing members list",
	"missing private key line",
	"missing regNode line",
	"missing server info",
	"name already in use",
	"nil cluster argument",
	"nil node argument",
	"nil private key argument",
	"nil registry argument",
	"nil RegNode argument",
	"nil XLRegMsg_Token argument",
	"no node and no keys to build one",
	"invalid msg type for current state",
	"message tag of of range",
	"unexpected message type",
	"client unknown, not in registry",
	"wrong number of bytes in attrs",
};

#endif /* XLREG_ERRORS_H */
