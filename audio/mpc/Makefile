# $NetBSD: Makefile,v 1.23 2015/06/07 08:41:50 wiz Exp $

DISTNAME=		mpc-0.27
CATEGORIES=		audio
#MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=musicpd/}
MASTER_SITES=		http://www.musicpd.org/download/mpc/0/
EXTRACT_SUFX=		.tar.xz

MAINTAINER=		simonb@NetBSD.org
HOMEPAGE=		http://musicpd.org/
COMMENT=		Command-line client for musicpd
LICENSE=		gnu-gpl-v2

GNU_CONFIGURE=		yes
USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config

REPLACE_SH=		doc/*.sh

LIBS+=			${BUILDLINK_LDADD.iconv}

.include "../../audio/libmpdclient/buildlink3.mk"
.include "../../converters/libiconv/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
