# $NetBSD: Makefile,v 1.19 2016/01/30 13:48:53 mef Exp $

DISTNAME=	Email-MessageID-1.406
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	mail perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Email/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Email-MessageID/
COMMENT=	Generate world unique message-ids
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Email-Address>=1.80:../../mail/p5-Email-Address
#DEPENDS+=	{perl>5.7.3,p5-Test-Simple>=0.47}:../../devel/p5-Test-Simple

PERL5_PACKLIST= auto/Email/MessageID/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
