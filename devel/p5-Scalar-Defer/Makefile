# $NetBSD: Makefile,v 1.11 2015/06/12 10:49:42 wiz Exp $
#

DISTNAME=	Scalar-Defer-0.23
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	6
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Scalar/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Scalar-Defer/
COMMENT=	Perl 5 module providing lazy evaluation
LICENSE=	mit

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Scalar/Defer/.packlist
PERL5_MODULE_TYPE=	Module::Install::Bundled

DEPENDS+=	p5-Class-InsideOut-[0-9]*:../../devel/p5-Class-InsideOut
DEPENDS+=	p5-Exporter-Lite-[0-9]*:../../devel/p5-Exporter-Lite

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
