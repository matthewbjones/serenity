#!/usr/bin/env -S bash ../.port_include.sh
port=ruby
version=3.0.1
useconfigure="true"
files="https://cache.ruby-lang.org/pub/ruby/3.0/ruby-${version}.tar.gz ruby-${version}.tar.gz 369825db2199f6aeef16b408df6a04ebaddb664fb9af0ec8c686b0ce7ab77727"
auth_type=sha256
depends=""

configopts="
    --prefix=${SERENITY_INSTALL_ROOT}/usr/local
    --disable-werror
    --disable-fortify-source
    --disable-largefile
    --disable-pie
    --disable-install-doc
    --disable-install-rdoc
    --disable-install-capi
    --disable-jit-support
    --disable-install-static-library
    --disable-dln
    --disable-rubygems
    --without-gmp
    --without-valgrind
    --disable-close-fds-by-recvmsg-with-peek
    --without-compress-debug-sections
"

export LIBS="-ldl"
export ac_cv_func_setgroups=no
export ac_cv_func_dladdr=yes
