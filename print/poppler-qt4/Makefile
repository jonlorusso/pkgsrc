# $NetBSD: Makefile,v 1.46 2015/07/14 09:03:05 wiz Exp $

.include "../../print/poppler/Makefile.common"

PKGNAME=		poppler-qt4-${POPPLER_VERS}
COMMENT=		PDF rendering library (QT4 wrapper)
MAINTAINER=		reed@reedmedia.net

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--disable-cairo-output
CONFIGURE_ARGS+=	--enable-poppler-qt4
CONFIGURE_ARGS+=	--disable-gtk-test
CONFIGURE_ARGS+=	--disable-utils
CONFIGURE_ENV+=		MOCQT4=${QTDIR}/bin/moc

BUILDLINK_API_DEPENDS.poppler+= poppler>=${POPPLER_VERS}
.include "../../print/poppler/buildlink3.mk"

PKGCONFIG_OVERRIDE+=	${WRKSRC}/poppler-qt4.pc.in

INSTALLATION_DIRS+=	lib include/poppler lib/pkgconfig

BUILD_DIRS=		qt4/src

pre-build:
	cd ${WRKSRC}/qt4/src && ${BUILD_MAKE_CMD}

post-install:
	${INSTALL_DATA} ${WRKSRC}/poppler-qt4.pc ${DESTDIR}${PREFIX}/lib/pkgconfig

BUILDLINK_DEPMETHOD.qt4-tools?=	full

BUILDLINK_API_DEPENDS.qt4-libs+=	qt4-libs>=4.7.0
.include "../../x11/qt4-libs/buildlink3.mk"
.include "../../x11/qt4-tools/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
