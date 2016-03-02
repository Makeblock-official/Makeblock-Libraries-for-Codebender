/**
 * This file is used to decide whether the driver for the MCore or the MeOrion board
 * should be used.
 */

/*
 * Code that is meant to be used on the Orion should define the MeOrion_H
 * constant, whereas code for the MCore should define the MeMCore_H constant.
 */
#if defined(MeOrion_H)
    #include "MeOrion.h"
#elif defined(MeMCore_H)
    #include "MeMCore.h"
#elif defined(MeShield_H)
    #include "MeShield.h"
#endif
