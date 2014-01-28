/* xlreg_c/src/xlreg_errors.h */

#ifndef XLREG_ERRORS_H
#define XLREG_ERRORS_H

#define BAD_ATTRS_LINE = 0
#define BAD_VERSION = 1
#define CANT_FIND_CLUSTER_BY_ID = 2
#define CANT_FIND_CLUSTER_BY_NAME = 3
#define CLIENT_MUST_HAVE_END_POINT = 4
#define CLUSTER_MEMBERS_MUST_HAVE_END_POINT = 5
#define CLUSTER_MUST_HAVE_MEMBER = 6
#define CLUSTER_MUST_HAVE_TWO = 7
#define ID_ALREADY_IN_USE = 8
#define ILL_FORMED_CLUSTER = 9
#define ILL_FORMED_CLUSTER_MEMBER = 10
#define ILL_FORMED_REG_CRED = 11
#define MISSING_CLOSING_BRACE = 12
#define MISSING_CLUSTER_NAME_OR_ID = 13
#define MISSING_END_POINTS_SECTION = 14
#define MISSING_MEMBERS_LIST = 15
#define MISSING_PRIVATE_KEY = 16
#define MISSING_REG_NODE_LINE = 17
#define MISSING_SERVER_INFO = 18
#define NAME_ALREADY_IN_USE = 19
#define NIL_CLUSTER = 20
#define NIL_NODE = 21
#define NIL_PRIVATE_KEY = 22
#define NIL_REGISTRY = 23
#define NIL_REG_NODE = 24
#define NIL_TOKEN = 25
#define NO_NODE_NO_KEYS = 26
#define RCVD_INVALID_MSG_FOR_STATE = 27
#define TAG_OUT_OF_RANGE = 28
#define UNEXPECTED_MSG_TYPE = 29
#define UNKNOWN_CLIENT = 30
#define WRONG_NUMBER_OF_BYTES_IN_ATTRS = 31

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
