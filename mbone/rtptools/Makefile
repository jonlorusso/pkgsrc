# $NetBSD: Makefile,v 1.10 2014/12/10 05:28:27 mef Exp $
#

DISTNAME=		rtptools-1.20
CATEGORIES=		mbone
MASTER_SITES=		http://www.cs.columbia.edu/IRT/software/rtptools/download/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://www.cs.columbia.edu/IRT/software/rtptools/
COMMENT=		Tools for processing RTP data

GNU_CONFIGURE=		yes
CPPFLAGS+=		-Dunix

HTMLDIR=	${PREFIX}/share/doc/html/rtptools
EGDIR=		${PREFIX}/share/examples/rtptools

post-install:
	${INSTALL_DATA_DIR} ${DESTDIR}${HTMLDIR}
	${INSTALL_DATA_DIR} ${DESTDIR}${EGDIR}
	${INSTALL_DATA} ${WRKSRC}/rtptools.html ${DESTDIR}${HTMLDIR}
	${INSTALL_DATA} ${WRKSRC}/ChangeLog.html ${DESTDIR}${HTMLDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/multidump ${DESTDIR}${EGDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/multiplay ${DESTDIR}${EGDIR}

.include "../../mk/bsd.pkg.mk"
