# $NetBSD: Makefile,v 1.5 2015/05/03 17:52:40 wiz Exp $

DISTNAME=	hyphen-latin
PKGNAME=	tex-${DISTNAME}-3.1
PKGREVISION=	2
TEXLIVE_REV=	20144

MAINTAINER=	minskim@NetBSD.org
COMMENT=	Hyphenation patterns for the Latin language

CONFLICTS+=	teTeX-texmf<=3.0nb12
DEPENDS+=	tex-hyph-utf8-[0-9]*:../../print/tex-hyph-utf8

TEX_HYPHEN_DAT+=	latin loadhyph-la.tex
TEX_HYPHEN_DEF+=	\\addlanguage{latin}{loadhyph-la.tex}{}{2}{2}
TEX_HYPHEN_LUA+=	['latin']={ \
			  loader='loadhyph-la.tex', \
			  lefthyphenmin=2, \
			  righthyphenmin=2, \
			  synonyms={}, \
			  patterns='hyph-la.pat.txt', \
			  hyphenation='', \
			},

.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"
