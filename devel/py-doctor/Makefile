# $NetBSD: Makefile,v 1.5 2015/12/05 21:25:36 adam Exp $

DISTNAME=	pydoctor-0.5
PKGNAME=	${DISTNAME:S/py/${PYPKGPREFIX}-/}
CATEGORIES=	devel
MASTER_SITES=	https://pypi.python.org/packages/source/p/pydoctor/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://pypi.python.org/pypi/pydoctor/
COMMENT=	API doc generator
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-nevow>=0.9.18:../../www/py-nevow

USE_LANGUAGES=	# none

PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 # py-twisted, py-xml via py-nevow

.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
