# $NetBSD: Makefile,v 1.10 2015/06/12 10:49:09 wiz Exp $

DISTNAME=	Devel-StackTrace-AsHTML-0.14
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Devel/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Devel-StackTrace-AsHTML/
COMMENT=	Perl5 module to displays stack trace in HTML
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Devel-StackTrace-[0-9]*:../../devel/p5-Devel-StackTrace

PERL5_PACKLIST=		auto/Devel/StackTrace/AsHTML/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
