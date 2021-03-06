$NetBSD: patch-ext_pcre_pcrelib_config.h,v 1.1 2016/01/21 21:47:24 jklos Exp $

--- ext/pcre/pcrelib/config.h.orig	2016-01-06 10:05:25.000000000 +0000
+++ ext/pcre/pcrelib/config.h
@@ -322,7 +322,20 @@ sure both macros are undefined; an emula
 /* #undef STDC_HEADERS */
 
 /* Define to any value to enable support for Just-In-Time compiling. */
-#define SUPPORT_JIT
+#if defined(__i386__) || defined(__i386) \
+|| defined(__x86_64__) \
+|| defined(__arm__) || defined(__ARM__) \
+|| defined (__aarch64__) \
+|| defined(__ppc64__) || defined(__powerpc64__) || defined(_ARCH_PPC64) \
+|| (defined(_POWER) && defined(__64BIT__)) \
+|| defined(__ppc__) || defined(__powerpc__) || defined(_ARCH_PPC) \
+|| defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_POWER) \
+|| (defined(__mips__) && !defined(_LP64)) \
+|| defined(__mips64) \
+|| defined(__sparc__) || defined(__sparc) \
+|| defined(__tilegx__)
+ #define SUPPORT_JIT
+#endif
 
 /* Define to any value to allow pcregrep to be linked with libbz2, so that it
    is able to handle .bz2 files. */
