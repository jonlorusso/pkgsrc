# $NetBSD: Makefile,v 1.16 2015/09/13 14:37:10 taca Exp $

DISTNAME=	gsl-1.16.0.6
CATEGORIES=	math

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://github.com/SciRuby/rb-gsl
COMMENT=	Ruby interface to GNU Scientific Library
LICENSE=	gnu-gpl-v2 # OR later

DEPENDS+=	${RUBY_PKGPREFIX}-narray>=0.5.9:../../math/ruby-narray

USE_GCC_RUNTIME=	yes

.include "../../lang/ruby/gem.mk"
.include "../../math/gsl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
