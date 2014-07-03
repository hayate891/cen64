//
// vr4300/cp1.h: VR4300 floating point unit coprocessor.
//
// CEN64: Cycle-Accurate Nintendo 64 Simulator.
// Copyright (C) 2014, Tyler J. Stachecki.
//
// This file is subject to the terms and conditions defined in
// 'LICENSE', which is part of this source code package.
//

#ifndef __vr4300_cp1_h__
#define __vr4300_cp1_h__
#include "common.h"

#define NUM_VR4300_CP1_REGISTERS 32

struct vr4300;

int VR4300_CFC1(struct vr4300 *vr4300, uint64_t rs, uint64_t rt);
int VR4300_CTC1(struct vr4300 *vr4300, uint64_t rs, uint64_t rt);
int VR4300_LDC1(struct vr4300 *vr4300, uint64_t rs, uint64_t rt);
int VR4300_LWC1(struct vr4300 *vr4300, uint64_t rs, uint64_t unused(rt));
int VR4300_MTC1(struct vr4300 *vr4300, uint64_t unused(rs), uint64_t rt);

void vr4300_cp1_init(struct vr4300 *vr4300);

#endif
