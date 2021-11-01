#include <ultra64.h>
#include <n_libaudio.h>
#include "naudio/n_synthInternals.h"
#include "constants.h"
#include "bss.h"
#include "lib/lib_3a100.h"
#include "data.h"
#include "types.h"

GLOBAL_ASM(
glabel func0003e540
/*    3e540:	00042400 */ 	sll	$a0,$a0,0x10
/*    3e544:	00042403 */ 	sra	$a0,$a0,0x10
/*    3e548:	27bdfff8 */ 	addiu	$sp,$sp,-8
/*    3e54c:	3c0e8006 */ 	lui	$t6,%hi(n_syn)
/*    3e550:	8dcef114 */ 	lw	$t6,%lo(n_syn)($t6)
/*    3e554:	8dcf0030 */ 	lw	$t7,0x30($t6)
/*    3e558:	afaf0004 */ 	sw	$t7,0x4($sp)
/*    3e55c:	8fb80004 */ 	lw	$t8,0x4($sp)
/*    3e560:	3c087004 */ 	lui	$t0,%hi(n_alAuxBusPull)
/*    3e564:	2508a100 */ 	addiu	$t0,$t0,%lo(n_alAuxBusPull)
/*    3e568:	8f190004 */ 	lw	$t9,0x4($t8)
/*    3e56c:	1728000c */ 	bne	$t9,$t0,.L0003e5a0
/*    3e570:	00000000 */ 	nop
/*    3e574:	3c098006 */ 	lui	$t1,%hi(n_syn)
/*    3e578:	8d29f114 */ 	lw	$t1,%lo(n_syn)($t1)
/*    3e57c:	000458c0 */ 	sll	$t3,$a0,0x3
/*    3e580:	01645821 */ 	addu	$t3,$t3,$a0
/*    3e584:	8d2a0034 */ 	lw	$t2,0x34($t1)
/*    3e588:	000b58c0 */ 	sll	$t3,$t3,0x3
/*    3e58c:	014b6021 */ 	addu	$t4,$t2,$t3
/*    3e590:	10000007 */ 	b	.L0003e5b0
/*    3e594:	8d820020 */ 	lw	$v0,0x20($t4)
/*    3e598:	10000003 */ 	b	.L0003e5a8
/*    3e59c:	00000000 */ 	nop
.L0003e5a0:
/*    3e5a0:	10000003 */ 	b	.L0003e5b0
/*    3e5a4:	00001025 */ 	or	$v0,$zero,$zero
.L0003e5a8:
/*    3e5a8:	10000001 */ 	b	.L0003e5b0
/*    3e5ac:	00000000 */ 	nop
.L0003e5b0:
/*    3e5b0:	03e00008 */ 	jr	$ra
/*    3e5b4:	27bd0008 */ 	addiu	$sp,$sp,0x8
);

ALFxRef func0003e5b8(s16 index)
{
	struct N_ALMainBus_s *mainbus = n_syn->mainBus;

	if (mainbus->filter.handler == (void *)n_alAuxBusPull) {
		return (ALFxRef) n_syn->auxBus[index].unk44;
	} else {
		return NULL;
	}
}
