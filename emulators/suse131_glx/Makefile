# $NetBSD: Makefile,v 1.10 2015/07/28 08:49:14 wiz Exp $

PKGNAME=	suse_glx-${SUSE_VERSION}
PKGREVISION=	4
CATEGORIES=	emulators
RPMUPDPKGS+=	Mesa-9.2.5-61.13.1.${SUSE_ARCH}
RPMUPDPKGS+=	Mesa-libEGL1-9.2.5-61.13.1.${SUSE_ARCH}
RPMUPDPKGS+=	Mesa-libGL1-9.2.5-61.13.1.${SUSE_ARCH}
RPMUPDPKGS+=	Mesa-libglapi0-9.2.5-61.13.1.${SUSE_ARCH}
RPMPKGS+=	libGLU1-9.0.0-7.1.2.${SUSE_ARCH}
RPMUPDPKGS+=	libLLVM-3.3-6.7.1.${SUSE_ARCH} # needed by swrast_dri.so
RPMUPDPKGS+=	libgbm1-9.2.5-61.13.1.${SUSE_ARCH}
RPMUPDPKGS+=	libudev1-208-35.1.${SUSE_ARCH}
RPMPKGS+=	libwayland-client0-1.2.1-1.1.${SUSE_ARCH}
RPMPKGS+=	libwayland-server0-1.2.1-1.1.${SUSE_ARCH}

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Linux compatibility package for OpenGL/Mesa

EMUL_MODULES.linux=	x11 drm

.include "../../emulators/suse131_linux/Makefile.common"
.include "../../mk/bsd.pkg.mk"
