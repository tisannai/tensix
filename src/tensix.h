#ifndef TENSIX_H
#define TENSIX_H

/**
 * @file   tensix.h
 * @author Tero Isannainen <tero.isannainen@gmail.com>
 * @date   Sun Oct 21 18:45:57 2018
 * 
 * @brief  Tensix environment.
 * 
 */


/* clang-format off */
#ifdef TENSIX_USE_MEM_API
#    define SIXTEN_USE_MEM_API 1
#endif
#ifdef TENSIX_USE_ASSERT
#    define SIXTEN_USE_ASSERT 1
#endif
/* clang-format on */


#include <sixten.h>
#include <sixten_ass.h>
#include <sixten_dbg.h>

#include <alogir.h>
#include <arenas.h>
#include <bitumi.h>
#include <chainy.h>
#include <framer.h>
#include <gromer.h>
//#include <gweilo.h>
//#include <litter.h>
#include <logger.h>
#include <mapper.h>
#include <memtun.h>
#include <ringer.h>
#include <segman.h>
#include <slinky.h>

#endif
