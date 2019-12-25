#ifndef IN_GAME_CHR_CHR_H
#define IN_GAME_CHR_CHR_H
#include <ultra64.h>
#include "types.h"

struct chrdata *chrFindById(struct chrdata *data, u32 chrnum);
struct chrdata *chrFindByLiteralId(s32 chrnum);
f32 chrGetDistanceFromTargetToPad(struct chrdata *chr, s32 pad_id);
f32 chrGetDistanceToChr(struct chrdata *chr1, s32 chr2num);
f32 chrGetDistanceToCoord(struct chrdata *chr, struct coord *coord);
f32 chrGetDistanceToCurrentPlayer(struct chrdata *chr);
f32 chrGetDistanceToPad(struct chrdata *chr, s32 pad_id);
f32 chrGetDistanceToTarget(struct chrdata *chr);
f32 chrGetDistanceToTarget2(struct chrdata *chr);
f32 chrGetLateralDistanceToCoord(struct chrdata *chr, struct coord *coord);
f32 chrGetLateralDistanceToPad(struct chrdata *chr, s32 pad_id);
f32 chrGetSameFloorDistanceToPad(struct chrdata *chr, s32 pad_id);
f32 chrGetSquaredDistanceToCoord(struct chrdata *chr, struct coord *coord);
struct position *chrGetTargetPosition(struct chrdata *chr);
f32 chrGetTimer(struct chrdata *chr);
bool chrHasFlag(struct chrdata *chr, u32 flag, u8 bank);
bool chrHasFlagById(struct chrdata *ref, u32 chrnum, u32 flag, u32 bank);
bool chrHasHiddenFlag00000002(struct chrdata *chr);
bool chrHasStageFlag(struct chrdata *chr, u32 flag);
s32 chrResolveId(struct chrdata *ref, s32 id);
void chrRestartTimer(struct chrdata *chr);
void chrSetChrPreset(struct chrdata *chr, s32 chrpreset);
void chrSetFlags(struct chrdata *chr, u32 flags, u8 bank);
void chrSetFlagsById(struct chrdata *ref, u32 chrnum, u32 flags, u32 bank);
void chrSetPadPreset(struct chrdata *chr, s32 pad_id);
bool chrSetPath(struct chrdata *chr, u32 path_id);
void chrSetStageFlag(struct chrdata *chr, u32 flag);
void chrUnsetFlags(struct chrdata *chr, u32 flags, u8 bank);
void chrUnsetFlagsById(struct chrdata *ref, u32 chrnum, u32 flags, u32 bank);
void chrUnsetStageFlag(struct chrdata *chr, u32 flag);
f32 coordGetSquaredDistanceToCoord(struct coord *a, struct coord *b);
void decrementByte(u8 *dst, u8 amount);
u32 func0f01e050(void);
u32 func0f01e250(void);
u32 func0f01e4dc(struct chrdata *chr, u32 arg1);
u32 func0f01e5d8(void);
u32 func0f01e6a4(void);
u32 func0f01e7bc(void);
u32 func0f01e7f4(void);
u32 func0f01f264(struct chrdata *chr, struct coord *coord, s16 *room, f32 arg3, s32 arg4);
u32 func0f020538(void);
void chrSetMaxDamage(struct chrdata *chr, f32 maxdamage);
f32 chrGetMaxDamage(struct chrdata *chr);
u32 func0f0205ac(void);
u32 func0f0205ec(void);
u32 func0f020668(void);
u32 func0f020b14(void);
u32 func0f020cc8(void);
u32 func0f020d44(void);
void func0f020f90(s32 positionnum);
u32 func0f021258(void);
u32 func0f02133c(void);
u32 func0f0213a0(void);
u32 func0f02143c(void);
u32 func0f021fa8(void);
u32 func0f022084(void);
u32 func0f0220ac(struct chrdata *chr);
u32 func0f0220ec(void);
u32 func0f022214(void);
void chrCloak(struct chrdata *chr, bool arg1);
void chrUncloak(struct chrdata *chr, bool arg1);
u32 func0f0225f4(void);
u32 func0f022624(void);
u32 func0f022be4(void);
u32 func0f022cc8(void);
u32 func0f022d60(void);
u32 func0f022fe0(void);
u32 func0f023098(void);
void chrDropItems(struct chrdata *chr);
u32 func0f0245c8(struct chrdata *chr, u32 arg1);
u32 func0f024668(void);
u32 func0f0246e4(void);
void func0f02472c(void);
u32 func0f024738(void);
u32 func0f025074(void);
u32 func0f025144(void);
u32 func0f025288(void);
u32 func0f025ea4(void);
u32 func0f0260c4(void);
u32 func0f0268bc(void);
u32 func0f0270f4(void);
u32 func0f0278a4(void);
u32 func0f027994(void);
u32 func0f027e1c(void);
void func0f028490(f32 arg1);
u32 func0f028498(void);
u32 func0f028590(void);
struct attachment *chrGetEquippedWeaponAttachment(struct chrdata *chr, s32 hand);
struct attachment *chrGetEquippedWeaponAttachmentWithCheck(struct chrdata *chr, s32 hand);
u32 func0f0288d0(void);
u32 func0f0289dc(void);
u32 func0f028a50(void);
u32 func0f028d50(void);
u32 func0f028e18(void);
u32 func0f028e6c(void);
u32 func0f028f7c(void);
u32 func0f0291d4(void);
u32 func0f0292bc(void);
u32 func0f02932c(void);
u32 func0f0293ec(void);
u32 func0f0294cc(void);
u32 func0f0295f8(void);
u32 func0f0297a0(void);
u32 func0f02983c(void);
u32 func0f02b7d4(void);
u32 func0f02bdf8(void);
u32 func0f02c6e0(void);
u32 func0f02c9b0(void);
u32 func0f02ccb4(void);
u32 func0f02cde0(void);
u32 func0f02ce30(void);
u32 func0f02ce8c(void);
u32 func0f02d338(void);
u32 func0f02d36c(void);
u32 func0f02d3f8(void);
u32 func0f02d414(void);
u32 func0f02d4fc(void);
u32 func0f02dbac(void);
u32 func0f02ddbc(void);
u32 func0f02dff0(void);
u32 func0f02e064(void);
u32 func0f02e124(void);
u32 func0f02e15c(void);
u32 func0f02e1cc(void);
u32 func0f02e260(void);
u32 func0f02e2d0(void);
u32 func0f02e370(void);
u32 func0f02e3dc(void);
u32 func0f02e4f8(void);
u32 func0f02e550(void);
u32 func0f02e684(void);
void func0f02e6dc(struct chrdata *chr, f32 arg1);
void func0f02e9a0(struct chrdata *chr, f32 arg1);
void func0f02eabc(struct chrdata *chr);
u32 func0f02ec94(struct chrdata *chr);
void func0f02ed28(struct chrdata *chr, f32 arg1);
void chrStop(struct chrdata *chr);
void func0f02ed88(struct chrdata *chr);
void chrKneel(struct chrdata *chr);
void func0f02ef40(struct chrdata *chr);
void func0f02effc(struct chrdata *chr);
void func0f02f070(struct chrdata *chr);
void func0f02f288(struct chrdata *chr, s32 arg1, s32 arg2);
void func0f02f314(struct chrdata *chr);
void func0f02f530(struct chrdata *chr);
void func0f02f60c(struct chrdata *chr);
void func0f02f688(struct chrdata *chr);
void func0f02f704(struct chrdata *chr);
void chrSurrender(struct chrdata *chr);
u32 func0f02f8a4(struct chrdata *chr);
void chrSidestep(struct chrdata *chr, s32 arg1);
void func0f02fc2c(struct chrdata *chr);
void chrJumpOut(struct chrdata *chr, s32 arg1);
void func0f02fe18(struct chrdata *chr);
void chrRunToPos(struct chrdata *chr, struct coord *coord);
void func0f030120(struct chrdata *chr, s32 thingtype, s32 thingid);
void func0f030308(struct chrdata *chr, s32 thingtype, s32 thingid);
void func0f0303a0(struct chrdata *chr, s32 thingtype, s32 thingid);
u32 func0f030584(void);
u32 chrAttackWalk(void);
u32 func0f030a40(void);
u32 chrAttackRoll(void);
void func0f030ff8(struct chrdata *chr, u32 anim_id, f32 fstartframe, f32 fendframe, u8 flags, u32 transition, f32 result);
void func0f03119c(struct chrdata *chr);
u32 func0f031254(void);
u32 func0f031384(void);
u32 func0f0318b8(void);
u32 func0f0319a8(void);
u32 func0f032ac4(void);
u32 func0f032fe4(void);
u32 func0f03323c(void);
u32 func0f033654(void);
u32 func0f0336a8(void);
u32 func0f033728(void);
u32 func0f0338e0(void);
f32 chrGetShield(struct chrdata *chr);
u32 func0f033fa8(void);
u32 func0f034080(void);
u32 func0f034124(void);
u32 func0f03417c(void);
u32 func0f0341dc(void);
u32 func0f034330(struct chrdata *chr, s32 arg1, struct coord *coord, s32 arg3);
u32 func0f034410(void);
u32 func0f034480(void);
u32 func0f034524(void);
void func0f036358(struct chrdata *chr, s32 arg1);
u32 func0f03645c(void);
u32 func0f03654c(void);
u32 func0f0368b8(void);
u32 func0f036918(void);
u32 func0f036974(void);
u32 func0f0369cc(void);
u32 func0f036aa0(void);
u32 func0f036b10(void);
u32 func0f036b98(void);
u32 func0f036c08(void);
u32 func0f036ee4(void);
u32 func0f036fc0(void);
u32 func0f037088(void);
u32 func0f0370a8(void);
u32 func0f037124(void);
void chrSetField66To0(struct chrdata *chr);
u32 func0f037224(void);
u32 func0f0372e8(void);
u32 func0f03733c(void);
u32 func0f0373dc(void);
u32 func0f0374a0(void);
u32 func0f0374e4(void);
u32 func0f037560(void);
u32 func0f037580(void);
u32 func0f0375b0(void);
u32 func0f0375e8(void);
u32 func0f0379b0(void);
u32 func0f037b70(void);
u32 func0f03843c(struct chrdata *chr, struct coord *coord, s16 *room_id, u32 speed);
struct path *pathFindById(u32 path_id);
u32 func0f038868(void);
void func0f038b9c(struct chrdata *chr, struct path *path);
void chrRecordLastVisibleTargetTime(struct chrdata *chr);
u32 func0f038f40(void);
u32 func0f0391ec(struct chrdata *chr, struct coord *coord, s16 *room, u32 arg3);
u32 func0f03922c(struct chrdata *chr, void *arg1, s32 arg2);
u32 func0f039368(struct chrdata *chr);
u32 func0f0393b4(struct chrdata *chr, struct coord *coord, s16 *room);
u32 func0f039474(void);
u32 func0f039558(void);
void chrRecordLastSeeTargetTime(struct chrdata *chr);
void chrRecordLastHearTargetTime(struct chrdata *chr);
u32 func0f0395d8(struct chrdata *chr);
u32 func0f03978c(struct chrdata *chr);
u32 func0f039a18(struct chrdata *chr);
bool chrIsDead(struct chrdata *chr);
u32 chrTrySidestep(struct chrdata *chr);
u32 chrTryJumpOut(struct chrdata *chr);
u32 func0f039e28(struct chrdata *chr);
u32 chrTryAttackWalk(struct chrdata *chr);
u32 chrTryAttackRun(struct chrdata *chr);
u32 chrTryAttackRoll(struct chrdata *chr);
u32 func0f03a3ec(struct chrdata *chr, u32 arg1, u32 arg2, u32 arg3, u32 arg4);
bool func0f03a578(struct chrdata *chr, s32 thingtype, s32 thingid);
bool func0f03a644(struct chrdata *chr, s32 thingtype, s32 thingid);
bool func0f03a6d8(struct chrdata *chr, s32 thingtype, s32 thingid);
bool func0f03a76c(struct chrdata *chr, u32 thingtype, s32 thingid);
bool chrFaceEntity(struct chrdata *chr, u32 entity_type, u32 entity_id);
u32 func0f03a894(struct chrdata *chr, s32 pad, s32 arg2);
u32 chrStartPath(struct chrdata *chr);
u32 chrTrySurrender(struct chrdata *chr);
bool chrFadeOut(struct chrdata *chr);
bool chrGoToTarget(struct chrdata *chr, u32 speed);
bool chrGoToChr(struct chrdata *chr, u32 dst_chrnum, u32 speed);
bool func0f03ab74(struct chrdata *chr, struct position *pos, s32 arg2);
u32 func0f03abd0(void);
u32 func0f03aca0(struct chrdata *chr, u32 arg1, u32 arg2);
bool chrTryStop(struct chrdata *chr);
bool func0f03adf4(struct chrdata *chr);
bool func0f03ae48(struct chrdata *chr);
bool func0f03ae9c(struct chrdata *chr);
bool chrTryKneel(struct chrdata *chr);
bool func0f03af44(struct chrdata *chr, u32 anim_id, f32 fstartframe, f32 fendframe, u8 flags, u32 transition, f32 result);
u32 func0f03afac(struct chrdata *chr);
u32 func0f03b1e0(struct chrdata *chr);
bool func0f03b5f0(struct chrdata *chr, s32 pad_id);
u32 func0f03b684(struct chrdata *chr, u32 thingtype, u32 thingid);
u32 func0f03b97c(struct chrdata *chr, u32 arg1, u32 arg2);
u32 func0f03ba44(void);
u32 func0f03bbc8(struct chrdata *chr, u32 arg1);
u32 func0f03c044(void);
u32 func0f03c138(void);
void func0f03c8b4(struct chrdata *chr);
u32 func0f03c91c(void);
u32 func0f03cb74(void);
void func0f03ccdc(struct chrdata *chr);
void func0f03cd04(struct chrdata *chr);
u32 func0f03cd24(void);
u32 func0f03ce8c(void);
u32 func0f03d0b0(void);
u32 func0f03d7ec(void);
u32 func0f03da8c(void);
u32 func0f03dcd8(void);
u32 func0f03ddf8(void);
u32 func0f03dec4(void);
u32 func0f03df50(void);
u32 func0f03dff4(void);
void func0f03e094(struct chrdata *chr);
u32 func0f03e0e4(void);
u32 func0f03e1a8(void);
u32 func0f03e29c(void);
f32 func0f03e45c(struct chrdata *chr);
void func0f03e538(struct chrdata *chr, f32 arg1);
f32 func0f03e578(struct chrdata *chr);
void func0f03e5b0(struct chrdata *chr, f32 arg1);
u32 func0f03e5f0(void);
u32 func0f03e754(void);
u32 func0f03e788(void);
u32 func0f03e9f4(void);
u32 func0f03f778(void);
void chrResetAimEndProperties(struct chrdata *chr);
void chrSetFiring(struct chrdata *chr, s32 hand, bool firing);
void chrStopFiring(struct chrdata *chr);
void func0f03f988(struct chrdata *chr, s32 hand, s32 arg2);
u32 func0f03fa10(void);
u32 func0f03fab0(void);
u32 func0f03fde4(void);
u32 func0f03ff2c(void);
u32 func0f04031c(void);
u32 func0f0404d4(void);
u32 func0f041a74(void);
u32 func0f041c44(void);
u32 func0f041d38(void);
u32 func0f041e48(void);
u32 func0f04262c(void);
u32 func0f04279c(void);
void func0f042808(struct chrdata *chr);
void func0f0429d8(struct chrdata *chr, f32 arg1, f32 arg2);
u32 func0f042a40(void);
u32 func0f042ffc(void);
u32 func0f0433e0(void);
u32 func0f043944(void);
u32 func0f043988(void);
u32 func0f0439c0(void);
u32 func0f0439f8(void);
u32 func0f043da8(struct chrdata *chr, u32 arg1);
void func0f043f24(s32 arg0);
u32 func0f043f2c(void);
u32 func0f044208(void);
u32 func0f0445c4(void);
u32 func0f0446e0(void);
u32 func0f044808(void);
u32 func0f0448a0(void);
u32 func0f044b68(void);
u32 func0f044c38(void);
u32 func0f0451a8(void);
u32 func0f045760(void);
u32 func0f045a70(void);
u32 func0f045b9c(void);
u32 func0f046648(void);
s32 func0f046a30(struct chrdata *chr);
u32 func0f046a60(void);
u32 func0f046a8c(void);
u32 func0f0473cc(void);
bool func0f04767c(struct chrdata *chr, u8 arg1, u8 arg2, s32 arg3, u8 arg4);
bool func0f047700(struct chrdata *chr, u8 arg1, u8 arg2, s32 arg3, u8 arg4);
u32 func0f047934(void);
u32 func0f047c80(void);
u32 func0f0482cc(void);
u32 func0f048398(void);
bool chrSawTargetRecently(struct chrdata *chr);
bool chrHeardTargetRecently(struct chrdata *chr);
f32 func0f048a84(struct chrdata *chr, struct coord *coord);
f32 chrGetAngleToTarget(struct chrdata *chr);
u32 func0f048b78(void);
u32 func0f048cc0(void);
u32 func0f048dcc(void);
u32 func0f048e74(struct chrdata *chr, u32 arg1);
u32 func0f048f20(struct chrdata *chr, u8 b);
u32 func0f048fcc(void);
u32 func0f049068(struct chrdata *chr, u32 arg1, u32 arg2);
u32 func0f04911c(void);
s32 chrGetPadRoom(struct chrdata *chr, s32 pad_id);
u32 func0f049644(void);
u32 func0f049fcc(struct chrdata *chr);
u32 chrResetNearMiss(struct chrdata *chr);
s32 chrGetNumArghs(struct chrdata *chr);
s32 chrGetNumCloseArghs(struct chrdata *chr);
bool chrSawInjury(struct chrdata *chr, u8 arg1);
bool chrSawDeath(struct chrdata *chr, u8 arg1);
bool func0f04a2b4(struct chrdata *chr);
u32 func0f04a2d4(void);
u32 func0f04a37c(void);
u32 func0f04a4ec(struct chrdata *chr, s32 arg1);
u32 func0f04a674(struct chrdata *chr, s32 arg1);
bool func0f04a76c(struct chrdata *chr, f32 distance);
bool func0f04a79c(u8 chrnum, struct chrdata *chr, f32 distance);
bool func0f04a7dc(u8 arg0, struct chrdata *chr, f32 distance, s32 arg3);
bool func0f04a848(u8 chrnum, struct chrdata *chr, f32 distance, struct coord *coord, s16 *room);
bool chrCompareTeams(struct chrdata *chr1, struct chrdata *chr2, u8 checktype);
void chrSetChrPresetByChrnum(struct chrdata *chr, s32 chrnum, s32 chrpreset);
void chrSetPadPresetByChrnum(struct chrdata *chr, s32 chrnum, s32 pad_id);
u32 func0f04ad08(struct chrdata *chr);
u32 func0f04aeb0(void);
u32 func0f04af84(void);
bool chrSpawnAtCoord(s32 body, s32 head, struct coord *coord, s16 *room, f32 arg4, u8 *ailist, u32 flags);
bool chrSpawnAtPad(struct chrdata *chr, s32 body, s32 head, s32 pad, u8 *ailist, u32 flags);
bool chrSpawnAtChr(struct chrdata *basechr, s32 body, s32 head, u32 chrnum, u8 *ailist, u32 flags);
u32 func0f04b658(struct chrdata *chr);
u32 func0f04b748(void);
u32 func0f04b950(struct chrdata *chr, u32 cover, u32 arg2);
u32 func0f04ba34(struct chrdata *chr, u16 arg1, u32 arg2);
u32 func0f04bffc(struct chrdata *chr, u32 arg1, u32 arg2);
s16 func0f04c268(struct chrdata *chr, u8 speed);
u32 func0f04c2e8(void);
u32 func0f04c444(void);
s32 func0f04c580(struct chrdata *chr);
u32 func0f04c6b4(struct chrdata *chr, u32 flags);
u32 func0f04c71c(struct chrdata *chr, u32 flags);
u32 func0f04c784(void);
void func0f04c874(struct chrdata *chr, u32 flags, struct coord *coord, s32 arg3, s32 arg4);
u32 rebuildTeams(void);
u32 rebuildSquadrons(void);
s16 *teamGetChrIds(s32 team_id);
s16 *squadronGetChrIds(s32 squadron_id);
void func0f04ceec(s16 value);
bool func0f04cf34(s16 value);
void func0f04cf90(struct chrdata *chr, s32 arg1);
u32 func0f04d000(struct chrdata *chr);
bool func0f04d44c(struct chrdata *chr);
void chrEmitSparks(struct chrdata *chr);

u32 func0f04e418(void);
u32 getNumChrs(void);
void incrementByte(u8 *dst, u8 amount);
s32 chrResolvePadId(struct chrdata *chr, s32 pad_id);
f32 positionGetDistanceToPosition(struct position *a, struct position *b);
u32 positionGetIndexByChrId(struct chrdata *chr, s32 chrnum);
f32 positionGetLateralDistanceToPosition(struct position *a, struct position *b);
void func0f01e760(void);

#endif
