{% import 'complete_specialization/common.j2.h' as common %}

#if !defined(FPTYPE)
#error FTYPE not defined
#endif

#if !defined(VEC)
#error VLEN not defined
#endif

template <>
inline void tmdslash_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const FPTYPE mu,
    const FPTYPE muinv) {
    // clang-format off
    {{ common.include_generated_kernel(ISA, "tmf_dslash_plus_body_", FPTYPE, VEC, SOA, COMPRESS12) }}
    // clang-format on
}

template <>
inline void tmdslash_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const unsigned int accumulate[8],
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const FPTYPE mu,
    const FPTYPE muinv) {
    // clang-format off
    {{ common.include_generated_kernel(ISA, "tmf_dslash_minus_body_", FPTYPE, VEC, SOA, COMPRESS12) }}
    // clang-format on
}

template <>
inline void tmdslash_achimbdpsi_plus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE alpha,
    //		 const FPTYPE mu,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    {{ common.include_generated_kernel(ISA, "tmf_dslash_achimbdpsi_plus_body_", FPTYPE, VEC, SOA, COMPRESS12) }}
    // clang-format on
}

template <>
inline void tmdslash_achimbdpsi_minus_vec<FPTYPE, VEC, SOA, COMPRESS12>(
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *xyBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *zfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tbBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *tfBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *chiBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    const int xbOffs[VEC],
    const int xfOffs[VEC],
    const int ybOffs[VEC],
    const int yfOffs[VEC],
    const int offs[VEC],
    const int gOffs[VEC],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int pfyOffs[VEC],
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase2,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase3,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBase4,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *pfBaseChi,
    const FPTYPE alpha,
    //		 const FPTYPE mu,
    const FPTYPE coeff_s,
    const FPTYPE coeff_t_f,
    const FPTYPE coeff_t_b,
    const unsigned int accumulate[8]) {
    // clang-format off
    {{ common.include_generated_kernel(ISA, "tmf_dslash_achimbdpsi_minus_body_", FPTYPE, VEC, SOA, COMPRESS12) }}
    // clang-format on
}

#ifdef QPHIX_QMP_COMMS

template <>
inline void tmface_finish_dir_plus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const FPTYPE beta,
    const FPTYPE mu,
    const FPTYPE muinv,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_back_X_plus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_forw_X_plus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_back_Y_plus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_forw_Y_plus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_back_Z_plus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_forw_Z_plus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_back_T_plus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_forw_T_plus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}

template <>
inline void tmface_finish_dir_minus<FPTYPE, VEC, SOA, COMPRESS12>(
    const FPTYPE *inbuf,
    const Geometry<FPTYPE, VEC, SOA, COMPRESS12>::SU3MatrixBlock *gBase,
    Geometry<FPTYPE, VEC, SOA, COMPRESS12>::FourSpinorBlock *oBase,
    const int gOffs[VEC],
    const int offs[VEC],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const FPTYPE beta,
    const FPTYPE mu,
    const FPTYPE muinv,
    unsigned int mask,
    int dir) {
    if (dir == 0) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_back_X_minus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 1) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_forw_X_minus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 2) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_back_Y_minus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 3) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_forw_Y_minus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 4) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_back_Z_minus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 5) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_forw_Z_minus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 6) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_back_T_minus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else if (dir == 7) {
        // clang-format off
        {{ common.include_generated_kernel(ISA, "tmf_dslash_face_unpack_from_forw_T_minus_", FPTYPE, VEC, SOA, COMPRESS12) }}
        // clang-format on
    } else {
        printf("Invalid dir for unpack boundary\n");
        exit(1);
    }
}
#endif

#endif // QPHIX_QMP_COMMS (outer)
