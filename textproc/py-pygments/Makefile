# $NetBSD: Makefile,v 1.22 2016/01/17 16:03:13 wiz Exp $

DISTNAME=	Pygments-2.0.2
PKGREVISION=	1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:tl}
CATEGORIES=	textproc python
MASTER_SITES=	http://pypi.python.org/packages/source/P/Pygments/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://pygments.org/
COMMENT=	Python syntax highlighter
LICENSE=	2-clause-bsd

# test dependencies
BUILD_DEPENDS+=	${PYPKGPREFIX}-nose-[0-9]*:../../devel/py-nose
# can't depend on sphinx since sphinx depends on pygments
#BUILD_DEPENDS+=	${PYPKGPREFIX}-sphinx-[0-9]*:../../textproc/py-sphinx

USE_LANGUAGES=		# none
PLIST_SUBST+=		PYVERSSUFFIX=${PYVERSSUFFIX}
FILES_SUBST+=		PYVERSSUFFIX=${PYVERSSUFFIX}

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/pygmentize ${DESTDIR}${PREFIX}/bin/pygmentize${PYVERSSUFFIX}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
