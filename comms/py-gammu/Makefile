# $NetBSD: Makefile,v 1.10 2015/12/05 21:25:31 adam Exp $

DISTNAME=	python-gammu-2.3
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/python-//}
PKGREVISION=	1
MASTER_SITES=	http://dl.cihar.com/python-gammu/
CATEGORIES=	comms

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://wammu.eu/gammu/
COMMENT=	Python bindings for gammu
LICENSE=	gnu-gpl-v2

USE_TOOLS+=	pkg-config

# UnicodeDecodeError: 'ascii' codec can't decode byte 0xc4 in position 1648: ordinal not in range(128)
PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35

.include "../../lang/python/egg.mk"
.include "../../comms/gammu/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
