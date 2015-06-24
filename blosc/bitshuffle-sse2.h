/*********************************************************************
  Blosc - Blocked Shuffling and Compression Library

  Author: Francesc Alted <francesc@blosc.org>

  See LICENSES/BLOSC.txt for details about copyright and rights to use.
**********************************************************************/

/* SSE2-accelerated shuffle/unshuffle routines. */

#ifndef BITSHUFFLE_SSE2_H
#define BITSHUFFLE_SSE2_H

#include "shuffle-common.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
  SSE2-accelerated bitshuffle routine.
*/
BLOSC_NO_EXPORT int64_t
bshuf_trans_bit_elem_sse2(void* in, void* out, const size_t size,
			  const size_t elem_size, void* tmp_buf);

/**
  SSE2-accelerated bitunshuffle routine.
*/
BLOSC_NO_EXPORT int64_t
bshuf_untrans_bit_elem_sse2(void* in, void* out, const size_t size,
			    const size_t elem_size, void* tmp_buf);

#ifdef __cplusplus
}
#endif


#endif /* BITSHUFFLE_SSE2_H */
