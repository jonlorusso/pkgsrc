# $NetBSD: Makefile,v 1.14 2015/06/12 10:51:35 wiz Exp $

DISTNAME=	XML-AutoWriter-0.4
PKGNAME=	p5-${DISTNAME}0
PKGREVISION=	6
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=XML/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/XML-AutoWriter/
COMMENT=	DOCTYPE-driven valid XML output
#LICENSE=	gnu-gpl-v2 OR artistic or bsd # see changes

PERL5_PACKLIST=		auto/XML/AutoWriter/.packlist
PERL5_MODULE_TYPE=	Module::Install::Bundled

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
