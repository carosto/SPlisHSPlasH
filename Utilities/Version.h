#ifndef __Version_h__
#define __Version_h__

#define STRINGIZE_HELPER(x) #x
#define STRINGIZE(x) STRINGIZE_HELPER(x)
#define WARNING(desc) message(__FILE__ "(" STRINGIZE(__LINE__) ") : Warning: " #desc)

#define GIT_SHA1 "4b3b11a8e705cf06a297650939ff2e5c7ab886a5"
#define GIT_REFSPEC "refs/heads/master"
#define GIT_LOCAL_STATUS "DIRTY"

#define SPLISHSPLASH_VERSION "2.12.2"

#ifdef DL_OUTPUT
#pragma WARNING(Local changes not committed.)
#endif

#endif
