# Maintainer: Peter Mount <peter@retep.org>

pkgname="libarea51-astro"
pkgver="0.1"
pkgrel="1"
pkgdesc="Area51 Astronomy C library"
arch="x86_64"
url="https://area51.onl/"
license="ASL 2.0"
source=""
subpackages="$pkgname-dev $pkgname-ephemeris"
depends="libarea51"
depends_dev="libarea51-dev"
#triggers="$pkgname-bin.trigger=/lib:/usr/lib:/usr/glibc-compat/lib"

builddeps() {
  sudo apk add $depends $depends_dev
}

package() {
  autoconf
  ./configure
  make clean
  make
  mkdir -p "$pkgdir/usr/lib"
  cp -rp build/package/usr/lib/* "$pkgdir/usr/lib"
}

dev() {
  depends="$pkgname libarea51-dev"
  mkdir -p "$subpkgdir/usr/include"
  cp -rp build/package/usr/include/* "$subpkgdir/usr/include"
}

ephemeris() {
  depends="$pkgname"
  mkdir -p "$subpkgdir/usr/bin"
  cp -rp build/package/usr/bin/site_ephemeris "$subpkgdir/usr/bin"
}
