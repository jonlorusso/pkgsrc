# $NetBSD: Makefile,v 1.8 2015/02/16 10:15:46 jperkin Exp $

PKGNAME=	suse_openssl-${SUSE_VERSION}
PKGREVISION=	4
CATEGORIES=	emulators
RPMUPDPKGS+=	libopenssl1_0_0-1.0.0k-34.20.1.${SUSE_ARCH}

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Linux compatibility package for OpenSSL

EMUL_MODULES.linux=	base

.include "../../emulators/suse121_linux/Makefile.common"
.include "../../mk/bsd.pkg.mk"
