#ifndef ARCH_ARM_DEF_HPP
#define ARCH_ARM_DEF_HPP

enum ARM_Mode
{
  ARM_ModeUnknown,
  ARM_ModeArm,
  ARM_ModeThumb,
};

enum ARM_FeatureThumb
{
  ARM_Thumb1,
  ARM_Thumb2,
  ARM_ThumbEE,
};

enum ARM_Condition
{
  ARM_Cond_Eq,
  ARM_Cond_Ne,
  ARM_Cond_Cs,
  ARM_Cond_Cc,
  ARM_Cond_Mi,
  ARM_Cond_Pl,
  ARM_Cond_Vs,
  ARM_Cond_Vc,
  ARM_Cond_Hi,
  ARM_Cond_Ls,
  ARM_Cond_Ge,
  ARM_Cond_Lt,
  ARM_Cond_Gt,
  ARM_Cond_Le
};

enum ARM_Register
{
  ARM_RegUnknown,

  ARM_FlNf,
  ARM_FlCf,
  ARM_FlVf,
  ARM_FlZf,

  ARM_RegR0,
  ARM_RegR1,
  ARM_RegR2,
  ARM_RegR3,
  ARM_RegR4,
  ARM_RegR5,
  ARM_RegR6,
  ARM_RegR7,
  ARM_RegR8,
  ARM_RegR9,
  ARM_RegR10,
  ARM_RegR11,
  ARM_RegFP = ARM_RegR11,
  ARM_RegR12,
  ARM_RegIP = ARM_RegR12,
  ARM_RegR13,
  ARM_RegSP = ARM_RegR13,
  ARM_RegR14,
  ARM_RegLR = ARM_RegR14,
  ARM_RegR15,
  ARM_RegPC = ARM_RegR15,
};

enum CSPR_Flags
{
  ARM_CSPR_T = 1 << 5,  //! State bit (Thumb)
  ARM_CSPR_V = 1 << 28, //! Overflow
  ARM_CSPR_C = 1 << 29, //! Carry or borrow or extend
  ARM_CSPR_Z = 1 << 30, //! Zero
  ARM_CSPR_N = 1 << 31, //! Negative or less than
};

enum ARM_Prefix
{
  ARM_Prefix_None,
  ARM_Prefix_L = 1 << 0, /* Load/Write (unused) */
  ARM_Prefix_W = 1 << 1, /* Write-back */
  ARM_Prefix_S = 1 << 2, /* Set condition */
  ARM_Prefix_U = 1 << 3, /* Up/Down */
  ARM_Prefix_P = 1 << 4  /* Pre/Post indexing */
};

#endif // !ARM_DEF_HPP