# $NetBSD: Makefile,v 1.1 2016/01/16 08:48:23 wen Exp $
#

DISTNAME=	XML-Compile-Tester-0.90
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=XML/}

MAINTAINER=	pkgsrc@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/XML-Compile-Tester/
COMMENT=	Support XML::Compile Related Regression Testing
LICENSE=	${PERL5_LICENSE}

BUILD_DEPENDS+=	p5-Test-Deep>=0.095:../../devel/p5-Test-Exception
DEPENDS+=	p5-Log-Report>=0.17:../../devel/p5-Log-Report

PERL5_PACKLIST=		auto/XML/Compile/Tester/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
