# $NetBSD: Makefile,v 1.8 2015/06/12 10:51:31 wiz Exp $

DISTNAME=	Text-German-0.06
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	6
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Text/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Text-German/
COMMENT=	German grundform reduction
LICENSE=	${PERL5_LICENSE}

REPLACE_PERL+=		lib/Text/German.pm

PERL5_PACKLIST=		auto/Text/German/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
