# Ubuntu 18.04
SET_DEPENDENCIES ( CPACK_DEBIAN_PACKAGE_DEPENDS g++ openssh-client openssh-server expect rsync python psmisc curl jq )

if(SPARK)
    SET_DEPENDENCIES ( CPACK_DEBIAN_PACKAGE_DEPENDS "default-jdk" )
endif(SPARK)