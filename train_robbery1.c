#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42[1] = { 0 };
	vector3 vLocal_44[20] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_105[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122[3] = { 0, 0, 0 };
	var uLocal_126[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<17> Local_135 = { 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	struct<182> Local_155[2];
	struct<33> Local_520[7];
	struct<33> Local_752[10];
	struct<33> Local_1083[3];
	struct<33> Local_1183[18];
	struct<33> Local_1778[24];
	struct<33> Local_2571[4];
	struct<33> Local_2704[8];
	struct<33> Local_2969[12];
	struct<14> Local_3366 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 1;
	var uLocal_3387 = 0;
	var uLocal_3388 = -1;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 500;
	var uLocal_3394 = -1;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	int iLocal_3399 = 0;
	int iLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	var uLocal_3403[4] = { 0, 0, 0, 0 };
	int iLocal_3408 = 0;
	var uLocal_3409[4] = { 0, 0, 0, 0 };
	var uLocal_3414[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3425[4] = { 0, 0, 0, 0 };
	int iLocal_3430[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3471[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3480[3] = { 0, 0, 0 };
	int iLocal_3484 = 0;
	var uLocal_3485 = 0;
	int iLocal_3486[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3501[3] = { 0, 0, 0 };
	int iLocal_3505[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3514 = 0;
	float fLocal_3515 = 0f;
	int iLocal_3516 = 0;
	int iLocal_3517 = 0;
	int iLocal_3518 = 0;
	int iLocal_3519 = 0;
	int iLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	vector3 vLocal_3546[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580[2] = { 0, 0 };
	var uLocal_3583 = 2;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	int iLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	struct<4> Local_3603 = { 0, 0, 0, 0 } ;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 21;
	var uLocal_3611 = 6;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	int iLocal_3618[4] = { 0, 0, 0, 0 };
	struct<7> Local_3623 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 27;
	var uLocal_3633 = 8;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = -1;
	var uLocal_3655 = 8;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = -1;
	var uLocal_3677 = 8;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = -1;
	var uLocal_3699 = 8;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = -1;
	var uLocal_3721 = 8;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = -1;
	var uLocal_3743 = 8;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = -1;
	var uLocal_3765 = 8;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = -1;
	var uLocal_3787 = 8;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = -1;
	var uLocal_3809 = 8;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = -1;
	var uLocal_3831 = 8;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = -1;
	var uLocal_3853 = 8;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = -1;
	var uLocal_3875 = 8;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = -1;
	var uLocal_3897 = 8;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = -1;
	var uLocal_3919 = 8;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = -1;
	var uLocal_3941 = 8;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = -1;
	var uLocal_3963 = 8;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = -1;
	var uLocal_3985 = 8;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = -1;
	var uLocal_4007 = 8;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = -1;
	var uLocal_4029 = 8;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = -1;
	var uLocal_4051 = 8;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = -1;
	var uLocal_4073 = 8;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = -1;
	var uLocal_4095 = 8;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = -1;
	var uLocal_4117 = 8;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = -1;
	var uLocal_4139 = 8;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = -1;
	var uLocal_4161 = 8;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = -1;
	var uLocal_4183 = 8;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = -1;
	var uLocal_4205 = 8;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = -1;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 2;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 60;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 40;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 20;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 14;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 60;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 20;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 20;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 20;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 20;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 20;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 20;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 20;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 20;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 20;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 20;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 20;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 20;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 20;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 20;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 20;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 20;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 20;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 20;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 20;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 20;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 20;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 20;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 20;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 20;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 20;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 20;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 20;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 20;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 20;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 20;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 20;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 20;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 20;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 20;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 20;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 20;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 20;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 20;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 20;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 20;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 20;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 20;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 20;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 20;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 20;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 20;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 20;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 0;
	var uLocal_7848 = 0;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 0;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 0;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 0;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 0;
	var uLocal_7894 = 0;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 20;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 20;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 20;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 20;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 20;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 20;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 20;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 20;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 20;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 20;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = 0;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 20;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 20;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 20;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 0;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 10;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 10;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 3;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 5;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 5;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 5;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 24;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 30;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 3;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = -1;
	var uLocal_9066 = 0;
	var uLocal_9067 = 5;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 10;
	var uLocal_9079 = 3;
	var uLocal_9080 = 500;
	var uLocal_9081 = 10000;
	var uLocal_9082 = 0;
	var uLocal_9083 = 3;
	var uLocal_9084 = 500;
	var uLocal_9085 = 10000;
	var uLocal_9086 = 0;
	var uLocal_9087 = 3;
	var uLocal_9088 = 500;
	var uLocal_9089 = 10000;
	var uLocal_9090 = 0;
	var uLocal_9091 = 3;
	var uLocal_9092 = 500;
	var uLocal_9093 = 10000;
	var uLocal_9094 = 0;
	var uLocal_9095 = 3;
	var uLocal_9096 = 500;
	var uLocal_9097 = 10000;
	var uLocal_9098 = 0;
	var uLocal_9099 = 3;
	var uLocal_9100 = 500;
	var uLocal_9101 = 10000;
	var uLocal_9102 = 0;
	var uLocal_9103 = 3;
	var uLocal_9104 = 500;
	var uLocal_9105 = 10000;
	var uLocal_9106 = 0;
	var uLocal_9107 = 3;
	var uLocal_9108 = 500;
	var uLocal_9109 = 10000;
	var uLocal_9110 = 0;
	var uLocal_9111 = 3;
	var uLocal_9112 = 500;
	var uLocal_9113 = 10000;
	var uLocal_9114 = 0;
	var uLocal_9115 = 3;
	var uLocal_9116 = 500;
	var uLocal_9117 = 10000;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 3;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = -1;
	var uLocal_9131 = 0;
	var uLocal_9132 = 5;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 10;
	var uLocal_9144 = 3;
	var uLocal_9145 = 500;
	var uLocal_9146 = 10000;
	var uLocal_9147 = 0;
	var uLocal_9148 = 3;
	var uLocal_9149 = 500;
	var uLocal_9150 = 10000;
	var uLocal_9151 = 0;
	var uLocal_9152 = 3;
	var uLocal_9153 = 500;
	var uLocal_9154 = 10000;
	var uLocal_9155 = 0;
	var uLocal_9156 = 3;
	var uLocal_9157 = 500;
	var uLocal_9158 = 10000;
	var uLocal_9159 = 0;
	var uLocal_9160 = 3;
	var uLocal_9161 = 500;
	var uLocal_9162 = 10000;
	var uLocal_9163 = 0;
	var uLocal_9164 = 3;
	var uLocal_9165 = 500;
	var uLocal_9166 = 10000;
	var uLocal_9167 = 0;
	var uLocal_9168 = 3;
	var uLocal_9169 = 500;
	var uLocal_9170 = 10000;
	var uLocal_9171 = 0;
	var uLocal_9172 = 3;
	var uLocal_9173 = 500;
	var uLocal_9174 = 10000;
	var uLocal_9175 = 0;
	var uLocal_9176 = 3;
	var uLocal_9177 = 500;
	var uLocal_9178 = 10000;
	var uLocal_9179 = 0;
	var uLocal_9180 = 3;
	var uLocal_9181 = 500;
	var uLocal_9182 = 10000;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 3;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = -1;
	var uLocal_9196 = 0;
	var uLocal_9197 = 5;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 10;
	var uLocal_9209 = 3;
	var uLocal_9210 = 500;
	var uLocal_9211 = 10000;
	var uLocal_9212 = 0;
	var uLocal_9213 = 3;
	var uLocal_9214 = 500;
	var uLocal_9215 = 10000;
	var uLocal_9216 = 0;
	var uLocal_9217 = 3;
	var uLocal_9218 = 500;
	var uLocal_9219 = 10000;
	var uLocal_9220 = 0;
	var uLocal_9221 = 3;
	var uLocal_9222 = 500;
	var uLocal_9223 = 10000;
	var uLocal_9224 = 0;
	var uLocal_9225 = 3;
	var uLocal_9226 = 500;
	var uLocal_9227 = 10000;
	var uLocal_9228 = 0;
	var uLocal_9229 = 3;
	var uLocal_9230 = 500;
	var uLocal_9231 = 10000;
	var uLocal_9232 = 0;
	var uLocal_9233 = 3;
	var uLocal_9234 = 500;
	var uLocal_9235 = 10000;
	var uLocal_9236 = 0;
	var uLocal_9237 = 3;
	var uLocal_9238 = 500;
	var uLocal_9239 = 10000;
	var uLocal_9240 = 0;
	var uLocal_9241 = 3;
	var uLocal_9242 = 500;
	var uLocal_9243 = 10000;
	var uLocal_9244 = 0;
	var uLocal_9245 = 3;
	var uLocal_9246 = 500;
	var uLocal_9247 = 10000;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 3;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = -1;
	var uLocal_9261 = 0;
	var uLocal_9262 = 5;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 10;
	var uLocal_9274 = 3;
	var uLocal_9275 = 500;
	var uLocal_9276 = 10000;
	var uLocal_9277 = 0;
	var uLocal_9278 = 3;
	var uLocal_9279 = 500;
	var uLocal_9280 = 10000;
	var uLocal_9281 = 0;
	var uLocal_9282 = 3;
	var uLocal_9283 = 500;
	var uLocal_9284 = 10000;
	var uLocal_9285 = 0;
	var uLocal_9286 = 3;
	var uLocal_9287 = 500;
	var uLocal_9288 = 10000;
	var uLocal_9289 = 0;
	var uLocal_9290 = 3;
	var uLocal_9291 = 500;
	var uLocal_9292 = 10000;
	var uLocal_9293 = 0;
	var uLocal_9294 = 3;
	var uLocal_9295 = 500;
	var uLocal_9296 = 10000;
	var uLocal_9297 = 0;
	var uLocal_9298 = 3;
	var uLocal_9299 = 500;
	var uLocal_9300 = 10000;
	var uLocal_9301 = 0;
	var uLocal_9302 = 3;
	var uLocal_9303 = 500;
	var uLocal_9304 = 10000;
	var uLocal_9305 = 0;
	var uLocal_9306 = 3;
	var uLocal_9307 = 500;
	var uLocal_9308 = 10000;
	var uLocal_9309 = 0;
	var uLocal_9310 = 3;
	var uLocal_9311 = 500;
	var uLocal_9312 = 10000;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 3;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = -1;
	var uLocal_9326 = 0;
	var uLocal_9327 = 5;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 10;
	var uLocal_9339 = 3;
	var uLocal_9340 = 500;
	var uLocal_9341 = 10000;
	var uLocal_9342 = 0;
	var uLocal_9343 = 3;
	var uLocal_9344 = 500;
	var uLocal_9345 = 10000;
	var uLocal_9346 = 0;
	var uLocal_9347 = 3;
	var uLocal_9348 = 500;
	var uLocal_9349 = 10000;
	var uLocal_9350 = 0;
	var uLocal_9351 = 3;
	var uLocal_9352 = 500;
	var uLocal_9353 = 10000;
	var uLocal_9354 = 0;
	var uLocal_9355 = 3;
	var uLocal_9356 = 500;
	var uLocal_9357 = 10000;
	var uLocal_9358 = 0;
	var uLocal_9359 = 3;
	var uLocal_9360 = 500;
	var uLocal_9361 = 10000;
	var uLocal_9362 = 0;
	var uLocal_9363 = 3;
	var uLocal_9364 = 500;
	var uLocal_9365 = 10000;
	var uLocal_9366 = 0;
	var uLocal_9367 = 3;
	var uLocal_9368 = 500;
	var uLocal_9369 = 10000;
	var uLocal_9370 = 0;
	var uLocal_9371 = 3;
	var uLocal_9372 = 500;
	var uLocal_9373 = 10000;
	var uLocal_9374 = 0;
	var uLocal_9375 = 3;
	var uLocal_9376 = 500;
	var uLocal_9377 = 10000;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 3;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = -1;
	var uLocal_9391 = 0;
	var uLocal_9392 = 5;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 10;
	var uLocal_9404 = 3;
	var uLocal_9405 = 500;
	var uLocal_9406 = 10000;
	var uLocal_9407 = 0;
	var uLocal_9408 = 3;
	var uLocal_9409 = 500;
	var uLocal_9410 = 10000;
	var uLocal_9411 = 0;
	var uLocal_9412 = 3;
	var uLocal_9413 = 500;
	var uLocal_9414 = 10000;
	var uLocal_9415 = 0;
	var uLocal_9416 = 3;
	var uLocal_9417 = 500;
	var uLocal_9418 = 10000;
	var uLocal_9419 = 0;
	var uLocal_9420 = 3;
	var uLocal_9421 = 500;
	var uLocal_9422 = 10000;
	var uLocal_9423 = 0;
	var uLocal_9424 = 3;
	var uLocal_9425 = 500;
	var uLocal_9426 = 10000;
	var uLocal_9427 = 0;
	var uLocal_9428 = 3;
	var uLocal_9429 = 500;
	var uLocal_9430 = 10000;
	var uLocal_9431 = 0;
	var uLocal_9432 = 3;
	var uLocal_9433 = 500;
	var uLocal_9434 = 10000;
	var uLocal_9435 = 0;
	var uLocal_9436 = 3;
	var uLocal_9437 = 500;
	var uLocal_9438 = 10000;
	var uLocal_9439 = 0;
	var uLocal_9440 = 3;
	var uLocal_9441 = 500;
	var uLocal_9442 = 10000;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 3;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = -1;
	var uLocal_9456 = 0;
	var uLocal_9457 = 5;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 10;
	var uLocal_9469 = 3;
	var uLocal_9470 = 500;
	var uLocal_9471 = 10000;
	var uLocal_9472 = 0;
	var uLocal_9473 = 3;
	var uLocal_9474 = 500;
	var uLocal_9475 = 10000;
	var uLocal_9476 = 0;
	var uLocal_9477 = 3;
	var uLocal_9478 = 500;
	var uLocal_9479 = 10000;
	var uLocal_9480 = 0;
	var uLocal_9481 = 3;
	var uLocal_9482 = 500;
	var uLocal_9483 = 10000;
	var uLocal_9484 = 0;
	var uLocal_9485 = 3;
	var uLocal_9486 = 500;
	var uLocal_9487 = 10000;
	var uLocal_9488 = 0;
	var uLocal_9489 = 3;
	var uLocal_9490 = 500;
	var uLocal_9491 = 10000;
	var uLocal_9492 = 0;
	var uLocal_9493 = 3;
	var uLocal_9494 = 500;
	var uLocal_9495 = 10000;
	var uLocal_9496 = 0;
	var uLocal_9497 = 3;
	var uLocal_9498 = 500;
	var uLocal_9499 = 10000;
	var uLocal_9500 = 0;
	var uLocal_9501 = 3;
	var uLocal_9502 = 500;
	var uLocal_9503 = 10000;
	var uLocal_9504 = 0;
	var uLocal_9505 = 3;
	var uLocal_9506 = 500;
	var uLocal_9507 = 10000;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 3;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = -1;
	var uLocal_9521 = 0;
	var uLocal_9522 = 5;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 10;
	var uLocal_9534 = 3;
	var uLocal_9535 = 500;
	var uLocal_9536 = 10000;
	var uLocal_9537 = 0;
	var uLocal_9538 = 3;
	var uLocal_9539 = 500;
	var uLocal_9540 = 10000;
	var uLocal_9541 = 0;
	var uLocal_9542 = 3;
	var uLocal_9543 = 500;
	var uLocal_9544 = 10000;
	var uLocal_9545 = 0;
	var uLocal_9546 = 3;
	var uLocal_9547 = 500;
	var uLocal_9548 = 10000;
	var uLocal_9549 = 0;
	var uLocal_9550 = 3;
	var uLocal_9551 = 500;
	var uLocal_9552 = 10000;
	var uLocal_9553 = 0;
	var uLocal_9554 = 3;
	var uLocal_9555 = 500;
	var uLocal_9556 = 10000;
	var uLocal_9557 = 0;
	var uLocal_9558 = 3;
	var uLocal_9559 = 500;
	var uLocal_9560 = 10000;
	var uLocal_9561 = 0;
	var uLocal_9562 = 3;
	var uLocal_9563 = 500;
	var uLocal_9564 = 10000;
	var uLocal_9565 = 0;
	var uLocal_9566 = 3;
	var uLocal_9567 = 500;
	var uLocal_9568 = 10000;
	var uLocal_9569 = 0;
	var uLocal_9570 = 3;
	var uLocal_9571 = 500;
	var uLocal_9572 = 10000;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 3;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = -1;
	var uLocal_9586 = 0;
	var uLocal_9587 = 5;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 10;
	var uLocal_9599 = 3;
	var uLocal_9600 = 500;
	var uLocal_9601 = 10000;
	var uLocal_9602 = 0;
	var uLocal_9603 = 3;
	var uLocal_9604 = 500;
	var uLocal_9605 = 10000;
	var uLocal_9606 = 0;
	var uLocal_9607 = 3;
	var uLocal_9608 = 500;
	var uLocal_9609 = 10000;
	var uLocal_9610 = 0;
	var uLocal_9611 = 3;
	var uLocal_9612 = 500;
	var uLocal_9613 = 10000;
	var uLocal_9614 = 0;
	var uLocal_9615 = 3;
	var uLocal_9616 = 500;
	var uLocal_9617 = 10000;
	var uLocal_9618 = 0;
	var uLocal_9619 = 3;
	var uLocal_9620 = 500;
	var uLocal_9621 = 10000;
	var uLocal_9622 = 0;
	var uLocal_9623 = 3;
	var uLocal_9624 = 500;
	var uLocal_9625 = 10000;
	var uLocal_9626 = 0;
	var uLocal_9627 = 3;
	var uLocal_9628 = 500;
	var uLocal_9629 = 10000;
	var uLocal_9630 = 0;
	var uLocal_9631 = 3;
	var uLocal_9632 = 500;
	var uLocal_9633 = 10000;
	var uLocal_9634 = 0;
	var uLocal_9635 = 3;
	var uLocal_9636 = 500;
	var uLocal_9637 = 10000;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 3;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = -1;
	var uLocal_9651 = 0;
	var uLocal_9652 = 5;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 10;
	var uLocal_9664 = 3;
	var uLocal_9665 = 500;
	var uLocal_9666 = 10000;
	var uLocal_9667 = 0;
	var uLocal_9668 = 3;
	var uLocal_9669 = 500;
	var uLocal_9670 = 10000;
	var uLocal_9671 = 0;
	var uLocal_9672 = 3;
	var uLocal_9673 = 500;
	var uLocal_9674 = 10000;
	var uLocal_9675 = 0;
	var uLocal_9676 = 3;
	var uLocal_9677 = 500;
	var uLocal_9678 = 10000;
	var uLocal_9679 = 0;
	var uLocal_9680 = 3;
	var uLocal_9681 = 500;
	var uLocal_9682 = 10000;
	var uLocal_9683 = 0;
	var uLocal_9684 = 3;
	var uLocal_9685 = 500;
	var uLocal_9686 = 10000;
	var uLocal_9687 = 0;
	var uLocal_9688 = 3;
	var uLocal_9689 = 500;
	var uLocal_9690 = 10000;
	var uLocal_9691 = 0;
	var uLocal_9692 = 3;
	var uLocal_9693 = 500;
	var uLocal_9694 = 10000;
	var uLocal_9695 = 0;
	var uLocal_9696 = 3;
	var uLocal_9697 = 500;
	var uLocal_9698 = 10000;
	var uLocal_9699 = 0;
	var uLocal_9700 = 3;
	var uLocal_9701 = 500;
	var uLocal_9702 = 10000;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 3;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = -1;
	var uLocal_9716 = 0;
	var uLocal_9717 = 5;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 10;
	var uLocal_9729 = 3;
	var uLocal_9730 = 500;
	var uLocal_9731 = 10000;
	var uLocal_9732 = 0;
	var uLocal_9733 = 3;
	var uLocal_9734 = 500;
	var uLocal_9735 = 10000;
	var uLocal_9736 = 0;
	var uLocal_9737 = 3;
	var uLocal_9738 = 500;
	var uLocal_9739 = 10000;
	var uLocal_9740 = 0;
	var uLocal_9741 = 3;
	var uLocal_9742 = 500;
	var uLocal_9743 = 10000;
	var uLocal_9744 = 0;
	var uLocal_9745 = 3;
	var uLocal_9746 = 500;
	var uLocal_9747 = 10000;
	var uLocal_9748 = 0;
	var uLocal_9749 = 3;
	var uLocal_9750 = 500;
	var uLocal_9751 = 10000;
	var uLocal_9752 = 0;
	var uLocal_9753 = 3;
	var uLocal_9754 = 500;
	var uLocal_9755 = 10000;
	var uLocal_9756 = 0;
	var uLocal_9757 = 3;
	var uLocal_9758 = 500;
	var uLocal_9759 = 10000;
	var uLocal_9760 = 0;
	var uLocal_9761 = 3;
	var uLocal_9762 = 500;
	var uLocal_9763 = 10000;
	var uLocal_9764 = 0;
	var uLocal_9765 = 3;
	var uLocal_9766 = 500;
	var uLocal_9767 = 10000;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 3;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = -1;
	var uLocal_9781 = 0;
	var uLocal_9782 = 5;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 10;
	var uLocal_9794 = 3;
	var uLocal_9795 = 500;
	var uLocal_9796 = 10000;
	var uLocal_9797 = 0;
	var uLocal_9798 = 3;
	var uLocal_9799 = 500;
	var uLocal_9800 = 10000;
	var uLocal_9801 = 0;
	var uLocal_9802 = 3;
	var uLocal_9803 = 500;
	var uLocal_9804 = 10000;
	var uLocal_9805 = 0;
	var uLocal_9806 = 3;
	var uLocal_9807 = 500;
	var uLocal_9808 = 10000;
	var uLocal_9809 = 0;
	var uLocal_9810 = 3;
	var uLocal_9811 = 500;
	var uLocal_9812 = 10000;
	var uLocal_9813 = 0;
	var uLocal_9814 = 3;
	var uLocal_9815 = 500;
	var uLocal_9816 = 10000;
	var uLocal_9817 = 0;
	var uLocal_9818 = 3;
	var uLocal_9819 = 500;
	var uLocal_9820 = 10000;
	var uLocal_9821 = 0;
	var uLocal_9822 = 3;
	var uLocal_9823 = 500;
	var uLocal_9824 = 10000;
	var uLocal_9825 = 0;
	var uLocal_9826 = 3;
	var uLocal_9827 = 500;
	var uLocal_9828 = 10000;
	var uLocal_9829 = 0;
	var uLocal_9830 = 3;
	var uLocal_9831 = 500;
	var uLocal_9832 = 10000;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 3;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = -1;
	var uLocal_9846 = 0;
	var uLocal_9847 = 5;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 10;
	var uLocal_9859 = 3;
	var uLocal_9860 = 500;
	var uLocal_9861 = 10000;
	var uLocal_9862 = 0;
	var uLocal_9863 = 3;
	var uLocal_9864 = 500;
	var uLocal_9865 = 10000;
	var uLocal_9866 = 0;
	var uLocal_9867 = 3;
	var uLocal_9868 = 500;
	var uLocal_9869 = 10000;
	var uLocal_9870 = 0;
	var uLocal_9871 = 3;
	var uLocal_9872 = 500;
	var uLocal_9873 = 10000;
	var uLocal_9874 = 0;
	var uLocal_9875 = 3;
	var uLocal_9876 = 500;
	var uLocal_9877 = 10000;
	var uLocal_9878 = 0;
	var uLocal_9879 = 3;
	var uLocal_9880 = 500;
	var uLocal_9881 = 10000;
	var uLocal_9882 = 0;
	var uLocal_9883 = 3;
	var uLocal_9884 = 500;
	var uLocal_9885 = 10000;
	var uLocal_9886 = 0;
	var uLocal_9887 = 3;
	var uLocal_9888 = 500;
	var uLocal_9889 = 10000;
	var uLocal_9890 = 0;
	var uLocal_9891 = 3;
	var uLocal_9892 = 500;
	var uLocal_9893 = 10000;
	var uLocal_9894 = 0;
	var uLocal_9895 = 3;
	var uLocal_9896 = 500;
	var uLocal_9897 = 10000;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 3;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = -1;
	var uLocal_9911 = 0;
	var uLocal_9912 = 5;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 10;
	var uLocal_9924 = 3;
	var uLocal_9925 = 500;
	var uLocal_9926 = 10000;
	var uLocal_9927 = 0;
	var uLocal_9928 = 3;
	var uLocal_9929 = 500;
	var uLocal_9930 = 10000;
	var uLocal_9931 = 0;
	var uLocal_9932 = 3;
	var uLocal_9933 = 500;
	var uLocal_9934 = 10000;
	var uLocal_9935 = 0;
	var uLocal_9936 = 3;
	var uLocal_9937 = 500;
	var uLocal_9938 = 10000;
	var uLocal_9939 = 0;
	var uLocal_9940 = 3;
	var uLocal_9941 = 500;
	var uLocal_9942 = 10000;
	var uLocal_9943 = 0;
	var uLocal_9944 = 3;
	var uLocal_9945 = 500;
	var uLocal_9946 = 10000;
	var uLocal_9947 = 0;
	var uLocal_9948 = 3;
	var uLocal_9949 = 500;
	var uLocal_9950 = 10000;
	var uLocal_9951 = 0;
	var uLocal_9952 = 3;
	var uLocal_9953 = 500;
	var uLocal_9954 = 10000;
	var uLocal_9955 = 0;
	var uLocal_9956 = 3;
	var uLocal_9957 = 500;
	var uLocal_9958 = 10000;
	var uLocal_9959 = 0;
	var uLocal_9960 = 3;
	var uLocal_9961 = 500;
	var uLocal_9962 = 10000;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 3;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = -1;
	var uLocal_9976 = 0;
	var uLocal_9977 = 5;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 10;
	var uLocal_9989 = 3;
	var uLocal_9990 = 500;
	var uLocal_9991 = 10000;
	var uLocal_9992 = 0;
	var uLocal_9993 = 3;
	var uLocal_9994 = 500;
	var uLocal_9995 = 10000;
	var uLocal_9996 = 0;
	var uLocal_9997 = 3;
	var uLocal_9998 = 500;
	var uLocal_9999 = 10000;
	var uLocal_10000 = 0;
	var uLocal_10001 = 3;
	var uLocal_10002 = 500;
	var uLocal_10003 = 10000;
	var uLocal_10004 = 0;
	var uLocal_10005 = 3;
	var uLocal_10006 = 500;
	var uLocal_10007 = 10000;
	var uLocal_10008 = 0;
	var uLocal_10009 = 3;
	var uLocal_10010 = 500;
	var uLocal_10011 = 10000;
	var uLocal_10012 = 0;
	var uLocal_10013 = 3;
	var uLocal_10014 = 500;
	var uLocal_10015 = 10000;
	var uLocal_10016 = 0;
	var uLocal_10017 = 3;
	var uLocal_10018 = 500;
	var uLocal_10019 = 10000;
	var uLocal_10020 = 0;
	var uLocal_10021 = 3;
	var uLocal_10022 = 500;
	var uLocal_10023 = 10000;
	var uLocal_10024 = 0;
	var uLocal_10025 = 3;
	var uLocal_10026 = 500;
	var uLocal_10027 = 10000;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 3;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = -1;
	var uLocal_10041 = 0;
	var uLocal_10042 = 5;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 10;
	var uLocal_10054 = 3;
	var uLocal_10055 = 500;
	var uLocal_10056 = 10000;
	var uLocal_10057 = 0;
	var uLocal_10058 = 3;
	var uLocal_10059 = 500;
	var uLocal_10060 = 10000;
	var uLocal_10061 = 0;
	var uLocal_10062 = 3;
	var uLocal_10063 = 500;
	var uLocal_10064 = 10000;
	var uLocal_10065 = 0;
	var uLocal_10066 = 3;
	var uLocal_10067 = 500;
	var uLocal_10068 = 10000;
	var uLocal_10069 = 0;
	var uLocal_10070 = 3;
	var uLocal_10071 = 500;
	var uLocal_10072 = 10000;
	var uLocal_10073 = 0;
	var uLocal_10074 = 3;
	var uLocal_10075 = 500;
	var uLocal_10076 = 10000;
	var uLocal_10077 = 0;
	var uLocal_10078 = 3;
	var uLocal_10079 = 500;
	var uLocal_10080 = 10000;
	var uLocal_10081 = 0;
	var uLocal_10082 = 3;
	var uLocal_10083 = 500;
	var uLocal_10084 = 10000;
	var uLocal_10085 = 0;
	var uLocal_10086 = 3;
	var uLocal_10087 = 500;
	var uLocal_10088 = 10000;
	var uLocal_10089 = 0;
	var uLocal_10090 = 3;
	var uLocal_10091 = 500;
	var uLocal_10092 = 10000;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 3;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = -1;
	var uLocal_10106 = 0;
	var uLocal_10107 = 5;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 10;
	var uLocal_10119 = 3;
	var uLocal_10120 = 500;
	var uLocal_10121 = 10000;
	var uLocal_10122 = 0;
	var uLocal_10123 = 3;
	var uLocal_10124 = 500;
	var uLocal_10125 = 10000;
	var uLocal_10126 = 0;
	var uLocal_10127 = 3;
	var uLocal_10128 = 500;
	var uLocal_10129 = 10000;
	var uLocal_10130 = 0;
	var uLocal_10131 = 3;
	var uLocal_10132 = 500;
	var uLocal_10133 = 10000;
	var uLocal_10134 = 0;
	var uLocal_10135 = 3;
	var uLocal_10136 = 500;
	var uLocal_10137 = 10000;
	var uLocal_10138 = 0;
	var uLocal_10139 = 3;
	var uLocal_10140 = 500;
	var uLocal_10141 = 10000;
	var uLocal_10142 = 0;
	var uLocal_10143 = 3;
	var uLocal_10144 = 500;
	var uLocal_10145 = 10000;
	var uLocal_10146 = 0;
	var uLocal_10147 = 3;
	var uLocal_10148 = 500;
	var uLocal_10149 = 10000;
	var uLocal_10150 = 0;
	var uLocal_10151 = 3;
	var uLocal_10152 = 500;
	var uLocal_10153 = 10000;
	var uLocal_10154 = 0;
	var uLocal_10155 = 3;
	var uLocal_10156 = 500;
	var uLocal_10157 = 10000;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 3;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = -1;
	var uLocal_10171 = 0;
	var uLocal_10172 = 5;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 10;
	var uLocal_10184 = 3;
	var uLocal_10185 = 500;
	var uLocal_10186 = 10000;
	var uLocal_10187 = 0;
	var uLocal_10188 = 3;
	var uLocal_10189 = 500;
	var uLocal_10190 = 10000;
	var uLocal_10191 = 0;
	var uLocal_10192 = 3;
	var uLocal_10193 = 500;
	var uLocal_10194 = 10000;
	var uLocal_10195 = 0;
	var uLocal_10196 = 3;
	var uLocal_10197 = 500;
	var uLocal_10198 = 10000;
	var uLocal_10199 = 0;
	var uLocal_10200 = 3;
	var uLocal_10201 = 500;
	var uLocal_10202 = 10000;
	var uLocal_10203 = 0;
	var uLocal_10204 = 3;
	var uLocal_10205 = 500;
	var uLocal_10206 = 10000;
	var uLocal_10207 = 0;
	var uLocal_10208 = 3;
	var uLocal_10209 = 500;
	var uLocal_10210 = 10000;
	var uLocal_10211 = 0;
	var uLocal_10212 = 3;
	var uLocal_10213 = 500;
	var uLocal_10214 = 10000;
	var uLocal_10215 = 0;
	var uLocal_10216 = 3;
	var uLocal_10217 = 500;
	var uLocal_10218 = 10000;
	var uLocal_10219 = 0;
	var uLocal_10220 = 3;
	var uLocal_10221 = 500;
	var uLocal_10222 = 10000;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 3;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = -1;
	var uLocal_10236 = 0;
	var uLocal_10237 = 5;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 10;
	var uLocal_10249 = 3;
	var uLocal_10250 = 500;
	var uLocal_10251 = 10000;
	var uLocal_10252 = 0;
	var uLocal_10253 = 3;
	var uLocal_10254 = 500;
	var uLocal_10255 = 10000;
	var uLocal_10256 = 0;
	var uLocal_10257 = 3;
	var uLocal_10258 = 500;
	var uLocal_10259 = 10000;
	var uLocal_10260 = 0;
	var uLocal_10261 = 3;
	var uLocal_10262 = 500;
	var uLocal_10263 = 10000;
	var uLocal_10264 = 0;
	var uLocal_10265 = 3;
	var uLocal_10266 = 500;
	var uLocal_10267 = 10000;
	var uLocal_10268 = 0;
	var uLocal_10269 = 3;
	var uLocal_10270 = 500;
	var uLocal_10271 = 10000;
	var uLocal_10272 = 0;
	var uLocal_10273 = 3;
	var uLocal_10274 = 500;
	var uLocal_10275 = 10000;
	var uLocal_10276 = 0;
	var uLocal_10277 = 3;
	var uLocal_10278 = 500;
	var uLocal_10279 = 10000;
	var uLocal_10280 = 0;
	var uLocal_10281 = 3;
	var uLocal_10282 = 500;
	var uLocal_10283 = 10000;
	var uLocal_10284 = 0;
	var uLocal_10285 = 3;
	var uLocal_10286 = 500;
	var uLocal_10287 = 10000;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 3;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = -1;
	var uLocal_10301 = 0;
	var uLocal_10302 = 5;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 0;
	var uLocal_10313 = 10;
	var uLocal_10314 = 3;
	var uLocal_10315 = 500;
	var uLocal_10316 = 10000;
	var uLocal_10317 = 0;
	var uLocal_10318 = 3;
	var uLocal_10319 = 500;
	var uLocal_10320 = 10000;
	var uLocal_10321 = 0;
	var uLocal_10322 = 3;
	var uLocal_10323 = 500;
	var uLocal_10324 = 10000;
	var uLocal_10325 = 0;
	var uLocal_10326 = 3;
	var uLocal_10327 = 500;
	var uLocal_10328 = 10000;
	var uLocal_10329 = 0;
	var uLocal_10330 = 3;
	var uLocal_10331 = 500;
	var uLocal_10332 = 10000;
	var uLocal_10333 = 0;
	var uLocal_10334 = 3;
	var uLocal_10335 = 500;
	var uLocal_10336 = 10000;
	var uLocal_10337 = 0;
	var uLocal_10338 = 3;
	var uLocal_10339 = 500;
	var uLocal_10340 = 10000;
	var uLocal_10341 = 0;
	var uLocal_10342 = 3;
	var uLocal_10343 = 500;
	var uLocal_10344 = 10000;
	var uLocal_10345 = 0;
	var uLocal_10346 = 3;
	var uLocal_10347 = 500;
	var uLocal_10348 = 10000;
	var uLocal_10349 = 0;
	var uLocal_10350 = 3;
	var uLocal_10351 = 500;
	var uLocal_10352 = 10000;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 3;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = -1;
	var uLocal_10366 = 0;
	var uLocal_10367 = 5;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 10;
	var uLocal_10379 = 3;
	var uLocal_10380 = 500;
	var uLocal_10381 = 10000;
	var uLocal_10382 = 0;
	var uLocal_10383 = 3;
	var uLocal_10384 = 500;
	var uLocal_10385 = 10000;
	var uLocal_10386 = 0;
	var uLocal_10387 = 3;
	var uLocal_10388 = 500;
	var uLocal_10389 = 10000;
	var uLocal_10390 = 0;
	var uLocal_10391 = 3;
	var uLocal_10392 = 500;
	var uLocal_10393 = 10000;
	var uLocal_10394 = 0;
	var uLocal_10395 = 3;
	var uLocal_10396 = 500;
	var uLocal_10397 = 10000;
	var uLocal_10398 = 0;
	var uLocal_10399 = 3;
	var uLocal_10400 = 500;
	var uLocal_10401 = 10000;
	var uLocal_10402 = 0;
	var uLocal_10403 = 3;
	var uLocal_10404 = 500;
	var uLocal_10405 = 10000;
	var uLocal_10406 = 0;
	var uLocal_10407 = 3;
	var uLocal_10408 = 500;
	var uLocal_10409 = 10000;
	var uLocal_10410 = 0;
	var uLocal_10411 = 3;
	var uLocal_10412 = 500;
	var uLocal_10413 = 10000;
	var uLocal_10414 = 0;
	var uLocal_10415 = 3;
	var uLocal_10416 = 500;
	var uLocal_10417 = 10000;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 3;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = -1;
	var uLocal_10431 = 0;
	var uLocal_10432 = 5;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 10;
	var uLocal_10444 = 3;
	var uLocal_10445 = 500;
	var uLocal_10446 = 10000;
	var uLocal_10447 = 0;
	var uLocal_10448 = 3;
	var uLocal_10449 = 500;
	var uLocal_10450 = 10000;
	var uLocal_10451 = 0;
	var uLocal_10452 = 3;
	var uLocal_10453 = 500;
	var uLocal_10454 = 10000;
	var uLocal_10455 = 0;
	var uLocal_10456 = 3;
	var uLocal_10457 = 500;
	var uLocal_10458 = 10000;
	var uLocal_10459 = 0;
	var uLocal_10460 = 3;
	var uLocal_10461 = 500;
	var uLocal_10462 = 10000;
	var uLocal_10463 = 0;
	var uLocal_10464 = 3;
	var uLocal_10465 = 500;
	var uLocal_10466 = 10000;
	var uLocal_10467 = 0;
	var uLocal_10468 = 3;
	var uLocal_10469 = 500;
	var uLocal_10470 = 10000;
	var uLocal_10471 = 0;
	var uLocal_10472 = 3;
	var uLocal_10473 = 500;
	var uLocal_10474 = 10000;
	var uLocal_10475 = 0;
	var uLocal_10476 = 3;
	var uLocal_10477 = 500;
	var uLocal_10478 = 10000;
	var uLocal_10479 = 0;
	var uLocal_10480 = 3;
	var uLocal_10481 = 500;
	var uLocal_10482 = 10000;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 3;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = -1;
	var uLocal_10496 = 0;
	var uLocal_10497 = 5;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 10;
	var uLocal_10509 = 3;
	var uLocal_10510 = 500;
	var uLocal_10511 = 10000;
	var uLocal_10512 = 0;
	var uLocal_10513 = 3;
	var uLocal_10514 = 500;
	var uLocal_10515 = 10000;
	var uLocal_10516 = 0;
	var uLocal_10517 = 3;
	var uLocal_10518 = 500;
	var uLocal_10519 = 10000;
	var uLocal_10520 = 0;
	var uLocal_10521 = 3;
	var uLocal_10522 = 500;
	var uLocal_10523 = 10000;
	var uLocal_10524 = 0;
	var uLocal_10525 = 3;
	var uLocal_10526 = 500;
	var uLocal_10527 = 10000;
	var uLocal_10528 = 0;
	var uLocal_10529 = 3;
	var uLocal_10530 = 500;
	var uLocal_10531 = 10000;
	var uLocal_10532 = 0;
	var uLocal_10533 = 3;
	var uLocal_10534 = 500;
	var uLocal_10535 = 10000;
	var uLocal_10536 = 0;
	var uLocal_10537 = 3;
	var uLocal_10538 = 500;
	var uLocal_10539 = 10000;
	var uLocal_10540 = 0;
	var uLocal_10541 = 3;
	var uLocal_10542 = 500;
	var uLocal_10543 = 10000;
	var uLocal_10544 = 0;
	var uLocal_10545 = 3;
	var uLocal_10546 = 500;
	var uLocal_10547 = 10000;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 3;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = -1;
	var uLocal_10561 = 0;
	var uLocal_10562 = 5;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 10;
	var uLocal_10574 = 3;
	var uLocal_10575 = 500;
	var uLocal_10576 = 10000;
	var uLocal_10577 = 0;
	var uLocal_10578 = 3;
	var uLocal_10579 = 500;
	var uLocal_10580 = 10000;
	var uLocal_10581 = 0;
	var uLocal_10582 = 3;
	var uLocal_10583 = 500;
	var uLocal_10584 = 10000;
	var uLocal_10585 = 0;
	var uLocal_10586 = 3;
	var uLocal_10587 = 500;
	var uLocal_10588 = 10000;
	var uLocal_10589 = 0;
	var uLocal_10590 = 3;
	var uLocal_10591 = 500;
	var uLocal_10592 = 10000;
	var uLocal_10593 = 0;
	var uLocal_10594 = 3;
	var uLocal_10595 = 500;
	var uLocal_10596 = 10000;
	var uLocal_10597 = 0;
	var uLocal_10598 = 3;
	var uLocal_10599 = 500;
	var uLocal_10600 = 10000;
	var uLocal_10601 = 0;
	var uLocal_10602 = 3;
	var uLocal_10603 = 500;
	var uLocal_10604 = 10000;
	var uLocal_10605 = 0;
	var uLocal_10606 = 3;
	var uLocal_10607 = 500;
	var uLocal_10608 = 10000;
	var uLocal_10609 = 0;
	var uLocal_10610 = 3;
	var uLocal_10611 = 500;
	var uLocal_10612 = 10000;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 3;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = -1;
	var uLocal_10626 = 0;
	var uLocal_10627 = 5;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 10;
	var uLocal_10639 = 3;
	var uLocal_10640 = 500;
	var uLocal_10641 = 10000;
	var uLocal_10642 = 0;
	var uLocal_10643 = 3;
	var uLocal_10644 = 500;
	var uLocal_10645 = 10000;
	var uLocal_10646 = 0;
	var uLocal_10647 = 3;
	var uLocal_10648 = 500;
	var uLocal_10649 = 10000;
	var uLocal_10650 = 0;
	var uLocal_10651 = 3;
	var uLocal_10652 = 500;
	var uLocal_10653 = 10000;
	var uLocal_10654 = 0;
	var uLocal_10655 = 3;
	var uLocal_10656 = 500;
	var uLocal_10657 = 10000;
	var uLocal_10658 = 0;
	var uLocal_10659 = 3;
	var uLocal_10660 = 500;
	var uLocal_10661 = 10000;
	var uLocal_10662 = 0;
	var uLocal_10663 = 3;
	var uLocal_10664 = 500;
	var uLocal_10665 = 10000;
	var uLocal_10666 = 0;
	var uLocal_10667 = 3;
	var uLocal_10668 = 500;
	var uLocal_10669 = 10000;
	var uLocal_10670 = 0;
	var uLocal_10671 = 3;
	var uLocal_10672 = 500;
	var uLocal_10673 = 10000;
	var uLocal_10674 = 0;
	var uLocal_10675 = 3;
	var uLocal_10676 = 500;
	var uLocal_10677 = 10000;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 3;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = -1;
	var uLocal_10691 = 0;
	var uLocal_10692 = 5;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 10;
	var uLocal_10704 = 3;
	var uLocal_10705 = 500;
	var uLocal_10706 = 10000;
	var uLocal_10707 = 0;
	var uLocal_10708 = 3;
	var uLocal_10709 = 500;
	var uLocal_10710 = 10000;
	var uLocal_10711 = 0;
	var uLocal_10712 = 3;
	var uLocal_10713 = 500;
	var uLocal_10714 = 10000;
	var uLocal_10715 = 0;
	var uLocal_10716 = 3;
	var uLocal_10717 = 500;
	var uLocal_10718 = 10000;
	var uLocal_10719 = 0;
	var uLocal_10720 = 3;
	var uLocal_10721 = 500;
	var uLocal_10722 = 10000;
	var uLocal_10723 = 0;
	var uLocal_10724 = 3;
	var uLocal_10725 = 500;
	var uLocal_10726 = 10000;
	var uLocal_10727 = 0;
	var uLocal_10728 = 3;
	var uLocal_10729 = 500;
	var uLocal_10730 = 10000;
	var uLocal_10731 = 0;
	var uLocal_10732 = 3;
	var uLocal_10733 = 500;
	var uLocal_10734 = 10000;
	var uLocal_10735 = 0;
	var uLocal_10736 = 3;
	var uLocal_10737 = 500;
	var uLocal_10738 = 10000;
	var uLocal_10739 = 0;
	var uLocal_10740 = 3;
	var uLocal_10741 = 500;
	var uLocal_10742 = 10000;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 3;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = -1;
	var uLocal_10756 = 0;
	var uLocal_10757 = 5;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 10;
	var uLocal_10769 = 3;
	var uLocal_10770 = 500;
	var uLocal_10771 = 10000;
	var uLocal_10772 = 0;
	var uLocal_10773 = 3;
	var uLocal_10774 = 500;
	var uLocal_10775 = 10000;
	var uLocal_10776 = 0;
	var uLocal_10777 = 3;
	var uLocal_10778 = 500;
	var uLocal_10779 = 10000;
	var uLocal_10780 = 0;
	var uLocal_10781 = 3;
	var uLocal_10782 = 500;
	var uLocal_10783 = 10000;
	var uLocal_10784 = 0;
	var uLocal_10785 = 3;
	var uLocal_10786 = 500;
	var uLocal_10787 = 10000;
	var uLocal_10788 = 0;
	var uLocal_10789 = 3;
	var uLocal_10790 = 500;
	var uLocal_10791 = 10000;
	var uLocal_10792 = 0;
	var uLocal_10793 = 3;
	var uLocal_10794 = 500;
	var uLocal_10795 = 10000;
	var uLocal_10796 = 0;
	var uLocal_10797 = 3;
	var uLocal_10798 = 500;
	var uLocal_10799 = 10000;
	var uLocal_10800 = 0;
	var uLocal_10801 = 3;
	var uLocal_10802 = 500;
	var uLocal_10803 = 10000;
	var uLocal_10804 = 0;
	var uLocal_10805 = 3;
	var uLocal_10806 = 500;
	var uLocal_10807 = 10000;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 3;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = -1;
	var uLocal_10821 = 0;
	var uLocal_10822 = 5;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 10;
	var uLocal_10834 = 3;
	var uLocal_10835 = 500;
	var uLocal_10836 = 10000;
	var uLocal_10837 = 0;
	var uLocal_10838 = 3;
	var uLocal_10839 = 500;
	var uLocal_10840 = 10000;
	var uLocal_10841 = 0;
	var uLocal_10842 = 3;
	var uLocal_10843 = 500;
	var uLocal_10844 = 10000;
	var uLocal_10845 = 0;
	var uLocal_10846 = 3;
	var uLocal_10847 = 500;
	var uLocal_10848 = 10000;
	var uLocal_10849 = 0;
	var uLocal_10850 = 3;
	var uLocal_10851 = 500;
	var uLocal_10852 = 10000;
	var uLocal_10853 = 0;
	var uLocal_10854 = 3;
	var uLocal_10855 = 500;
	var uLocal_10856 = 10000;
	var uLocal_10857 = 0;
	var uLocal_10858 = 3;
	var uLocal_10859 = 500;
	var uLocal_10860 = 10000;
	var uLocal_10861 = 0;
	var uLocal_10862 = 3;
	var uLocal_10863 = 500;
	var uLocal_10864 = 10000;
	var uLocal_10865 = 0;
	var uLocal_10866 = 3;
	var uLocal_10867 = 500;
	var uLocal_10868 = 10000;
	var uLocal_10869 = 0;
	var uLocal_10870 = 3;
	var uLocal_10871 = 500;
	var uLocal_10872 = 10000;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 3;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = -1;
	var uLocal_10886 = 0;
	var uLocal_10887 = 5;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 10;
	var uLocal_10899 = 3;
	var uLocal_10900 = 500;
	var uLocal_10901 = 10000;
	var uLocal_10902 = 0;
	var uLocal_10903 = 3;
	var uLocal_10904 = 500;
	var uLocal_10905 = 10000;
	var uLocal_10906 = 0;
	var uLocal_10907 = 3;
	var uLocal_10908 = 500;
	var uLocal_10909 = 10000;
	var uLocal_10910 = 0;
	var uLocal_10911 = 3;
	var uLocal_10912 = 500;
	var uLocal_10913 = 10000;
	var uLocal_10914 = 0;
	var uLocal_10915 = 3;
	var uLocal_10916 = 500;
	var uLocal_10917 = 10000;
	var uLocal_10918 = 0;
	var uLocal_10919 = 3;
	var uLocal_10920 = 500;
	var uLocal_10921 = 10000;
	var uLocal_10922 = 0;
	var uLocal_10923 = 3;
	var uLocal_10924 = 500;
	var uLocal_10925 = 10000;
	var uLocal_10926 = 0;
	var uLocal_10927 = 3;
	var uLocal_10928 = 500;
	var uLocal_10929 = 10000;
	var uLocal_10930 = 0;
	var uLocal_10931 = 3;
	var uLocal_10932 = 500;
	var uLocal_10933 = 10000;
	var uLocal_10934 = 0;
	var uLocal_10935 = 3;
	var uLocal_10936 = 500;
	var uLocal_10937 = 10000;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 3;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = -1;
	var uLocal_10951 = 0;
	var uLocal_10952 = 5;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 10;
	var uLocal_10964 = 3;
	var uLocal_10965 = 500;
	var uLocal_10966 = 10000;
	var uLocal_10967 = 0;
	var uLocal_10968 = 3;
	var uLocal_10969 = 500;
	var uLocal_10970 = 10000;
	var uLocal_10971 = 0;
	var uLocal_10972 = 3;
	var uLocal_10973 = 500;
	var uLocal_10974 = 10000;
	var uLocal_10975 = 0;
	var uLocal_10976 = 3;
	var uLocal_10977 = 500;
	var uLocal_10978 = 10000;
	var uLocal_10979 = 0;
	var uLocal_10980 = 3;
	var uLocal_10981 = 500;
	var uLocal_10982 = 10000;
	var uLocal_10983 = 0;
	var uLocal_10984 = 3;
	var uLocal_10985 = 500;
	var uLocal_10986 = 10000;
	var uLocal_10987 = 0;
	var uLocal_10988 = 3;
	var uLocal_10989 = 500;
	var uLocal_10990 = 10000;
	var uLocal_10991 = 0;
	var uLocal_10992 = 3;
	var uLocal_10993 = 500;
	var uLocal_10994 = 10000;
	var uLocal_10995 = 0;
	var uLocal_10996 = 3;
	var uLocal_10997 = 500;
	var uLocal_10998 = 10000;
	var uLocal_10999 = 0;
	var uLocal_11000 = 3;
	var uLocal_11001 = 500;
	var uLocal_11002 = 10000;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 1;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 65;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 1097859072;
	var uLocal_11801 = 1101004800;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 4;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 40;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = 0;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = 0;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = 0;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = 0;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 0;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 40;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 0;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 60;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 0;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 0;
	var uLocal_13635 = 0;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 0;
	var uLocal_13950 = 0;
	var uLocal_13951 = 0;
	var uLocal_13952 = 0;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 0;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 0;
	var uLocal_13968 = 0;
	var uLocal_13969 = 0;
	var uLocal_13970 = 0;
	var uLocal_13971 = 0;
	var uLocal_13972 = 0;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = 0;
	var uLocal_13986 = 0;
	var uLocal_13987 = 0;
	var uLocal_13988 = 0;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 0;
	var uLocal_14004 = 0;
	var uLocal_14005 = 0;
	var uLocal_14006 = 0;
	var uLocal_14007 = 0;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 0;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 0;
	var uLocal_14022 = 0;
	var uLocal_14023 = 0;
	var uLocal_14024 = 0;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = 0;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = 0;
	var uLocal_14036 = 0;
	var uLocal_14037 = 0;
	var uLocal_14038 = 0;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 0;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 0;
	var uLocal_14058 = 0;
	var uLocal_14059 = 0;
	var uLocal_14060 = 0;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = 0;
	var uLocal_14072 = 0;
	var uLocal_14073 = 0;
	var uLocal_14074 = 0;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = 0;
	var uLocal_14096 = 0;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 0;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 0;
	var uLocal_14110 = 0;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
	var uLocal_14142 = 0;
	var uLocal_14143 = 15;
	var uLocal_14144 = 0;
	var uLocal_14145 = 0;
	var uLocal_14146 = 0;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = 0;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = 0;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = 0;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = 0;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 0;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 0;
	var uLocal_14218 = 0;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 0;
	var uLocal_14233 = 0;
	var uLocal_14234 = 0;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = 0;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 0;
	var uLocal_14251 = 0;
	var uLocal_14252 = 0;
	var uLocal_14253 = 0;
	var uLocal_14254 = 0;
	var uLocal_14255 = 0;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 0;
	var uLocal_14268 = 0;
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = 0;
	var uLocal_14273 = 0;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 0;
	var uLocal_14287 = 0;
	var uLocal_14288 = 0;
	var uLocal_14289 = 0;
	var uLocal_14290 = 0;
	var uLocal_14291 = 0;
	var uLocal_14292 = 0;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = 0;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = 0;
	var uLocal_14308 = 0;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 0;
	var uLocal_14322 = 0;
	var uLocal_14323 = 0;
	var uLocal_14324 = 0;
	var uLocal_14325 = 0;
	var uLocal_14326 = 0;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 0;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 0;
	var uLocal_14344 = 0;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 0;
	var uLocal_14362 = 0;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 0;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 0;
	var uLocal_14380 = 0;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = 0;
	var uLocal_14384 = 10;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 0;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 0;
	var uLocal_14395 = 0;
	var uLocal_14396 = 0;
	var uLocal_14397 = 0;
	var uLocal_14398 = 0;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 0;
	var uLocal_14413 = 0;
	var uLocal_14414 = -1;
	var uLocal_14415 = 0;
	var uLocal_14416 = 0;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 65;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 0;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 0;
	var uLocal_14434 = 0;
	var uLocal_14435 = 0;
	var uLocal_14436 = 0;
	var uLocal_14437 = -1569615261;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 0;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 0;
	var uLocal_14448 = 0;
	var uLocal_14449 = 0;
	var uLocal_14450 = -1569615261;
	var uLocal_14451 = 0;
	var uLocal_14452 = 0;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = 0;
	var uLocal_14462 = 0;
	var uLocal_14463 = -1569615261;
	var uLocal_14464 = 0;
	var uLocal_14465 = 0;
	var uLocal_14466 = 0;
	var uLocal_14467 = 0;
	var uLocal_14468 = 0;
	var uLocal_14469 = 0;
	var uLocal_14470 = 0;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = 0;
	var uLocal_14475 = 0;
	var uLocal_14476 = -1569615261;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = 0;
	var uLocal_14480 = 0;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 0;
	var uLocal_14484 = 0;
	var uLocal_14485 = 0;
	var uLocal_14486 = 0;
	var uLocal_14487 = 0;
	var uLocal_14488 = 0;
	var uLocal_14489 = -1569615261;
	var uLocal_14490 = 0;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 0;
	var uLocal_14499 = 0;
	var uLocal_14500 = 0;
	var uLocal_14501 = 0;
	var uLocal_14502 = -1569615261;
	var uLocal_14503 = 0;
	var uLocal_14504 = 0;
	var uLocal_14505 = 0;
	var uLocal_14506 = 0;
	var uLocal_14507 = 0;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = 0;
	var uLocal_14515 = -1569615261;
	var uLocal_14516 = 0;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 0;
	var uLocal_14520 = 0;
	var uLocal_14521 = 0;
	var uLocal_14522 = 0;
	var uLocal_14523 = 0;
	var uLocal_14524 = 0;
	var uLocal_14525 = 0;
	var uLocal_14526 = 0;
	var uLocal_14527 = 0;
	var uLocal_14528 = -1569615261;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 0;
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 0;
	var uLocal_14538 = 0;
	var uLocal_14539 = 0;
	var uLocal_14540 = 0;
	var uLocal_14541 = -1569615261;
	var uLocal_14542 = 0;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = 0;
	var uLocal_14553 = 0;
	var uLocal_14554 = -1569615261;
	var uLocal_14555 = 0;
	var uLocal_14556 = 0;
	var uLocal_14557 = 0;
	var uLocal_14558 = 0;
	var uLocal_14559 = 0;
	var uLocal_14560 = 0;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = 0;
	var uLocal_14566 = 0;
	var uLocal_14567 = -1569615261;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 0;
	var uLocal_14571 = 0;
	var uLocal_14572 = 0;
	var uLocal_14573 = 0;
	var uLocal_14574 = 0;
	var uLocal_14575 = 0;
	var uLocal_14576 = 0;
	var uLocal_14577 = 0;
	var uLocal_14578 = 0;
	var uLocal_14579 = 0;
	var uLocal_14580 = -1569615261;
	var uLocal_14581 = 0;
	var uLocal_14582 = 0;
	var uLocal_14583 = 0;
	var uLocal_14584 = 0;
	var uLocal_14585 = 0;
	var uLocal_14586 = 0;
	var uLocal_14587 = 0;
	var uLocal_14588 = 0;
	var uLocal_14589 = 0;
	var uLocal_14590 = 0;
	var uLocal_14591 = 0;
	var uLocal_14592 = 0;
	var uLocal_14593 = -1569615261;
	var uLocal_14594 = 0;
	var uLocal_14595 = 0;
	var uLocal_14596 = 0;
	var uLocal_14597 = 0;
	var uLocal_14598 = 0;
	var uLocal_14599 = 0;
	var uLocal_14600 = 0;
	var uLocal_14601 = 0;
	var uLocal_14602 = 0;
	var uLocal_14603 = 0;
	var uLocal_14604 = 0;
	var uLocal_14605 = 0;
	var uLocal_14606 = -1569615261;
	var uLocal_14607 = 0;
	var uLocal_14608 = 0;
	var uLocal_14609 = 0;
	var uLocal_14610 = 0;
	var uLocal_14611 = 0;
	var uLocal_14612 = 0;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = 0;
	var uLocal_14616 = 0;
	var uLocal_14617 = 0;
	var uLocal_14618 = 0;
	var uLocal_14619 = -1569615261;
	var uLocal_14620 = 0;
	var uLocal_14621 = 0;
	var uLocal_14622 = 0;
	var uLocal_14623 = 0;
	var uLocal_14624 = 0;
	var uLocal_14625 = 0;
	var uLocal_14626 = 0;
	var uLocal_14627 = 0;
	var uLocal_14628 = 0;
	var uLocal_14629 = 0;
	var uLocal_14630 = 0;
	var uLocal_14631 = 0;
	var uLocal_14632 = -1569615261;
	var uLocal_14633 = 0;
	var uLocal_14634 = 0;
	var uLocal_14635 = 0;
	var uLocal_14636 = 0;
	var uLocal_14637 = 0;
	var uLocal_14638 = 0;
	var uLocal_14639 = 0;
	var uLocal_14640 = 0;
	var uLocal_14641 = 0;
	var uLocal_14642 = 0;
	var uLocal_14643 = 0;
	var uLocal_14644 = 0;
	var uLocal_14645 = -1569615261;
	var uLocal_14646 = 0;
	var uLocal_14647 = 0;
	var uLocal_14648 = 0;
	var uLocal_14649 = 0;
	var uLocal_14650 = 0;
	var uLocal_14651 = 0;
	var uLocal_14652 = 0;
	var uLocal_14653 = 0;
	var uLocal_14654 = 0;
	var uLocal_14655 = 0;
	var uLocal_14656 = 0;
	var uLocal_14657 = 0;
	var uLocal_14658 = -1569615261;
	var uLocal_14659 = 0;
	var uLocal_14660 = 0;
	var uLocal_14661 = 0;
	var uLocal_14662 = 0;
	var uLocal_14663 = 0;
	var uLocal_14664 = 0;
	var uLocal_14665 = 0;
	var uLocal_14666 = 0;
	var uLocal_14667 = 0;
	var uLocal_14668 = 0;
	var uLocal_14669 = 0;
	var uLocal_14670 = 0;
	var uLocal_14671 = -1569615261;
	var uLocal_14672 = 0;
	var uLocal_14673 = 0;
	var uLocal_14674 = 0;
	var uLocal_14675 = 0;
	var uLocal_14676 = 0;
	var uLocal_14677 = 0;
	var uLocal_14678 = 0;
	var uLocal_14679 = 0;
	var uLocal_14680 = 0;
	var uLocal_14681 = 0;
	var uLocal_14682 = 0;
	var uLocal_14683 = 0;
	var uLocal_14684 = -1569615261;
	var uLocal_14685 = 0;
	var uLocal_14686 = 0;
	var uLocal_14687 = 0;
	var uLocal_14688 = 0;
	var uLocal_14689 = 0;
	var uLocal_14690 = 0;
	var uLocal_14691 = 0;
	var uLocal_14692 = 0;
	var uLocal_14693 = 0;
	var uLocal_14694 = 0;
	var uLocal_14695 = 0;
	var uLocal_14696 = 0;
	var uLocal_14697 = -1569615261;
	var uLocal_14698 = 0;
	var uLocal_14699 = 0;
	var uLocal_14700 = 0;
	var uLocal_14701 = 0;
	var uLocal_14702 = 0;
	var uLocal_14703 = 0;
	var uLocal_14704 = 0;
	var uLocal_14705 = 0;
	var uLocal_14706 = 0;
	var uLocal_14707 = 0;
	var uLocal_14708 = 0;
	var uLocal_14709 = 0;
	var uLocal_14710 = -1569615261;
	var uLocal_14711 = 0;
	var uLocal_14712 = 0;
	var uLocal_14713 = 0;
	var uLocal_14714 = 0;
	var uLocal_14715 = 0;
	var uLocal_14716 = 0;
	var uLocal_14717 = 0;
	var uLocal_14718 = 0;
	var uLocal_14719 = 0;
	var uLocal_14720 = 0;
	var uLocal_14721 = 0;
	var uLocal_14722 = 0;
	var uLocal_14723 = -1569615261;
	var uLocal_14724 = 0;
	var uLocal_14725 = 0;
	var uLocal_14726 = 0;
	var uLocal_14727 = 0;
	var uLocal_14728 = 0;
	var uLocal_14729 = 0;
	var uLocal_14730 = 0;
	var uLocal_14731 = 0;
	var uLocal_14732 = 0;
	var uLocal_14733 = 0;
	var uLocal_14734 = 0;
	var uLocal_14735 = 0;
	var uLocal_14736 = -1569615261;
	var uLocal_14737 = 0;
	var uLocal_14738 = 0;
	var uLocal_14739 = 0;
	var uLocal_14740 = 0;
	var uLocal_14741 = 0;
	var uLocal_14742 = 0;
	var uLocal_14743 = 0;
	var uLocal_14744 = 0;
	var uLocal_14745 = 0;
	var uLocal_14746 = 0;
	var uLocal_14747 = 0;
	var uLocal_14748 = 0;
	var uLocal_14749 = -1569615261;
	var uLocal_14750 = 0;
	var uLocal_14751 = 0;
	var uLocal_14752 = 0;
	var uLocal_14753 = 0;
	var uLocal_14754 = 0;
	var uLocal_14755 = 0;
	var uLocal_14756 = 0;
	var uLocal_14757 = 0;
	var uLocal_14758 = 0;
	var uLocal_14759 = 0;
	var uLocal_14760 = 0;
	var uLocal_14761 = 0;
	var uLocal_14762 = -1569615261;
	var uLocal_14763 = 0;
	var uLocal_14764 = 0;
	var uLocal_14765 = 0;
	var uLocal_14766 = 0;
	var uLocal_14767 = 0;
	var uLocal_14768 = 0;
	var uLocal_14769 = 0;
	var uLocal_14770 = 0;
	var uLocal_14771 = 0;
	var uLocal_14772 = 0;
	var uLocal_14773 = 0;
	var uLocal_14774 = 0;
	var uLocal_14775 = -1569615261;
	var uLocal_14776 = 0;
	var uLocal_14777 = 0;
	var uLocal_14778 = 0;
	var uLocal_14779 = 0;
	var uLocal_14780 = 0;
	var uLocal_14781 = 0;
	var uLocal_14782 = 0;
	var uLocal_14783 = 0;
	var uLocal_14784 = 0;
	var uLocal_14785 = 0;
	var uLocal_14786 = 0;
	var uLocal_14787 = 0;
	var uLocal_14788 = -1569615261;
	var uLocal_14789 = 0;
	var uLocal_14790 = 0;
	var uLocal_14791 = 0;
	var uLocal_14792 = 0;
	var uLocal_14793 = 0;
	var uLocal_14794 = 0;
	var uLocal_14795 = 0;
	var uLocal_14796 = 0;
	var uLocal_14797 = 0;
	var uLocal_14798 = 0;
	var uLocal_14799 = 0;
	var uLocal_14800 = 0;
	var uLocal_14801 = -1569615261;
	var uLocal_14802 = 0;
	var uLocal_14803 = 0;
	var uLocal_14804 = 0;
	var uLocal_14805 = 0;
	var uLocal_14806 = 0;
	var uLocal_14807 = 0;
	var uLocal_14808 = 0;
	var uLocal_14809 = 0;
	var uLocal_14810 = 0;
	var uLocal_14811 = 0;
	var uLocal_14812 = 0;
	var uLocal_14813 = 0;
	var uLocal_14814 = -1569615261;
	var uLocal_14815 = 0;
	var uLocal_14816 = 0;
	var uLocal_14817 = 0;
	var uLocal_14818 = 0;
	var uLocal_14819 = 0;
	var uLocal_14820 = 0;
	var uLocal_14821 = 0;
	var uLocal_14822 = 0;
	var uLocal_14823 = 0;
	var uLocal_14824 = 0;
	var uLocal_14825 = 0;
	var uLocal_14826 = 0;
	var uLocal_14827 = -1569615261;
	var uLocal_14828 = 0;
	var uLocal_14829 = 0;
	var uLocal_14830 = 0;
	var uLocal_14831 = 0;
	var uLocal_14832 = 0;
	var uLocal_14833 = 0;
	var uLocal_14834 = 0;
	var uLocal_14835 = 0;
	var uLocal_14836 = 0;
	var uLocal_14837 = 0;
	var uLocal_14838 = 0;
	var uLocal_14839 = 0;
	var uLocal_14840 = -1569615261;
	var uLocal_14841 = 0;
	var uLocal_14842 = 0;
	var uLocal_14843 = 0;
	var uLocal_14844 = 0;
	var uLocal_14845 = 0;
	var uLocal_14846 = 0;
	var uLocal_14847 = 0;
	var uLocal_14848 = 0;
	var uLocal_14849 = 0;
	var uLocal_14850 = 0;
	var uLocal_14851 = 0;
	var uLocal_14852 = 0;
	var uLocal_14853 = -1569615261;
	var uLocal_14854 = 0;
	var uLocal_14855 = 0;
	var uLocal_14856 = 0;
	var uLocal_14857 = 0;
	var uLocal_14858 = 0;
	var uLocal_14859 = 0;
	var uLocal_14860 = 0;
	var uLocal_14861 = 0;
	var uLocal_14862 = 0;
	var uLocal_14863 = 0;
	var uLocal_14864 = 0;
	var uLocal_14865 = 0;
	var uLocal_14866 = -1569615261;
	var uLocal_14867 = 0;
	var uLocal_14868 = 0;
	var uLocal_14869 = 0;
	var uLocal_14870 = 0;
	var uLocal_14871 = 0;
	var uLocal_14872 = 0;
	var uLocal_14873 = 0;
	var uLocal_14874 = 0;
	var uLocal_14875 = 0;
	var uLocal_14876 = 0;
	var uLocal_14877 = 0;
	var uLocal_14878 = 0;
	var uLocal_14879 = -1569615261;
	var uLocal_14880 = 0;
	var uLocal_14881 = 0;
	var uLocal_14882 = 0;
	var uLocal_14883 = 0;
	var uLocal_14884 = 0;
	var uLocal_14885 = 0;
	var uLocal_14886 = 0;
	var uLocal_14887 = 0;
	var uLocal_14888 = 0;
	var uLocal_14889 = 0;
	var uLocal_14890 = 0;
	var uLocal_14891 = 0;
	var uLocal_14892 = -1569615261;
	var uLocal_14893 = 0;
	var uLocal_14894 = 0;
	var uLocal_14895 = 0;
	var uLocal_14896 = 0;
	var uLocal_14897 = 0;
	var uLocal_14898 = 0;
	var uLocal_14899 = 0;
	var uLocal_14900 = 0;
	var uLocal_14901 = 0;
	var uLocal_14902 = 0;
	var uLocal_14903 = 0;
	var uLocal_14904 = 0;
	var uLocal_14905 = -1569615261;
	var uLocal_14906 = 0;
	var uLocal_14907 = 0;
	var uLocal_14908 = 0;
	var uLocal_14909 = 0;
	var uLocal_14910 = 0;
	var uLocal_14911 = 0;
	var uLocal_14912 = 0;
	var uLocal_14913 = 0;
	var uLocal_14914 = 0;
	var uLocal_14915 = 0;
	var uLocal_14916 = 0;
	var uLocal_14917 = 0;
	var uLocal_14918 = -1569615261;
	var uLocal_14919 = 0;
	var uLocal_14920 = 0;
	var uLocal_14921 = 0;
	var uLocal_14922 = 0;
	var uLocal_14923 = 0;
	var uLocal_14924 = 0;
	var uLocal_14925 = 0;
	var uLocal_14926 = 0;
	var uLocal_14927 = 0;
	var uLocal_14928 = 0;
	var uLocal_14929 = 0;
	var uLocal_14930 = 0;
	var uLocal_14931 = -1569615261;
	var uLocal_14932 = 0;
	var uLocal_14933 = 0;
	var uLocal_14934 = 0;
	var uLocal_14935 = 0;
	var uLocal_14936 = 0;
	var uLocal_14937 = 0;
	var uLocal_14938 = 0;
	var uLocal_14939 = 0;
	var uLocal_14940 = 0;
	var uLocal_14941 = 0;
	var uLocal_14942 = 0;
	var uLocal_14943 = 0;
	var uLocal_14944 = -1569615261;
	var uLocal_14945 = 0;
	var uLocal_14946 = 0;
	var uLocal_14947 = 0;
	var uLocal_14948 = 0;
	var uLocal_14949 = 0;
	var uLocal_14950 = 0;
	var uLocal_14951 = 0;
	var uLocal_14952 = 0;
	var uLocal_14953 = 0;
	var uLocal_14954 = 0;
	var uLocal_14955 = 0;
	var uLocal_14956 = 0;
	var uLocal_14957 = -1569615261;
	var uLocal_14958 = 0;
	var uLocal_14959 = 0;
	var uLocal_14960 = 0;
	var uLocal_14961 = 0;
	var uLocal_14962 = 0;
	var uLocal_14963 = 0;
	var uLocal_14964 = 0;
	var uLocal_14965 = 0;
	var uLocal_14966 = 0;
	var uLocal_14967 = 0;
	var uLocal_14968 = 0;
	var uLocal_14969 = 0;
	var uLocal_14970 = -1569615261;
	var uLocal_14971 = 0;
	var uLocal_14972 = 0;
	var uLocal_14973 = 0;
	var uLocal_14974 = 0;
	var uLocal_14975 = 0;
	var uLocal_14976 = 0;
	var uLocal_14977 = 0;
	var uLocal_14978 = 0;
	var uLocal_14979 = 0;
	var uLocal_14980 = 0;
	var uLocal_14981 = 0;
	var uLocal_14982 = 0;
	var uLocal_14983 = -1569615261;
	var uLocal_14984 = 0;
	var uLocal_14985 = 0;
	var uLocal_14986 = 0;
	var uLocal_14987 = 0;
	var uLocal_14988 = 0;
	var uLocal_14989 = 0;
	var uLocal_14990 = 0;
	var uLocal_14991 = 0;
	var uLocal_14992 = 0;
	var uLocal_14993 = 0;
	var uLocal_14994 = 0;
	var uLocal_14995 = 0;
	var uLocal_14996 = -1569615261;
	var uLocal_14997 = 0;
	var uLocal_14998 = 0;
	var uLocal_14999 = 0;
	var uLocal_15000 = 0;
	var uLocal_15001 = 0;
	var uLocal_15002 = 0;
	var uLocal_15003 = 0;
	var uLocal_15004 = 0;
	var uLocal_15005 = 0;
	var uLocal_15006 = 0;
	var uLocal_15007 = 0;
	var uLocal_15008 = 0;
	var uLocal_15009 = -1569615261;
	var uLocal_15010 = 0;
	var uLocal_15011 = 0;
	var uLocal_15012 = 0;
	var uLocal_15013 = 0;
	var uLocal_15014 = 0;
	var uLocal_15015 = 0;
	var uLocal_15016 = 0;
	var uLocal_15017 = 0;
	var uLocal_15018 = 0;
	var uLocal_15019 = 0;
	var uLocal_15020 = 0;
	var uLocal_15021 = 0;
	var uLocal_15022 = -1569615261;
	var uLocal_15023 = 0;
	var uLocal_15024 = 0;
	var uLocal_15025 = 0;
	var uLocal_15026 = 0;
	var uLocal_15027 = 0;
	var uLocal_15028 = 0;
	var uLocal_15029 = 0;
	var uLocal_15030 = 0;
	var uLocal_15031 = 0;
	var uLocal_15032 = 0;
	var uLocal_15033 = 0;
	var uLocal_15034 = 0;
	var uLocal_15035 = -1569615261;
	var uLocal_15036 = 0;
	var uLocal_15037 = 0;
	var uLocal_15038 = 0;
	var uLocal_15039 = 0;
	var uLocal_15040 = 0;
	var uLocal_15041 = 0;
	var uLocal_15042 = 0;
	var uLocal_15043 = 0;
	var uLocal_15044 = 0;
	var uLocal_15045 = 0;
	var uLocal_15046 = 0;
	var uLocal_15047 = 0;
	var uLocal_15048 = -1569615261;
	var uLocal_15049 = 0;
	var uLocal_15050 = 0;
	var uLocal_15051 = 0;
	var uLocal_15052 = 0;
	var uLocal_15053 = 0;
	var uLocal_15054 = 0;
	var uLocal_15055 = 0;
	var uLocal_15056 = 0;
	var uLocal_15057 = 0;
	var uLocal_15058 = 0;
	var uLocal_15059 = 0;
	var uLocal_15060 = 0;
	var uLocal_15061 = -1569615261;
	var uLocal_15062 = 0;
	var uLocal_15063 = 0;
	var uLocal_15064 = 0;
	var uLocal_15065 = 0;
	var uLocal_15066 = 0;
	var uLocal_15067 = 0;
	var uLocal_15068 = 0;
	var uLocal_15069 = 0;
	var uLocal_15070 = 0;
	var uLocal_15071 = 0;
	var uLocal_15072 = 0;
	var uLocal_15073 = 0;
	var uLocal_15074 = -1569615261;
	var uLocal_15075 = 0;
	var uLocal_15076 = 0;
	var uLocal_15077 = 0;
	var uLocal_15078 = 0;
	var uLocal_15079 = 0;
	var uLocal_15080 = 0;
	var uLocal_15081 = 0;
	var uLocal_15082 = 0;
	var uLocal_15083 = 0;
	var uLocal_15084 = 0;
	var uLocal_15085 = 0;
	var uLocal_15086 = 0;
	var uLocal_15087 = -1569615261;
	var uLocal_15088 = 0;
	var uLocal_15089 = 0;
	var uLocal_15090 = 0;
	var uLocal_15091 = 0;
	var uLocal_15092 = 0;
	var uLocal_15093 = 0;
	var uLocal_15094 = 0;
	var uLocal_15095 = 0;
	var uLocal_15096 = 0;
	var uLocal_15097 = 0;
	var uLocal_15098 = 0;
	var uLocal_15099 = 0;
	var uLocal_15100 = -1569615261;
	var uLocal_15101 = 0;
	var uLocal_15102 = 0;
	var uLocal_15103 = 0;
	var uLocal_15104 = 0;
	var uLocal_15105 = 0;
	var uLocal_15106 = 0;
	var uLocal_15107 = 0;
	var uLocal_15108 = 0;
	var uLocal_15109 = 0;
	var uLocal_15110 = 0;
	var uLocal_15111 = 0;
	var uLocal_15112 = 0;
	var uLocal_15113 = -1569615261;
	var uLocal_15114 = 0;
	var uLocal_15115 = 0;
	var uLocal_15116 = 0;
	var uLocal_15117 = 0;
	var uLocal_15118 = 0;
	var uLocal_15119 = 0;
	var uLocal_15120 = 0;
	var uLocal_15121 = 0;
	var uLocal_15122 = 0;
	var uLocal_15123 = 0;
	var uLocal_15124 = 0;
	var uLocal_15125 = 0;
	var uLocal_15126 = -1569615261;
	var uLocal_15127 = 0;
	var uLocal_15128 = 0;
	var uLocal_15129 = 0;
	var uLocal_15130 = 0;
	var uLocal_15131 = 0;
	var uLocal_15132 = 0;
	var uLocal_15133 = 0;
	var uLocal_15134 = 0;
	var uLocal_15135 = 0;
	var uLocal_15136 = 0;
	var uLocal_15137 = 0;
	var uLocal_15138 = 0;
	var uLocal_15139 = -1569615261;
	var uLocal_15140 = 0;
	var uLocal_15141 = 0;
	var uLocal_15142 = 0;
	var uLocal_15143 = 0;
	var uLocal_15144 = 0;
	var uLocal_15145 = 0;
	var uLocal_15146 = 0;
	var uLocal_15147 = 0;
	var uLocal_15148 = 0;
	var uLocal_15149 = 0;
	var uLocal_15150 = 0;
	var uLocal_15151 = 0;
	var uLocal_15152 = -1569615261;
	var uLocal_15153 = 0;
	var uLocal_15154 = 0;
	var uLocal_15155 = 0;
	var uLocal_15156 = 0;
	var uLocal_15157 = 0;
	var uLocal_15158 = 0;
	var uLocal_15159 = 0;
	var uLocal_15160 = 0;
	var uLocal_15161 = 0;
	var uLocal_15162 = 0;
	var uLocal_15163 = 0;
	var uLocal_15164 = 0;
	var uLocal_15165 = -1569615261;
	var uLocal_15166 = 0;
	var uLocal_15167 = 0;
	var uLocal_15168 = 0;
	var uLocal_15169 = 0;
	var uLocal_15170 = 0;
	var uLocal_15171 = 0;
	var uLocal_15172 = 0;
	var uLocal_15173 = 0;
	var uLocal_15174 = 0;
	var uLocal_15175 = 0;
	var uLocal_15176 = 0;
	var uLocal_15177 = 0;
	var uLocal_15178 = -1569615261;
	var uLocal_15179 = 0;
	var uLocal_15180 = 0;
	var uLocal_15181 = 0;
	var uLocal_15182 = 0;
	var uLocal_15183 = 0;
	var uLocal_15184 = 0;
	var uLocal_15185 = 0;
	var uLocal_15186 = 0;
	var uLocal_15187 = 0;
	var uLocal_15188 = 0;
	var uLocal_15189 = 0;
	var uLocal_15190 = 0;
	var uLocal_15191 = -1569615261;
	var uLocal_15192 = 0;
	var uLocal_15193 = 0;
	var uLocal_15194 = 0;
	var uLocal_15195 = 0;
	var uLocal_15196 = 0;
	var uLocal_15197 = 0;
	var uLocal_15198 = 0;
	var uLocal_15199 = 0;
	var uLocal_15200 = 0;
	var uLocal_15201 = 0;
	var uLocal_15202 = 0;
	var uLocal_15203 = 0;
	var uLocal_15204 = -1569615261;
	var uLocal_15205 = 0;
	var uLocal_15206 = 0;
	var uLocal_15207 = 0;
	var uLocal_15208 = 0;
	var uLocal_15209 = 0;
	var uLocal_15210 = 0;
	var uLocal_15211 = 0;
	var uLocal_15212 = 0;
	var uLocal_15213 = 0;
	var uLocal_15214 = 0;
	var uLocal_15215 = 0;
	var uLocal_15216 = 0;
	var uLocal_15217 = -1569615261;
	var uLocal_15218 = 0;
	var uLocal_15219 = 0;
	var uLocal_15220 = 0;
	var uLocal_15221 = 0;
	var uLocal_15222 = 0;
	var uLocal_15223 = 0;
	var uLocal_15224 = 0;
	var uLocal_15225 = 0;
	var uLocal_15226 = 0;
	var uLocal_15227 = 0;
	var uLocal_15228 = 0;
	var uLocal_15229 = 0;
	var uLocal_15230 = -1569615261;
	var uLocal_15231 = 0;
	var uLocal_15232 = 0;
	var uLocal_15233 = 0;
	var uLocal_15234 = 0;
	var uLocal_15235 = 0;
	var uLocal_15236 = 0;
	var uLocal_15237 = 0;
	var uLocal_15238 = 0;
	var uLocal_15239 = 0;
	var uLocal_15240 = 0;
	var uLocal_15241 = 0;
	var uLocal_15242 = 0;
	var uLocal_15243 = -1569615261;
	var uLocal_15244 = 0;
	var uLocal_15245 = 0;
	var uLocal_15246 = 0;
	var uLocal_15247 = 0;
	var uLocal_15248 = 0;
	var uLocal_15249 = 0;
	var uLocal_15250 = 0;
	var uLocal_15251 = 0;
	var uLocal_15252 = 0;
	var uLocal_15253 = 0;
	var uLocal_15254 = 0;
	var uLocal_15255 = 0;
	var uLocal_15256 = -1569615261;
	var uLocal_15257 = 0;
	var uLocal_15258 = 0;
	var uLocal_15259 = 0;
	var uLocal_15260 = 0;
	var uLocal_15261 = 0;
	var uLocal_15262 = 0;
	var uLocal_15263 = 0;
	var uLocal_15264 = 0;
	var uLocal_15265 = 0;
	var uLocal_15266 = 0;
	var uLocal_15267 = 0;
	var uLocal_15268 = 0;
	var uLocal_15269 = -1569615261;
	var uLocal_15270 = 0;
	var uLocal_15271 = 0;
	var uLocal_15272 = 0;
	var uLocal_15273 = 0;
	var uLocal_15274 = 0;
	var uLocal_15275 = 0;
	var uLocal_15276 = 0;
	var uLocal_15277 = 0;
	var uLocal_15278 = 0;
	var uLocal_15279 = 0;
	var uLocal_15280 = 0;
	var uLocal_15281 = 0;
	var uLocal_15282 = 0;
	var uLocal_15283 = 0;
	var uLocal_15284 = 0;
	var uLocal_15285 = 0;
	var uLocal_15286 = 0;
	var uLocal_15287 = 1;
	var uLocal_15288 = 30;
	var uLocal_15289 = -1;
	var uLocal_15290 = 0;
	var uLocal_15291 = 1;
	var uLocal_15292 = 0;
	var uLocal_15293 = 0;
	var uLocal_15294 = 0;
	var uLocal_15295 = 0;
	var uLocal_15296 = 0;
	var uLocal_15297 = 0;
	var uLocal_15298 = 0;
	var uLocal_15299 = 0;
	var uLocal_15300 = 0;
	var uLocal_15301 = 1065353216;
	var uLocal_15302 = 0;
	var uLocal_15303 = 0;
	var uLocal_15304 = 1065353216;
	var uLocal_15305 = 1;
	var uLocal_15306 = 0;
	var uLocal_15307 = -1;
	var uLocal_15308 = 0;
	var uLocal_15309 = 1;
	var uLocal_15310 = 0;
	var uLocal_15311 = 0;
	var uLocal_15312 = 0;
	var uLocal_15313 = 0;
	var uLocal_15314 = 0;
	var uLocal_15315 = 0;
	var uLocal_15316 = 0;
	var uLocal_15317 = 0;
	var uLocal_15318 = 0;
	var uLocal_15319 = 1065353216;
	var uLocal_15320 = 0;
	var uLocal_15321 = 0;
	var uLocal_15322 = 1065353216;
	var uLocal_15323 = 1;
	var uLocal_15324 = 0;
	var uLocal_15325 = -1;
	var uLocal_15326 = 0;
	var uLocal_15327 = 1;
	var uLocal_15328 = 0;
	var uLocal_15329 = 0;
	var uLocal_15330 = 0;
	var uLocal_15331 = 0;
	var uLocal_15332 = 0;
	var uLocal_15333 = 0;
	var uLocal_15334 = 0;
	var uLocal_15335 = 0;
	var uLocal_15336 = 0;
	var uLocal_15337 = 1065353216;
	var uLocal_15338 = 0;
	var uLocal_15339 = 0;
	var uLocal_15340 = 1065353216;
	var uLocal_15341 = 1;
	var uLocal_15342 = 0;
	var uLocal_15343 = -1;
	var uLocal_15344 = 0;
	var uLocal_15345 = 1;
	var uLocal_15346 = 0;
	var uLocal_15347 = 0;
	var uLocal_15348 = 0;
	var uLocal_15349 = 0;
	var uLocal_15350 = 0;
	var uLocal_15351 = 0;
	var uLocal_15352 = 0;
	var uLocal_15353 = 0;
	var uLocal_15354 = 0;
	var uLocal_15355 = 1065353216;
	var uLocal_15356 = 0;
	var uLocal_15357 = 0;
	var uLocal_15358 = 1065353216;
	var uLocal_15359 = 1;
	var uLocal_15360 = 0;
	var uLocal_15361 = -1;
	var uLocal_15362 = 0;
	var uLocal_15363 = 1;
	var uLocal_15364 = 0;
	var uLocal_15365 = 0;
	var uLocal_15366 = 0;
	var uLocal_15367 = 0;
	var uLocal_15368 = 0;
	var uLocal_15369 = 0;
	var uLocal_15370 = 0;
	var uLocal_15371 = 0;
	var uLocal_15372 = 0;
	var uLocal_15373 = 1065353216;
	var uLocal_15374 = 0;
	var uLocal_15375 = 0;
	var uLocal_15376 = 1065353216;
	var uLocal_15377 = 1;
	var uLocal_15378 = 0;
	var uLocal_15379 = -1;
	var uLocal_15380 = 0;
	var uLocal_15381 = 1;
	var uLocal_15382 = 0;
	var uLocal_15383 = 0;
	var uLocal_15384 = 0;
	var uLocal_15385 = 0;
	var uLocal_15386 = 0;
	var uLocal_15387 = 0;
	var uLocal_15388 = 0;
	var uLocal_15389 = 0;
	var uLocal_15390 = 0;
	var uLocal_15391 = 1065353216;
	var uLocal_15392 = 0;
	var uLocal_15393 = 0;
	var uLocal_15394 = 1065353216;
	var uLocal_15395 = 1;
	var uLocal_15396 = 0;
	var uLocal_15397 = -1;
	var uLocal_15398 = 0;
	var uLocal_15399 = 1;
	var uLocal_15400 = 0;
	var uLocal_15401 = 0;
	var uLocal_15402 = 0;
	var uLocal_15403 = 0;
	var uLocal_15404 = 0;
	var uLocal_15405 = 0;
	var uLocal_15406 = 0;
	var uLocal_15407 = 0;
	var uLocal_15408 = 0;
	var uLocal_15409 = 1065353216;
	var uLocal_15410 = 0;
	var uLocal_15411 = 0;
	var uLocal_15412 = 1065353216;
	var uLocal_15413 = 1;
	var uLocal_15414 = 0;
	var uLocal_15415 = -1;
	var uLocal_15416 = 0;
	var uLocal_15417 = 1;
	var uLocal_15418 = 0;
	var uLocal_15419 = 0;
	var uLocal_15420 = 0;
	var uLocal_15421 = 0;
	var uLocal_15422 = 0;
	var uLocal_15423 = 0;
	var uLocal_15424 = 0;
	var uLocal_15425 = 0;
	var uLocal_15426 = 0;
	var uLocal_15427 = 1065353216;
	var uLocal_15428 = 0;
	var uLocal_15429 = 0;
	var uLocal_15430 = 1065353216;
	var uLocal_15431 = 1;
	var uLocal_15432 = 0;
	var uLocal_15433 = -1;
	var uLocal_15434 = 0;
	var uLocal_15435 = 1;
	var uLocal_15436 = 0;
	var uLocal_15437 = 0;
	var uLocal_15438 = 0;
	var uLocal_15439 = 0;
	var uLocal_15440 = 0;
	var uLocal_15441 = 0;
	var uLocal_15442 = 0;
	var uLocal_15443 = 0;
	var uLocal_15444 = 0;
	var uLocal_15445 = 1065353216;
	var uLocal_15446 = 0;
	var uLocal_15447 = 0;
	var uLocal_15448 = 1065353216;
	var uLocal_15449 = 1;
	var uLocal_15450 = 0;
	var uLocal_15451 = -1;
	var uLocal_15452 = 0;
	var uLocal_15453 = 1;
	var uLocal_15454 = 0;
	var uLocal_15455 = 0;
	var uLocal_15456 = 0;
	var uLocal_15457 = 0;
	var uLocal_15458 = 0;
	var uLocal_15459 = 0;
	var uLocal_15460 = 0;
	var uLocal_15461 = 0;
	var uLocal_15462 = 0;
	var uLocal_15463 = 1065353216;
	var uLocal_15464 = 0;
	var uLocal_15465 = 0;
	var uLocal_15466 = 1065353216;
	var uLocal_15467 = 1;
	var uLocal_15468 = 0;
	var uLocal_15469 = -1;
	var uLocal_15470 = 0;
	var uLocal_15471 = 1;
	var uLocal_15472 = 0;
	var uLocal_15473 = 0;
	var uLocal_15474 = 0;
	var uLocal_15475 = 0;
	var uLocal_15476 = 0;
	var uLocal_15477 = 0;
	var uLocal_15478 = 0;
	var uLocal_15479 = 0;
	var uLocal_15480 = 0;
	var uLocal_15481 = 1065353216;
	var uLocal_15482 = 0;
	var uLocal_15483 = 0;
	var uLocal_15484 = 1065353216;
	var uLocal_15485 = 1;
	var uLocal_15486 = 0;
	var uLocal_15487 = -1;
	var uLocal_15488 = 0;
	var uLocal_15489 = 1;
	var uLocal_15490 = 0;
	var uLocal_15491 = 0;
	var uLocal_15492 = 0;
	var uLocal_15493 = 0;
	var uLocal_15494 = 0;
	var uLocal_15495 = 0;
	var uLocal_15496 = 0;
	var uLocal_15497 = 0;
	var uLocal_15498 = 0;
	var uLocal_15499 = 1065353216;
	var uLocal_15500 = 0;
	var uLocal_15501 = 0;
	var uLocal_15502 = 1065353216;
	var uLocal_15503 = 1;
	var uLocal_15504 = 0;
	var uLocal_15505 = -1;
	var uLocal_15506 = 0;
	var uLocal_15507 = 1;
	var uLocal_15508 = 0;
	var uLocal_15509 = 0;
	var uLocal_15510 = 0;
	var uLocal_15511 = 0;
	var uLocal_15512 = 0;
	var uLocal_15513 = 0;
	var uLocal_15514 = 0;
	var uLocal_15515 = 0;
	var uLocal_15516 = 0;
	var uLocal_15517 = 1065353216;
	var uLocal_15518 = 0;
	var uLocal_15519 = 0;
	var uLocal_15520 = 1065353216;
	var uLocal_15521 = 1;
	var uLocal_15522 = 0;
	var uLocal_15523 = -1;
	var uLocal_15524 = 0;
	var uLocal_15525 = 1;
	var uLocal_15526 = 0;
	var uLocal_15527 = 0;
	var uLocal_15528 = 0;
	var uLocal_15529 = 0;
	var uLocal_15530 = 0;
	var uLocal_15531 = 0;
	var uLocal_15532 = 0;
	var uLocal_15533 = 0;
	var uLocal_15534 = 0;
	var uLocal_15535 = 1065353216;
	var uLocal_15536 = 0;
	var uLocal_15537 = 0;
	var uLocal_15538 = 1065353216;
	var uLocal_15539 = 1;
	var uLocal_15540 = 0;
	var uLocal_15541 = -1;
	var uLocal_15542 = 0;
	var uLocal_15543 = 1;
	var uLocal_15544 = 0;
	var uLocal_15545 = 0;
	var uLocal_15546 = 0;
	var uLocal_15547 = 0;
	var uLocal_15548 = 0;
	var uLocal_15549 = 0;
	var uLocal_15550 = 0;
	var uLocal_15551 = 0;
	var uLocal_15552 = 0;
	var uLocal_15553 = 1065353216;
	var uLocal_15554 = 0;
	var uLocal_15555 = 0;
	var uLocal_15556 = 1065353216;
	var uLocal_15557 = 1;
	var uLocal_15558 = 0;
	var uLocal_15559 = -1;
	var uLocal_15560 = 0;
	var uLocal_15561 = 1;
	var uLocal_15562 = 0;
	var uLocal_15563 = 0;
	var uLocal_15564 = 0;
	var uLocal_15565 = 0;
	var uLocal_15566 = 0;
	var uLocal_15567 = 0;
	var uLocal_15568 = 0;
	var uLocal_15569 = 0;
	var uLocal_15570 = 0;
	var uLocal_15571 = 1065353216;
	var uLocal_15572 = 0;
	var uLocal_15573 = 0;
	var uLocal_15574 = 1065353216;
	var uLocal_15575 = 1;
	var uLocal_15576 = 0;
	var uLocal_15577 = -1;
	var uLocal_15578 = 0;
	var uLocal_15579 = 1;
	var uLocal_15580 = 0;
	var uLocal_15581 = 0;
	var uLocal_15582 = 0;
	var uLocal_15583 = 0;
	var uLocal_15584 = 0;
	var uLocal_15585 = 0;
	var uLocal_15586 = 0;
	var uLocal_15587 = 0;
	var uLocal_15588 = 0;
	var uLocal_15589 = 1065353216;
	var uLocal_15590 = 0;
	var uLocal_15591 = 0;
	var uLocal_15592 = 1065353216;
	var uLocal_15593 = 1;
	var uLocal_15594 = 0;
	var uLocal_15595 = -1;
	var uLocal_15596 = 0;
	var uLocal_15597 = 1;
	var uLocal_15598 = 0;
	var uLocal_15599 = 0;
	var uLocal_15600 = 0;
	var uLocal_15601 = 0;
	var uLocal_15602 = 0;
	var uLocal_15603 = 0;
	var uLocal_15604 = 0;
	var uLocal_15605 = 0;
	var uLocal_15606 = 0;
	var uLocal_15607 = 1065353216;
	var uLocal_15608 = 0;
	var uLocal_15609 = 0;
	var uLocal_15610 = 1065353216;
	var uLocal_15611 = 1;
	var uLocal_15612 = 0;
	var uLocal_15613 = -1;
	var uLocal_15614 = 0;
	var uLocal_15615 = 1;
	var uLocal_15616 = 0;
	var uLocal_15617 = 0;
	var uLocal_15618 = 0;
	var uLocal_15619 = 0;
	var uLocal_15620 = 0;
	var uLocal_15621 = 0;
	var uLocal_15622 = 0;
	var uLocal_15623 = 0;
	var uLocal_15624 = 0;
	var uLocal_15625 = 1065353216;
	var uLocal_15626 = 0;
	var uLocal_15627 = 0;
	var uLocal_15628 = 1065353216;
	var uLocal_15629 = 1;
	var uLocal_15630 = 0;
	var uLocal_15631 = -1;
	var uLocal_15632 = 0;
	var uLocal_15633 = 1;
	var uLocal_15634 = 0;
	var uLocal_15635 = 0;
	var uLocal_15636 = 0;
	var uLocal_15637 = 0;
	var uLocal_15638 = 0;
	var uLocal_15639 = 0;
	var uLocal_15640 = 0;
	var uLocal_15641 = 0;
	var uLocal_15642 = 0;
	var uLocal_15643 = 1065353216;
	var uLocal_15644 = 0;
	var uLocal_15645 = 0;
	var uLocal_15646 = 1065353216;
	var uLocal_15647 = 1;
	var uLocal_15648 = 0;
	var uLocal_15649 = -1;
	var uLocal_15650 = 0;
	var uLocal_15651 = 1;
	var uLocal_15652 = 0;
	var uLocal_15653 = 0;
	var uLocal_15654 = 0;
	var uLocal_15655 = 0;
	var uLocal_15656 = 0;
	var uLocal_15657 = 0;
	var uLocal_15658 = 0;
	var uLocal_15659 = 0;
	var uLocal_15660 = 0;
	var uLocal_15661 = 1065353216;
	var uLocal_15662 = 0;
	var uLocal_15663 = 0;
	var uLocal_15664 = 1065353216;
	var uLocal_15665 = 1;
	var uLocal_15666 = 0;
	var uLocal_15667 = -1;
	var uLocal_15668 = 0;
	var uLocal_15669 = 1;
	var uLocal_15670 = 0;
	var uLocal_15671 = 0;
	var uLocal_15672 = 0;
	var uLocal_15673 = 0;
	var uLocal_15674 = 0;
	var uLocal_15675 = 0;
	var uLocal_15676 = 0;
	var uLocal_15677 = 0;
	var uLocal_15678 = 0;
	var uLocal_15679 = 1065353216;
	var uLocal_15680 = 0;
	var uLocal_15681 = 0;
	var uLocal_15682 = 1065353216;
	var uLocal_15683 = 1;
	var uLocal_15684 = 0;
	var uLocal_15685 = -1;
	var uLocal_15686 = 0;
	var uLocal_15687 = 1;
	var uLocal_15688 = 0;
	var uLocal_15689 = 0;
	var uLocal_15690 = 0;
	var uLocal_15691 = 0;
	var uLocal_15692 = 0;
	var uLocal_15693 = 0;
	var uLocal_15694 = 0;
	var uLocal_15695 = 0;
	var uLocal_15696 = 0;
	var uLocal_15697 = 1065353216;
	var uLocal_15698 = 0;
	var uLocal_15699 = 0;
	var uLocal_15700 = 1065353216;
	var uLocal_15701 = 1;
	var uLocal_15702 = 0;
	var uLocal_15703 = -1;
	var uLocal_15704 = 0;
	var uLocal_15705 = 1;
	var uLocal_15706 = 0;
	var uLocal_15707 = 0;
	var uLocal_15708 = 0;
	var uLocal_15709 = 0;
	var uLocal_15710 = 0;
	var uLocal_15711 = 0;
	var uLocal_15712 = 0;
	var uLocal_15713 = 0;
	var uLocal_15714 = 0;
	var uLocal_15715 = 1065353216;
	var uLocal_15716 = 0;
	var uLocal_15717 = 0;
	var uLocal_15718 = 1065353216;
	var uLocal_15719 = 1;
	var uLocal_15720 = 0;
	var uLocal_15721 = -1;
	var uLocal_15722 = 0;
	var uLocal_15723 = 1;
	var uLocal_15724 = 0;
	var uLocal_15725 = 0;
	var uLocal_15726 = 0;
	var uLocal_15727 = 0;
	var uLocal_15728 = 0;
	var uLocal_15729 = 0;
	var uLocal_15730 = 0;
	var uLocal_15731 = 0;
	var uLocal_15732 = 0;
	var uLocal_15733 = 1065353216;
	var uLocal_15734 = 0;
	var uLocal_15735 = 0;
	var uLocal_15736 = 1065353216;
	var uLocal_15737 = 1;
	var uLocal_15738 = 0;
	var uLocal_15739 = -1;
	var uLocal_15740 = 0;
	var uLocal_15741 = 1;
	var uLocal_15742 = 0;
	var uLocal_15743 = 0;
	var uLocal_15744 = 0;
	var uLocal_15745 = 0;
	var uLocal_15746 = 0;
	var uLocal_15747 = 0;
	var uLocal_15748 = 0;
	var uLocal_15749 = 0;
	var uLocal_15750 = 0;
	var uLocal_15751 = 1065353216;
	var uLocal_15752 = 0;
	var uLocal_15753 = 0;
	var uLocal_15754 = 1065353216;
	var uLocal_15755 = 1;
	var uLocal_15756 = 0;
	var uLocal_15757 = -1;
	var uLocal_15758 = 0;
	var uLocal_15759 = 1;
	var uLocal_15760 = 0;
	var uLocal_15761 = 0;
	var uLocal_15762 = 0;
	var uLocal_15763 = 0;
	var uLocal_15764 = 0;
	var uLocal_15765 = 0;
	var uLocal_15766 = 0;
	var uLocal_15767 = 0;
	var uLocal_15768 = 0;
	var uLocal_15769 = 1065353216;
	var uLocal_15770 = 0;
	var uLocal_15771 = 0;
	var uLocal_15772 = 1065353216;
	var uLocal_15773 = 1;
	var uLocal_15774 = 0;
	var uLocal_15775 = -1;
	var uLocal_15776 = 0;
	var uLocal_15777 = 1;
	var uLocal_15778 = 0;
	var uLocal_15779 = 0;
	var uLocal_15780 = 0;
	var uLocal_15781 = 0;
	var uLocal_15782 = 0;
	var uLocal_15783 = 0;
	var uLocal_15784 = 0;
	var uLocal_15785 = 0;
	var uLocal_15786 = 0;
	var uLocal_15787 = 1065353216;
	var uLocal_15788 = 0;
	var uLocal_15789 = 0;
	var uLocal_15790 = 1065353216;
	var uLocal_15791 = 1;
	var uLocal_15792 = 0;
	var uLocal_15793 = -1;
	var uLocal_15794 = 0;
	var uLocal_15795 = 1;
	var uLocal_15796 = 0;
	var uLocal_15797 = 0;
	var uLocal_15798 = 0;
	var uLocal_15799 = 0;
	var uLocal_15800 = 0;
	var uLocal_15801 = 0;
	var uLocal_15802 = 0;
	var uLocal_15803 = 0;
	var uLocal_15804 = 0;
	var uLocal_15805 = 1065353216;
	var uLocal_15806 = 0;
	var uLocal_15807 = 0;
	var uLocal_15808 = 1065353216;
	var uLocal_15809 = 1;
	var uLocal_15810 = 0;
	var uLocal_15811 = -1;
	var uLocal_15812 = 0;
	var uLocal_15813 = 1;
	var uLocal_15814 = 0;
	var uLocal_15815 = 0;
	var uLocal_15816 = 0;
	var uLocal_15817 = 0;
	var uLocal_15818 = 0;
	var uLocal_15819 = 0;
	var uLocal_15820 = 0;
	var uLocal_15821 = 0;
	var uLocal_15822 = 0;
	var uLocal_15823 = 1065353216;
	var uLocal_15824 = 0;
	var uLocal_15825 = 0;
	var uLocal_15826 = 1065353216;
	var uLocal_15827 = 1;
	var uLocal_15828 = 0;
	var uLocal_15829 = 8;
	var uLocal_15830 = 0;
	var uLocal_15831 = 0;
	var uLocal_15832 = 0;
	var uLocal_15833 = 0;
	var uLocal_15834 = 0;
	var uLocal_15835 = 0;
	var uLocal_15836 = 0;
	var uLocal_15837 = 0;
	var uLocal_15838 = 0;
	var uLocal_15839 = 0;
	var uLocal_15840 = 0;
	var uLocal_15841 = 0;
	var uLocal_15842 = 0;
	var uLocal_15843 = 0;
	var uLocal_15844 = 0;
	var uLocal_15845 = 0;
	var uLocal_15846 = 0;
	var uLocal_15847 = 0;
	var uLocal_15848 = 0;
	var uLocal_15849 = 0;
	var uLocal_15850 = 0;
	var uLocal_15851 = 0;
	var uLocal_15852 = 0;
	var uLocal_15853 = 0;
	var uLocal_15854 = 0;
	var uLocal_15855 = 0;
	var uLocal_15856 = 0;
	var uLocal_15857 = 0;
	var uLocal_15858 = 0;
	var uLocal_15859 = 0;
	var uLocal_15860 = 0;
	var uLocal_15861 = 0;
	var uLocal_15862 = 0;
	var uLocal_15863 = 0;
	var uLocal_15864 = 0;
	var uLocal_15865 = 0;
	var uLocal_15866 = 0;
	var uLocal_15867 = 0;
	var uLocal_15868 = 0;
	var uLocal_15869 = 0;
	var uLocal_15870 = 0;
	var uLocal_15871 = 0;
	var uLocal_15872 = 0;
	var uLocal_15873 = 0;
	var uLocal_15874 = 0;
	var uLocal_15875 = 0;
	var uLocal_15876 = 0;
	var uLocal_15877 = 0;
	var uLocal_15878 = 0;
	var uLocal_15879 = 0;
	var uLocal_15880 = 0;
	var uLocal_15881 = 0;
	var uLocal_15882 = 0;
	var uLocal_15883 = 0;
	var uLocal_15884 = 0;
	var uLocal_15885 = 0;
	var uLocal_15886 = 0;
	var uLocal_15887 = 0;
	var uLocal_15888 = 0;
	var uLocal_15889 = 0;
	var uLocal_15890 = 0;
	var uLocal_15891 = 0;
	var uLocal_15892 = 0;
	var uLocal_15893 = 0;
	var uLocal_15894 = 0;
	var uLocal_15895 = 0;
	var uLocal_15896 = 0;
	var uLocal_15897 = 0;
	var uLocal_15898 = 0;
	var uLocal_15899 = 0;
	var uLocal_15900 = 0;
	var uLocal_15901 = 0;
	var uLocal_15902 = 0;
	var uLocal_15903 = 0;
	var uLocal_15904 = 0;
	var uLocal_15905 = 0;
	var uLocal_15906 = 0;
	var uLocal_15907 = 0;
	var uLocal_15908 = 0;
	var uLocal_15909 = 0;
	var uLocal_15910 = 0;
	var uLocal_15911 = 0;
	var uLocal_15912 = 0;
	var uLocal_15913 = 0;
	var uLocal_15914 = 0;
	var uLocal_15915 = 0;
	var uLocal_15916 = 0;
	var uLocal_15917 = 0;
	var uLocal_15918 = 0;
	var uLocal_15919 = 0;
	var uLocal_15920 = 0;
	var uLocal_15921 = 0;
	var uLocal_15922 = 0;
	var uLocal_15923 = 0;
	var uLocal_15924 = 0;
	var uLocal_15925 = 0;
	var uLocal_15926 = 0;
	var uLocal_15927 = 0;
	var uLocal_15928 = 0;
	var uLocal_15929 = 0;
	var uLocal_15930 = 0;
	var uLocal_15931 = 0;
	var uLocal_15932 = 0;
	var uLocal_15933 = 0;
	var uLocal_15934 = 0;
	var uLocal_15935 = 0;
	var uLocal_15936 = 0;
	var uLocal_15937 = 0;
	var uLocal_15938 = 0;
	var uLocal_15939 = 0;
	var uLocal_15940 = 0;
	var uLocal_15941 = 0;
	var uLocal_15942 = 0;
	var uLocal_15943 = 0;
	var uLocal_15944 = 0;
	var uLocal_15945 = 0;
	var uLocal_15946 = 0;
	var uLocal_15947 = 0;
	var uLocal_15948 = 0;
	var uLocal_15949 = 0;
	var uLocal_15950 = 0;
	var uLocal_15951 = 0;
	var uLocal_15952 = 0;
	var uLocal_15953 = 0;
	var uLocal_15954 = 0;
	var uLocal_15955 = 0;
	var uLocal_15956 = 0;
	var uLocal_15957 = 0;
	var uLocal_15958 = 0;
	var uLocal_15959 = 0;
	var uLocal_15960 = 0;
	var uLocal_15961 = 0;
	var uLocal_15962 = 0;
	var uLocal_15963 = 0;
	var uLocal_15964 = 0;
	var uLocal_15965 = 0;
	var uLocal_15966 = 0;
	var uLocal_15967 = 0;
	var uLocal_15968 = 0;
	var uLocal_15969 = 0;
	var uLocal_15970 = 0;
	var uLocal_15971 = 0;
	var uLocal_15972 = 0;
	var uLocal_15973 = 0;
	var uLocal_15974 = 0;
	var uLocal_15975 = 0;
	var uLocal_15976 = 0;
	var uLocal_15977 = 0;
	var uLocal_15978 = 0;
	var uLocal_15979 = 0;
	var uLocal_15980 = 0;
	var uLocal_15981 = 0;
	var uLocal_15982 = 0;
	var uLocal_15983 = 0;
	var uLocal_15984 = 0;
	var uLocal_15985 = 0;
	var uLocal_15986 = 0;
	var uLocal_15987 = 0;
	var uLocal_15988 = 0;
	var uLocal_15989 = 0;
	var uLocal_15990 = 0;
	var uLocal_15991 = 0;
	var uLocal_15992 = 0;
	var uLocal_15993 = 0;
	var uLocal_15994 = 0;
	var uLocal_15995 = 0;
	var uLocal_15996 = 0;
	var uLocal_15997 = 0;
	var uLocal_15998 = 0;
	var uLocal_15999 = 0;
	var uLocal_16000 = 0;
	var uLocal_16001 = 0;
	var uLocal_16002 = 0;
	var uLocal_16003 = 0;
	var uLocal_16004 = 0;
	var uLocal_16005 = 0;
	var uLocal_16006 = 0;
	var uLocal_16007 = 0;
	var uLocal_16008 = 0;
	var uLocal_16009 = 0;
	var uLocal_16010 = 0;
	var uLocal_16011 = 0;
	var uLocal_16012 = 0;
	var uLocal_16013 = 0;
	var uLocal_16014 = 0;
	var uLocal_16015 = 0;
	var uLocal_16016 = 0;
	var uLocal_16017 = 0;
	var uLocal_16018 = 0;
	var uLocal_16019 = 0;
	var uLocal_16020 = 0;
	var uLocal_16021 = 0;
	var uLocal_16022 = 0;
	var uLocal_16023 = 0;
	var uLocal_16024 = 0;
	var uLocal_16025 = 0;
	var uLocal_16026 = 0;
	var uLocal_16027 = 0;
	var uLocal_16028 = 0;
	var uLocal_16029 = 0;
	var uLocal_16030 = 0;
	var uLocal_16031 = 0;
	var uLocal_16032 = 0;
	var uLocal_16033 = 0;
	var uLocal_16034 = 0;
	var uLocal_16035 = 0;
	var uLocal_16036 = 0;
	var uLocal_16037 = 0;
	var uLocal_16038 = 0;
	var uLocal_16039 = 0;
	var uLocal_16040 = 0;
	var uLocal_16041 = 0;
	var uLocal_16042 = 0;
	var uLocal_16043 = 0;
	var uLocal_16044 = 0;
	var uLocal_16045 = 0;
	var uLocal_16046 = 0;
	var uLocal_16047 = 0;
	var uLocal_16048 = 0;
	var uLocal_16049 = 0;
	var uLocal_16050 = 0;
	var uLocal_16051 = 0;
	var uLocal_16052 = 0;
	var uLocal_16053 = 0;
	var uLocal_16054 = 0;
	var uLocal_16055 = 0;
	var uLocal_16056 = 0;
	var uLocal_16057 = 0;
	var uLocal_16058 = 0;
	var uLocal_16059 = 0;
	var uLocal_16060 = 0;
	var uLocal_16061 = 0;
	var uLocal_16062 = 0;
	var uLocal_16063 = 0;
	var uLocal_16064 = 0;
	var uLocal_16065 = 0;
	var uLocal_16066 = 0;
	var uLocal_16067 = 0;
	var uLocal_16068 = 0;
	var uLocal_16069 = 0;
	var uLocal_16070 = 0;
	var uLocal_16071 = 0;
	var uLocal_16072 = 0;
	var uLocal_16073 = 0;
	var uLocal_16074 = 0;
	var uLocal_16075 = 0;
	var uLocal_16076 = 0;
	var uLocal_16077 = 0;
	var uLocal_16078 = 0;
	var uLocal_16079 = 0;
	var uLocal_16080 = 0;
	var uLocal_16081 = 0;
	var uLocal_16082 = 0;
	var uLocal_16083 = 0;
	var uLocal_16084 = 0;
	var uLocal_16085 = 0;
	var uLocal_16086 = 0;
	var uLocal_16087 = 0;
	var uLocal_16088 = 0;
	var uLocal_16089 = 0;
	var uLocal_16090 = 0;
	var uLocal_16091 = 0;
	var uLocal_16092 = 0;
	var uLocal_16093 = 0;
	var uLocal_16094 = 0;
	var uLocal_16095 = 0;
	var uLocal_16096 = 0;
	var uLocal_16097 = 0;
	var uLocal_16098 = 0;
	var uLocal_16099 = 0;
	var uLocal_16100 = 0;
	var uLocal_16101 = 0;
	var uLocal_16102 = 0;
	var uLocal_16103 = 0;
	var uLocal_16104 = 0;
	var uLocal_16105 = 0;
	var uLocal_16106 = 0;
	var uLocal_16107 = 0;
	var uLocal_16108 = 0;
	var uLocal_16109 = 0;
	var uLocal_16110 = 0;
	var uLocal_16111 = 0;
	var uLocal_16112 = 0;
	var uLocal_16113 = 0;
	var uLocal_16114 = 0;
	var uLocal_16115 = 0;
	var uLocal_16116 = 0;
	var uLocal_16117 = 0;
	var uLocal_16118 = 0;
	var uLocal_16119 = 0;
	var uLocal_16120 = 0;
	var uLocal_16121 = 0;
	var uLocal_16122 = 0;
	var uLocal_16123 = 0;
	var uLocal_16124 = 0;
	var uLocal_16125 = 0;
	var uLocal_16126 = 0;
	var uLocal_16127 = 0;
	var uLocal_16128 = 0;
	var uLocal_16129 = 0;
	var uLocal_16130 = 0;
	var uLocal_16131 = 0;
	var uLocal_16132 = 0;
	var uLocal_16133 = 0;
	var uLocal_16134 = 0;
	var uLocal_16135 = 0;
	var uLocal_16136 = 0;
	var uLocal_16137 = 0;
	var uLocal_16138 = 0;
	var uLocal_16139 = 0;
	var uLocal_16140 = 0;
	var uLocal_16141 = 0;
	var uLocal_16142 = 0;
	var uLocal_16143 = 0;
	var uLocal_16144 = 0;
	var uLocal_16145 = 0;
	var uLocal_16146 = 0;
	var uLocal_16147 = 0;
	var uLocal_16148 = 0;
	var uLocal_16149 = 0;
	var uLocal_16150 = 0;
	var uLocal_16151 = 0;
	var uLocal_16152 = 0;
	var uLocal_16153 = 0;
	var uLocal_16154 = 0;
	var uLocal_16155 = 0;
	var uLocal_16156 = 0;
	var uLocal_16157 = 0;
	var uLocal_16158 = 8;
	var uLocal_16159 = 0;
	var uLocal_16160 = 0;
	var uLocal_16161 = 0;
	var uLocal_16162 = 0;
	var uLocal_16163 = 0;
	var uLocal_16164 = 0;
	var uLocal_16165 = 0;
	var uLocal_16166 = 0;
	var uLocal_16167 = 0;
	var uLocal_16168 = 0;
	var uLocal_16169 = 0;
	var uLocal_16170 = 0;
	var uLocal_16171 = 0;
	var uLocal_16172 = 0;
	var uLocal_16173 = 0;
	var uLocal_16174 = 0;
	var uLocal_16175 = 0;
	var uLocal_16176 = 0;
	var uLocal_16177 = 0;
	var uLocal_16178 = 0;
	var uLocal_16179 = -1;
	var uLocal_16180 = 0;
	var uLocal_16181 = 0;
	var uLocal_16182 = 0;
	var uLocal_16183 = 0;
	var uLocal_16184 = 0;
	var uLocal_16185 = 0;
	var uLocal_16186 = 0;
	var uLocal_16187 = 0;
	var uLocal_16188 = 0;
	var uLocal_16189 = 0;
	var uLocal_16190 = 0;
	var uLocal_16191 = 0;
	var uLocal_16192 = 0;
	var uLocal_16193 = 0;
	var uLocal_16194 = 0;
	var uLocal_16195 = 0;
	var uLocal_16196 = 0;
	var uLocal_16197 = 0;
	var uLocal_16198 = 0;
	var uLocal_16199 = 0;
	var uLocal_16200 = 0;
	var uLocal_16201 = -1;
	var uLocal_16202 = 0;
	var uLocal_16203 = 0;
	var uLocal_16204 = 0;
	var uLocal_16205 = 0;
	var uLocal_16206 = 0;
	var uLocal_16207 = 0;
	var uLocal_16208 = 0;
	var uLocal_16209 = 0;
	var uLocal_16210 = 0;
	var uLocal_16211 = 0;
	var uLocal_16212 = 0;
	var uLocal_16213 = 0;
	var uLocal_16214 = 0;
	var uLocal_16215 = 0;
	var uLocal_16216 = 0;
	var uLocal_16217 = 0;
	var uLocal_16218 = 0;
	var uLocal_16219 = 0;
	var uLocal_16220 = 0;
	var uLocal_16221 = 0;
	var uLocal_16222 = 0;
	var uLocal_16223 = -1;
	var uLocal_16224 = 0;
	var uLocal_16225 = 0;
	var uLocal_16226 = 0;
	var uLocal_16227 = 0;
	var uLocal_16228 = 0;
	var uLocal_16229 = 0;
	var uLocal_16230 = 0;
	var uLocal_16231 = 0;
	var uLocal_16232 = 0;
	var uLocal_16233 = 0;
	var uLocal_16234 = 0;
	var uLocal_16235 = 0;
	var uLocal_16236 = 0;
	var uLocal_16237 = 0;
	var uLocal_16238 = 0;
	var uLocal_16239 = 0;
	var uLocal_16240 = 0;
	var uLocal_16241 = 0;
	var uLocal_16242 = 0;
	var uLocal_16243 = 0;
	var uLocal_16244 = 0;
	var uLocal_16245 = -1;
	var uLocal_16246 = 0;
	var uLocal_16247 = 0;
	var uLocal_16248 = 0;
	var uLocal_16249 = 0;
	var uLocal_16250 = 0;
	var uLocal_16251 = 0;
	var uLocal_16252 = 0;
	var uLocal_16253 = 0;
	var uLocal_16254 = 0;
	var uLocal_16255 = 0;
	var uLocal_16256 = 0;
	var uLocal_16257 = 0;
	var uLocal_16258 = 0;
	var uLocal_16259 = 0;
	var uLocal_16260 = 0;
	var uLocal_16261 = 0;
	var uLocal_16262 = 0;
	var uLocal_16263 = 0;
	var uLocal_16264 = 0;
	var uLocal_16265 = 0;
	var uLocal_16266 = 0;
	var uLocal_16267 = -1;
	var uLocal_16268 = 0;
	var uLocal_16269 = 0;
	var uLocal_16270 = 0;
	var uLocal_16271 = 0;
	var uLocal_16272 = 0;
	var uLocal_16273 = 0;
	var uLocal_16274 = 0;
	var uLocal_16275 = 0;
	var uLocal_16276 = 0;
	var uLocal_16277 = 0;
	var uLocal_16278 = 0;
	var uLocal_16279 = 0;
	var uLocal_16280 = 0;
	var uLocal_16281 = 0;
	var uLocal_16282 = 0;
	var uLocal_16283 = 0;
	var uLocal_16284 = 0;
	var uLocal_16285 = 0;
	var uLocal_16286 = 0;
	var uLocal_16287 = 0;
	var uLocal_16288 = 0;
	var uLocal_16289 = -1;
	var uLocal_16290 = 0;
	var uLocal_16291 = 0;
	var uLocal_16292 = 0;
	var uLocal_16293 = 0;
	var uLocal_16294 = 0;
	var uLocal_16295 = 0;
	var uLocal_16296 = 0;
	var uLocal_16297 = 0;
	var uLocal_16298 = 0;
	var uLocal_16299 = 0;
	var uLocal_16300 = 0;
	var uLocal_16301 = 0;
	var uLocal_16302 = 0;
	var uLocal_16303 = 0;
	var uLocal_16304 = 0;
	var uLocal_16305 = 0;
	var uLocal_16306 = 0;
	var uLocal_16307 = 0;
	var uLocal_16308 = 0;
	var uLocal_16309 = 0;
	var uLocal_16310 = 0;
	var uLocal_16311 = -1;
	var uLocal_16312 = 0;
	var uLocal_16313 = 0;
	var uLocal_16314 = 0;
	var uLocal_16315 = 0;
	var uLocal_16316 = 0;
	var uLocal_16317 = 0;
	var uLocal_16318 = 0;
	var uLocal_16319 = 0;
	var uLocal_16320 = 0;
	var uLocal_16321 = 0;
	var uLocal_16322 = 0;
	var uLocal_16323 = 0;
	var uLocal_16324 = 0;
	var uLocal_16325 = 0;
	var uLocal_16326 = 0;
	var uLocal_16327 = 0;
	var uLocal_16328 = 0;
	var uLocal_16329 = 0;
	var uLocal_16330 = 0;
	var uLocal_16331 = 0;
	var uLocal_16332 = 0;
	var uLocal_16333 = -1;
	var uLocal_16334 = 0;
	var uLocal_16335 = 11;
	var uLocal_16336 = 0;
	var uLocal_16337 = 0;
	var uLocal_16338 = 0;
	var uLocal_16339 = 0;
	var uLocal_16340 = 0;
	var uLocal_16341 = 0;
	var uLocal_16342 = 0;
	var uLocal_16343 = 0;
	var uLocal_16344 = 0;
	var uLocal_16345 = 0;
	var uLocal_16346 = 0;
	var uLocal_16347 = 0;
	var uLocal_16348 = 0;
	var uLocal_16349 = 0;
	var uLocal_16350 = 0;
	var uLocal_16351 = 0;
	var uLocal_16352 = 0;
	var uLocal_16353 = 0;
	var uLocal_16354 = 0;
	var uLocal_16355 = 0;
	var uLocal_16356 = 0;
	var uLocal_16357 = 0;
	var uLocal_16358 = 0;
	var uLocal_16359 = 0;
	var uLocal_16360 = 0;
	var uLocal_16361 = 0;
	var uLocal_16362 = 0;
	var uLocal_16363 = 0;
	var uLocal_16364 = 0;
	var uLocal_16365 = 0;
	var uLocal_16366 = 0;
	var uLocal_16367 = 0;
	var uLocal_16368 = 0;
	var uLocal_16369 = 0;
	var uLocal_16370 = 0;
	var uLocal_16371 = 0;
	var uLocal_16372 = 0;
	var uLocal_16373 = 0;
	var uLocal_16374 = 0;
	var uLocal_16375 = 0;
	var uLocal_16376 = 0;
	var uLocal_16377 = 0;
	var uLocal_16378 = 0;
	var uLocal_16379 = 0;
	var uLocal_16380 = 0;
	var uLocal_16381 = 0;
	var uLocal_16382 = 0;
	var uLocal_16383 = 0;
	var uLocal_16384 = 0;
	var uLocal_16385 = 0;
	var uLocal_16386 = 0;
	var uLocal_16387 = 0;
	var uLocal_16388 = 0;
	var uLocal_16389 = 0;
	var uLocal_16390 = 0;
	var uLocal_16391 = 0;
	var uLocal_16392 = 0;
	var uLocal_16393 = 0;
	var uLocal_16394 = 0;
	var uLocal_16395 = 0;
	var uLocal_16396 = 0;
	var uLocal_16397 = 0;
	var uLocal_16398 = 0;
	var uLocal_16399 = 0;
	var uLocal_16400 = 0;
	var uLocal_16401 = 0;
	var uLocal_16402 = 0;
	var uLocal_16403 = 0;
	var uLocal_16404 = 0;
	var uLocal_16405 = 0;
	var uLocal_16406 = 0;
	var uLocal_16407 = 0;
	var uLocal_16408 = 0;
	var uLocal_16409 = 0;
	var uLocal_16410 = 0;
	var uLocal_16411 = 0;
	var uLocal_16412 = 0;
	var uLocal_16413 = 0;
	var uLocal_16414 = 0;
	var uLocal_16415 = 0;
	var uLocal_16416 = 0;
	var uLocal_16417 = 0;
	var uLocal_16418 = 0;
	var uLocal_16419 = 0;
	var uLocal_16420 = 0;
	var uLocal_16421 = 0;
	var uLocal_16422 = 0;
	var uLocal_16423 = 0;
	var uLocal_16424 = 0;
	var uLocal_16425 = 0;
	var uLocal_16426 = 0;
	var uLocal_16427 = 0;
	var uLocal_16428 = 0;
	var uLocal_16429 = 0;
	var uLocal_16430 = 0;
	var uLocal_16431 = 0;
	var uLocal_16432 = 0;
	var uLocal_16433 = 0;
	var uLocal_16434 = 0;
	var uLocal_16435 = 0;
	var uLocal_16436 = 0;
	var uLocal_16437 = 0;
	var uLocal_16438 = 0;
	var uLocal_16439 = 0;
	var uLocal_16440 = 0;
	var uLocal_16441 = 0;
	var uLocal_16442 = 0;
	var uLocal_16443 = 0;
	var uLocal_16444 = 0;
	var uLocal_16445 = 0;
	var uLocal_16446 = 2;
	var uLocal_16447 = 0;
	var uLocal_16448 = 0;
	var uLocal_16449 = 0;
	var uLocal_16450 = 0;
	var uLocal_16451 = 0;
	var uLocal_16452 = 0;
	var uLocal_16453 = 0;
	var uLocal_16454 = 0;
	var uLocal_16455 = 0;
	var uLocal_16456 = 0;
	var uLocal_16457 = 0;
	var uLocal_16458 = 0;
	var uLocal_16459 = 0;
	var uLocal_16460 = 0;
	var uLocal_16461 = 0;
	var uLocal_16462 = 0;
	var uLocal_16463 = 0;
	var uLocal_16464 = 0;
	var uLocal_16465 = 0;
	var uLocal_16466 = 0;
	var uLocal_16467 = 0;
	var uLocal_16468 = 0;
	var uLocal_16469 = 0;
	var uLocal_16470 = 0;
	var uLocal_16471 = 0;
	var uLocal_16472 = 0;
	var uLocal_16473 = 0;
	var uLocal_16474 = 0;
	var uLocal_16475 = 0;
	var uLocal_16476 = 0;
	var uLocal_16477 = 0;
	var uLocal_16478 = 0;
	var uLocal_16479 = 0;
	var uLocal_16480 = 0;
	var uLocal_16481 = 2;
	var uLocal_16482 = 0;
	var uLocal_16483 = 0;
	var uLocal_16484 = 0;
	var uLocal_16485 = 0;
	var uLocal_16486 = 0;
	var uLocal_16487 = 0;
	var uLocal_16488 = 0;
	var uLocal_16489 = 0;
	var uLocal_16490 = 0;
	var uLocal_16491 = 0;
	var uLocal_16492 = 0;
	var uLocal_16493 = 0;
	var uLocal_16494 = 0;
	var uLocal_16495 = 0;
	var uLocal_16496 = 0;
	var uLocal_16497 = 0;
	var uLocal_16498 = -1;
	var uLocal_16499 = 0;
	var uLocal_16500 = 0;
	var uLocal_16501 = -1;
	var uLocal_16502 = -1082130432;
	var uLocal_16503 = 0;
	var uLocal_16504 = 0;
	var uLocal_16505 = 0;
	var uLocal_16506 = 0;
	var uLocal_16507 = 0;
	var uLocal_16508 = 0;
	var uLocal_16509 = 0;
	var uLocal_16510 = 0;
	var uLocal_16511 = 0;
	var uLocal_16512 = 0;
	var uLocal_16513 = 0;
	var uLocal_16514 = 0;
	var uLocal_16515 = 0;
	var uLocal_16516 = 0;
	var uLocal_16517 = 0;
	var uLocal_16518 = 0;
	var uLocal_16519 = 0;
	var uLocal_16520 = 0;
	var uLocal_16521 = 0;
	var uLocal_16522 = 0;
	var uLocal_16523 = 0;
	var uLocal_16524 = 0;
	var uLocal_16525 = 0;
	var uLocal_16526 = 0;
	var uLocal_16527 = 0;
	var uLocal_16528 = 0;
	var uLocal_16529 = 0;
	var uLocal_16530 = 0;
	var uLocal_16531 = 0;
	var uLocal_16532 = 0;
	var uLocal_16533 = 0;
	var uLocal_16534 = 0;
	var uLocal_16535 = 0;
	var uLocal_16536 = 0;
	var uLocal_16537 = 0;
	var uLocal_16538 = 0;
	var uLocal_16539 = 0;
	var uLocal_16540 = 0;
	var uLocal_16541 = 0;
	var uLocal_16542 = 0;
	var uLocal_16543 = 0;
	var uLocal_16544 = 0;
	var uLocal_16545 = 0;
	var uLocal_16546 = 0;
	var uLocal_16547 = 0;
	var uLocal_16548 = 0;
	var uLocal_16549 = 0;
	var uLocal_16550 = 0;
	var uLocal_16551 = 0;
	var uLocal_16552 = 0;
	var uLocal_16553 = 0;
	var uLocal_16554 = 0;
	var uLocal_16555 = 0;
	var uLocal_16556 = 0;
	var uLocal_16557 = 0;
	var uLocal_16558 = 0;
	var uLocal_16559 = 0;
	var uLocal_16560 = 0;
	var uLocal_16561 = 0;
	var uLocal_16562 = 0;
	var uLocal_16563 = 0;
	var uLocal_16564 = 0;
	var uLocal_16565 = 0;
	var uLocal_16566 = 0;
	var uLocal_16567 = 0;
	var uLocal_16568 = 0;
	var uLocal_16569 = 0;
	var uLocal_16570 = 0;
	var uLocal_16571 = 0;
	var uLocal_16572 = 0;
	var uLocal_16573 = 0;
	var uLocal_16574 = 0;
	var uLocal_16575 = 0;
	var uLocal_16576 = 0;
	var uLocal_16577 = 0;
	var uLocal_16578 = 0;
	var uLocal_16579 = 0;
	var uLocal_16580 = 0;
	var uLocal_16581 = 0;
	var uLocal_16582 = 0;
	var uLocal_16583 = 0;
	var uLocal_16584 = 24;
	var uLocal_16585 = 0;
	var uLocal_16586 = 0;
	var uLocal_16587 = 0;
	var uLocal_16588 = 0;
	var uLocal_16589 = 0;
	var uLocal_16590 = 0;
	var uLocal_16591 = 0;
	var uLocal_16592 = 0;
	var uLocal_16593 = 0;
	var uLocal_16594 = 0;
	var uLocal_16595 = 0;
	var uLocal_16596 = 0;
	var uLocal_16597 = 0;
	var uLocal_16598 = 0;
	var uLocal_16599 = 0;
	var uLocal_16600 = 0;
	var uLocal_16601 = 0;
	var uLocal_16602 = 0;
	var uLocal_16603 = 0;
	var uLocal_16604 = 0;
	var uLocal_16605 = 0;
	var uLocal_16606 = 0;
	var uLocal_16607 = 0;
	var uLocal_16608 = 0;
	var uLocal_16609 = 0;
	var uLocal_16610 = 0;
	var uLocal_16611 = 0;
	var uLocal_16612 = 0;
	var uLocal_16613 = 0;
	var uLocal_16614 = 0;
	var uLocal_16615 = 0;
	var uLocal_16616 = 0;
	var uLocal_16617 = 0;
	var uLocal_16618 = 0;
	var uLocal_16619 = 0;
	var uLocal_16620 = 0;
	var uLocal_16621 = 0;
	var uLocal_16622 = 0;
	var uLocal_16623 = 0;
	var uLocal_16624 = 0;
	var uLocal_16625 = 0;
	var uLocal_16626 = 0;
	var uLocal_16627 = 0;
	var uLocal_16628 = 0;
	var uLocal_16629 = 0;
	var uLocal_16630 = 0;
	var uLocal_16631 = 0;
	var uLocal_16632 = 0;
	var uLocal_16633 = 0;
	var uLocal_16634 = 0;
	var uLocal_16635 = 0;
	var uLocal_16636 = 0;
	var uLocal_16637 = 0;
	var uLocal_16638 = 0;
	var uLocal_16639 = 0;
	var uLocal_16640 = 0;
	var uLocal_16641 = 0;
	var uLocal_16642 = 0;
	var uLocal_16643 = 0;
	var uLocal_16644 = 0;
	var uLocal_16645 = 0;
	var uLocal_16646 = 0;
	var uLocal_16647 = 0;
	var uLocal_16648 = 0;
	var uLocal_16649 = 0;
	var uLocal_16650 = 0;
	var uLocal_16651 = 0;
	var uLocal_16652 = 0;
	var uLocal_16653 = 0;
	var uLocal_16654 = 0;
	var uLocal_16655 = 0;
	var uLocal_16656 = 0;
	var uLocal_16657 = 0;
	var uLocal_16658 = 0;
	var uLocal_16659 = 0;
	var uLocal_16660 = 0;
	var uLocal_16661 = 0;
	var uLocal_16662 = 0;
	var uLocal_16663 = 0;
	var uLocal_16664 = 0;
	var uLocal_16665 = 0;
	var uLocal_16666 = 0;
	var uLocal_16667 = 0;
	var uLocal_16668 = 0;
	var uLocal_16669 = 0;
	var uLocal_16670 = 0;
	var uLocal_16671 = 0;
	var uLocal_16672 = 0;
	var uLocal_16673 = 0;
	var uLocal_16674 = 0;
	var uLocal_16675 = 0;
	var uLocal_16676 = 0;
	var uLocal_16677 = 0;
	var uLocal_16678 = 0;
	var uLocal_16679 = 0;
	var uLocal_16680 = 0;
	var uLocal_16681 = 0;
	var uLocal_16682 = 0;
	var uLocal_16683 = 0;
	var uLocal_16684 = 0;
	var uLocal_16685 = 0;
	var uLocal_16686 = 0;
	var uLocal_16687 = 0;
	var uLocal_16688 = 0;
	var uLocal_16689 = 0;
	var uLocal_16690 = 0;
	var uLocal_16691 = 0;
	var uLocal_16692 = 0;
	var uLocal_16693 = 0;
	var uLocal_16694 = 0;
	var uLocal_16695 = 0;
	var uLocal_16696 = 0;
	var uLocal_16697 = 0;
	var uLocal_16698 = 0;
	var uLocal_16699 = 0;
	var uLocal_16700 = 0;
	var uLocal_16701 = 0;
	var uLocal_16702 = 0;
	var uLocal_16703 = 0;
	var uLocal_16704 = 0;
	var uLocal_16705 = 0;
	var uLocal_16706 = 0;
	var uLocal_16707 = 0;
	var uLocal_16708 = -1;
	var uLocal_16709 = 0;
	var uLocal_16710 = 0;
	var uLocal_16711 = 0;
	var uLocal_16712 = 0;
	var uLocal_16713 = 0;
	var uLocal_16714 = 0;
	var uLocal_16715 = 0;
	var uLocal_16716 = 0;
	var uLocal_16717 = 0;
	var uLocal_16718 = 0;
	var uLocal_16719 = 0;
	var uLocal_16720 = 0;
	var uLocal_16721 = 0;
	var uLocal_16722 = 0;
	var uLocal_16723 = 0;
	var uLocal_16724 = 0;
	var uLocal_16725 = 0;
	var uLocal_16726 = 0;
	var uLocal_16727 = 0;
	var uLocal_16728 = 0;
	var uLocal_16729 = 0;
	var uLocal_16730 = 0;
	var uLocal_16731 = 0;
	var uLocal_16732 = 0;
	var uLocal_16733 = 0;
	var uLocal_16734 = 0;
	var uLocal_16735 = -1;
	var uLocal_16736 = 20;
	var uLocal_16737 = 0;
	var uLocal_16738 = 0;
	var uLocal_16739 = 0;
	var uLocal_16740 = 0;
	var uLocal_16741 = 0;
	var uLocal_16742 = 0;
	var uLocal_16743 = 0;
	var uLocal_16744 = 0;
	var uLocal_16745 = 0;
	var uLocal_16746 = 0;
	var uLocal_16747 = 0;
	var uLocal_16748 = 0;
	var uLocal_16749 = 0;
	var uLocal_16750 = 0;
	var uLocal_16751 = 0;
	var uLocal_16752 = 0;
	var uLocal_16753 = 0;
	var uLocal_16754 = 0;
	var uLocal_16755 = 0;
	var uLocal_16756 = 0;
	var uLocal_16757 = 0;
	var uLocal_16758 = 0;
	var uLocal_16759 = 0;
	var uLocal_16760 = 0;
	var uLocal_16761 = 0;
	var uLocal_16762 = 0;
	var uLocal_16763 = 0;
	var uLocal_16764 = 1028443341;
	var uLocal_16765 = 1038174126;
	var uLocal_16766 = 1065353216;
	var uLocal_16767 = 1065353216;
	var uLocal_16768 = 1086324736;
	var uLocal_16769 = 1082130432;
	var uLocal_16770 = 1073741824;
	var uLocal_16771 = 1065353216;
	var uLocal_16772 = 1108082688;
	var uLocal_16773 = 1108082688;
	var uLocal_16774 = 3000;
	var uLocal_16775 = 1092616192;
	var uLocal_16776 = 0;
	var uLocal_16777 = 0;
	var uLocal_16778 = 0;
	var uLocal_16779 = 0;
	var uLocal_16780 = 0;
	var uLocal_16781 = 0;
	var uLocal_16782 = 0;
	var uLocal_16783 = 0;
	var uLocal_16784 = 0;
	var uLocal_16785 = 0;
	var uLocal_16786 = 0;
	var uLocal_16787 = 0;
	var uLocal_16788 = 0;
	var uLocal_16789 = 0;
	var uLocal_16790 = 0;
	var uLocal_16791 = 0;
	var uLocal_16792 = 0;
	var uLocal_16793 = 0;
	var uLocal_16794 = 0;
	var uLocal_16795 = 0;
	var uLocal_16796 = 0;
	var uLocal_16797 = 0;
	var uLocal_16798 = 0;
	var uLocal_16799 = 0;
	var uLocal_16800 = 0;
	var uLocal_16801 = 0;
	var uLocal_16802 = 0;
	var uLocal_16803 = 0;
	var uLocal_16804 = 0;
	var uLocal_16805 = 0;
	var uLocal_16806 = 0;
	var uLocal_16807 = 0;
	var uLocal_16808 = 0;
	var uLocal_16809 = 0;
	var uLocal_16810 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 1;
	iLocal_18 = 2;
	iLocal_19 = 3;
	iLocal_20 = 25;
	iLocal_21 = joaat("CS_LEVITICUSCORNWALL");
	iLocal_22 = joaat("G_M_M_UNICORNWALLGOONS_01");
	iLocal_23 = joaat("S_M_M_PINLAW_01");
	iLocal_24 = joaat("A_M_M_ASBMINER_01");
	iLocal_25 = joaat("A_F_M_ASBTOWNFOLK_01");
	iLocal_26 = joaat("CS_MILTONANDREWS");
	iLocal_27 = joaat("TURBINEBOAT");
	iLocal_28 = joaat("OILWAGON01X");
	iLocal_29 = joaat("COACH2");
	iLocal_30 = joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT");
	iLocal_31 = joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY");
	iLocal_32 = joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO");
	iLocal_33 = joaat("P_CS_HORSEHARNESS01X");
	iLocal_34 = joaat("CS_JANSON");
	iLocal_35 = joaat("P_WOODRAMP02X");
	iLocal_36 = joaat("P_CS_LETTER03X");
	iLocal_37 = joaat("P_CS_BOOK04X");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_3631, 1073741824 /* Float: 2f */);
		func_2(&uLocal_3631, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_3631);
	func_5(&uLocal_3631);
	while (!__LIB_4__::func_936(&uLocal_3631, -2147483648))
	{
		func_7(&uLocal_3631);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_3631, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_4__::func_937(uParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(uParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_748(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_797(1);
		__LIB_0__::func_722(1, 0);
		__LIB_5__::func_324(uParam0, 1);
		__LIB_1__::func_723(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36605 = 0;
		__LIB_5__::func_384(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!__LIB_4__::func_936(uParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_4__::func_938(uParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_4__::func_938(uParam0) == 1 || __LIB_4__::func_938(uParam0) == 2)
					{
						if (__LIB_4__::func_505(&(uParam0->f_8269)) && __LIB_4__::func_506(&(uParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_0__::func_75(&(uParam0->f_13118)))
					{
						__LIB_1__::func_283(&(uParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_4__::func_935(uParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_4__::func_936(uParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_5__::func_474(uParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_4__::func_936(uParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_5__::func_380(uParam0);
							}
							return false;
						}
						if (__LIB_4__::func_936(uParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_4__::func_938(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(uParam0))
								{
									uParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((uParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > uParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_4__::func_938(uParam0) == 1)
						{
							if (__LIB_5__::func_474(uParam0, bVar1))
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						CAM::IS_SCREEN_FADING_IN();
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							return false;
						}
					}
				}
			}
			else if (__LIB_4__::func_936(uParam0, 2))
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
					return false;
				}
				if (MISC::_0x1B065A2BF7953815(1) == 1)
				{
					return false;
				}
			}
			if (!__LIB_4__::func_678() && __LIB_4__::func_938(uParam0) != 0)
			{
				__LIB_5__::func_599(uParam0, func_34(__LIB_4__::func_939(uParam0)), func_34(__LIB_5__::func_475(uParam0)), __LIB_4__::func_939(uParam0), __LIB_5__::func_475(uParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_7375.f_804);
		}
	}
	__LIB_4__::func_935(uParam0, 1048576);
	if (!__LIB_4__::func_936(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return false;
		}
		__LIB_4__::func_935(uParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(uParam0->f_8269));
	if (__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		__LIB_4__::func_507(&(uParam0->f_8269));
	}
	AUDIO::SET_GPS_ACTIVE(false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(1);
	__LIB_0__::func_267(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	__LIB_0__::func_395(0);
	__LIB_4__::func_679();
	__LIB_5__::func_384(3);
	if (!__LIB_4__::func_936(uParam0, 8))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	__LIB_4__::func_797(1);
	__LIB_4__::func_782();
	__LIB_4__::func_680();
	HUD::SET_MISSION_NAME(false, 0);
	__LIB_0__::func_769();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	__LIB_4__::func_940(uParam0);
	__LIB_5__::func_20(1, 0);
	__LIB_0__::func_698(2);
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
		WEAPON::_0xB832F1A686B9B810(Global_35, __LIB_5__::func_21(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		__LIB_1__::func_733(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
	__LIB_4__::func_508();
	CAM::STOP_GAMEPLAY_HINT(true);
	__LIB_1__::func_600(1);
	__LIB_5__::func_327();
	if (__LIB_1__::func_652())
	{
		STREAMING::_0x2F9AC754FE179D58(0.3f);
	}
	__LIB_4__::func_845(0, 14);
	bVar2 = false;
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_5__::func_328(uParam0);
	}
	__LIB_8__::func_945(uParam0, 0, !bVar2, bVar2);
	__LIB_5__::func_595(uParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_4__::func_941(uParam0));
	__LIB_5__::func_330(__LIB_4__::func_941(uParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_4__::func_938(uParam0));
	__LIB_5__::func_22(uParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_4__::func_938(uParam0) != 1)
	{
		__LIB_5__::func_101(0, &(uParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[uParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_4__::func_938(uParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_4__::func_936(uParam0, 4)) && !__LIB_4__::func_936(uParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(uParam0);
				__LIB_5__::func_503(uParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(uParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(uParam0->f_607), !__LIB_4__::func_936(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					__LIB_1__::func_809(__LIB_3__::func_918(uParam0->f_607), bVar3);
				}
				__LIB_5__::func_324(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_5__::func_104(uParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_86();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_4__::func_936(uParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					__LIB_1__::func_954(1);
					__LIB_5__::func_116();
					__LIB_0__::func_320(6);
					__LIB_0__::func_319(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				__LIB_1__::func_645(__LIB_3__::func_918(uParam0->f_607));
				__LIB_4__::func_942();
				if (__LIB_4__::func_938(uParam0) == 2)
				{
					__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			case 5:
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_4__::func_942();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(uParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_4__::func_938(uParam0) != 0)
		{
			Var6 = { __LIB_4__::func_943(uParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(uParam0->f_607), __LIB_4__::func_938(uParam0), &Var6, 0, 0, __LIB_4__::func_936(uParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_4__::func_944(uParam0, 4096);
	return true;
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	uParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!__LIB_0__::func_2() == 0)
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_43616) && ITEMSET::GET_ITEMSET_SIZE(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43616);
				iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
				if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && !ITEMSET::IS_IN_ITEMSET(iVar2, iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	__LIB_5__::func_587(uParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_5__::func_23(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(uParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
				}
				iVar4++;
			}
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		PED::_0xF008E0BA1FE1D644(ITEMSET::GET_ITEMSET_SIZE(iVar0));
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (__LIB_4__::func_511())
	{
		__LIB_4__::func_945(uParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_4__::func_945(uParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_4__::func_945(uParam1, 4);
		}
		else
		{
			if (__LIB_4__::func_512())
			{
			}
			if (__LIB_4__::func_511())
			{
			}
		}
		__LIB_4__::func_946(uParam1, __LIB_4__::func_513());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((uParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(var uParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(uParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (uParam0->f_607 != 77)
	{
		__LIB_0__::func_496();
		__LIB_1__::func_323(&cVar0, 0);
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_0__::func_105(1);
	__LIB_2__::func_459();
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_769();
	__LIB_0__::func_267(__LIB_4__::func_947(uParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	__LIB_0__::func_112(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	__LIB_4__::func_514(uParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_4__::func_948(uParam0, 16384) && (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2) || __LIB_5__::func_371()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		}
		PED::CLEAR_PED_WETNESS(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Global_35);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((((WEAPON::_0x2C83212A7AA51D3D(iVar1) || iVar1 == joaat("OBJECT_1")) || iVar1 == joaat("OBJECT_2")) || iVar1 == joaat("OBJECT_3")) || iVar1 == joaat("OBJECT_4"))
			{
				if (!__LIB_5__::func_371() && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
				{
				}
			}
			else if (!__LIB_0__::func_214(iVar1) && !__LIB_0__::func_13(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, false, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_123(uParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_4__::func_949(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_15 = __LIB_4__::func_950(uParam0);
	iLocal_15 = iLocal_15;
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_4__::func_939(uParam0)) };
			if (__LIB_4__::func_939(uParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				__LIB_4__::func_945(uParam0, 1048576);
			}
			__LIB_4__::func_946(uParam0, 0);
			if (__LIB_4__::func_951(uParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_5__::func_497(uParam0, __LIB_1__::func_469(uParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			__LIB_4__::func_946(uParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[uParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_4__::func_939(uParam0)), __LIB_5__::func_371());
	}
	__LIB_5__::func_332(uParam0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_5__::func_372(uParam0, 0);
	if (!__LIB_5__::func_278(uParam0, __LIB_4__::func_939(uParam0)))
	{
		__LIB_4__::func_946(uParam0, 0);
	}
	__LIB_5__::func_333(uParam0);
	__LIB_6__::func_922(uParam0);
	func_139(uParam0);
	__LIB_4__::func_945(uParam0, 2097152);
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_4__::func_935(uParam0, 4);
	}
	__LIB_14__::func_303(uParam0);
	__LIB_8__::func_800(uParam0, __LIB_4__::func_939(uParam0));
	__LIB_5__::func_105(__LIB_4__::func_941(uParam0));
	if (!__LIB_4__::func_948(uParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_4__::func_941(uParam0));
	}
	__LIB_5__::func_106(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_5__::func_25(uParam0);
	__LIB_5__::func_373(uParam0);
	__LIB_0__::func_11(uParam0);
	__LIB_5__::func_26(uParam0, 30f);
	__LIB_5__::func_27(uParam0, 40f);
	__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(uParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(var uParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_4__::func_937(uParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_4__::func_937(uParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_4__::func_945(uParam0, 64);
			}
			func_156(uParam0, 0);
			__LIB_0__::func_16(uParam0);
			if (func_158(uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_4__::func_953(uParam0)) && __LIB_4__::func_951(uParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_4__::func_953(uParam0), false);
				}
				__LIB_0__::func_19(uParam0, 1);
			}
			if (__LIB_4__::func_936(uParam0, -2147483648))
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 1:
			if (func_161(uParam0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 2);
			}
			func_156(uParam0, __LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_0__::func_81(uParam0) < 2)
	{
	}
}

bool func_9(var uParam0)
{
	int iVar0;
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	}
	__LIB_9__::func_336(&iLocal_3484, 2747.59f, 1261.188f, 10.6115f, 3104.173f, 1505.973f, 104.1471f, 0, 0);
	__LIB_9__::func_336(&uLocal_3485, 2200f, 1545f, 83.5676f, 2270f, 1628.244f, 105.716f, 0, 0);
	__LIB_6__::func_357();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[23]))
	{
		VEHICLE::_0x424FFCB9F0D2D4B5(iLocal_3430[23], 1);
	}
	if (__LIB_6__::func_904())
	{
		__LIB_5__::func_20(0, 0);
	}
	func_166();
	func_167(uParam0);
	func_168(uParam0);
	func_169(uParam0);
	func_170();
	func_171(uParam0);
	func_172(uParam0);
	func_173();
	func_174();
	__LIB_10__::func_935(uParam0, Local_155[0 /*182*/], 1);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_155[iVar0 /*182*/]))
		{
			if (PED::GET_PED_CONFIG_FLAG(Local_155[iVar0 /*182*/], 179, true))
			{
				PED::SET_PED_CONFIG_FLAG(Local_155[iVar0 /*182*/], 179, false);
			}
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		PED::_0xFD6943B6DF77E449(uParam0->f_5411, true);
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_155[iVar0 /*182*/].f_1))
		{
			PED::_0xFD6943B6DF77E449(Local_155[iVar0 /*182*/].f_1, true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (40 - 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[iVar0]))
		{
			if (iVar0 == 1)
			{
				if (__LIB_10__::func_229(iLocal_3430[iVar0], &Local_3623))
				{
					PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_3623, Local_3623.f_3, Local_3623.f_6, 0, 1);
				}
			}
		}
		iVar0++;
	}
	VEHICLE::SET_RANDOM_TRAINS(true);
	__LIB_1__::func_600(1);
	PED::SET_CREATE_RANDOM_COPS(true);
	__LIB_9__::func_407(78, 1);
	iVar0 = 0;
	while (iVar0 <= (iLocal_3486 - 1))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_3486[iVar0]);
		}
		iVar0++;
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::_0x0E71C80FA4EC8147("misty", false);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	MISC::_0x4D5C9CC7E7E23E09();
	PED::_REMOVE_PED_FROM_MOUNT(Local_155[1 /*182*/], true, false);
	PED::_REMOVE_PED_FROM_MOUNT(Local_155[0 /*182*/], true, false);
	__LIB_0__::func_490(&(Local_155[1 /*182*/].f_1), 0);
	__LIB_0__::func_490(&(Local_155[0 /*182*/].f_1), 0);
	__LIB_0__::func_490(&iLocal_3399, 0);
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	AUDIO::STOP_PED_SPEAKING(Local_2969[0 /*33*/], false);
	AUDIO::STOP_PED_SPEAKING(Local_2969[1 /*33*/], false);
	func_179();
	if (__LIB_4__::func_938(uParam0) != 0)
	{
		__LIB_17__::func_515();
	}
	else
	{
		func_181();
		func_182(1);
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(904));
	}
	__LIB_1__::func_724(1024);
	func_185();
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2956.416f, 1372.956f, 50.3228f, joaat("ANN_COALTIPPLE_INT_MAIN")), "int_trainrob01_cover"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2956.416f, 1372.956f, 50.3228f, joaat("ANN_COALTIPPLE_INT_MAIN")), "int_trainrob01_cover", true);
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2893.078f, 1399.27f, 63.942f, joaat("ANN_COALBREAKER_INT_MAIN")), "int_trainrob01_cover2"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2893.078f, 1399.27f, 63.942f, joaat("ANN_COALBREAKER_INT_MAIN")), "int_trainrob01_cover2", true);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 130, false);
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	if (iParam0 == iLocal_16)
	{
		__LIB_4__::func_954(&Var0, func_222(12, 0));
	}
	else if (iParam0 == iLocal_17)
	{
		__LIB_4__::func_954(&Var0, func_222(12, 1));
	}
	else if (iParam0 == iLocal_18)
	{
		__LIB_4__::func_954(&Var0, func_222(12, 2));
	}
	else if (iParam0 == iLocal_19)
	{
		__LIB_4__::func_954(&Var0, func_222(12, 4));
	}
	else if (iParam0 == iLocal_20)
	{
		__LIB_4__::func_954(&Var0, func_222(12, 5));
	}
	return Var0;
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_279(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_5__::func_253(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_4__::func_938(uParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		__LIB_5__::func_109(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_280(uParam0);
	}
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_4__::func_467(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_317(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_317(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_317(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_317(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_317(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_317(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_317(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_317(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_317(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_317(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_317(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_317(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_317(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319();
						func_320(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_317(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_317(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_5__::func_337(89200);
						__LIB_5__::func_337(2300);
						__LIB_5__::func_337(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_5__::func_337(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_5__::func_337(-6000);
						}
						break;
					case 70:
						__LIB_5__::func_337(23400);
						__LIB_5__::func_337(1900);
						__LIB_5__::func_337(-15000);
						break;
					case 71:
						__LIB_5__::func_337(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_5__::func_337(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_5__::func_337(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_358();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_5__::func_387(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_5__::func_387(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_5__::func_387(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_5__::func_387(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_5__::func_387(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_5__::func_387(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_5__::func_387(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_5__::func_387(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_5__::func_387(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_5__::func_387(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_317(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_5__::func_387(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_5__::func_387(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_5__::func_387(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_5__::func_387(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_5__::func_387(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_5__::func_387(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_5__::func_387(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_5__::func_387(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_5__::func_387(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_5__::func_387(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_86()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_368(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	func_382(uParam0);
	uParam0->f_634[0] = 58334;
	uParam0->f_634[1] = 58334;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_385(uParam0);
}

void func_109(var uParam0)
{
	__LIB_8__::func_762(uParam0, 50);
	if (__LIB_5__::func_253(uParam0) == 0)
	{
		__LIB_6__::func_901(uParam0, 8192);
		__LIB_6__::func_901(uParam0, 524288);
	}
}

void func_123(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_390(&(uParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_392(Param0, Param0.f_3);
}

int func_139(var uParam0)
{
	__LIB_5__::func_338(uParam0, iLocal_21, 2);
	__LIB_5__::func_338(uParam0, iLocal_26, 2);
	__LIB_5__::func_338(uParam0, iLocal_34, 2);
	__LIB_5__::func_338(uParam0, iLocal_22, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_23, 2);
	__LIB_5__::func_338(uParam0, iLocal_37, 2);
	__LIB_5__::func_338(uParam0, iLocal_25, 2);
	__LIB_5__::func_338(uParam0, iLocal_27, 7);
	__LIB_5__::func_338(uParam0, iLocal_35, 6);
	__LIB_5__::func_338(uParam0, iLocal_30, 12);
	__LIB_5__::func_338(uParam0, iLocal_31, 12);
	__LIB_5__::func_338(uParam0, iLocal_32, 12);
	__LIB_5__::func_565(uParam0, func_410(0), 1, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(1), 1, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(16), 1, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(2), 2, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(3), 2, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(4), 2, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(12), 2, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(15), 2, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(17), 2, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(18), 2, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(9), 4, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(10), 4, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(11), 4, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(5), 8, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(6), 8, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(7), 8, 2, -1);
	__LIB_5__::func_565(uParam0, func_410(8), 8, 2, -1);
	__LIB_8__::func_792(uParam0, "script@story@TRN1@IG@TRN1_WALK_AND_TALK@TRN1_WALK_AND_TALK", &(uLocal_126[0]), 1, 16, "pbl_Convo_P1", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@TRN1@IG@TRN1_WALK_AND_TALK@TRN1_WALK_AND_TALK", &(uLocal_126[1]), 1, 16, "pbl_Convo_P2", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@TRN1@IG@TRN1_WALK_AND_TALK@TRN1_WALK_AND_TALK", &(uLocal_126[2]), 1, 16, "pbl_Convo_P3", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@TRN1@IG@TRN1_WALK_AND_TALK@TRN1_WALK_AND_TALK", &(uLocal_126[3]), 1, 16, "pbl_Convo_P4", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@trn1@ig@ig1_micah_got_papers@ig1_micah_got_papers", &(uLocal_126[4]), 2, 0, "pbl_Micah_Goon_Fight", 0, 0);
	__LIB_8__::func_792(uParam0, "script@story@trn1@leadin@mcs2@horse_fiddle", &(uLocal_126[5]), 12, 0, "PL_ENTER", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@trn1@ig@ig_harnesses@ig_harnesses", &(uLocal_126[6]), 8, 0, 0, 0, 1);
	__LIB_8__::func_792(uParam0, "lightrig@mission@train_robbery1_shootout", &(uLocal_126[7]), 2, 0, 0, 0, 1);
	__LIB_5__::func_566(uParam0, uLocal_126[4], "pbl_breakout_shoots_goon_mid_fight", 2);
	__LIB_5__::func_566(uParam0, uLocal_126[4], "pbl_breakout_shoots_goon_doorway", 2);
	__LIB_5__::func_566(uParam0, uLocal_126[5], "PL_IDLE_A", 4);
	__LIB_5__::func_566(uParam0, uLocal_126[5], "PL_IDLE_B", 4);
	return 1;
}

void func_156(var uParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 134217728))
	{
		func_139(uParam0);
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	}
	if (bParam1 && !__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 536870912))
	{
		if (__LIB_8__::func_808(uParam0, __LIB_5__::func_475(uParam0), 0))
		{
			__LIB_5__::func_334(uParam0, __LIB_5__::func_475(uParam0), 536870912);
		}
	}
	if (__LIB_4__::func_937(uParam0, 8192))
	{
		if (!__LIB_4__::func_937(uParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(uParam0->f_1126), __LIB_4__::func_939(uParam0)))
			{
				__LIB_4__::func_944(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_8__::func_808(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_4__::func_944(uParam0, 8192);
	}
}

bool func_158(var uParam0)
{
	if (__LIB_4__::func_962(uParam0) < 1)
	{
		func_424(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_425(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_4__::func_948(uParam0, 4) && !__LIB_5__::func_371()) && !__LIB_4__::func_951(uParam0, 3))
	{
		if (!__LIB_4__::func_948(uParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_4__::func_945(uParam0, 32);
			}
			else
			{
				func_426(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_427(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_429(uParam0))
			{
				if (__LIB_4__::func_948(uParam0, 4096))
				{
					__LIB_4__::func_963(uParam0, 2);
				}
				else
				{
					__LIB_4__::func_963(uParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_5__::func_504(uParam0))
			{
				__LIB_4__::func_963(uParam0, 3);
			}
			break;
		case 3:
			if (func_431(uParam0))
			{
				__LIB_4__::func_963(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_161(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_939(uParam0) == 26)
	{
		__LIB_4__::func_964(uParam0, 0);
		return true;
	}
	if (func_433(uParam0))
	{
		iVar0 = __LIB_4__::func_939(uParam0);
		__LIB_4__::func_946(uParam0, __LIB_5__::func_475(uParam0));
		if (__LIB_4__::func_939(uParam0) == 26)
		{
			__LIB_4__::func_964(uParam0, 0);
			return true;
		}
		else if (__LIB_5__::func_331(uParam0, iVar0, 128))
		{
			func_433(uParam0);
		}
	}
	return false;
}

void func_166()
{
	__LIB_0__::func_37(&uLocal_3522);
	__LIB_0__::func_37(&uLocal_3528);
	__LIB_0__::func_37(&uLocal_3531);
	__LIB_0__::func_37(&uLocal_3534);
	__LIB_0__::func_37(&uLocal_3537);
	__LIB_0__::func_37(&uLocal_3540);
	__LIB_0__::func_37(&uLocal_3543);
	__LIB_0__::func_37(&uLocal_3556);
	__LIB_0__::func_37(&uLocal_3553);
	__LIB_11__::func_220(&vLocal_3546);
}

void func_167(var uParam0)
{
	if (__LIB_4__::func_938(uParam0) == 0)
	{
	}
	__LIB_10__::func_935(uParam0, Local_155[0 /*182*/], 1);
	__LIB_0__::func_325(&iLocal_39);
	__LIB_0__::func_325(&iLocal_40);
	__LIB_0__::func_325(&iLocal_41);
}

void func_168(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (40 - 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_3430[iVar0]);
		}
		iVar0++;
	}
	__LIB_0__::func_172(iLocal_3480[0]);
	__LIB_0__::func_172(iLocal_3480[1]);
	__LIB_0__::func_172(iLocal_3480[2]);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3480[0]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_3480[0]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_3480[0]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3480[1]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_3480[1]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_3480[1]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3480[2]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_3480[2]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_3480[2]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[0]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_3430[0]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_3430[0]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[37]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_3430[37]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_3430[37]);
	}
}

void func_169(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_3471[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(uLocal_3471[iVar0]);
		}
		iVar0++;
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
}

void func_170()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_119))
	{
		OBJECT::DELETE_OBJECT(&iLocal_119);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		OBJECT::DELETE_OBJECT(&iLocal_120);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[0]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_122[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[1]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_122[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122[2]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_122[2]));
	}
}

void func_171(var uParam0)
{
	if (__LIB_4__::func_938(uParam0) == 0)
	{
	}
	func_442(&uLocal_3403);
	func_443(1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_118))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_118);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3409[3]))
	{
		VEHICLE::DELETE_VEHICLE(&(uLocal_3409[3]));
	}
}

void func_172(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_0__::func_490(&Local_3366, 1);
		func_444(&Local_752, 1);
		func_444(&Local_1083, 1);
		func_444(&Local_2704, 1);
		func_444(&Local_520, 1);
		func_444(&Local_1183, 1);
		func_444(&Local_1778, 1);
		func_444(&Local_2571, 1);
		func_444(&Local_2969, 1);
	}
	else
	{
		__LIB_0__::func_490(&Local_3366, 0);
		func_444(&Local_752, 0);
		func_444(&Local_1083, 0);
		func_444(&Local_2704, 0);
		func_444(&Local_520, 0);
		func_444(&Local_1183, 0);
		func_444(&Local_1778, 0);
		func_444(&Local_2571, 0);
		func_444(&Local_2969, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0)
		{
			if (__LIB_1__::func_22(0))
			{
				__LIB_8__::func_824(uParam0, 0, Local_155[iVar0 /*182*/], 0, 0, 1, 0);
			}
		}
		else if (iVar0 == 1)
		{
			if (__LIB_1__::func_22(6))
			{
				__LIB_8__::func_824(uParam0, 6, Local_155[iVar0 /*182*/], 0, 0, 1, 0);
			}
		}
		iVar0++;
	}
}

void func_173()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		__LIB_1__::func_941(iLocal_3618[iVar0]);
		iVar0++;
	}
}

void func_174()
{
	ENTITY::REMOVE_MODEL_HIDE(2956.706f, 1338.258f, 43.8246f, 2f, joaat("P_CRATE08X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2958.83f, 1337.37f, 44.61f, 2f, joaat("P_CS_NEWSPAPER_03X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2917.182f, 1325.631f, 43.4727f, 2f, joaat("P_CRATE012X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2924.657f, 1363.327f, 44.0731f, 2f, joaat("P_WOODBIN01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2926.439f, 1356.26f, 44.3683f, 2f, joaat("P_PALLET01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2873.016f, 1377.01f, 64.4452f, 2f, joaat("P_SAWHORSE02X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 2f, joaat("P_BENCH09X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_CRATE03X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_BOTTLEBEER01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_BOTTLEWINE03X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_JUGWICKER01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_DEBRISPILE02X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_CUPTIN01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2911.21f, 1324.69f, 44.64f, 2f, joaat("P_BUCKET03X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2911.17f, 1324.67f, 44.26f, 1f, joaat("P_CS_BUCKET01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2914.864f, 1322.343f, 44.556f, 1f, joaat("P_CHAIR24X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CRATECOVER07X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CRATECOVER01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CART01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_LUMBER07X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_LUMBER07X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2916.18f, 1366.49f, 45.16f, 3f, joaat("P_CRATE06X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2916.18f, 1366.49f, 45.16f, 3f, joaat("P_CRATE02X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2916.18f, 1366.49f, 45.16f, 3f, joaat("P_FLOURSACK05X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2919.51f, 1330.92f, 44.17f, 1f, joaat("P_FLOURSACK05X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2951.71f, 1383.2f, 43.39f, 2f, joaat("S_WAGONTOUNG01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2951.71f, 1383.2f, 43.39f, 3f, joaat("P_CHUCKWAGON01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2923.71f, 1337.05f, 43.8f, 2f, joaat("P_CRATE012X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2989.88f, 1346.78f, 44.13f, 3f, joaat("P_CRATE14X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2986.57f, 1339.53f, 44.17f, 3f, joaat("P_CRATE14X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2986.57f, 1339.53f, 44.17f, 3f, joaat("P_CRATE08X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2964.506f, 1396.133f, 42.9784f, 2f, joaat("P_BAT_CRATESTACK01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2857.5f, 1412.2f, 68.8f, 2f, joaat("P_CRATESTACK01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2857.5f, 1412.2f, 68.8f, 3f, joaat("P_WHEELBARREL01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2857.5f, 1412.2f, 68.8f, 3f, joaat("P_CRATE06X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2924.5f, 1379.2f, 55.8f, 2f, joaat("P_SETTEE02BX"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2877.57f, 1409.747f, 66.9156f, 2f, joaat("P_TABLE31X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2877.57f, 1409.747f, 66.9156f, 2f, joaat("P_CUPTIN01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2947.448f, 1381.819f, 55.2543f, 1f, joaat("P_BARREL05B"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2956.32f, 1372.58f, 55.86f, 1f, joaat("P_COALBIN01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CRATECOVER07X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CRATECOVER01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CART01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_LUMBER07X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_LUMBER07X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2951.71f, 1383.2f, 43.39f, 2f, joaat("S_WAGONTOUNG01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2951.71f, 1383.2f, 43.39f, 3f, joaat("P_CHUCKWAGON01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2923.71f, 1337.05f, 43.8f, 2f, joaat("P_CRATE012X"), 0);
}

void func_179()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_105[iVar0]))
		{
			TASK::REMOVE_COVER_POINT(iLocal_105[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (AICOVERPOINT::_0xC276FE69DDA22BAD(vLocal_44[iVar0 /*3*/].f_1))
		{
			TASK::REMOVE_COVER_POINT(vLocal_44[iVar0 /*3*/].f_1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_44[iVar0 /*3*/]))
		{
			OBJECT::DELETE_OBJECT(&(vLocal_44[iVar0 /*3*/]));
		}
		iVar0++;
	}
}

void func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar1 = 932;
	iVar2 = 952;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		__LIB_4__::func_193((iVar1 + iVar0));
		__LIB_0__::func_121(iVar0, 32);
		iVar0++;
	}
}

void func_182(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 382;
	while (iVar0 <= 431)
	{
		iVar1 = iVar0;
		if (bParam0)
		{
			__LIB_11__::func_571(iVar1, 0, 0);
		}
		else
		{
			__LIB_8__::func_783(iVar1);
		}
		iVar0++;
	}
}

void func_185()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = __LIB_0__::func_398(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			__LIB_8__::func_820(iVar0);
		}
		iVar0++;
	}
}

struct<4> func_222(int iParam0, int iParam1)
{
	return func_491(iParam0, iParam1);
}

void func_280(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		if (__LIB_4__::func_948(uParam0, 16))
		{
			__LIB_5__::func_595(uParam0, 0);
		}
		if (func_425(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_317(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_5__::func_388(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_4__::func_465(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_317(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_5__::func_391(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_5__::func_385(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_3__::func_909(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_4__::func_127(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_4__::func_469(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
			}
			__LIB_4__::func_468(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_317(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_317(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_317(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_317(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_317(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_317(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_317(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_5__::func_391(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_317(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_317(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_5__::func_507(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_317(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_4__::func_120(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_2__::func_471(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_319()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_654();
	func_655();
	func_656();
	func_657();
	func_658();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_661(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_358()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_702(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_2__::func_472(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

Vector3 func_368(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_718(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_718(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_382(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_741(uParam0, iVar0);
		iVar0++;
	}
}

void func_385(var uParam0)
{
	__LIB_5__::func_476(uParam0, iLocal_16, iLocal_17, 109342, 109487, 109906, 110339, 111113, "TRN1_INT", 66, -1);
	__LIB_5__::func_476(uParam0, iLocal_17, iLocal_18, 111420, 111599, 112162, 112723, 114175, "TRN1_MCS1", 67, -1);
	__LIB_5__::func_476(uParam0, iLocal_18, iLocal_19, 114419, 114776, 115083, 115201, 116125, "", 65, -1);
	__LIB_5__::func_476(uParam0, iLocal_19, iLocal_20, 116252, 116358, 116962, 117250, 117967, "TRN1_MCS2", 67, -1);
	__LIB_5__::func_476(uParam0, iLocal_20, 26, 118001, 118010, 118363, 118468, 118541, "TRN1_EXT", 66, -1);
}

void func_390(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_534(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_860, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_872));
		}
		func_773(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_775(uParam0);
		func_776(uParam0);
		__LIB_5__::func_47(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_48(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

int func_392(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_1__::func_837(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_784(0, 0);
		if (__LIB_0__::func_154(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			__LIB_0__::func_713(1, 0);
		}
	}
	else
	{
		__LIB_0__::func_713(1, 0);
	}
	__LIB_0__::func_305(0);
	__LIB_5__::func_119(0, vParam0, uParam3);
	return 1;
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "trn1_boat_meeting_dutch";
		case 1:
			return "trn1_boat_meeting_micah";
		case 2:
			return "trn1_escape_jetty_dutch_1";
		case 3:
			return "trn1_escape_jetty_dutch_2";
		case 4:
			return "trn1_escape_jetty_micah_1";
		case 5:
			return "trn1_hillside_escape_1";
		case 6:
			return "trn1_hillside_escape_2";
		case 7:
			return "trn1_hillside_escape_enemy_1";
		case 8:
			return "trn1_hillside_escape_enemy_2";
		case 9:
			return "trn1_inside_the_building_micah";
		case 10:
			return "trn1_inside_the_building_dutch";
		case 12:
			return "trn1_escape_jetty_water_tank";
		case 15:
			return "trn1_enemies_from_boat";
		case 16:
			return "trn1_ship";
		case 17:
			return "trn1_ground_enemies_1";
		case 18:
			return "trn1_ground_enemies_2";
		default:
			break;
	}
	return "";
}

bool func_424(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_4__::func_948(uParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_4__::func_941(uParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(uParam0->f_607) };
	}
	if (func_841(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_425(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5411))
	{
		if (!__LIB_4__::func_948(uParam0, 16777216))
		{
			if (!__LIB_5__::func_283(uParam0))
			{
				__LIB_4__::func_945(uParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = __LIB_4__::func_720(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					__LIB_4__::func_945(uParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							__LIB_4__::func_945(uParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(uParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_4__::func_950(uParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_950(uParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_4__::func_950(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			__LIB_4__::func_945(uParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (__LIB_4__::func_948(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_4__::func_948(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = __LIB_4__::func_720(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!__LIB_4__::func_948(uParam0, 16))
			{
				__LIB_4__::func_945(uParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		__LIB_5__::func_255(uParam0, bParam1);
		if (!__LIB_4__::func_948(uParam0, 256))
		{
			if (!__LIB_4__::func_948(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_849(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_426(var uParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_4__::func_948(uParam0, 32) && __LIB_4__::func_951(uParam0, 3))
	{
		if (__LIB_4__::func_544(uParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_4__::func_945(uParam0, 32);
		}
	}
	if (!__LIB_4__::func_948(uParam0, 32))
	{
		if (func_851(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_427(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (func_853(uParam0))
			{
				__LIB_5__::func_326(&(uParam0->f_10792));
				__LIB_4__::func_969(uParam0, 2097152);
				__LIB_4__::func_958(uParam0, 16384);
				__LIB_4__::func_945(uParam0, 128);
			}
			return;
		}
		if (__LIB_4__::func_951(uParam0, 1))
		{
			return;
		}
		if (__LIB_4__::func_948(uParam0, 64))
		{
			__LIB_5__::func_284(uParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (func_855(uParam0, Var0))
			{
				if (__LIB_4__::func_962(uParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_4__::func_945(uParam0, 128);
			}
		}
		else
		{
			if (__LIB_4__::func_962(uParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_4__::func_945(uParam0, 128);
		}
	}
}

bool func_429(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_8__::func_910(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_424(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_425(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(uParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_4__::func_951(uParam0, 1))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_13115)))
		{
			__LIB_1__::func_283(&(uParam0->f_13115), 0);
		}
		if (__LIB_0__::func_265(&(uParam0->f_13115)) < 30f)
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				iVar0 = 0;
			}
			if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630.f_12 && !PED::_0xA0BC8FAED8CFEB3C(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_431(var uParam0)
{
	func_861();
	if (!func_862(uParam0))
	{
		return false;
	}
	__LIB_1__::func_600(0);
	func_863(uParam0);
	func_864(uParam0);
	func_865(uParam0);
	func_866(uParam0);
	__LIB_11__::func_392(1);
	__LIB_1__::func_211(1, 8);
	__LIB_11__::func_221(&uLocal_3583, 0);
	__LIB_0__::func_19(&uLocal_3616, 0);
	__LIB_0__::func_19(&uLocal_3615, 0);
	__LIB_0__::func_19(&uLocal_3617, 0);
	if (!PED::_0x91A5F9CBEBB9D936(iLocal_3484))
	{
		iLocal_3484 = __LIB_4__::func_29(2978.347f, 1319.722f, 41f, 3033.783f, 1386.374f, 45f, 3006.065f, 1353.048f, 43f, 55f, 0, 0);
		PED::_0x9851DE7AEC10B4E1(3006.065f, 1353.048f, 43f, 55f, 1, 0);
	}
	__LIB_5__::func_521(0.95f);
	TASK::SET_PED_PATH_AVOID_FIRE(Local_155[0 /*182*/], true);
	TASK::SET_PED_PATH_AVOID_FIRE(Local_155[1 /*182*/], true);
	ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 1, false);
	ENTITY::SET_ENTITY_PROOFS(Local_155[1 /*182*/], 1, false);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[1]))
	{
		if (__LIB_10__::func_229(iLocal_3430[1], &Local_3623))
		{
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_3623, Local_3623.f_3, Local_3623.f_6, 1, 0, 1, 0);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[1]))
	{
		__LIB_7__::func_948(iLocal_3430[1], 0, 0, 0, 0, 0);
	}
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	PED::SET_CREATE_RANDOM_COPS(false);
	__LIB_3__::func_688(func_874(7, 0), 60f, 0);
	__LIB_9__::func_407(78, 0);
	if (__LIB_4__::func_939(uParam0) == iLocal_16)
	{
		__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_155[0 /*182*/]))
		{
			__LIB_8__::func_806(uParam0, Local_155[0 /*182*/], 0, 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_155[1 /*182*/]))
		{
			__LIB_8__::func_806(uParam0, Local_155[1 /*182*/], 0, 0, 0, 0, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_136(-405768775, 0)))
			{
				iLocal_42[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_3__::func_136(-405768775, 0));
			}
		}
		__LIB_5__::func_580(uParam0, iLocal_42[0], "p_door37x", 0, 0, 0, 0);
	}
	else
	{
		func_877();
	}
	__LIB_5__::func_550(uParam0, 135667);
	__LIB_5__::func_256(uParam0, 135726);
	__LIB_5__::func_257(uParam0, 138327);
	func_884();
	if (ENTITY::DOES_ENTITY_EXIST(Local_155[1 /*182*/]))
	{
		if (PED::_0x5102307CE88798EB(Local_155[1 /*182*/]))
		{
			PED::_0x3088634CF8C819CF(Local_155[1 /*182*/]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_520[0 /*33*/]))
	{
		if (PED::_0x5102307CE88798EB(Local_520[0 /*33*/]))
		{
			PED::_0x3088634CF8C819CF(Local_520[0 /*33*/]);
		}
	}
	PED::SET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 252, false);
	PED::SET_PED_CONFIG_FLAG(Local_155[1 /*182*/], 252, false);
	AUDIO::STOP_PED_SPEAKING(Global_35, true);
	PED::ADD_RELATIONSHIP_GROUP("REL_MINE_WORKERS", &iLocal_3630);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("REL_PLAYER_ENEMY"), iLocal_3630);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PLAYER"), iLocal_3630);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_3630, joaat("PLAYER"));
	func_885();
	func_886(1, 0);
	__LIB_1__::func_572(3023.48f, 1340.06f, 42.3f, 25f, 0, 0, 1, 1, 1);
	__LIB_8__::func_922(78);
	__LIB_17__::func_518();
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	MISC::_0x3373779BAF7CAF48("misty", "misty_train1");
	return true;
}

bool func_433(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_890(uParam0);
	__LIB_11__::func_756(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_853(uParam0);
		}
	}
	__LIB_5__::func_477(uParam0);
	__LIB_8__::func_801(uParam0);
	__LIB_5__::func_478(uParam0);
	__LIB_5__::func_479(uParam0);
	__LIB_5__::func_480(uParam0);
	__LIB_4__::func_970(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_5__::func_575(uParam0);
	}
	if ((__LIB_4__::func_939(uParam0) == 0 && iVar2 < 3) && __LIB_5__::func_253(uParam0) == 0)
	{
		func_427(uParam0);
	}
	if (__LIB_5__::func_331(uParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_5__::func_481(uParam0, iVar0, 0))
			{
				if (__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_5__::func_33(uParam0, 524288);
				}
				if (__LIB_4__::func_948(uParam0, 4))
				{
					if (!__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_0__::func_16(uParam0, iVar0);
						__LIB_4__::func_944(uParam0, 4);
					}
					__LIB_5__::func_342(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_8__::func_910(uParam0))
			{
				if (__LIB_10__::func_951(uParam0))
				{
					if (__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_4__::func_969(uParam0, 4);
					}
					__LIB_5__::func_286(uParam0, iVar0, 2);
				}
			}
			else if (__LIB_5__::func_287(uParam0) >= uParam0->f_13144)
			{
				if (__LIB_4__::func_937(uParam0, 4))
				{
					__LIB_4__::func_969(uParam0, 4);
				}
				__LIB_5__::func_286(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_5__::func_481(uParam0, iVar0, 2))
			{
				if (!__LIB_5__::func_258(uParam0))
				{
					__LIB_5__::func_286(uParam0, iVar0, 4);
					if (func_907(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_909(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_907(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_909(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_909(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_907(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_907(uParam0, iVar0, iVar1))
			{
				__LIB_5__::func_286(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_11__::func_324(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_8__::func_822(uParam0);
				if (__LIB_5__::func_331(uParam0, iVar1, 2))
				{
					if (__LIB_5__::func_483(uParam0, iVar1))
					{
						__LIB_9__::func_449(uParam0, iVar1);
					}
				}
			}
			if (__LIB_5__::func_481(uParam0, iVar0, 5))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 7))
				{
					if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
					{
						__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
					}
					func_918(uParam0, iVar1);
					__LIB_11__::func_756(uParam0);
					return true;
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_1__::func_164(0);
					}
					__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 4194304);
				}
				if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_4__::func_948(uParam0, 8192)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 6);
					}
				}
				if (__LIB_4__::func_937(uParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_5__::func_599(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_4__::func_969(uParam0, 268435456);
					}
				}
				if (__LIB_4__::func_948(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						__LIB_4__::func_958(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_11__::func_324(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_8__::func_822(uParam0);
				if (__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 2))
				{
					if (__LIB_5__::func_483(uParam0, __LIB_5__::func_475(uParam0)))
					{
						__LIB_9__::func_449(uParam0, __LIB_5__::func_475(uParam0));
					}
				}
			}
			if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_4__::func_948(uParam0, 8192)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_5__::func_481(uParam0, iVar0, 5);
				__LIB_0__::func_16(uParam0);
			}
			break;
		case 7:
			if (__LIB_5__::func_481(uParam0, iVar0, 7))
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
				{
					__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
				}
				func_918(uParam0, iVar1);
				__LIB_11__::func_756(uParam0);
				return true;
			}
			break;
		default:
			__LIB_5__::func_286(uParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_442(var uParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
	{
		VEHICLE::DELETE_MISSION_TRAIN(uParam0[0]);
	}
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_443(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3408))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_3408);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3408);
		}
	}
}

void func_444(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		__LIB_0__::func_490(iParam0[iVar0 /*33*/], bParam1);
		__LIB_0__::func_490(&((iParam0[iVar0 /*33*/])->f_2), bParam1);
		if ((iParam0[iVar0 /*33*/])->f_22 != -1)
		{
			GRAPHICS::DESTROY_TRACKED_POINT((iParam0[iVar0 /*33*/])->f_22);
			(iParam0[iVar0 /*33*/])->f_22 = -1;
		}
		if (MAP::DOES_BLIP_EXIST((iParam0[iVar0 /*33*/])->f_1))
		{
			MAP::REMOVE_BLIP(&((iParam0[iVar0 /*33*/])->f_1));
		}
		iVar0++;
	}
}

struct<4> func_491(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_963(iParam0, iParam1) };
	Var0.f_3 = func_964(iParam0, iParam1);
	return Var0;
}

void func_654()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1125(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_1125(1);
}

void func_655()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_317(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_656()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1128(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1128(1);
}

void func_657()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1128(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_2__::func_590(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1128(1);
}

void func_658()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_317(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_317(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_661(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_661(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_661(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_0__::func_937(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_661(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_702(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1173(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_317(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_718(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1187();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1188(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_4__::func_718(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_741(var uParam0, int iParam1)
{
	func_1199(uParam0, iParam1);
	__LIB_5__::func_292(uParam0, iParam1, 26);
}

bool func_742(var uParam0)
{
	if ((__LIB_4__::func_948(uParam0, 4) || __LIB_4__::func_951(uParam0, 2)) || __LIB_4__::func_951(uParam0, 1))
	{
		func_1201(Global_35, func_222(12, 0), 2, 1073741824 /* Float: 2f */);
		func_1201(Local_155[0 /*182*/], func_222(11, 0), 34, 1073741824 /* Float: 2f */);
		func_1201(Local_155[1 /*182*/], func_222(10, 0), 34, 1073741824 /* Float: 2f */);
	}
	__LIB_4__::func_535(&(uParam0->f_7375), 2906.367f, 1314.717f, 44.292f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_743(var uParam0)
{
	__LIB_1__::func_572(Global_36, 5f, 0, 0, 1, 1, 0);
	func_1202(uParam0);
	__LIB_0__::func_202(Global_35, 0);
	MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 15f, false);
	iLocal_3480[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2956.536f, 1335.25f, 45.61551f, 0f, 0f, 70.00006f, 11f, 32f, 8f, "TRN1 AVOIDANCE 0");
	MISC::_0x2FCD528A397E5C88(iLocal_3480[0], 1064960);
	POPULATION::_0xB56D41A694E42E86(iLocal_3480[0], 42976, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_3480[0], 10208, 0, 0, -1, -1, 0);
	iLocal_3480[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3004.091f, 1341.845f, 43f, 0f, 0f, 61.00002f, 35f, 35.5f, 4f, "TRN1 AVOIDANCE 1");
	MISC::_0x2FCD528A397E5C88(iLocal_3480[1], 1064960);
	POPULATION::_0xB56D41A694E42E86(iLocal_3480[1], 42976, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_3480[1], 10208, 0, 0, -1, -1, 0);
	iLocal_3480[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2931.261f, 1335.488f, 45.61551f, 0f, 0f, 105.0001f, 24f, 59f, 12f, "TRN1 AVOIDANCE 2");
	MISC::_0x2FCD528A397E5C88(iLocal_3480[2], 1064968);
	POPULATION::_0xB56D41A694E42E86(iLocal_3480[2], 42976, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_3480[2], 10208, 0, 0, -1, -1, 0);
	func_1204();
	VEHICLE::_0x424FFCB9F0D2D4B5(iLocal_3430[23], 0);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(3036.49f, 1355.76f, 34.08f, 3010.15f, 1323.43f, 43.73f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_744(var uParam0)
{
	if ((__LIB_4__::func_948(uParam0, 4) || __LIB_4__::func_951(uParam0, 2)) || __LIB_4__::func_951(uParam0, 1))
	{
	}
	if (__LIB_4__::func_948(uParam0, 4) || __LIB_4__::func_937(uParam0, 524288))
	{
	}
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_2571[3 /*33*/], iLocal_3408))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2571[3 /*33*/], iLocal_3408, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3408, "chassis_dummy"), -2f, 10f, 2.5f, 0f, 0f, 50f, false, false, false, false, 2, true, false, false);
	}
	__LIB_0__::func_202(Global_35, 1);
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	__LIB_5__::func_106(uParam0, Local_155[0 /*182*/], "DUTCH", 0);
	__LIB_5__::func_106(uParam0, Local_155[1 /*182*/], "MICAH_BELL", 0);
	if (func_1205() == 0)
	{
		if (func_1206(4))
		{
			if (!func_1206(8))
			{
				func_1207(8);
			}
		}
		else
		{
			func_1208(1);
		}
	}
	if (func_1205() != 3)
	{
		return false;
	}
	__LIB_5__::func_372(uParam0, 1);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_0__::func_202(Global_35, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 130, true);
	func_1209(&(Local_155[0 /*182*/].f_169), 0, 2);
	func_1209(&(Local_155[1 /*182*/].f_169), 0, 2);
	__LIB_0__::func_19(&uLocal_3617, 0);
	__LIB_1__::func_148(&uLocal_3531);
	__LIB_5__::func_486(uParam0, "TRN1_OBJ01", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	if (__LIB_4__::func_937(uParam0, 524288))
	{
		__LIB_5__::func_590(uParam0, "TRN1_OBJ01", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	__LIB_5__::func_494(&(uParam0->f_7375), "1-DayStart", 0);
	__LIB_5__::func_494(&(uParam0->f_7375), "2-NightStart", 0);
	__LIB_1__::func_948(-405768775, 1, 0, 0, 0, 0, 1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_745(var uParam0)
{
	func_1214(uParam0);
	func_1215(uParam0);
	func_1216(uParam0);
	func_1217();
	func_1218(uParam0);
	func_1219(uParam0, 0, 75f, 115f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"));
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			__LIB_10__::func_930(uParam0, Local_155[0 /*182*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			if (!func_1222(1))
			{
				if (__LIB_9__::func_344())
				{
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Local_155[0 /*182*/], iLocal_3430[2], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_155[1 /*182*/], iLocal_3430[2], true, 0))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_1__::func_148(&uLocal_3522);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), true);
				__LIB_10__::func_935(uParam0, Local_155[0 /*182*/], 1);
				PED::SET_PED_CONFIG_FLAG(Global_35, 130, false);
				CAM::_0x1B3C2D961F5FC0E1("script@Story@TRN1@Annesburg");
				__LIB_4__::func_952(uParam0, 1);
				__LIB_5__::func_372(uParam0, 3);
			}
			else
			{
				__LIB_1__::func_738(1, 0, 1, 1, 1, 0, 1);
				PED::SET_PED_RESET_FLAG(Global_35, 2, true);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			}
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(iLocal_39))
			{
				iLocal_39 = __LIB_8__::func_777(408396114, 3017.513f, 1352.213f, 41.7535f, 2.5f, 1);
			}
			if ((PED::_GET_PED_CROUCH_MOVEMENT(Global_35) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[21], true, 0)) || (PED::IS_PED_IN_COVER(Global_35, false, false) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[21], true, 0)))
			{
				if (((__LIB_0__::func_75(&uLocal_3522) && __LIB_0__::func_264(&uLocal_3522) > 0.5f) && CAM::_0xAA235E2F2C09E952("script@Story@TRN1@Annesburg")) && !__LIB_5__::func_463())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					CAM::_0x702B75DC9D3EDE56(true);
					HUD::_0xC9CAEAEEC1256E54(-1679307491);
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
					CAM::_0xBC016635D6A73B31("script@Story@TRN1@Annesburg", "WideShot", 5);
					__LIB_10__::func_935(uParam0, Local_155[0 /*182*/], 1);
					__LIB_1__::func_148(&uLocal_3522);
					__LIB_0__::func_325(&iLocal_39);
					if (__LIB_0__::func_270())
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			if (!PED::IS_PED_STOPPED(Global_35))
			{
				__LIB_1__::func_148(&uLocal_3522);
			}
			break;
		case 2:
			CAM::_0x702B75DC9D3EDE56(true);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			if (__LIB_0__::func_264(&uLocal_3522) > 5f)
			{
				if (CLOCK::GET_CLOCK_HOURS() >= 6 && CLOCK::GET_CLOCK_HOURS() < 19)
				{
					return 1;
				}
				else
				{
					CAM::DO_SCREEN_FADE_OUT(2000);
					__LIB_4__::func_952(uParam0, 3);
				}
			}
			break;
		case 3:
			CAM::_0x702B75DC9D3EDE56(true);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_1__::func_148(&uLocal_3522);
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			if (__LIB_0__::func_264(&uLocal_3522) > 3f)
			{
				__LIB_5__::func_372(uParam0, 51);
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_746(var uParam0)
{
	CAM::_0x702B75DC9D3EDE56(true);
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	__LIB_1__::func_726(Local_155[0 /*182*/], 1);
	__LIB_1__::func_726(Local_155[1 /*182*/], 1);
	func_1229(Global_35, 1);
	__LIB_5__::func_438(&uLocal_3587);
	func_444(&Local_2571, 0);
	__LIB_0__::func_325(&iLocal_41);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_3408, true);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	if (CLOCK::GET_CLOCK_HOURS() >= 6 && CLOCK::GET_CLOCK_HOURS() < 19)
	{
		__LIB_8__::func_787(uParam0, "1-DayStart");
		__LIB_5__::func_298(uParam0, "1-DayStart");
	}
	else
	{
		__LIB_8__::func_787(uParam0, "2-NightStart");
		__LIB_5__::func_298(uParam0, "2-NightStart");
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_748(var uParam0)
{
	func_1201(Local_155[0 /*182*/], func_222(11, 1), 2, 1073741824 /* Float: 2f */);
	func_1201(Local_155[1 /*182*/], func_222(10, 1), 2, 1073741824 /* Float: 2f */);
	func_1201(Global_35, func_222(12, 1), 2, 1073741824 /* Float: 2f */);
	VEHICLE::_0x424FFCB9F0D2D4B5(iLocal_3430[23], 0);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(3036.49f, 1355.76f, 34.08f, 3010.15f, 1323.43f, 43.73f);
	if (!func_1202(uParam0))
	{
		return false;
	}
	if (!func_1237(uParam0, 1))
	{
		return false;
	}
	MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
	CLOCK::SET_CLOCK_TIME(7, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_749(var uParam0)
{
	if (__LIB_4__::func_937(uParam0, 8))
	{
		CAM::_0x702B75DC9D3EDE56(true);
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	if (!func_1202(uParam0))
	{
		return false;
	}
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_3408, true);
	if (!func_1237(uParam0, 0))
	{
		return false;
	}
	if (!func_1238(0, 0, 1) || !func_1239(1, 3, 1))
	{
		return false;
	}
	func_1240(uParam0);
	__LIB_8__::func_806(uParam0, Local_155[1 /*182*/], "MicahBell", 0, 0, 1, 0);
	__LIB_8__::func_806(uParam0, Local_155[0 /*182*/], "Dutch", 0, 0, 1, 0);
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 1, 0);
	__LIB_5__::func_580(uParam0, iLocal_3408, "turbineboat", 0, 0, 1, 0);
	__LIB_5__::func_580(uParam0, iLocal_119, "p_woodramp02x", 0, 0, 1, 0);
	__LIB_5__::func_580(uParam0, iLocal_120, "p_cs_book04x", 0, 0, 1, 0);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_3430[11], 7);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_3430[12], 7);
	if (!PED::_0x5102307CE88798EB(Local_155[1 /*182*/]))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_155[1 /*182*/]);
	}
	if (__LIB_13__::func_666(Local_155[0 /*182*/].f_177, 1))
	{
		func_1242(&(Local_155[0 /*182*/].f_177), 1);
	}
	if (__LIB_13__::func_666(Local_155[0 /*182*/].f_177, 2))
	{
		func_1242(&(Local_155[0 /*182*/].f_177), 2);
	}
	if (__LIB_13__::func_666(Local_155[1 /*182*/].f_177, 1))
	{
		func_1242(&(Local_155[1 /*182*/].f_177), 1);
	}
	if (__LIB_13__::func_666(Local_155[1 /*182*/].f_177, 2))
	{
		func_1242(&(Local_155[1 /*182*/].f_177), 2);
	}
	__LIB_1__::func_948(562755257, 1, 0f, 0, 0, 5f, 0, 0);
	__LIB_1__::func_948(191285873, 1, 0f, 0, 0, 5f, 0, 0);
	__LIB_1__::func_948(-1510545488, 1, 0f, 0, 0, 0, 0, 0);
	func_1243(&Local_520, 7, 0);
	func_1243(&Local_752, 10, 0);
	func_1244(&Local_1183, 1, 3, 0);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
	__LIB_5__::func_521(0.7f);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DIDSBURY"));
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JANSON"));
	__LIB_3__::func_618(2881.804f, 1321.435f, 53.3972f, 10f, 1, 0, 0, 0, 0);
	__LIB_8__::func_922(78);
	func_886(1, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_750(var uParam0)
{
	if ((!PED::_0xA0BC8FAED8CFEB3C(Local_520[2 /*33*/]) || !PED::_0xA0BC8FAED8CFEB3C(Local_520[3 /*33*/])) || !PED::_0xA0BC8FAED8CFEB3C(Local_520[4 /*33*/]))
	{
		return false;
	}
	if (!func_1245(5, 5, 1))
	{
		return false;
	}
	func_1246();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3408) && !__LIB_4__::func_257(iLocal_3408))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3408, true);
	}
	if (__LIB_0__::func_272(Local_3366, 0))
	{
		__LIB_1__::func_864(Local_3366, 0, 0);
	}
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	__LIB_5__::func_571(uParam0, Local_155[1 /*182*/], 128);
	__LIB_4__::func_705(6, 1);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[4], "GUARD", Local_1183[1 /*33*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[4], "MICAH", Local_155[1 /*182*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[4], "dutch", Local_155[0 /*182*/], 0);
	ANIMSCENE::LOAD_ANIM_SCENE(uLocal_126[4]);
	if (__LIB_0__::func_272(Local_155[1 /*182*/], 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_155[1 /*182*/], joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_155[1 /*182*/], joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), true, 1, false, false);
		func_1201(Local_155[1 /*182*/], func_222(10, 1), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(Local_155[0 /*182*/], 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_155[0 /*182*/], joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), true, 0, false, false);
		PED::SET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 103, false);
		PED::SET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 252, false);
		PED::_0xC5B78E41DCF8227C(Local_155[0 /*182*/], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[0 /*182*/], 30, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[0 /*182*/], 27, false);
		PED::SET_PED_ACCURACY(Local_155[0 /*182*/], 40);
	}
	__LIB_5__::func_372(uParam0, 0);
	__LIB_4__::func_952(uParam0, 0);
	Local_155[0 /*182*/].f_169 = 0;
	Local_155[1 /*182*/].f_169 = 0;
	__LIB_1__::func_148(&uLocal_3543);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_410(2), 1, 1065353216 /* Float: 1f */, 0.3f, 0);
	if (__LIB_4__::func_937(uParam0, 524288))
	{
		__LIB_5__::func_590(uParam0, "TRN1_OBJ02a", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	TASK::TASK_AIM_GUN_AT_ENTITY(Local_1083[0 /*33*/], Local_155[0 /*182*/], -1, false, 1);
	TASK::TASK_AIM_GUN_AT_ENTITY(Local_752[5 /*33*/], Local_155[0 /*182*/], -1, false, 1);
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	ANIMSCENE::START_ANIM_SCENE(uLocal_126[7]);
	return uParam0->f_607 == uParam0->f_607;
}

int func_751(var uParam0)
{
	int iVar0;
	func_1249(uParam0);
	func_1250(uParam0);
	func_1251(uParam0);
	func_1252(uParam0);
	func_1253();
	func_1252(uParam0);
	func_1254(uParam0);
	func_1255(uParam0, Local_155[0 /*182*/], "TRN1_GANG_RETURN", "TRN1_GANG_ABANDON", 100f, 125f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1);
	if (__LIB_5__::func_484(&uLocal_3574, 25f) || (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) > 2500f))
	{
		ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 0, false);
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 1, 1);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_155[0 /*182*/], true);
	}
	else if ((__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) <= 2500f) && PED::GET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 138, true))
	{
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 0, 1);
		ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 1, false);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if ((func_1259(&Local_520, 7, 0) < 2 && func_1259(&Local_752, 10, -1) < 3) || __LIB_1__::func_205(Global_35, iLocal_3430[25], 1, 0))
			{
				if (func_1261(0, 2, 1))
				{
					__LIB_10__::func_930(uParam0, Local_155[0 /*182*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
					__LIB_4__::func_952(uParam0, 1);
				}
			}
			break;
		case 1:
			if (!__LIB_13__::func_666(Local_155[0 /*182*/].f_177, 4))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[20], true, 0))
				{
					func_1262(&(Local_155[0 /*182*/].f_177), 4);
				}
			}
			if (!func_1206(33554432))
			{
				if ((ENTITY::IS_ENTITY_AT_COORD(Global_35, 2986.682f, 1373.98f, 42.7795f, 16f, 16f, 5f, false, true, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_752[5 /*33*/], true, false), 1.5f, false)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[25], true, 0) && ENTITY::IS_ENTITY_ON_SCREEN(Local_752[5 /*33*/])))
				{
					if (func_1238(1, 1, 1))
					{
						func_1263();
						func_1207(33554432);
					}
				}
			}
			if ((__LIB_0__::func_393(Global_35, iLocal_3430[13], 0, 1) && func_1265(&Local_752, 2, 0) <= 2) || __LIB_0__::func_393(Local_155[0 /*182*/], iLocal_3430[13], 0, 1))
			{
				if (func_1245(7, 8, 1))
				{
					PED::_0x4707E9C23D8CA3FE(Local_752[7 /*33*/], Local_155[1 /*182*/]);
					PED::_0x4707E9C23D8CA3FE(Local_752[8 /*33*/], Local_155[1 /*182*/]);
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_1206(33554432))
			{
				if ((ENTITY::IS_ENTITY_AT_COORD(Global_35, 2986.682f, 1373.98f, 42.7795f, 16f, 16f, 5f, false, true, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_752[5 /*33*/], true, false), 1.5f, false)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[25], true, 0) && ENTITY::IS_ENTITY_ON_SCREEN(Local_752[5 /*33*/])))
				{
					if (func_1238(1, 1, 1))
					{
						func_1263();
						func_1207(33554432);
					}
				}
			}
			if ((func_1266(&Local_1183, 2, 3, 1) < 2 || __LIB_0__::func_393(Global_35, iLocal_3430[14], 0, 1)) || __LIB_0__::func_393(Global_35, iLocal_3430[13], 0, 1))
			{
				if (!func_1267(1))
				{
					func_1268();
					if (func_1269() && !__LIB_0__::func_27(iLocal_3517, 1))
					{
						if (func_1270(&uLocal_3403, 2926.472f, 1332.285f, 43.0703f, 0))
						{
							iVar0 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(uLocal_3403[0]);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
								PED::_0xD05AD61F242C626B(iVar0, 0f);
								PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
							}
							VEHICLE::SET_TRAIN_SPEED(uLocal_3403[0], 12f);
							VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_3403[0], 12f);
							VEHICLE::_0xCFE122EC635CC2B2(uLocal_3403[0], "DANGER", 1, 0);
							func_1271();
							func_1272(1);
						}
					}
				}
			}
			if ((func_1266(&Local_1183, 1, 5, 1) < 3 && (ENTITY::IS_ENTITY_DEAD(Local_752[7 /*33*/]) || ENTITY::IS_ENTITY_DEAD(Local_752[8 /*33*/]))) && __LIB_5__::func_314(uParam0, "TRN1_OBJ2b_UP", 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1183[1 /*33*/], false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_155[1 /*182*/], false, true);
				ANIMSCENE::START_ANIM_SCENE(uLocal_126[4]);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_126[4], "Pbl_Breakout_Shoots_Goon_Doorway");
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_126[4], "Pbl_Breakout_Shoots_Guard_Mid_Fight");
				__LIB_1__::func_948(562755257, 0, 0f, 0, 0, 5f, 0, 0);
				__LIB_4__::func_952(uParam0, 3);
				__LIB_5__::func_486(uParam0, "TRN1_OBJ02b", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			break;
		case 3:
			if ((func_1266(&Local_1183, 2, 3, 1) < 2 || __LIB_0__::func_393(Global_35, iLocal_3430[14], 0, 1)) || __LIB_0__::func_393(Global_35, iLocal_3430[13], 0, 1))
			{
				if (!func_1267(1))
				{
					func_1268();
					if (func_1269() && !__LIB_0__::func_27(iLocal_3517, 1))
					{
						if (func_1270(&uLocal_3403, 2926.472f, 1332.285f, 43.0703f, 0))
						{
							VEHICLE::SET_TRAIN_SPEED(uLocal_3403[0], 12f);
							VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_3403[0], 12f);
							VEHICLE::_0xCFE122EC635CC2B2(uLocal_3403[0], "DANGER", 1, 0);
							func_1271();
							func_1272(1);
						}
					}
				}
			}
			if (func_1266(&Local_1183, 6, 8, 1) < 1 && __LIB_1__::func_205(Global_35, iLocal_3430[39], 1, 0))
			{
				__LIB_5__::func_372(uParam0, 51);
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_752(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_155[1 /*182*/]))
	{
		if (PED::_0x5102307CE88798EB(Local_155[1 /*182*/]))
		{
			PED::_0x3088634CF8C819CF(Local_155[1 /*182*/]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_520[0 /*33*/]))
	{
		if (PED::_0x5102307CE88798EB(Local_520[0 /*33*/]))
		{
			PED::_0x3088634CF8C819CF(Local_520[0 /*33*/]);
		}
	}
	PED::SET_PED_COMBAT_MOVEMENT(Local_155[1 /*182*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 0, true);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_155[1 /*182*/], false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 27, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[0 /*182*/], 27, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[0 /*182*/], 30, false);
	PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_3430[11]);
	PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_3430[12]);
	func_1274(0, 2);
	func_1275(1, 4);
	func_1276(0, 9);
	func_1277(0, 5);
	func_1277(8, 9);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_21);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_34);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_26);
	func_442(&uLocal_3403);
	__LIB_0__::func_37(&(vLocal_3546[0 /*3*/]));
	return uParam0->f_607 == uParam0->f_607;
}

bool func_753(var uParam0)
{
	MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
	func_849(Local_155[1 /*182*/], 2956.073f, 1373.214f, 50.3228f, 238.9792f, 2, 1073741824 /* Float: 2f */);
	func_849(Local_155[0 /*182*/], 2955.772f, 1373.81f, 50.3228f, 297.372f, 2, 1073741824 /* Float: 2f */);
	func_849(Global_35, 2956.257f, 1377.101f, 50.3228f, 212.7867f, 2, 1073741824 /* Float: 2f */);
	if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(2956.55f, 1376.787f, 50.3228f)))
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Local_155[1 /*182*/], WEAPON::GET_BEST_PED_WEAPON(Local_155[1 /*182*/], false, false), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_155[0 /*182*/], WEAPON::GET_BEST_PED_WEAPON(Local_155[0 /*182*/], false, false), false, 0, false, false);
	PED::SET_PED_ACCURACY(Local_155[0 /*182*/], 40);
	PED::SET_PED_ACCURACY(Local_155[1 /*182*/], 40);
	PED::SET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 103, false);
	PED::SET_PED_CONFIG_FLAG(Local_155[1 /*182*/], 103, false);
	PED::SET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 252, false);
	PED::SET_PED_CONFIG_FLAG(Local_155[1 /*182*/], 252, false);
	iLocal_119 = OBJECT::CREATE_OBJECT(iLocal_35, 3020.43f, 1341.23f, 42.0553f, true, true, false, false, true);
	__LIB_3__::func_618(2881.804f, 1321.435f, 53.3972f, 10f, 1, 0, 0, 0, 0);
	__LIB_8__::func_922(78);
	func_886(1, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_754(var uParam0)
{
	CLOCK::SET_CLOCK_TIME(9, 0, 0);
	func_1278();
	func_1271();
	func_1279();
	if (!func_1280())
	{
		return false;
	}
	if (!func_1202(uParam0))
	{
		return false;
	}
	__LIB_1__::func_948(191285873, 0, 0f, 0, 0, 1f, 0, 0);
	__LIB_1__::func_948(-1751299331, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1591002038, 1, -1f, 1, 0, 0, 1, 0);
	__LIB_1__::func_948(-1510545488, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_0__::func_7(&Global_1935630, 262144);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[0 /*182*/], 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 30, true);
	MISC::_0x33982467B1E349EF(2853.507f, 1408.571f, 69.8f, iLocal_118, 2f, 1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_3430[37], 8192, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_3430[37], 8192, 0, 0, -1, -1, 0);
	__LIB_10__::func_935(uParam0, Local_155[0 /*182*/], 1);
	__LIB_5__::func_572(uParam0, Local_155[1 /*182*/], 128);
	__LIB_0__::func_904(6, 1);
	PED::_0xD05AD61F242C626B(Local_155[1 /*182*/], 1f);
	__LIB_5__::func_572(uParam0, Local_155[0 /*182*/], 128);
	__LIB_0__::func_904(0, 1);
	PED::_0xD05AD61F242C626B(Local_155[1 /*182*/], 1f);
	__LIB_5__::func_521(0.82f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_755(var uParam0)
{
	Local_155[0 /*182*/].f_169 = 6;
	Local_155[1 /*182*/].f_169 = 6;
	__LIB_1__::func_148(&uLocal_3522);
	__LIB_0__::func_37(&uLocal_3543);
	__LIB_5__::func_372(uParam0, 1);
	func_1281();
	__LIB_4__::func_527(&(uParam0->f_7375), 75f);
	__LIB_4__::func_528(&(uParam0->f_7375), 100f);
	__LIB_8__::func_787(uParam0, "MultiStart");
	__LIB_5__::func_298(uParam0, "MultiStart");
	__LIB_0__::func_900(0);
	__LIB_0__::func_900(6);
	return uParam0->f_607 == uParam0->f_607;
}

int func_756(var uParam0)
{
	func_1283(uParam0);
	func_1284(uParam0);
	func_1285();
	func_1286();
	func_1287();
	func_1254(uParam0);
	func_1288(uParam0);
	func_1289();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if ((Global_36.f_2 > 51.5f || __LIB_0__::func_75(&uLocal_3574)) && func_1290(0, 2, 1))
			{
				__LIB_1__::func_148(&uLocal_3571);
				__LIB_4__::func_952(uParam0, 2);
			}
			else
			{
				func_1291();
			}
			break;
		case 2:
			if (Global_36.f_2 > 56f)
			{
				if (func_1290(3, 4, 1))
				{
					func_1277(6, 7);
					func_1292();
					__LIB_4__::func_952(uParam0, 3);
				}
			}
			break;
		case 3:
			if (((func_1265(&Local_1778, 0, 4) < 1 || __LIB_1__::func_205(Global_35, iLocal_3430[27], 1, 0)) || __LIB_1__::func_205(Global_35, iLocal_3430[28], 1, 0)) && func_1290(5, 9, 1))
			{
				func_1207(268435456);
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			if ((((PED::IS_PED_INJURED(Local_1778[5 /*33*/]) && PED::IS_PED_INJURED(Local_1778[6 /*33*/])) && PED::IS_PED_INJURED(Local_1778[7 /*33*/])) && PED::IS_PED_INJURED(Local_1778[8 /*33*/])) || (__LIB_1__::func_205(Global_35, iLocal_3430[27], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_3430[28], 1, 0)))
			{
				if (func_1290(10, 13, 1))
				{
					func_1207(536870912);
					__LIB_4__::func_952(uParam0, 5);
				}
			}
			break;
		case 5:
			if (PED::IS_PED_INJURED(Local_1778[10 /*33*/]) && !func_1293(4))
			{
				if (func_1290(13, 15, 1))
				{
					func_1294(4);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 2911.642f, 1390.058f, 58.7289f, 5f, 5f, 5f, false, true, 0))
			{
				if (func_1290(17, 23, 1))
				{
					__LIB_4__::func_952(uParam0, 6);
				}
			}
			break;
		case 6:
			if (PED::IS_PED_INJURED(Local_1778[10 /*33*/]) && !func_1293(4))
			{
				if (func_1290(13, 15, 1))
				{
					func_1294(4);
				}
			}
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[28], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_155[0 /*182*/], iLocal_3430[28], true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Local_155[1 /*182*/], iLocal_3430[28], true, 0))
			{
				if (func_1290(13, 15, 1))
				{
					__LIB_4__::func_952(uParam0, 7);
				}
			}
			break;
		case 7:
			if (PED::IS_PED_INJURED(Local_1778[10 /*33*/]) && !func_1293(4))
			{
				if (func_1290(13, 15, 1))
				{
					func_1294(4);
				}
			}
			if ((((!ANIMSCENE::GET_ANIM_SCENE_BOOL(uLocal_126[5], "b_vehicle_loop") && Local_155[0 /*182*/].f_169 == 35) && ENTITY::IS_ENTITY_IN_VOLUME(Local_155[0 /*182*/], iLocal_3430[35], true, 0)) && Local_155[1 /*182*/].f_169 == 35) && ENTITY::IS_ENTITY_IN_VOLUME(Local_155[1 /*182*/], iLocal_3430[35], true, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_126[5], "b_vehicle_loop", true, false);
			}
			if ((Local_155[0 /*182*/].f_169 == 35 && Local_155[1 /*182*/].f_169 == 35) && __LIB_1__::func_205(Global_35, iLocal_3430[36], 1, 0))
			{
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uLocal_3409[3], true, false), 15f);
				__LIB_0__::func_325(&iLocal_39);
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (CAM::_0xA2B1C7EF759A63CE() == 1f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_757(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_119))
	{
		OBJECT::DELETE_OBJECT(&iLocal_119);
	}
	func_444(&Local_2571, 1);
	func_444(&Local_752, 1);
	func_444(&Local_1183, 1);
	func_1295(0, 17);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_35);
	__LIB_0__::func_37(&uLocal_3571);
	__LIB_0__::func_37(&uLocal_3522);
	__LIB_0__::func_745(0);
	__LIB_0__::func_745(6);
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_758(var uParam0)
{
	__LIB_8__::func_922(78);
	POPULATION::_0xB56D41A694E42E86(iLocal_3430[37], 8192, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_3430[37], 8192, 0, 0, -1, -1, 0);
	MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-10.4414f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0823f, 1f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_759(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	CLOCK::SET_CLOCK_TIME(16, 0, 0);
	func_1278();
	__LIB_0__::func_19(&uLocal_3617, 0);
	func_1279();
	if (!func_1280())
	{
		return false;
	}
	if (!func_1202(uParam0))
	{
		return false;
	}
	__LIB_0__::func_635(1024);
	__LIB_8__::func_810(7);
	if (!func_1298(1))
	{
		return false;
	}
	if (__LIB_4__::func_948(uParam0, 4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3409[3]))
		{
			if ((__LIB_0__::func_272(Local_155[1 /*182*/].f_1, 0) && __LIB_0__::func_272(Local_155[0 /*182*/].f_1, 0)) && __LIB_0__::func_272(iLocal_3399, 0))
			{
				if (!func_1206(16777216))
				{
					VEHICLE::_0x226C6A4E3346D288(uLocal_3409[3], 1);
					if (((!VEHICLE::_0xB36D3EC70963BE60(uLocal_3409[3], Local_155[0 /*182*/].f_1) || !VEHICLE::_0xB36D3EC70963BE60(uLocal_3409[3], Local_155[1 /*182*/].f_1)) || !VEHICLE::_0xB36D3EC70963BE60(uLocal_3409[3], iLocal_3399)) || !VEHICLE::_0xB36D3EC70963BE60(uLocal_3409[3], __LIB_3__::func_568(uLocal_3409[3], 1)))
					{
						return false;
					}
					func_1201(iLocal_3399, func_222(12, 4), 2, 1073741824 /* Float: 2f */);
					func_1207(16777216);
				}
			}
		}
	}
	if ((!PED::_0xA0BC8FAED8CFEB3C(iLocal_3399) || !PED::_0xA0BC8FAED8CFEB3C(Local_155[0 /*182*/].f_1)) || !PED::_0xA0BC8FAED8CFEB3C(Local_155[1 /*182*/].f_1))
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 1, 0);
	__LIB_8__::func_806(uParam0, Local_155[1 /*182*/], "MicahBell", 0, 0, 1, 0);
	__LIB_8__::func_806(uParam0, Local_155[0 /*182*/], "dutch", 0, 0, 1, 0);
	__LIB_8__::func_806(uParam0, iLocal_3399, "Horse_01", 0, 0, 1, 0);
	__LIB_8__::func_806(uParam0, Local_155[1 /*182*/].f_1, "Horse_01^1", 0, 0, 1, 0);
	__LIB_8__::func_806(uParam0, iLocal_3400, "Horse_01^2", 0, 0, 1, 0);
	__LIB_8__::func_806(uParam0, Local_155[0 /*182*/].f_1, "Horse_01^3", 0, 0, 1, 0);
	__LIB_5__::func_580(uParam0, uLocal_3409[3], "COACH2", 0, 0, 1, 0);
	POPULATION::_0x2161278C6322F740(8192, 0, 0, -1, -1, 0);
	ENTITY::SET_ENTITY_VISIBLE(Local_2969[11 /*33*/], false);
	ENTITY::SET_ENTITY_VISIBLE(Local_2969[11 /*33*/].f_2, false);
	__LIB_5__::func_521(0.65f);
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		func_1300(uParam0);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_760(var uParam0)
{
	if (!func_1301(0, 9, 1) || !func_1301(11, 11, 1))
	{
		return false;
	}
	Local_155[0 /*182*/].f_169 = 0;
	Local_155[1 /*182*/].f_169 = 0;
	__LIB_5__::func_372(uParam0, 1);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_0__::func_19(&uLocal_3617, 0);
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	func_1302(&iLocal_3402, &(Local_155[0 /*182*/]), 1, 10);
	func_1303(iLocal_3402, &Global_35, 0);
	func_1303(iLocal_3402, &(Local_155[1 /*182*/]), 1);
	PED::SET_PED_SHOOT_RATE(Local_155[0 /*182*/], 160);
	PED::SET_PED_SHOOT_RATE(Local_155[1 /*182*/], 160);
	func_1304(uParam0, &(Local_155[0 /*182*/]), 0);
	func_1304(uParam0, &(Local_155[1 /*182*/]), 1);
	__LIB_4__::func_527(&(uParam0->f_7375), 75f);
	__LIB_4__::func_528(&(uParam0->f_7375), 100f);
	__LIB_5__::func_298(uParam0, "MultiStart");
	__LIB_5__::func_262(&(uParam0->f_7375));
	PED::FORCE_PED_MOTION_STATE(Local_155[0 /*182*/].f_1, -1415276238, false, 0, false);
	PED::FORCE_PED_MOTION_STATE(Local_155[1 /*182*/].f_1, -1415276238, false, 0, false);
	__LIB_0__::func_37(&uLocal_3543);
	AUDIO::STOP_PED_SPEAKING(Global_35, true);
	return uParam0->f_607 == uParam0->f_607;
}

int func_761(var uParam0)
{
	func_1306(uParam0);
	func_1307(uParam0);
	func_1308(uParam0);
	func_1309(uParam0);
	func_1310();
	func_1311();
	func_1312(uParam0);
	func_1313(uParam0);
	func_1314();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (!func_1206(1073741824 /* Float: 2f */))
			{
				__LIB_1__::func_571(Local_155[0 /*182*/], Local_155[0 /*182*/].f_1, 0, -1, 1);
				__LIB_1__::func_571(Local_155[1 /*182*/], Local_155[1 /*182*/].f_1, 0, -1, 1);
				__LIB_1__::func_571(Global_35, iLocal_3399, 0, -1, 1);
				func_1207(1073741824 /* Float: 2f */);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			func_1316();
			if (func_1317(1) > 110)
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_2969[11 /*33*/], true);
				ENTITY::SET_ENTITY_VISIBLE(Local_2969[11 /*33*/].f_2, true);
				__LIB_5__::func_521(0.7f);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			func_1316();
			func_1318();
			__LIB_1__::func_694(Global_35, 2243.644f, 1574.721f, 87.3328f, 0, 14f, 12f, 10f, 1f, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3401))
			{
				iLocal_3401 = __LIB_17__::func_520(1, 1, 0, 2225.943f, 1456.517f, 88.9697f, 64f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3401))
				{
					func_849(iLocal_3401, 2225.943f, 1456.517f, 88.9697f, 64.0223f, 2, 1073741824 /* Float: 2f */);
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[10], true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, 2243.644f, 1574.721f, 87.3328f, 9f, 9f, 5f, false, true, 0))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_4__::func_952(uParam0, 3);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					func_1321();
					__LIB_4__::func_952(uParam0, 3);
				}
			}
			break;
		case 3:
			__LIB_1__::func_694(Global_35, 2243.644f, 1574.721f, 87.3328f, 0, 14f, 12f, 10f, 1f, 1, 1, 1, 0);
			if (__LIB_0__::func_270())
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			}
			__LIB_10__::func_935(uParam0, Local_155[0 /*182*/], 1);
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_1__::func_148(&uLocal_3528);
				__LIB_5__::func_372(uParam0, 51);
				__LIB_4__::func_952(uParam0, 29);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) != 1)
			{
				func_1321();
			}
			break;
		case 29:
			__LIB_1__::func_694(Global_35, 2243.644f, 1574.721f, 87.3328f, 0, 14f, 12f, 10f, 1f, 1, 1, 1, 0);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (CAM::_0xA2B1C7EF759A63CE() == 1f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_762(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	func_185();
	return uParam0->f_607 == uParam0->f_607;
}

int func_764(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3401))
	{
		iLocal_3401 = __LIB_17__::func_520(1, 1, 0, 2225.943f, 1456.517f, 88.9697f, 64f);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3401))
		{
			func_849(iLocal_3401, 2225.943f, 1456.517f, 88.9697f, 64.0223f, 2, 1073741824 /* Float: 2f */);
		}
		else
		{
			return 0;
		}
	}
	TXD::_REQUEST_STREAMED_TXD(joaat("UI_LETTER_WINTER_4_MINING"), false);
	if (!TXD::_HAS_STREAMED_TXD_LOADED(joaat("UI_LETTER_WINTER_4_MINING")))
	{
		return 0;
	}
	func_1322();
	__LIB_5__::func_298(uParam0, "MultiStart");
	__LIB_5__::func_580(uParam0, iLocal_121, "p_cs_letter03x", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, iLocal_3399, "horse_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_155[1 /*182*/].f_1, "horse_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_155[0 /*182*/].f_1, "horse_01^2", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_155[1 /*182*/], "MicahBell", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_155[0 /*182*/], "Dutch", 0, 0, 0, 0);
	PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
	PED::_REMOVE_PED_FROM_MOUNT(Local_155[1 /*182*/], true, false);
	PED::_REMOVE_PED_FROM_MOUNT(Local_155[0 /*182*/], true, false);
	func_849(iLocal_3401, 2312.14f, 1600.905f, 85.1788f, 56.3292f, 2, 1073741824 /* Float: 2f */);
	CLOCK::SET_CLOCK_TIME(18, 0, 0);
	return 1;
}

int func_765(var uParam0)
{
	__LIB_0__::func_19(&uLocal_3616, 0);
	__LIB_0__::func_19(&uLocal_3615, 0);
	__LIB_0__::func_19(&uLocal_3617, 0);
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	__LIB_5__::func_372(uParam0, 0);
	__LIB_4__::func_952(uParam0, 0);
	CAM::SET_GAMEPLAY_COORD_HINT(2245.218f, 1578.482f, 87.4591f, 500, 2000, 1000, 0);
	CLOCK::SET_CLOCK_TIME(16, 0, 0);
	MISC::_0x0E71C80FA4EC8147("misty", false);
	return 1;
}

int func_766(var uParam0)
{
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (__LIB_11__::func_320(uParam0, Local_155[0 /*182*/], 0, 0, 1, 1) || __LIB_11__::func_320(uParam0, Local_155[1 /*182*/], 0, 0, 1, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_767(var uParam0)
{
	__LIB_8__::func_824(uParam0, 0, Local_155[0 /*182*/], 0, 1, 1, 0);
	__LIB_8__::func_824(uParam0, 6, Local_155[1 /*182*/], 0, 1, 1, 0);
	return 1;
}

void func_773(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*iParam0, 4) && !__LIB_0__::func_1(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*iParam0, 8192))
	{
		func_1327();
	}
	if (!__LIB_0__::func_1(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*iParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_0__::func_151(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*iParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_1__::func_716(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_775(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_849(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_849(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_776(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_849(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_784(int iParam0, int iParam1)
{
	var uVar0;
	return func_1351(&uVar0, iParam0, iParam1);
}

bool func_841(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1382(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1383(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_849(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_849(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_849(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_851(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (!__LIB_5__::func_343(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			__LIB_4__::func_560(uParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_773(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_1__::func_283(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_3)) >= 1f)
			{
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_91())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(uParam0->f_2))
				{
					CAM::DESTROY_CAM(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			__LIB_5__::func_129(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			__LIB_0__::func_19(uParam0, 0);
			return true;
	}
	return false;
}

bool func_853(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (func_1418(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 262144);
		if (__LIB_4__::func_562(&(uParam0->f_10792), 524288))
		{
			__LIB_5__::func_33(uParam0, 67108864);
			__LIB_4__::func_563(&(uParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

bool func_855(var uParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_4__::func_937(uParam0, 16777216))
	{
		__LIB_5__::func_345(uParam0);
		__LIB_5__::func_56(uParam0);
		return true;
	}
	if (func_1424(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_81(uParam0) == 0)
	{
		__LIB_11__::func_756(uParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_4__::func_937(uParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_974(uParam0);
			__LIB_4__::func_969(uParam0, 524288);
			__LIB_5__::func_346(uParam0);
			__LIB_5__::func_26(uParam0, 30f);
			__LIB_5__::func_27(uParam0, 40f);
			__LIB_4__::func_944(uParam0, 262144);
		}
		if (!__LIB_4__::func_937(uParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_7375.f_804))
		{
			__LIB_4__::func_944(uParam0, 524288);
		}
	}
	return false;
}

void func_861()
{
	Local_155[0 /*182*/].f_170 = 0;
	Local_155[1 /*182*/].f_170 = 6;
	Local_155[0 /*182*/].f_169 = 0;
	Local_155[1 /*182*/].f_169 = 0;
}

bool func_862(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!iLocal_3501[0])
		{
			iLocal_3501[0] = 1;
			func_1431(uParam0);
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_1432(uParam0))
	{
	}
	else
	{
		iVar0 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3409[3]))
	{
		if (func_1298(1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_16)
	{
		if (!func_1433(0, 2, 1))
		{
			iVar0 = 0;
		}
	}
	else if (__LIB_4__::func_939(uParam0) == iLocal_17)
	{
		if (!func_1239(1, 3, 1))
		{
			iVar0 = 0;
		}
	}
	else if (__LIB_4__::func_939(uParam0) == iLocal_19)
	{
		if (!func_1301(0, 9, 1))
		{
			iVar0 = 0;
		}
	}
	__LIB_5__::func_595(uParam0, 1);
	return iVar0;
}

void func_863(var uParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	char* sVar11;
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 40)
	{
		switch (iVar1)
		{
			case 0:
				vVar2 = { 2922.448f, 1354.722f, 50.2248f };
				vVar5 = { 0f, 0f, -15.64577f };
				vVar8 = { 112.3778f, 188.4504f, 70.43996f };
				sVar11 = "MISSION_VOLUME_BLOCKING_PED";
				break;
			case 1:
				vVar2 = { 2930.648f, 1383.999f, 50.2248f };
				vVar5 = { 0f, 0f, -15.64577f };
				vVar8 = { 58.53069f, 242.2702f, 70.43996f };
				sVar11 = "MISSION_VOLUME_BLOCKING_ROAD";
				break;
			case 2:
				vVar2 = { 3014.506f, 1347.855f, 43f };
				vVar5 = { 0f, 0f, 69.00002f };
				vVar8 = { 11f, 10.5f, 4f };
				sVar11 = "MISSION_VOLUME_S1_MEETING_TRIGGER";
				break;
			case 3:
				vVar2 = { 3010.203f, 1346.872f, 43.11478f };
				vVar5 = { 0f, 0f, 70.23142f };
				vVar8 = { 45f, 4f, 8f };
				sVar11 = "MISSION_VOLUME_S1_MEETING_COVER";
				break;
			case 4:
				vVar2 = { 3017.399f, 1353.802f, 41.71797f };
				vVar5 = { 0f, 0f, 70f };
				vVar8 = { 7.5f, 7.5f, 7.5f };
				sVar11 = "MISSION_VOLUME_S1_MEETING_END";
				break;
			case 5:
				vVar2 = { 2928.384f, 1380.419f, 54.95347f };
				vVar5 = { 0f, 0f, -19.31343f };
				vVar8 = { 5f, 2f, 7f };
				sVar11 = "MISSION_VOLUME_S3_SECOND_ROOM_TRIGGER";
				break;
			case 6:
				vVar2 = { 2947.895f, 1361.607f, 45.61551f };
				vVar5 = { 0f, 0f, 70f };
				vVar8 = { 75f, 14f, 8f };
				sVar11 = "MISSION_VOLUME_S2_SHOOTOUT_LEFT";
				break;
			case 7:
				vVar2 = { 2934.633f, 1366.434f, 45.61551f };
				vVar5 = { 0f, 0f, 70f };
				vVar8 = { 75f, 14f, 8f };
				sVar11 = "MISSION_VOLUME_S2_SHOOTOUT_RIGHT";
				break;
			case 8:
				vVar2 = { 2940.793f, 1382.605f, 54.30996f };
				vVar5 = { 0f, 0f, 70.0001f };
				vVar8 = { 5f, 40f, 8f };
				sVar11 = "MISSION_VOLUME_S3_RIGHT_CORRIDOR";
				break;
			case 9:
				vVar2 = { 2946.943f, 1374.314f, 56.65f };
				vVar5 = { 0f, 0f, 70.0001f };
				vVar8 = { 5f, 56f, 3f };
				sVar11 = "MISSION_VOLUME_S3_LEFT_CORRIDOR";
				break;
			case 32:
				vVar2 = { 2953.473f, 1378.747f, 56.11945f };
				vVar5 = { 0f, 0f, 70.0001f };
				vVar8 = { 2.5f, 1.5f, 4f };
				sVar11 = "MISSION_VOLUME_S3_RIGHT_CORRIDOR";
				break;
			case 31:
				vVar2 = { 2951.256f, 1372.655f, 56.11945f };
				vVar5 = { 0f, 0f, 70.0001f };
				vVar8 = { 2.5f, 1.5f, 4f };
				sVar11 = "MISSION_VOLUME_S3_LEFT_CORRIDOR";
				break;
			case 34:
				vVar2 = { 2949.07f, 1380.392f, 56.11945f };
				vVar5 = { 0f, 0f, 70.0001f };
				vVar8 = { 2.5f, 1.5f, 4f };
				sVar11 = "MISSION_VOLUME_S3_RIGHT_CORRIDOR";
				break;
			case 33:
				vVar2 = { 2945.506f, 1374.889f, 56.11945f };
				vVar5 = { 0f, 0f, 70.0001f };
				vVar8 = { 2.5f, 1.5f, 4f };
				sVar11 = "MISSION_VOLUME_S3_LEFT_CORRIDOR";
				break;
			case 10:
				vVar2 = { 2236.476f, 1568.189f, 89.23f };
				vVar5 = { 0f, 0f, 42f };
				vVar8 = { 16f, 16f, 12f };
				sVar11 = "MISSION_VOLUME_S5_HILL_ESCAPE_END";
				break;
			case 14:
				vVar2 = { 2942.407f, 1393.599f, 43.7557f };
				vVar5 = { 0f, 0f, 68.75002f };
				vVar8 = { 50f, 50f, 30f };
				sVar11 = "MISSION_VOLUME_S2_TOWN_W2_TRIGGER";
				break;
			case 20:
				vVar2 = { 3002.3f, 1349.713f, 43.11478f };
				vVar5 = { 0f, 0f, 70.23142f };
				vVar8 = { 45f, 4f, 8f };
				sVar11 = "MISSION_VOLUME_S2_JETTY_TRIGGER";
				break;
			case 21:
				vVar2 = { 3017.666f, 1352.059f, 41.7629f };
				vVar5 = { 0f, 0f, -20f };
				vVar8 = { 3.5f, 1.5f, 3f };
				sVar11 = "MISSION_VOLUME_S1_MEETING_COVER_ZONE_1";
				break;
			case 22:
				vVar2 = { 3021.531f, 1354.91f, 41.7629f };
				vVar5 = { 0f, 0f, -20f };
				vVar8 = { 3.5f, 1.5f, 3f };
				sVar11 = "MISSION_VOLUME_S1_MEETING_COVER_ZONE_2";
				break;
			case 23:
				vVar2 = { 3021.421f, 1344.029f, 43.60284f };
				vVar5 = { 0f, 0f, 70.23142f };
				vVar8 = { 27.57092f, 22.5f, 7.547795f };
				sVar11 = "MISSION_VOLUME_S2_SHOOTOUT_1";
				break;
			case 24:
				vVar2 = { 3003.469f, 1349.901f, 43.60284f };
				vVar5 = { 0f, 0f, 70.23142f };
				vVar8 = { 169.71f, 15.5f, 7.747795f };
				sVar11 = "MISSION_VOLUME_S2_SHOOTOUT_2";
				break;
			case 25:
				vVar2 = { 2986.776f, 1349.122f, 43.60284f };
				vVar5 = { 0f, 0f, 74.23143f };
				vVar8 = { 169.71f, 15.5f, 7.747795f };
				sVar11 = "MISSION_VOLUME_S2_SHOOTOUT_3";
				break;
			case 26:
				vVar2 = { 2853.167f, 1422.303f, 68.46832f };
				vVar5 = { 0f, 0f, -14f };
				vVar8 = { 28f, 18f, 8f };
				sVar11 = "MISSION_VOLUME_S3_LUMBER_YARD_END";
				break;
			case 27:
				vVar2 = { 2931.659f, 1383.264f, 54.30996f };
				vVar5 = { 0f, 0f, 70.0001f };
				vVar8 = { 11f, 9f, 8f };
				sVar11 = "MISSION_VOLUME_S3_SECOND_ROOM";
				break;
			case 28:
				vVar2 = { 2889.734f, 1398.524f, 63.22799f };
				vVar5 = { 0f, 0f, 70.0001f };
				vVar8 = { 11f, 9f, 8f };
				sVar11 = "MISSION_VOLUME_S3_CRUSHER_ROOM";
				break;
			case 30:
				vVar2 = { 2870.947f, 1404.295f, 68.46832f };
				vVar5 = { 0f, 0f, -14f };
				vVar8 = { 8f, 18f, 8f };
				sVar11 = "MISSION_VOLUME_S3_FINAL_SHOOTING";
				break;
			case 29:
				vVar2 = { 2310.002f, 1621.296f, 86.54203f };
				vVar5 = { 0f, 0f, 85.2314f };
				vVar8 = { 100f, 120f, 20f };
				sVar11 = "MISSION_VOLUME_S4_FINAL_SHOOTING";
				break;
			case 11:
				vVar2 = { 2972.88f, 1389.472f, 44.60841f };
				vVar5 = { 0f, 0f, 46.00003f };
				vVar8 = { 6f, 7f, 6f };
				sVar11 = "MISSION_VOLUME_S2_NAVMESH_BLOCK";
				break;
			case 12:
				vVar2 = { 2971.587f, 1303.344f, 44.60841f };
				vVar5 = { 0f, 0f, 73.00003f };
				vVar8 = { 6f, 26f, 9f };
				sVar11 = "MISSION_VOLUME_S2_NAVMESH_BLOCK_2";
				break;
			case 37:
				vVar2 = { 2819.537f, 1430.687f, 79.53533f };
				vVar5 = { 0f, 0f, -14f };
				vVar8 = { 101f, 72f, 43f };
				sVar11 = "MISSION_VOLUME_S4_AMBIENT_PEDS_BLOCK";
				break;
			case 35:
				vVar2 = { 2854.097f, 1425.656f, 68.46832f };
				vVar5 = { 0f, 0f, -43f };
				vVar8 = { 2f, 5f, 5f };
				sVar11 = "MISSION_VOLUME_S3_MCS2_LEADIN";
				break;
			case 36:
				vVar2 = { 2856.859f, 1422.608f, 68.51397f };
				vVar5 = { 0f, 0f, 0f };
				vVar8 = { 6.5f, 6.5f, 1f };
				sVar11 = "MISSION_VOLUME_S3_MCS2_TRIGGER";
				bVar0 = false;
				break;
			case 38:
				vVar2 = { 2960.302f, 1380.241f, 44.60841f };
				vVar5 = { 0f, 0f, -21f };
				vVar8 = { 5f, 4f, 16f };
				bVar0 = true;
				sVar11 = "MISSION_VOLUME_S2_STAIRS_TO_BUILDING";
				break;
			case 39:
				vVar2 = { 2957.269f, 1374.253f, 51.60831f };
				vVar5 = { 0f, 0f, -19f };
				vVar8 = { 7f, 8f, 5f };
				sVar11 = "MISSION_VOLUME_S2_MEETING_POINT";
				bVar0 = true;
				break;
		}
		if (iVar1 == 13)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[iVar1]))
			{
				iLocal_3430[13] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MISSION_VOLUME_S2_TOWN_W1_TRIGGER");
				VOLUME::_0x39816F6F94F385AD(iLocal_3430[13], 2963.733f, 1399.463f, 46.873f, 0f, 0f, 67f, 97f, 50f, 10f);
				VOLUME::_0x39816F6F94F385AD(iLocal_3430[13], 2988.141f, 1390.404f, 46.873f, 0f, 0f, 66f, 6f, 15f, 10f);
			}
		}
		else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_3430[iVar1]))
		{
			if (bVar0)
			{
				__LIB_3__::func_573(&(iLocal_3430[iVar1]), vVar2, vVar5, vVar8, sVar11);
			}
			else
			{
				__LIB_3__::func_139(&(iLocal_3430[iVar1]), vVar2, vVar5, vVar8, sVar11);
			}
		}
		iVar1++;
	}
}

void func_864(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	char* sVar10;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		switch (iVar0)
		{
			case 0:
				vVar1 = { 2997.261f, 1349.833f, 43.03536f };
				vVar4 = { 0f, 0f, 70.23142f };
				vVar7 = { 0.5f, 0.5f, 1.747795f };
				sVar10 = "COVER_BLOCKING_VOLUME_1";
				break;
			case 1:
				vVar1 = { 3010.908f, 1348.317f, 42.27112f };
				vVar4 = { 0f, 0f, 70.23142f };
				vVar7 = { 0.5f, 1.5f, 1.747795f };
				sVar10 = "COVER_BLOCKING_VOLUME_2";
				break;
			case 2:
				vVar1 = { 3018.224f, 1337.234f, 42.27112f };
				vVar4 = { 0f, 0f, 70.23142f };
				vVar7 = { 0.5f, 0.5f, 1.747795f };
				sVar10 = "COVER_BLOCKING_VOLUME_3";
				break;
			case 3:
				vVar1 = { 2999.463f, 1352.527f, 43.03536f };
				vVar4 = { 0f, 0f, 70.23142f };
				vVar7 = { 0.5f, 0.5f, 1.747795f };
				sVar10 = "COVER_BLOCKING_VOLUME_4";
				break;
			case 4:
				vVar1 = { 2953.35f, 1371.056f, 55.57967f };
				vVar4 = { 0f, 0f, 70.23142f };
				vVar7 = { 1.5f, 1.5f, 1.747795f };
				sVar10 = "COVER_BLOCKING_VOLUME_5";
				break;
			case 5:
				vVar1 = { 2857.269f, 1412.229f, 68.27727f };
				vVar4 = { 0f, 0f, 70.23142f };
				vVar7 = { 3f, 5.5f, 3f };
				sVar10 = "COVER_BLOCKING_VOLUME_6";
				break;
			case 6:
				vVar1 = { 3022.287f, 1332.115f, 42.27112f };
				vVar4 = { 0f, 0f, 70.23142f };
				vVar7 = { 1.5f, 1.5f, 1.747795f };
				sVar10 = "COVER_BLOCKING_VOLUME_7";
				break;
			case 7:
				vVar1 = { 2958.448f, 1338.279f, 44.70316f };
				vVar4 = { 0f, 0f, -19f };
				vVar7 = { 4f, 1.5f, 2f };
				sVar10 = "COVER_BLOCKING_VOLUME_8";
				break;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_3471[iVar0]))
		{
			__LIB_3__::func_573(&(uLocal_3471[iVar0]), vVar1, vVar4, vVar7, sVar10);
			TASK::_0xEB2ED1DC3AEC0654(uLocal_3471[iVar0], 1, 1, 1, 1);
		}
		iVar0++;
	}
}

void func_865(var uParam0)
{
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2956.416f, 1372.956f, 50.3228f, joaat("ANN_COALTIPPLE_INT_MAIN")), "int_trainrob01_cover", 0);
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2893.078f, 1399.27f, 63.942f, joaat("ANN_COALBREAKER_INT_MAIN")), "int_trainrob01_cover2", 0);
	}
	func_1436(uParam0);
	func_1437(0, 11);
	func_885();
}

void func_866(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (iVar0 == 0)
		{
			iLocal_3618[iVar0] = -405768775;
		}
		else if (iVar0 == 1)
		{
			iLocal_3618[iVar0] = 1155704201;
		}
		else if (iVar0 == 2)
		{
			iLocal_3618[iVar0] = -1591002038;
		}
		else if (iVar0 == 3)
		{
			iLocal_3618[iVar0] = -1751299331;
		}
		if (__LIB_0__::func_30(iLocal_3618[iVar0]))
		{
		}
		iVar0++;
	}
	func_1439(uParam0);
}

Vector3 func_874(int iParam0, int iParam1)
{
	return func_963(iParam0, iParam1);
}

void func_877()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = __LIB_0__::func_398(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			__LIB_8__::func_810(iVar0);
			func_1444(iVar1, iVar2);
			iVar2++;
		}
		iVar0++;
	}
}

int func_878(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_16)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
		__LIB_0__::func_489(0, 0);
	}
	return 0;
}

int func_880(var uParam0)
{
	int iVar0;
	struct<27> Var1;
	int iVar39;
	struct<27> Var40;
	int iVar78;
	struct<15> Var79;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_16)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_7375.f_804, "TRN1_INT_P1_T06_Shot_2", 1) && !func_1206(4096))
		{
			func_877();
			func_1207(4096);
		}
		ENTITY::CREATE_MODEL_HIDE(2917.182f, 1325.631f, 43.4727f, 2f, joaat("P_CRATE012X"), false);
		if (__LIB_11__::func_320(uParam0, Global_35, 0, 0, 1, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (__LIB_4__::func_948(uParam0, 4) || __LIB_4__::func_937(uParam0, 524288))
				{
					func_1201(Global_35, func_222(12, 0), 2, 1073741824 /* Float: 2f */);
					__LIB_0__::func_489(0f, 0f);
				}
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 4000, 0, 1, 1, 0, 0, 0);
			}
		}
		if (__LIB_11__::func_320(uParam0, Local_155[0 /*182*/], 0, 0, 1, 1))
		{
			Var1.f_4 = 1065353216;
			Var1.f_5 = 1065353216;
			Var1.f_9 = 1065353216;
			Var1.f_10 = 1065353216;
			Var1.f_14 = 1065353216;
			Var1.f_15 = 1065353216;
			Var1.f_17 = 1040187392;
			Var1.f_18 = 1040187392;
			Var1.f_19 = -1;
			Var1.f_26 = -1082130432;
			iVar39 = 19456;
			PED::_0x2208438012482A1A(Local_155[0 /*182*/], true, false);
			__LIB_11__::func_9(Local_155[0 /*182*/], Global_35, &Var1, 0f, 0f, 0f, func_410(0), iVar39, 1, 6.5f, 4.5f, 1.8f, fLocal_3515, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			__LIB_3__::func_898(Global_35, Local_155[0 /*182*/], &Var1, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 1, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1082130432 /* Float: -1f */, 2.5f);
			__LIB_4__::func_982(Local_155[0 /*182*/], 1f);
			__LIB_1__::func_731(&uLocal_3587);
			func_1208(3);
			func_1207(4);
			__LIB_1__::func_148(&(Local_155[0 /*182*/].f_2));
			WEAPON::SET_CURRENT_PED_WEAPON(Local_155[0 /*182*/], joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), false, 0, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_155[0 /*182*/], true);
		}
		if (__LIB_11__::func_320(uParam0, Local_155[1 /*182*/], 0, 0, 1, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_155[1 /*182*/]))
			{
				PED::_0x2208438012482A1A(Local_155[1 /*182*/], true, false);
				Var40.f_4 = 1065353216;
				Var40.f_5 = 1065353216;
				Var40.f_9 = 1065353216;
				Var40.f_10 = 1065353216;
				Var40.f_14 = 1065353216;
				Var40.f_15 = 1065353216;
				Var40.f_17 = 1040187392;
				Var40.f_18 = 1040187392;
				Var40.f_19 = -1;
				Var40.f_26 = -1082130432;
				iVar78 = 19456;
				__LIB_11__::func_9(Local_155[1 /*182*/], Global_35, &Var40, 0f, 0f, 0f, func_410(1), iVar78, 1, 4.5f, 3.5f, 1.8f, fLocal_3515, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
				__LIB_3__::func_898(Global_35, Local_155[1 /*182*/], &Var40, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 1, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1082130432 /* Float: -1f */, 2.5f);
				__LIB_1__::func_731(&uLocal_3587);
				func_1208(3);
				func_1207(8);
				if (WEAPON::HAS_PED_GOT_WEAPON(Local_155[1 /*182*/], joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), 0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_155[1 /*182*/], joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), false, 0, false, false);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(Local_155[1 /*182*/], joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), 0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_155[1 /*182*/], joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), false, 1, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_155[1 /*182*/], true);
			}
		}
	}
	else if (iVar0 == iLocal_17)
	{
		if ((CAM::IS_CINEMATIC_CAM_RENDERING() && CLOCK::GET_CLOCK_HOURS() >= 6) && CLOCK::GET_CLOCK_HOURS() < 19)
		{
			CAM::_0xA54D643D0773EB65("script@Story@TRN1@Annesburg", "WideShot", 5);
		}
		if (!AICOVERPOINT::_0x8CBE916CFC64AD5C(Global_35))
		{
			AICOVERPOINT::_0x140B3CB1D424A945(Global_35, -1);
		}
		if (__LIB_11__::func_320(uParam0, Global_35, "ARTHUR", 0, 1, 1))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_105[10]), -1, 0, 0f, 1, 0, iLocal_105[10], 0, 1, 0);
			__LIB_8__::func_895(3022.812f, 1342.303f, 43.3537f, 0);
			PED::_0x2208438012482A1A(Global_35, true, false);
		}
		if (__LIB_11__::func_320(uParam0, Local_520[2 /*33*/], "S_M_M_CornwallGuard_01", 0, 1, 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "p_woodramp02x", iLocal_119);
			PED::FORCE_PED_MOTION_STATE(Local_520[2 /*33*/], joaat("MOTIONSTATE_AIMING"), false, 1, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
			TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 1000, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
			TASK::TASK_PERFORM_SEQUENCE(Local_520[2 /*33*/], iLocal_38);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			PED::_0x1854217C640B39EC(Local_520[2 /*33*/], iLocal_3408, func_874(0, 11) - ENTITY::GET_ENTITY_COORDS(iLocal_3408, true, false), 1f, 0, 0);
		}
		if (__LIB_11__::func_320(uParam0, Local_520[3 /*33*/], "S_M_M_CornwallGuard_01^1", 0, 1, 0))
		{
			PED::FORCE_PED_MOTION_STATE(Local_520[3 /*33*/], joaat("MOTIONSTATE_AIMING"), false, 1, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 3025.134f, 1344.609f, 43.1f, Global_35, 1.5f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 4194304, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
			TASK::TASK_PERFORM_SEQUENCE(Local_520[3 /*33*/], iLocal_38);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			PED::_0x1854217C640B39EC(Local_520[3 /*33*/], iLocal_3408, Vector(43.1f, 1345.087f, 3024.819f) - ENTITY::GET_ENTITY_COORDS(iLocal_3408, true, false), 1f, 0, 0);
		}
		if (__LIB_11__::func_320(uParam0, Local_520[4 /*33*/], "S_M_M_CornwallGuard_01^2", 0, 1, 0))
		{
			PED::FORCE_PED_MOTION_STATE(Local_520[4 /*33*/], joaat("MOTIONSTATE_AIMING"), false, 1, false);
			PED::REGISTER_TARGET(Local_520[4 /*33*/], Global_35, 1);
			PED::REGISTER_TARGET(Local_520[4 /*33*/], Local_155[0 /*182*/], 1);
			PED::_0x8ACC0506743A8A5C(Local_520[4 /*33*/], joaat("SCRIPT_STARTOFCOMBAT_UNDERFIRE"), 2, -1082130432 /* Float: -1f */);
			Var79.f_2 = -1;
			Var79.f_7 = -1;
			Var79.f_8 = -1082130432;
			Var79.f_12 = -1082130432;
			Var79.f_13 = 1;
			Var79.f_14 = -1082130432;
			Var79 = func_410(15);
			Var79.f_1 = 0;
			Var79.f_2 = -1;
			Var79.f_5 = 1;
			Var79.f_6 = 1;
			Var79.f_12 = 1.5f;
			Var79.f_14 = -1f;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
			TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 1000, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(0, &Var79);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
			TASK::TASK_PERFORM_SEQUENCE(Local_520[4 /*33*/], iLocal_38);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			func_1451(Local_520[4 /*33*/], func_874(0, 10), 1f, 0f, 0f, 0f, 0, 1);
		}
		if (__LIB_11__::func_320(uParam0, Local_520[5 /*33*/], "S_M_M_CornwallGuard_01^3", 0, 1, 0))
		{
			__LIB_2__::func_426(&(Local_520[5 /*33*/]));
		}
		if (__LIB_11__::func_320(uParam0, Local_520[6 /*33*/], "S_M_M_CornwallGuard_01^4", 0, 1, 0))
		{
			__LIB_2__::func_426(&(Local_520[6 /*33*/]));
		}
		if (__LIB_11__::func_320(uParam0, Local_520[0 /*33*/], "CS_JANSON", 0, 1, 0))
		{
			func_849(Local_520[0 /*33*/], 2956.028f, 1372.511f, 50.3228f, 88.0866f, 32, 1073741824 /* Float: 2f */);
		}
		if (__LIB_11__::func_320(uParam0, Local_520[1 /*33*/], "MiltonAndrews", 0, 1, 0))
		{
			__LIB_2__::func_426(&(Local_520[1 /*33*/]));
		}
		if (__LIB_11__::func_320(uParam0, Local_3366, "LeviticusCornwall", 0, 1, 0))
		{
			__LIB_0__::func_490(&Local_3366, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_21);
		}
		if (__LIB_11__::func_320(uParam0, Local_155[0 /*182*/], "Dutch", 0, 1, 1))
		{
			func_1453(0, 3019.75f, 1347.81f, 41.72f, 0.75f, 3018.545f, 1348.701f, 41.7199f, 0, 1);
			PED::_0x2208438012482A1A(Local_155[0 /*182*/], false, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 15f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
			TASK::TASK_PERFORM_SEQUENCE(Local_155[0 /*182*/], iLocal_38);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
		}
		if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_7375.f_804, "TRN1_MCS1_P1_T04_Shot_1", 1) && CLOCK::GET_CLOCK_HOURS() != 7)
		{
			CLOCK::SET_CLOCK_TIME(7, 0, 0);
		}
	}
	else if (iVar0 == iLocal_19)
	{
		func_1454();
		func_1301(0, 9, 1);
		func_1301(11, 11, 1);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3409[3]))
		{
			if ((__LIB_0__::func_272(Local_155[1 /*182*/].f_1, 0) && __LIB_0__::func_272(Local_155[0 /*182*/].f_1, 0)) && __LIB_0__::func_272(iLocal_3399, 0))
			{
				if (!func_1206(16777216))
				{
					VEHICLE::_0x226C6A4E3346D288(uLocal_3409[3], 1);
					if (((VEHICLE::_0xB36D3EC70963BE60(uLocal_3409[3], Local_155[0 /*182*/].f_1) && VEHICLE::_0xB36D3EC70963BE60(uLocal_3409[3], Local_155[1 /*182*/].f_1)) && VEHICLE::_0xB36D3EC70963BE60(uLocal_3409[3], iLocal_3399)) && VEHICLE::_0xB36D3EC70963BE60(uLocal_3409[3], __LIB_3__::func_568(uLocal_3409[3], 1)))
					{
						func_1207(16777216);
					}
				}
			}
		}
		if (__LIB_11__::func_320(uParam0, Local_155[0 /*182*/], "Dutch", 0, 1, 1))
		{
			func_1209(&(Local_155[0 /*182*/].f_169), 19, 2);
			StringCopy(&(Local_155[0 /*182*/].f_178), func_410(5), 32);
			func_1455(0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_155[0 /*182*/], &(Local_155[0 /*182*/].f_178), 0, 25706, 191, 0, 1, -1);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_155[0 /*182*/], 1);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_155[0 /*182*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
			PED::_0x9BBEAF8B0C007F1E(Global_35, 0);
		}
		if (__LIB_11__::func_320(uParam0, Local_155[1 /*182*/], "MicahBell", 0, 1, 1))
		{
			func_1209(&(Local_155[1 /*182*/].f_169), 19, 2);
			StringCopy(&(Local_155[1 /*182*/].f_178), func_410(6), 32);
			func_1455(0);
			func_1456(&(Local_155[1 /*182*/].f_178), Local_155[1 /*182*/], Local_155[0 /*182*/], 1092616192 /* Float: 10f */);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_155[1 /*182*/], 1);
		}
		if (__LIB_9__::func_828(uParam0, iLocal_122[0], "p_cs_horseHarness01x", 0, 1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[6], "p_cs_horseHarness01x", iLocal_122[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[6], "p_cs_horseHarness01x^1", iLocal_122[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[6], "p_cs_horseHarness01x^2", iLocal_122[2], 0);
			ANIMSCENE::START_ANIM_SCENE(uLocal_126[6]);
		}
	}
	return 1;
}

int func_882(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_16)
	{
		if (!func_1206(4096))
		{
			func_877();
			func_1207(4096);
		}
		func_1201(Local_155[0 /*182*/], func_222(11, 0), 34, 1073741824 /* Float: 2f */);
		func_1201(Local_155[1 /*182*/], func_222(10, 0), 34, 1073741824 /* Float: 2f */);
		if (func_1205() == 0)
		{
			if (func_1206(4))
			{
				if (!func_1206(8))
				{
					func_1207(8);
				}
			}
			else
			{
				func_1208(1);
			}
		}
		if (func_1205() != 3)
		{
			return 0;
		}
	}
	return 1;
}

void func_884()
{
	ENTITY::CREATE_MODEL_HIDE(2924.657f, 1363.327f, 44.0731f, 2f, joaat("P_WOODBIN01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2956.706f, 1338.258f, 43.8246f, 2f, joaat("P_CRATE08X"), true);
	ENTITY::CREATE_MODEL_HIDE(2958.903f, 1337.226f, 44.596f, 2f, joaat("P_CS_NEWSPAPER_03X"), true);
	ENTITY::CREATE_MODEL_HIDE(2926.439f, 1356.26f, 44.3683f, 2f, joaat("P_PALLET01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2873.016f, 1377.01f, 64.4452f, 2f, joaat("P_SAWHORSE02X"), true);
	ENTITY::CREATE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 2f, joaat("P_BENCH09X"), true);
	ENTITY::CREATE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_CRATE03X"), true);
	ENTITY::CREATE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_BOTTLEBEER01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_BOTTLEWINE03X"), true);
	ENTITY::CREATE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_JUGWICKER01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_DEBRISPILE02X"), true);
	ENTITY::CREATE_MODEL_HIDE(2913.864f, 1324.895f, 44.0719f, 3f, joaat("P_CUPTIN01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2911.17f, 1324.67f, 44.26f, 1f, joaat("P_BUCKET03X"), true);
	ENTITY::CREATE_MODEL_HIDE(2911.17f, 1324.67f, 44.26f, 1f, joaat("P_CS_BUCKET01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2916.18f, 1366.49f, 45.16f, 3f, joaat("P_CRATE06X"), true);
	ENTITY::CREATE_MODEL_HIDE(2916.18f, 1366.49f, 45.16f, 3f, joaat("P_CRATE02X"), true);
	ENTITY::CREATE_MODEL_HIDE(2916.18f, 1366.49f, 45.16f, 3f, joaat("P_FLOURSACK05X"), true);
	ENTITY::CREATE_MODEL_HIDE(2919.51f, 1330.92f, 44.17f, 1f, joaat("P_FLOURSACK05X"), true);
	ENTITY::CREATE_MODEL_HIDE(2989.88f, 1346.78f, 44.13f, 3f, joaat("P_CRATE14X"), true);
	ENTITY::CREATE_MODEL_HIDE(2986.57f, 1339.53f, 44.17f, 3f, joaat("P_CRATE14X"), true);
	ENTITY::CREATE_MODEL_HIDE(2986.57f, 1339.53f, 44.17f, 3f, joaat("P_CRATE08X"), true);
	ENTITY::CREATE_MODEL_HIDE(2964.506f, 1396.133f, 42.9784f, 2f, joaat("P_BAT_CRATESTACK01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2857.5f, 1412.2f, 68.8f, 2f, joaat("P_CRATESTACK01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2857.5f, 1412.2f, 68.8f, 3f, joaat("P_WHEELBARREL01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2857.5f, 1412.2f, 68.8f, 3f, joaat("P_CRATE06X"), true);
	TASK::ADD_COVER_BLOCKING_AREA(2859.06f, 1409.87f, 67.82f, 2855.75f, 1415.46f, 70.71f, true, false, true, true);
	ENTITY::CREATE_MODEL_HIDE(2924.5f, 1379.2f, 55.8f, 2f, joaat("P_SETTEE02BX"), true);
	ENTITY::CREATE_MODEL_HIDE(2877.57f, 1409.747f, 66.9156f, 2f, joaat("P_TABLE31X"), true);
	ENTITY::CREATE_MODEL_HIDE(2877.57f, 1409.747f, 66.9156f, 2f, joaat("P_CUPTIN01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2877.57f, 1409.747f, 66.9156f, 4f, joaat("P_CHAIR24X"), true);
	ENTITY::CREATE_MODEL_HIDE(2877.57f, 1409.747f, 66.9156f, 3f, joaat("P_TARP04X"), true);
	ENTITY::CREATE_MODEL_HIDE(2947.448f, 1381.819f, 55.2543f, 1f, joaat("P_BARREL05B"), true);
	ENTITY::CREATE_MODEL_HIDE(2956.32f, 1372.58f, 55.86f, 1f, joaat("P_COALBIN01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CRATECOVER07X"), true);
	ENTITY::CREATE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CRATECOVER01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_CART01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_LUMBER07X"), true);
	ENTITY::CREATE_MODEL_HIDE(2944.47f, 1365.56f, 44.77f, 3f, joaat("P_LUMBER07X"), true);
	ENTITY::CREATE_MODEL_HIDE(2951.71f, 1383.2f, 43.39f, 2f, joaat("S_WAGONTOUNG01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2951.71f, 1383.2f, 43.39f, 3f, joaat("P_CHUCKWAGON01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2923.71f, 1337.05f, 43.8f, 2f, joaat("P_CRATE012X"), true);
}

int func_885()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[0]))
	{
		iLocal_3486[0] = __LIB_8__::func_772(joaat("TEETER"), 2893.369f, 1368.488f, 59.8504f, 321.4693f, 4.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[1]))
	{
		iLocal_3486[1] = __LIB_8__::func_772(joaat("ROLL_DOWN_STAIRS"), 2889.685f, 1378.291f, 61.7359f, 311.7945f, 3.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[2]))
	{
		iLocal_3486[2] = __LIB_8__::func_772(joaat("ROLL_DOWN_STAIRS"), 2896.544f, 1395.517f, 63.2318f, 262.8421f, 2.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[3]))
	{
		iLocal_3486[3] = __LIB_8__::func_772(joaat("TEETER"), 2990.058f, 1403.316f, 48f, 86f, 4.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[4]))
	{
		iLocal_3486[4] = __LIB_8__::func_772(joaat("TEETER"), 2997.593f, 1352.358f, 42.9146f, 347.8342f, 4.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[5]))
	{
		iLocal_3486[5] = __LIB_8__::func_772(joaat("TEETER"), 2952.5f, 1371.138f, 50.3225f, 324.3242f, 2.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[6]))
	{
		iLocal_3486[6] = __LIB_8__::func_772(joaat("FALL_OVER_WALL"), 2936.08f, 1381.32f, 57.83f, 254.8875f, 1.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[7]))
	{
		iLocal_3486[7] = __LIB_8__::func_772(joaat("ROLL_DOWN_STAIRS"), 2917.79f, 1392.21f, 57.5f, 254.8875f, 2f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[8]))
	{
		iLocal_3486[8] = __LIB_8__::func_772(joaat("KNOCK_BACK"), 2922.34f, 1380.96f, 55.29f, 169.7836f, 1.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[9]))
	{
		iLocal_3486[9] = __LIB_8__::func_772(joaat("LEAN_TO_POSITION"), 2882.46f, 1400.74f, 66.57f, 254.8875f, 3.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[10]))
	{
		iLocal_3486[10] = __LIB_8__::func_772(joaat("ROLL_DOWN_STAIRS"), 2881.9f, 1404.66f, 67.47f, 254.8875f, 1.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[11]))
	{
		iLocal_3486[11] = __LIB_8__::func_772(joaat("TEETER"), 2951.03f, 1381.03f, 50.32f, 297.7289f, 1.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[12]))
	{
		iLocal_3486[12] = __LIB_8__::func_772(joaat("TEETER"), 2982.91f, 1390.55f, 43.54f, 172.6221f, 1.5f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3486[13]))
	{
		iLocal_3486[13] = __LIB_8__::func_772(joaat("TEETER"), 3027.02f, 1338.61f, 42.3f, 251.2596f, 2.5f, 0, 0);
	}
	return 1;
}

void func_886(bool bParam0, bool bParam1)
{
	POPULATION::_0x74C2B3DC0B294102(iLocal_3430[0]);
	POPULATION::_0xA1CFB35069D23C23(iLocal_3430[0]);
	if (bParam1)
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_3430[0], 10208, 0, 0, -1, -1, 2);
		POPULATION::_0xB56D41A694E42E86(iLocal_3430[0], 10208, 0, 0, -1, -1, 2);
		if (bParam0)
		{
			POPULATION::_0x2161278C6322F740(10208, 0, 0, -1, -1, 0);
		}
		PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(904));
	}
	else
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_3430[0], 591840, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_3430[0], 591840, 0, 0, -1, -1, 2);
		if (bParam0)
		{
			POPULATION::_0x2161278C6322F740(2016, 0, 0, -1, -1, 0);
			POPULATION::_0x2161278C6322F740(65536, 0, 0, -1, -1, 0);
			POPULATION::_0x2161278C6322F740(524288, 0, 0, -1, -1, 0);
		}
	}
}

void func_890(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_16 || iVar0 == iLocal_17)
	{
		func_1461(uParam0);
	}
	func_1462(iVar0);
	PED::SET_CREATE_RANDOM_COPS(false);
	__LIB_1__::func_538(0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CUT_FREE"), false);
}

bool func_907(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_4__::func_937(uParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_5__::func_481(uParam0, iParam1, 4))
	{
		if (__LIB_4__::func_939(uParam0) != 25 && __LIB_4__::func_939(uParam0) != 26)
		{
			if (!__LIB_4__::func_937(uParam0, 512) && !__LIB_4__::func_948(uParam0, 4))
			{
				__LIB_5__::func_599(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1473(uParam0);
		if (__LIB_5__::func_261(uParam0))
		{
			__LIB_5__::func_465(uParam0);
		}
		if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33554432) && __LIB_4__::func_937(uParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_4__::func_969(uParam0, 524288);
		__LIB_4__::func_977(&(uParam0->f_7375), 4);
		if (__LIB_5__::func_576(uParam0))
		{
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_909(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (func_853(uParam0))
		{
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_4__::func_958(uParam0, 16384);
			__LIB_4__::func_945(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_4__::func_937(uParam0, 4))
	{
		__LIB_0__::func_16(uParam0, iParam1);
		__LIB_4__::func_944(uParam0, 4);
	}
	Var0 = { __LIB_5__::func_299(uParam0, iParam1) };
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		if (__LIB_4__::func_937(uParam0, 2097152))
		{
			if (func_853(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_855(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_855(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (func_853(uParam0))
		{
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_5__::func_56(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		return func_855(uParam0, Var0);
	}
	return true;
}

void func_918(var uParam0, int iParam1)
{
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		__LIB_5__::func_286(uParam0, iParam1, 2);
		__LIB_4__::func_952(uParam0, 0);
		__LIB_5__::func_372(uParam0, 0);
		__LIB_4__::func_944(uParam0, 8);
		__LIB_4__::func_969(uParam0, -2147483648);
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 67108864);
		__LIB_4__::func_969(uParam0, 4);
		__LIB_4__::func_969(uParam0, 8192);
		__LIB_4__::func_969(uParam0, 536870912);
		__LIB_4__::func_958(uParam0, 4);
		__LIB_0__::func_869(0);
		__LIB_0__::func_868(0);
		__LIB_4__::func_969(uParam0, 2);
		__LIB_0__::func_769();
		uParam0->f_5302 = 0;
		func_1488(uParam0);
		if ((__LIB_5__::func_475(uParam0) == 25 || __LIB_5__::func_475(uParam0) == 26) && __LIB_0__::func_13(32768))
		{
			__LIB_5__::func_33(uParam0, 524288);
		}
		if (__LIB_0__::func_2() == 0)
		{
			if (PED::_0xB655DB7582AEC805(Global_35))
			{
				__LIB_1__::func_965(0);
				PED::_0xF6262491C7704A63(Global_35, 0);
			}
			else if (Global_1935630.f_12)
			{
				func_1489(1, 1);
			}
		}
	}
}

Vector3 func_963(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2988.026f, 1345.786f, 43.0157f;
				case 1:
					return 2984.921f, 1336.442f, 42.9978f;
				case 2:
					return 2985.02f, 1336.529f, 43.0289f;
				case 3:
					return 2985.157f, 1336.643f, 43.0409f;
				case 4:
					return 2985.129f, 1336.915f, 43.0493f;
				case 5:
					return 3005.178f, 1347.578f, 42.228f;
				case 6:
					return 3002.197f, 1350.875f, 42.5426f;
				case 7:
					return 2989.554f, 1347.01f, 43.0273f;
				case 8:
					return 2988.219f, 1342.594f, 43.0577f;
				case 9:
					return 2985.599f, 1338.941f, 43.0493f;
				case 10:
					return 3017.633f, 1337.46f, 41.9044f;
				case 11:
					return 3025.593f, 1339.166f, 42.348f;
				case 12:
					return 3014.383f, 1334.723f, 41.858f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2957.922f, 1376.927f, 50.5129f;
				case 1:
					return 2957.592f, 1376.112f, 50.5132f;
				case 2:
					return 2951.367f, 1383.091f, 42.9395f;
				case 3:
					return 2954.19f, 1384.664f, 42.8207f;
				case 4:
					return 2936.7f, 1384.843f, 43.4395f;
				case 5:
					return 2950.031f, 1379.665f, 43.1505f;
				case 6:
					return 2934.718f, 1379.641f, 50.4101f;
				case 7:
					return 2936.077f, 1385.011f, 50.4411f;
				case 8:
					return 2961.265f, 1376.331f, 50.4384f;
				case 9:
					return 2943.333f, 1376.679f, 43.1869f;
				case 10:
					return 2938.394f, 1355.302f, 42.9849f;
				case 11:
					return 2933.579f, 1337.631f, 43.035f;
				case 12:
					return 2943.111f, 1327.273f, 42.9453f;
				case 13:
					return 2943.798f, 1326.978f, 42.9732f;
				case 14:
					return 2923.996f, 1351.63f, 43.7921f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2960.699f, 1385.27f, 47.7641f;
				case 1:
					return 2958.997f, 1380.604f, 50.1644f;
				case 2:
					return 2965.575f, 1403.672f, 43.0023f;
				case 3:
					return 2967.249f, 1397.957f, 43.1642f;
				case 4:
					return 2952.04f, 1395.45f, 42.6537f;
				case 5:
					return 2952.8f, 1386.996f, 42.8979f;
				case 6:
					return 2949.302f, 1380.333f, 50.3851f;
				case 7:
					return 2960.138f, 1385.119f, 47.9415f;
				case 8:
					return 2951.15f, 1380.101f, 50.3978f;
				case 9:
					return 2937.771f, 1378.958f, 43.3776f;
				case 10:
					return 2961.503f, 1379.384f, 50.3215f;
				case 11:
					return 2958.684f, 1386.209f, 42.9421f;
				case 12:
					return 2941.318f, 1370.946f, 42.973f;
				case 13:
					return 2942.467f, 1364.71f, 42.9319f;
				case 14:
					return 2934.395f, 1364.476f, 42.8437f;
				case 15:
					return 2927.164f, 1342.42f, 42.976f;
				case 16:
					return 2932.195f, 1341.989f, 43.136f;
				case 17:
					return 2927.164f, 1342.42f, 42.976f;
				case 18:
					return 2927.451f, 1351.567f, 43.3405f;
				case 19:
					return 2966.047f, 1398.766f, 42.9278f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2908.613f, 1351.498f, 50.7112f;
				case 1:
					return 2906.444f, 1356.627f, 50.6965f;
				case 2:
					return 2900.098f, 1377.736f, 53.4709f;
				case 3:
					return 2912.735f, 1362.39f, 50.7138f;
				case 4:
					return 2912.277f, 1363.983f, 47.4938f;
				case 5:
					return 2907.634f, 1365.906f, 50.4904f;
				case 6:
					return 2876.77f, 1384.737f, 76.2055f;
				case 7:
					return 2882.943f, 1375.651f, 61.8396f;
				case 8:
					return 2882.891f, 1377.325f, 62.0743f;
				case 9:
					return 2883.592f, 1379.411f, 62.3951f;
				case 10:
					return 2880.415f, 1383.817f, 76.2055f;
				case 11:
					return 2900.061f, 1378.198f, 53.4709f;
				case 12:
					return 2896.998f, 1379.346f, 55.8686f;
				case 13:
					return 2895.423f, 1379.418f, 57.2644f;
				case 14:
					return 2901.355f, 1358.057f, 50.6954f;
				case 15:
					return 2912.332f, 1362.197f, 50.6956f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2907.676f, 1340.893f, 47.0948f;
				case 1:
					return 2902.736f, 1327.882f, 47.0871f;
				case 2:
					return 2910.661f, 1352.304f, 50.6982f;
				case 3:
					return 2913.229f, 1347.117f, 47.0724f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2853.909f, 1372.462f, 64.4644f;
				case 1:
					return 2853.546f, 1378.881f, 65.1134f;
				case 2:
					return 2863.555f, 1371.641f, 64.2049f;
				case 3:
					return 2864.644f, 1378.094f, 64.8189f;
				case 4:
					return 2866.39f, 1374.502f, 64.2979f;
				case 5:
					return 2874.126f, 1368.567f, 61.7437f;
				case 6:
					return 2867.235f, 1371.349f, 63.0584f;
				case 7:
					return 2873.042f, 1371.063f, 62.1095f;
				case 8:
					return 2867.026f, 1369.692f, 62.5075f;
				case 9:
					return 2867.077f, 1367.821f, 62.1587f;
				case 10:
					return 2853.913f, 1401.114f, 67.7276f;
				case 11:
					return 2861.202f, 1403.454f, 67.426f;
				case 12:
					return 2855.594f, 1402.992f, 67.6899f;
				case 13:
					return 2864.228f, 1411.116f, 66.9755f;
				case 14:
					return 2855.758f, 1389.516f, 66.7586f;
				case 15:
					return 2857.948f, 1388.55f, 66.5121f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2785.207f, 1399.529f, 83.5159f;
				case 1:
					return 2782.378f, 1400.613f, 83.697f;
				case 2:
					return 2715.096f, 1498.817f, 109.6764f;
				case 3:
					return 2713.053f, 1481.784f, 108.4345f;
				case 4:
					return 2791.925f, 1414.556f, 81.2739f;
				case 5:
					return 2790.559f, 1422.399f, 80.0159f;
				case 6:
					return 2726.993f, 1496.251f, 110.5346f;
				case 7:
					return 2731.363f, 1485.006f, 105.7474f;
				case 8:
					return 2586.592f, 1398.196f, 86.952f;
				case 9:
					return 2584.699f, 1397.318f, 87.0815f;
				case 10:
					return 2580.827f, 1566.968f, 96.413f;
				case 11:
					return 2578.864f, 1569.654f, 96.2744f;
				case 12:
					return 2593.122f, 1637.301f, 99.0259f;
				case 13:
					return 2593.013f, 1643.992f, 99.8947f;
				case 14:
					return 2446.623f, 1612.147f, 87.8886f;
				case 15:
					return 2292.184f, 1585.556f, 89.9585f;
				case 16:
					return 2409.462f, 1531.353f, 89.7085f;
				case 17:
					return 2333.322f, 1594.599f, 84.5914f;
				case 18:
					return 2303.002f, 1611.479f, 84.6617f;
				case 19:
					return 2512.618f, 1503.771f, 85.12f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 3429.554f, 1674.338f, 4.7814f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2913.442f, 1392.176f, 55.3f;
				case 1:
					return 2949.724f, 1381.315f, 55.3128f;
				case 2:
					return 2944.964f, 1383.071f, 55.3816f;
				case 3:
					return 2910.803f, 1387.913f, 55.3f;
				case 4:
					return 2912.288f, 1389.746f, 55.3988f;
				case 5:
					return 2933.558f, 1379.758f, 56.9859f;
				case 6:
					return 2934.725f, 1383.297f, 56.9766f;
				case 7:
					return 2924.526f, 1379.087f, 55.3189f;
				case 8:
					return 3025.918f, 1338.036f, 42.3482f;
				case 9:
					return 2889.5f, 1394.319f, 64.1412f;
				case 10:
					return 3016.383f, 1347.42f, 41.695f;
				case 11:
					return 2891.392f, 1399.166f, 63.9421f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2966.185f, 1403.237f, 42.85f;
				case 1:
					return 2942.27f, 1382.396f, 55.2227f;
				case 2:
					return 2944.509f, 1374.416f, 55.2209f;
				case 3:
					return 2876.395f, 1403.514f, 67.75f;
				case 4:
					return 2968.546f, 1397.097f, 42.82f;
				case 5:
					return 2861.393f, 1409.671f, 67.2f;
				case 6:
					return 2859.594f, 1401.469f, 67.436f;
				case 7:
					return 2998.174f, 1349.995f, 42.65f;
				case 8:
					return 2891.154f, 1399.514f, 63.9f;
				case 9:
					return 3010.575f, 1347.936f, 41.6901f;
				case 10:
					return 3005.761f, 1347.366f, 42.08f;
				case 11:
					return 2974.122f, 1395.323f, 43.203f;
				case 12:
					return 3018.19f, 1338.154f, 41.5994f;
				case 13:
					return 3014.925f, 1336.101f, 41.5994f;
				case 14:
					return 2874.214f, 1403.28f, 67.75f;
				case 15:
					return 2947.652f, 1381.907f, 55.35f;
				case 16:
					return 2889.8f, 1394.993f, 63.836f;
				case 17:
					return 2974.851f, 1400.32f, 43.21f;
				case 18:
					return 2952.236f, 1371.605f, 55.2f;
				case 19:
					return 2952.816f, 1372.591f, 50.23f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2920.06f, 1327.027f, 43.2599f;
				case 1:
					return 2958.83f, 1373.39f, 50.2629f;
				case 2:
					return 2955.11f, 1371.484f, 50.7387f;
				case 3:
					return 2885.761f, 1376.675f, 61.8294f;
				case 4:
					return 2847.193f, 1437.626f, 67.2063f;
				case 5:
					return 2217.318f, 1471.061f, 88.9915f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 2919.497f, 1328.296f, 43.4247f;
				case 1:
					return 3017.68f, 1348.092f, 41.6261f;
				case 2:
					return 2954.878f, 1373.125f, 50.4863f;
				case 3:
					return 2885.175f, 1378.151f, 62.1808f;
				case 4:
					return 2844.829f, 1436.178f, 67.7298f;
				case 5:
					return 2222.395f, 1472.044f, 89.2106f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 2917.521f, 1323.679f, 43.3928f;
				case 1:
					return 3016.324f, 1347.61f, 41.703f;
				case 2:
					return 2956.626f, 1376.406f, 50.4688f;
				case 3:
					return 2887.947f, 1377.055f, 61.5006f;
				case 4:
					return 2854.672f, 1421.902f, 67.8176f;
				case 5:
					return 2218.348f, 1476.767f, 89.3106f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2959.834f, 1388.749f, 48.264f;
				case 1:
					return 2901.728f, 1377.378f, 53.4725f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 2946.443f, 1345.4f, 43.8395f;
				case 1:
					return 2943.984f, 1339.679f, 43.0672f;
				case 2:
					return 2943.597f, 1338.609f, 43.0636f;
				case 3:
					return 2963.365f, 1339.19f, 43.7988f;
				case 4:
					return 2964.934f, 1341.525f, 43.7652f;
				case 5:
					return 2961.523f, 1336.239f, 43.783f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 2958.997f, 1380.604f, 50.1644f;
				case 1:
					return 2893.532f, 1379.754f, 58.8669f;
				case 2:
					return 2895.479f, 1379.554f, 57.2643f;
				case 3:
					return 2896.963f, 1379.276f, 55.8684f;
				case 4:
					return 2880.415f, 1383.817f, 76.2055f;
				case 5:
					return 2913.191f, 1362.277f, 50.7195f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_964(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 341.602f;
				case 1:
					return -14.398f;
				case 2:
					return -14.398f;
				case 3:
					return 347.602f;
				case 4:
					return -20.398f;
				case 5:
					return 249.1046f;
				case 6:
					return 249.1046f;
				case 7:
					return 277.1046f;
				case 8:
					return 293.1046f;
				case 9:
					return -84.398f;
				case 10:
					return 67.7778f;
				case 11:
					return 37.7778f;
				case 12:
					return 246.24f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -22.398f;
				case 1:
					return -30.9105f;
				case 2:
					return 342.4521f;
				case 3:
					return -14.398f;
				case 4:
					return 226.4521f;
				case 5:
					return 67.602f;
				case 6:
					return -91.5479f;
				case 7:
					return 252.4521f;
				case 8:
					return 429.6171f;
				case 9:
					return 346.2062f;
				case 10:
					return 430.7579f;
				case 11:
					return 61.5f;
				case 12:
					return 69.6171f;
				case 13:
					return 67.6171f;
				case 14:
					return 257.6171f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -20.398f;
				case 1:
					return 338.4521f;
				case 2:
					return 234.4521f;
				case 3:
					return -102.398f;
				case 4:
					return -28.398f;
				case 5:
					return 326.4521f;
				case 6:
					return 316.4521f;
				case 7:
					return 364.4521f;
				case 8:
					return -29.5479f;
				case 9:
					return -43.5479f;
				case 10:
					return 361.6171f;
				case 11:
					return -5.7938f;
				case 12:
					return -9.7938f;
				case 13:
					return 356.7579f;
				case 14:
					return 334.7579f;
				case 15:
					return -31.7938f;
				case 16:
					return 339.6171f;
				case 17:
					return -31.794f;
				case 18:
					return 335.6171f;
				case 19:
					return 249.5352f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 341.0895f;
				case 1:
					return -146.88f;
				case 2:
					return -108.398f;
				case 3:
					return 255.0895f;
				case 4:
					return 249.602f;
				case 5:
					return 249.0895f;
				case 6:
					return 251.1767f;
				case 7:
					return 285.1768f;
				case 8:
					return 271.1768f;
				case 9:
					return 257.1768f;
				case 10:
					return 251.1767f;
				case 11:
					return 253.1768f;
				case 12:
					return 251.1768f;
				case 13:
					return 249.1768f;
				case 14:
					return 22.2072f;
				case 15:
					return -23.7928f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 252.9072f;
				case 1:
					return 220.9072f;
				case 2:
					return -21.0928f;
				case 3:
					return -69.0928f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 242.2254f;
				case 1:
					return -15.7746f;
				case 2:
					return 288.2254f;
				case 3:
					return -121.7746f;
				case 4:
					return -85.4125f;
				case 5:
					return -7.4125f;
				case 6:
					return -77.4125f;
				case 7:
					return -47.4125f;
				case 8:
					return -1.4125f;
				case 9:
					return -1.4125f;
				case 10:
					return 0.5875f;
				case 11:
					return 10.5875f;
				case 12:
					return -1.4125f;
				case 13:
					return 28.5875f;
				case 14:
					return -5.4125f;
				case 15:
					return 2.5875f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -32.1124f;
				case 1:
					return 335.8876f;
				case 2:
					return 229.9784f;
				case 3:
					return 235.9784f;
				case 4:
					return 351.8876f;
				case 5:
					return -10.1124f;
				case 6:
					return 231.9784f;
				case 7:
					return 277.9784f;
				case 8:
					return -317.7119f;
				case 9:
					return -317.5477f;
				case 10:
					return -59.5477f;
				case 11:
					return -69.5477f;
				case 12:
					return 163.4582f;
				case 13:
					return 533.4582f;
				case 14:
					return 147.4582f;
				case 15:
					return -25.4734f;
				case 16:
					return 36.5266f;
				case 17:
					return 58.5395f;
				case 18:
					return 307.6115f;
				case 19:
					return 37.4518f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 58f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 494.475f;
				case 1:
					return 85.1767f;
				case 2:
					return 233.6936f;
				case 3:
					return -91.8248f;
				case 4:
					return -628.683f;
				case 5:
					return 73.1176f;
				case 6:
					return 431.9635f;
				case 7:
					return -385.3189f;
				case 8:
					return 38.8265f;
				case 9:
					return 50.358f;
				case 10:
					return -130.68f;
				case 11:
					return 71.0769f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145.317f;
				case 1:
					return -110.6829f;
				case 2:
					return -298.6829f;
				case 3:
					return -290.6829f;
				case 4:
					return 138.5875f;
				case 5:
					return 250f;
				case 6:
					return 267.493f;
				case 7:
					return 79.15f;
				case 8:
					return -314.3829f;
				case 9:
					return 252.1415f;
				case 10:
					return 250.1415f;
				case 11:
					return 58.5667f;
				case 12:
					return -24.48f;
				case 13:
					return -23.7547f;
				case 14:
					return 51.617f;
				case 15:
					return 246.4521f;
				case 16:
					return 61.0881f;
				case 17:
					return 47.0328f;
				case 18:
					return 72.5107f;
				case 19:
					return 156.3171f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -23.18f;
				case 1:
					return -19.241f;
				case 2:
					return 103.0213f;
				case 3:
					return 86.1425f;
				case 4:
					return 53.5317f;
				case 5:
					return -18.4602f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 342.2968f;
				case 1:
					return 157.5f;
				case 2:
					return 246.3718f;
				case 3:
					return 79.3841f;
				case 4:
					return 57.0627f;
				case 5:
					return 60.66f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -25.23f;
				case 1:
					return 216.6811f;
				case 2:
					return -175.7916f;
				case 3:
					return 89.7175f;
				case 4:
					return 47.4957f;
				case 5:
					return 200.16f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 340.4531f;
				case 1:
					return 250.4531f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -171.744f;
				case 1:
					return -15.744f;
				case 2:
					return -21.744f;
				case 3:
					return -103.744f;
				case 4:
					return 260.256f;
				case 5:
					return 258.256f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 338.4521f;
				case 1:
					return 265.6238f;
				case 2:
					return 249.1768f;
				case 3:
					return 251.1768f;
				case 4:
					return 251.1767f;
				case 5:
					return 251.343f;
			}
			break;
	}
	return 0f;
}

void func_1125(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_317(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1643(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_320(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_661(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1648(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_1128(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_317(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_661(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_661(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_661(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_1173(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1173(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1173(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

int func_1187()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1680(8);
		}
	}
	return 0;
}

bool func_1188(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1681(iParam0));
}

void func_1199(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		uParam0->f_1[iVar0 /*22*/][iVar1] = 58334;
		MISC::CLEAR_BIT(&(uParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

void func_1201(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_849(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1202(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_16)
	{
		func_1699(&iLocal_3408, iLocal_27, 3217.716f, 1198.465f, 39.56f, 40.06f, 0, 1);
	}
	else if (iVar0 == iLocal_17)
	{
		func_1699(&iLocal_3408, iLocal_27, 3023.22f, 1337.05f, 39.55f, 335.2449f, 0, 1);
	}
	else if (iVar0 == iLocal_18)
	{
		if (!func_1699(&iLocal_3408, iLocal_27, 3023.22f, 1337.05f, 39.55f, 335.2449f, 0, 1))
		{
			return false;
		}
		if (!func_1700())
		{
			return false;
		}
		if (!func_1701(&(uLocal_3409[3]), iLocal_29, 2859.11f, 1420.66f, 68.54f, 46.78f, 1, 0))
		{
			return false;
		}
		if (!func_1702(uLocal_3409[3], 1))
		{
			return false;
		}
	}
	else if (iVar0 == iLocal_19)
	{
		if (!func_1701(&(uLocal_3409[3]), iLocal_29, 2859.11f, 1420.66f, 68.54f, 46.78f, 1, 0))
		{
			return false;
		}
		if (!func_1702(uLocal_3409[3], 0))
		{
			return false;
		}
	}
	return true;
}

void func_1204()
{
	var uVar0;
	int iVar2;
	uVar0 = 1;
	if (func_1703(&uLocal_3414, &uVar0, iLocal_3480[2], 10) > 0)
	{
		iVar2 = 0;
		while (iVar2 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3414[iVar2]))
			{
				switch (iVar2)
				{
					case 0:
						func_849(uLocal_3414[iVar2], 2910.559f, 1297.226f, 43.6409f, 342.3275f, 2, 1073741824 /* Float: 2f */);
						break;
					case 1:
						func_849(uLocal_3414[iVar2], 2899.899f, 1269.316f, 43.7523f, 147.9383f, 2, 1073741824 /* Float: 2f */);
						break;
					case 2:
						func_849(uLocal_3414[iVar2], 2911.884f, 1248.857f, 43.7445f, 228.6062f, 2, 1073741824 /* Float: 2f */);
						break;
					case 3:
						func_849(uLocal_3414[iVar2], 2907.171f, 1243.257f, 43.888f, 139.6578f, 2, 1073741824 /* Float: 2f */);
						break;
					case 4:
						func_849(uLocal_3414[iVar2], 2917.569f, 1232.21f, 43.5158f, 116.3722f, 2, 1073741824 /* Float: 2f */);
						break;
					case 5:
						func_849(uLocal_3414[iVar2], 2928.782f, 1304.311f, 43.4485f, 341.1127f, 2, 1073741824 /* Float: 2f */);
						break;
					case 6:
						func_849(uLocal_3414[iVar2], 2934.02f, 1319.66f, 43.2467f, 353.0378f, 2, 1073741824 /* Float: 2f */);
						break;
					case 7:
						func_849(uLocal_3414[iVar2], 2896.08f, 1232.787f, 43.9504f, 138.0012f, 2, 1073741824 /* Float: 2f */);
						break;
					case 8:
						func_849(uLocal_3414[iVar2], 2890.794f, 1308.41f, 50.626f, 29.7634f, 2, 1073741824 /* Float: 2f */);
						break;
					case 9:
						func_849(uLocal_3414[iVar2], 2884.704f, 1324.417f, 54.0395f, 23.0401f, 2, 1073741824 /* Float: 2f */);
						break;
				}
			}
			iVar2++;
		}
	}
}

int func_1205()
{
	return iLocal_3586;
}

bool func_1206(int iParam0)
{
	return __LIB_0__::func_27(iLocal_3516, iParam0);
}

void func_1207(int iParam0)
{
	if (!func_1206(iParam0))
	{
		__LIB_1__::func_683(&iLocal_3516, iParam0);
	}
}

void func_1208(int iParam0)
{
	iLocal_3586 = iParam0;
}

void func_1209(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
	}
	*uParam0 = iParam1;
}

void func_1214(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (__LIB_0__::func_75(&uLocal_3531) && __LIB_0__::func_264(&uLocal_3531) > 4f)
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_9__::func_344())
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			if (!TASK::IS_PED_STILL(Global_35))
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			if (__LIB_0__::func_75(&uLocal_3531) && __LIB_0__::func_264(&uLocal_3531) > 7f)
			{
				if (!__LIB_5__::func_463() && __LIB_11__::func_365(uParam0, "TRN1_DOCKS", 0, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_3531);
					__LIB_11__::func_365(uParam0, "TRN1_OBJ01", 4, 0, 0);
				}
			}
			break;
		case 3:
			__LIB_1__::func_148(&uLocal_3531);
			__LIB_5__::func_372(uParam0, 4);
			break;
		case 4:
			if ((((CLOCK::GET_CLOCK_HOURS() >= 6 && CLOCK::GET_CLOCK_HOURS() < 20) && !__LIB_5__::func_463()) && __LIB_5__::func_314(uParam0, "TRN1_OBJ1", 0)) || (((CLOCK::GET_CLOCK_HOURS() < 6 || CLOCK::GET_CLOCK_HOURS() >= 20) && !__LIB_5__::func_463()) && __LIB_5__::func_314(uParam0, "TRN1_OBJ1_NGHT", 0)))
			{
				__LIB_1__::func_148(&uLocal_3528);
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 5);
			}
			break;
		case 5:
			if ((((CLOCK::GET_CLOCK_HOURS() >= 6 && CLOCK::GET_CLOCK_HOURS() < 20) && !__LIB_5__::func_463()) && __LIB_5__::func_314(uParam0, "TRN1_OBJ1b", 0)) || (((CLOCK::GET_CLOCK_HOURS() < 6 || CLOCK::GET_CLOCK_HOURS() >= 20) && !__LIB_5__::func_463()) && __LIB_5__::func_314(uParam0, "TRN1_OBJ1b_NGHT", 0)))
			{
				__LIB_1__::func_148(&uLocal_3528);
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_486(uParam0, "TRN1_OBJ01b", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_5__::func_590(uParam0, "TRN1_OBJ01b", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_5__::func_372(uParam0, 6);
			}
			break;
		case 6:
			if (!__LIB_5__::func_463())
			{
				__LIB_1__::func_148(&uLocal_3528);
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 7);
			}
			break;
		case 7:
			if (!__LIB_9__::func_344())
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			if (__LIB_8__::func_864(Global_35, 3017.595f, 1349.528f, 42.7192f, 5f, 1, 1))
			{
				if ((__LIB_0__::func_75(&uLocal_3531) && __LIB_0__::func_264(&uLocal_3531) > 5f) && !PED::IS_PED_IN_COVER(Global_35, false, false))
				{
					if (!__LIB_5__::func_463() && __LIB_11__::func_365(uParam0, "TRN1_NOCOVER", 0, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_3528);
						__LIB_1__::func_148(&uLocal_3531);
						__LIB_11__::func_365(uParam0, "TRN1_OBJ01b", 4, 0, 0);
					}
				}
			}
			else if (!__LIB_5__::func_463() && __LIB_11__::func_365(uParam0, "TRN1_LEAVECOVER", 0, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_3528);
				__LIB_5__::func_590(uParam0, "TRN1_OBJ01b", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 8);
			}
			break;
		case 8:
			if (!__LIB_9__::func_344())
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			if (__LIB_8__::func_864(Global_35, 3017.595f, 1349.528f, 42.7192f, 4f, 1, 1))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 7);
			}
			else if (__LIB_0__::func_75(&uLocal_3531) && __LIB_0__::func_264(&uLocal_3531) > 5f)
			{
				if (!__LIB_5__::func_463() && __LIB_11__::func_365(uParam0, "TRN1_LEAVECOVER", 0, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_3528);
					__LIB_1__::func_148(&uLocal_3531);
					__LIB_11__::func_365(uParam0, "TRN1_OBJ01b", 4, 0, 0);
				}
			}
			break;
	}
}

void func_1215(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_4__::func_971(uParam0);
	if (__LIB_0__::func_272(Local_3366, 0))
	{
		switch (Local_3366.f_12)
		{
			case 0:
				if (iVar1 >= 0)
				{
					__LIB_1__::func_473(Local_3366, -1774425579, 0, 0, 0, -1082130432 /* Float: -1f */);
					__LIB_0__::func_19(&(Local_3366.f_12), 2);
				}
				break;
		}
	}
	if (__LIB_0__::func_272(Local_2571[3 /*33*/], 0))
	{
		switch (Local_2571[3 /*33*/].f_12)
		{
			case 0:
				if (iVar1 >= 0)
				{
					__LIB_0__::func_19(&(Local_2571[3 /*33*/].f_12), 2);
				}
				break;
			case 2:
				if (__LIB_0__::func_665(Global_35, Local_2571[3 /*33*/], 1, 1) < 25f)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_2571[3 /*33*/], Global_35, -1, false, 4);
					__LIB_1__::func_148(&uLocal_3525);
					__LIB_0__::func_19(&(Local_2571[3 /*33*/].f_12), 12);
				}
				break;
			case 12:
				if (__LIB_0__::func_75(&uLocal_3525) && __LIB_0__::func_265(&uLocal_3525) > 0.25f)
				{
					__LIB_1__::func_265(Local_2571[3 /*33*/], "DISCOVERED_FAR", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 0, 1);
					__LIB_0__::func_19(&(Local_2571[3 /*33*/].f_12), 14);
				}
				break;
			case 14:
				if (__LIB_0__::func_75(&uLocal_3525) && __LIB_0__::func_265(&uLocal_3525) > 3.5f)
				{
					__LIB_5__::func_505(uParam0, "TRN1_FAIL_DISCOVERED", "", 1, 0);
				}
				break;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = iVar0;
		if (__LIB_0__::func_272(Local_2571[iVar2 /*33*/], 0))
		{
			switch (Local_2571[iVar2 /*33*/].f_12)
			{
				case 0:
					if (iVar1 >= 0)
					{
						__LIB_0__::func_19(&(Local_2571[iVar2 /*33*/].f_12), 3);
					}
					break;
				case 3:
					if (__LIB_0__::func_48(Global_35, Local_2571[iVar2 /*33*/], 5f, 1))
					{
						if (!__LIB_0__::func_75(&(Local_2571[iVar2 /*33*/].f_3)))
						{
							__LIB_1__::func_148(&(Local_2571[iVar2 /*33*/].f_3));
						}
						else if (__LIB_0__::func_265(&(Local_2571[iVar2 /*33*/].f_3)) > 4f)
						{
							if (!func_1222(131072))
							{
								__LIB_1__::func_265(Local_2571[iVar2 /*33*/], "KEEP_GOING", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), 0, 1, 0, 0, 1);
								func_1719(131072);
							}
							__LIB_1__::func_148(&(Local_2571[iVar2 /*33*/].f_3));
							TASK::TASK_LOOK_AT_ENTITY(Local_2571[iVar2 /*33*/], Global_35, 10000, 0, 51, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2571[iVar2 /*33*/], Global_35, 0, -1f, -1f, -1f);
							MAP::_BLIP_REMOVE_MODIFIER(Local_2571[iVar2 /*33*/].f_1, -1034486097);
							MAP::_BLIP_SET_MODIFIER(Local_2571[iVar2 /*33*/].f_1, -128070310);
							__LIB_0__::func_19(&(Local_2571[iVar2 /*33*/].f_12), 22);
						}
					}
					else if (__LIB_0__::func_75(&(Local_2571[iVar2 /*33*/].f_3)))
					{
						if (iVar2 == 0)
						{
							TASK::TASK_WANDER_IN_AREA(Local_2571[iVar2 /*33*/], ENTITY::GET_ENTITY_COORDS(Local_2571[iVar2 /*33*/], true, false), 1.5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
						}
						else if (iVar2 == 1)
						{
							TASK::TASK_ACHIEVE_HEADING(Local_2571[iVar2 /*33*/], 18.2316f, 0);
						}
						else if (iVar2 == 2)
						{
							TASK::TASK_ACHIEVE_HEADING(Local_2571[iVar2 /*33*/], -110f, 0);
						}
						__LIB_0__::func_37(&(Local_2571[iVar2 /*33*/].f_3));
					}
					break;
				case 22:
					if (__LIB_0__::func_48(Global_35, Local_2571[iVar2 /*33*/], 5f, 1))
					{
						if (__LIB_0__::func_265(&(Local_2571[iVar2 /*33*/].f_3)) > 6f)
						{
							if (!func_1222(262144))
							{
								func_1719(262144);
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_2571[iVar2 /*33*/], Global_35, -1, false, 1);
								__LIB_1__::func_265(Local_2571[iVar2 /*33*/], "WHATS_YOUR_PROBLEM", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), 0, 1, 0, 0, 1);
								__LIB_1__::func_148(&(Local_2571[iVar2 /*33*/].f_3));
								__LIB_0__::func_19(&(Local_2571[iVar2 /*33*/].f_12), 23);
							}
							else
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_2571[iVar2 /*33*/], Global_35, -1, false, 1);
								__LIB_0__::func_19(&(Local_2571[iVar2 /*33*/].f_12), -1);
							}
						}
					}
					else
					{
						__LIB_0__::func_19(&(Local_2571[iVar2 /*33*/].f_12), 3);
						MAP::_BLIP_SET_MODIFIER(Local_2571[iVar2 /*33*/].f_1, -1034486097);
					}
					break;
				case 23:
					if (__LIB_0__::func_265(&(Local_2571[iVar2 /*33*/].f_3)) > 2.5f)
					{
						__LIB_5__::func_505(uParam0, "TRN1_FAIL_DISCOVERED", "", 1, 0);
						__LIB_0__::func_19(&(Local_2571[iVar2 /*33*/].f_12), -1);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1216(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	iVar1 = __LIB_4__::func_971(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar2 = iVar0;
		if (__LIB_0__::func_272(Local_155[iVar2 /*182*/], 0))
		{
			switch (Local_155[iVar2 /*182*/].f_169)
			{
				case 0:
					if (iVar2 == 1)
					{
						if (!__LIB_0__::func_163(Local_155[iVar2 /*182*/], 658540077))
						{
							func_1209(&(Local_155[1 /*182*/].f_169), 6, 2);
						}
					}
					else if (iVar2 == 0)
					{
						if (!func_1222(4))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[0 /*182*/], 0))
							{
								func_1209(&(Local_155[0 /*182*/].f_169), 6, 2);
								func_1719(4);
							}
						}
					}
					break;
				case 6:
					if (iVar2 == 1)
					{
						func_1209(&(Local_155[1 /*182*/].f_169), 12, 2);
					}
					if (iVar2 == 0)
					{
						func_1209(&(Local_155[0 /*182*/].f_169), 12, 2);
					}
					break;
				case 12:
					if (iVar1 >= 1)
					{
						func_1208(4);
						func_1209(&(Local_155[iVar2 /*182*/].f_169), 7, 2);
						__LIB_1__::func_148(&(Local_155[iVar2 /*182*/].f_2));
					}
					break;
				case 7:
					if (!AICOVERPOINT::_0x8CBE916CFC64AD5C(Local_155[0 /*182*/]))
					{
						AICOVERPOINT::_0x140B3CB1D424A945(Local_155[0 /*182*/], -1);
					}
					if (!AICOVERPOINT::_0x8CBE916CFC64AD5C(Local_155[1 /*182*/]))
					{
						AICOVERPOINT::_0x140B3CB1D424A945(Local_155[1 /*182*/], -1);
					}
					if (__LIB_1__::func_205(Local_155[iVar2 /*182*/], iLocal_3430[3], 1, 0))
					{
						__LIB_0__::func_202(Local_155[0 /*182*/], 0);
						__LIB_0__::func_202(Local_155[1 /*182*/], 0);
						if (iVar2 == 0)
						{
							vVar3 = { 3017.795f, 1348.156f, 41.5151f };
							iVar6 = 1;
						}
						else if (iVar2 == 1)
						{
							vVar3 = { 3021.021f, 1351.08f, 41.7354f };
							iVar6 = 0;
						}
						if (!__LIB_0__::func_163(Local_155[iVar2 /*182*/], 242628503))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar3, -1, 0, 1f, 1, iVar6, 0, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar2 /*182*/], iLocal_38);
						}
						else
						{
							AICOVERPOINT::_0x1A7A802B2301EDC0(Local_155[0 /*182*/]);
							AICOVERPOINT::_0x1A7A802B2301EDC0(Local_155[1 /*182*/]);
							func_1209(&(Local_155[iVar2 /*182*/].f_169), 13, 2);
						}
					}
					break;
				case 13:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[iVar2 /*182*/], 1.5f);
					PED::SET_PED_RESET_FLAG(Local_155[iVar2 /*182*/], 260, true);
					if (iVar2 == 0)
					{
						if (!PED::IS_PED_IN_COVER(Local_155[iVar2 /*182*/], false, false) && !__LIB_0__::func_138(PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_155[iVar2 /*182*/], false), __LIB_11__::func_358(Global_35, 3017.795f, 1348.156f, 41.5151f, 3020.151f, 1350.151f, 41.7124f)))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_155[iVar2 /*182*/], __LIB_11__::func_358(Global_35, 3017.795f, 1348.156f, 41.5151f, 3020.151f, 1350.151f, 41.7124f), 0.75f, 0, 0, 0);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_155[iVar2 /*182*/], __LIB_11__::func_358(Global_35, 3017.795f, 1348.156f, 41.5151f, 3020.151f, 1350.151f, 41.7124f), -1, 0, 1f, 1, 1, 0, 1, 0, 0);
						}
					}
					else if (!PED::IS_PED_IN_COVER(Local_155[iVar2 /*182*/], false, false) && !__LIB_0__::func_138(PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_155[iVar2 /*182*/], false), __LIB_11__::func_358(Global_35, 3021.021f, 1351.08f, 41.7354f, 3019.785f, 1350.147f, 41.5455f)))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_155[iVar2 /*182*/], __LIB_11__::func_358(Global_35, 3021.021f, 1351.08f, 41.7354f, 3019.785f, 1350.147f, 41.5455f), 0.75f, 0, 0, 0);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_155[iVar2 /*182*/], __LIB_11__::func_358(Global_35, 3021.021f, 1351.08f, 41.7354f, 3019.785f, 1350.147f, 41.5455f), -1, 0, 1f, 1, 0, 0, 1, 0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1217()
{
	int iVar0;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[0 /*182*/], 0))
	{
		iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_155[0 /*182*/]);
		if (__LIB_0__::func_75(&(Local_155[0 /*182*/].f_2)) && __LIB_0__::func_265(&(Local_155[0 /*182*/].f_2)) > 5f)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_126[0]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[0], "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[0], "Dutch", Local_155[0 /*182*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[0], "MICAH", Local_155[1 /*182*/], 0);
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[0], false))
				{
					ANIMSCENE::START_ANIM_SCENE(uLocal_126[0]);
					__LIB_0__::func_37(&(Local_155[0 /*182*/].f_2));
				}
			}
		}
		if (!func_1206(256))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_126[0], "pbl_Convo_P1"))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_126[0], false) && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_126[0]);
					func_1207(256);
				}
				else if (__LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) > 7.5f && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[0]))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(uLocal_126[0], false);
				}
				else if (ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[0]) && __LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) < 6.5f)
				{
					ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(uLocal_126[0]);
				}
			}
		}
		else if (!func_1206(512))
		{
			if (iVar0 > 17)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_126[1]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_126[1], false) && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[1]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_126[1]);
						func_1207(512);
					}
					else if (__LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) > 7.5f && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[1]))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(uLocal_126[1], false);
					}
					else if (ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[1]) && __LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) < 6.5f)
					{
						ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(uLocal_126[1]);
					}
					if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[1], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_126[1], false)) && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[1]))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[1], "ARTHUR", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[1], "Dutch", Local_155[0 /*182*/], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[1], "MICAH", Local_155[1 /*182*/], 0);
						ANIMSCENE::START_ANIM_SCENE(uLocal_126[1]);
					}
				}
			}
		}
		else if (!func_1206(1024))
		{
			if (iVar0 > 30)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_126[2]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_126[2], false) && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[2]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_126[2]);
						func_1207(1024);
					}
					else if (__LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) > 7.5f && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[0]))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(uLocal_126[2], false);
					}
					else if (ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[2]) && __LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) < 6.5f)
					{
						ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(uLocal_126[2]);
					}
					if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[2], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_126[2], false)) && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[2]))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[2], "ARTHUR", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[2], "Dutch", Local_155[0 /*182*/], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[2], "MICAH", Local_155[1 /*182*/], 0);
						ANIMSCENE::START_ANIM_SCENE(uLocal_126[2]);
					}
				}
			}
		}
		else if (!func_1206(2048))
		{
			if (iVar0 > 45)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_126[3]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_126[3], false) && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[3]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_126[3]);
						func_1207(2048);
					}
					else if (__LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) > 7.5f && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[3]))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(uLocal_126[3], false);
					}
					else if (ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[3]) && __LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) < 6.5f)
					{
						ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(uLocal_126[3]);
					}
					if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[3], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_126[3], false)) && !ANIMSCENE::_0x34A0671BE613D3D0(uLocal_126[3]))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[3], "ARTHUR", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[3], "Dutch", Local_155[0 /*182*/], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[3], "MICAH", Local_155[1 /*182*/], 0);
						ANIMSCENE::START_ANIM_SCENE(uLocal_126[3]);
					}
				}
			}
		}
	}
}

void func_1218(var uParam0)
{
	if (__LIB_0__::func_94(iLocal_3408, 3021.71f, 1336.29f, 40.75f, 1) < 10f && __LIB_4__::func_971(uParam0) < 1)
	{
		__LIB_5__::func_505(uParam0, "TRN1_FAIL_DISCOVERED", "", 1, 0);
	}
	if (!__LIB_0__::func_75(&uLocal_3525))
	{
		if (((((PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_SHOOTING(Global_35)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2571[0 /*33*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2571[1 /*33*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2571[2 /*33*/], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2571[3 /*33*/], Global_35, 1, 1))
		{
			__LIB_1__::func_148(&uLocal_3525);
		}
	}
	else if (__LIB_0__::func_265(&uLocal_3525) > 1f)
	{
		__LIB_5__::func_505(uParam0, "TRN1_FAIL_DISCOVERED", "", 1, 0);
	}
}

bool func_1219(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	return func_1255(uParam0, __LIB_0__::func_271(iParam1), "GANG_RET", "GANG_FAIL", sParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

bool func_1222(int iParam0)
{
	return __LIB_0__::func_27(iLocal_3518, iParam0);
}

void func_1229(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1f);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

bool func_1237(var uParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bVar4 = false;
	bVar5 = false;
	iVar6 = __LIB_4__::func_939(uParam0);
	if (iVar6 == iLocal_17)
	{
		if (!__LIB_4__::func_948(uParam0, 4))
		{
			vVar0 = { 2974f, 1307.6f, 44f };
		}
		else
		{
			vVar0 = { 3020.889f, 1341.51f, 37.8004f };
		}
		fVar3 = 63.1345f;
		bVar5 = true;
	}
	else if (iVar6 == iLocal_19 || iVar6 == iLocal_20)
	{
		vVar0 = { 3020.889f, 1341.51f, 37.8004f };
		fVar3 = 324.2112f;
		bVar4 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3366))
	{
		Local_3366 = __LIB_1__::func_545(iLocal_21, vVar0, fVar3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		Local_3366.f_12 = -1;
		Local_3366.f_13 = 0;
		PED::SET_PED_CONFIG_FLAG(Local_3366, 186, false);
		__LIB_8__::func_806(uParam0, Local_3366, "LeviticusCornwall", 0, 0, 1, 0);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_3366) && Local_3366.f_12 == -1)
	{
		if (PED::_0xA0BC8FAED8CFEB3C(Local_3366))
		{
			PED::_SET_PED_BODY_COMPONENT(Local_3366, joaat("META_OUTFIT_DEFAULT"));
			PED::_UPDATE_PED_VARIATION(Local_3366, false, true, true, true, false);
			Local_3366.f_12 = 0;
		}
	}
	else
	{
		if (bVar4)
		{
			__LIB_1__::func_864(Local_3366, 1, 0);
		}
		if (bVar5)
		{
			if (!func_1729(uParam0, 0, 4, 1, bParam1))
			{
				return false;
			}
			else
			{
				__LIB_8__::func_806(uParam0, Local_520[0 /*33*/], "CS_JANSON", 0, 0, 1, 0);
				__LIB_8__::func_806(uParam0, Local_520[1 /*33*/], "MiltonAndrews", 0, 0, 1, 0);
				__LIB_8__::func_806(uParam0, Local_520[2 /*33*/], "S_M_M_CornwallGuard_01", 0, 0, 1, 0);
				__LIB_8__::func_806(uParam0, Local_520[3 /*33*/], "S_M_M_CornwallGuard_01^1", 0, 0, 1, 0);
				__LIB_8__::func_806(uParam0, Local_520[4 /*33*/], "S_M_M_CornwallGuard_01^2", 0, 0, 1, 0);
				if (!__LIB_4__::func_948(uParam0, 4))
				{
					__LIB_5__::func_580(uParam0, WEAPON::_0xC6A6789BB405D11C(Local_520[3 /*33*/], 1), "w_repeater_carbine01", 0, 0, 1, 0);
					__LIB_5__::func_580(uParam0, WEAPON::_0xC6A6789BB405D11C(Local_520[4 /*33*/], 1), "w_repeater_carbine01^1", 0, 0, 1, 0);
				}
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1238(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	int iVar28;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		bVar2 = false;
		bVar3 = true;
		bVar4 = false;
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = true;
		bVar11 = false;
		bVar12 = false;
		bVar13 = false;
		iVar14 = 30;
		fVar15 = 1f;
		fVar16 = 5f;
		fVar17 = 270f;
		vVar18 = { 0f, 0f, 0f };
		vVar21 = { 0f, 0f, 0f };
		vVar24 = { 0f, 0f, 0f };
		iVar27 = iLocal_23;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1083[iVar1 /*33*/]) || !Local_1083[iVar1 /*33*/].f_17)
		{
			switch (iVar1)
			{
				case 0:
					vVar18 = { 2968.917f, 1393.551f, 43.0499f };
					fVar17 = 90f;
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2983.994f, 1391.871f, 43.4409f };
					bVar4 = false;
					fVar16 = 0.75f;
					bVar13 = true;
					bVar10 = false;
					bVar6 = true;
					bVar3 = false;
					bVar2 = true;
					iVar27 = iLocal_22;
					break;
				case 1:
					vVar18 = { 2956.89f, 1383.458f, 42.9053f };
					fVar17 = 90f;
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2973.835f, 1398.24f, 43.1774f };
					bVar4 = false;
					fVar16 = 0.75f;
					bVar13 = true;
					bVar10 = false;
					bVar2 = true;
					iVar27 = iLocal_22;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 2:
					vVar18 = { 2956.142f, 1381.563f, 42.8879f };
					fVar17 = 90f;
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2968.987f, 1401.227f, 43.0564f };
					bVar4 = false;
					fVar16 = 0.75f;
					bVar13 = true;
					bVar10 = false;
					bVar6 = true;
					bVar2 = false;
					iVar27 = iLocal_22;
					break;
			}
			if (!Local_1083[iVar1 /*33*/].f_17)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1083[iVar1 /*33*/]))
				{
					Local_1083[iVar1 /*33*/] = __LIB_1__::func_545(iVar27, vVar18, fVar17, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				else if (PED::_0xA0BC8FAED8CFEB3C(Local_1083[iVar1 /*33*/]))
				{
					Local_1083[iVar1 /*33*/].f_12 = 0;
					Local_1083[iVar1 /*33*/].f_17 = 1;
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1083[iVar1 /*33*/], true);
					if (bVar8)
					{
						PED::REGISTER_TARGET(Local_1083[iVar1 /*33*/], Local_155[0 /*182*/], 1);
						PED::REGISTER_TARGET(Local_1083[iVar1 /*33*/], Global_35, 1);
					}
					if (!bVar11)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
						TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
						if (bVar6)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar21, 3f, 20000, 0.25f, 1, 40000f);
						}
						if (bVar3)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 45f, 0, 0);
						}
						else
						{
							TASK::TASK_STAND_STILL(0, -1);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
						if (bVar7)
						{
							TASK::_TASK_PERFORM_SEQUENCE_2(Local_1083[iVar1 /*33*/], iLocal_38, 0.6f, 0.6f);
						}
						else
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_1083[iVar1 /*33*/], iLocal_38);
						}
					}
					if (!__LIB_0__::func_86(vVar21))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1083[iVar1 /*33*/], vVar21, fVar16, 0, 0, 0);
						if (!__LIB_0__::func_86(vVar24))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1083[iVar1 /*33*/], vVar24, fVar16, 1, 0, 0);
						}
					}
					if (bVar2)
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1083[iVar1 /*33*/], true);
					}
					if (bVar4)
					{
						__LIB_2__::func_279(Local_1083[iVar1 /*33*/], 1);
					}
					if (bVar13)
					{
						PED::SET_PED_CONFIG_FLAG(Local_1083[iVar1 /*33*/], 247, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1083[iVar1 /*33*/], 0, false);
					}
					if (bVar9)
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_1083[iVar1 /*33*/], 0);
						PED::SET_COMBAT_FLOAT(Local_1083[iVar1 /*33*/], 3, 2f);
					}
					else
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_1083[iVar1 /*33*/], 1);
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_1083[iVar1 /*33*/], bVar5, 0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1083[iVar1 /*33*/], joaat("REL_PLAYER_ENEMY"));
					PED::SET_PED_CONFIG_FLAG(Local_1083[iVar1 /*33*/], 186, false);
					PED::SET_PED_CONFIG_FLAG(Local_1083[iVar1 /*33*/], 281, true);
					TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1083[iVar1 /*33*/], false);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_1083[iVar1 /*33*/], true, true);
					__LIB_1__::func_766(Local_1083[iVar1 /*33*/], iVar28, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1083[iVar1 /*33*/], iVar28, true, 0, false, false);
					PED::SET_PED_ACCURACY(Local_1083[iVar1 /*33*/], iVar14);
					PED::_0xC5B78E41DCF8227C(Local_1083[iVar1 /*33*/], 1);
					__LIB_1__::func_991(Local_1083[iVar1 /*33*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1083[iVar1 /*33*/], 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1083[iVar1 /*33*/], 35, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1083[iVar1 /*33*/], 50, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1083[iVar1 /*33*/], 2, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1083[iVar1 /*33*/], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1083[iVar1 /*33*/], 98, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_1083[iVar1 /*33*/], 512, true);
					PED::SET_COMBAT_FLOAT(Local_1083[iVar1 /*33*/], 3, 0.75f);
					PED::_0xD05AD61F242C626B(Local_1083[iVar1 /*33*/], fVar15);
					if (!bVar12)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1083[iVar1 /*33*/], 30, true);
						PED::SET_PED_SHOOT_RATE(Local_1083[iVar1 /*33*/], 160);
					}
					else
					{
						PED::SET_PED_SEEING_RANGE(Local_1083[iVar1 /*33*/], 35f);
						PED::SET_PED_SHOOT_RATE(Local_1083[iVar1 /*33*/], 160);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1083[iVar1 /*33*/], false);
						__LIB_2__::func_279(Local_1083[iVar1 /*33*/], 1);
					}
					if (bVar10)
					{
						func_1734(&(Local_1083[iVar1 /*33*/]), &(Local_1083[iVar1 /*33*/].f_1), 1, 0);
					}
				}
			}
			if (bParam2)
			{
				return false;
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1239(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar5 = false;
		iVar6 = 30;
		iVar12 = iLocal_22;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1183[iVar1 /*33*/]))
		{
			switch (iVar1)
			{
				case 0:
					Var7 = { func_222(1, 0) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					bVar5 = true;
					break;
				case 1:
					Var7 = { func_222(1, 1) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar6 = 35;
					}
					else
					{
						iVar6 = 45;
					}
					break;
				case 2:
					Var7 = { func_222(1, 2) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					break;
				case 3:
					Var7 = { func_222(1, 3) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar6 = 35;
					}
					else
					{
						iVar6 = 45;
					}
					break;
				case 4:
					Var7 = { func_222(1, 4) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar6 = 35;
					}
					else
					{
						iVar6 = 45;
					}
					break;
				case 5:
					Var7 = { func_222(1, 5) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar6 = 40;
					}
					else
					{
						iVar6 = 45;
					}
					break;
				case 6:
					Var7 = { func_222(1, 6) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					bVar3 = true;
					break;
				case 7:
					Var7 = { func_222(1, 7) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					bVar3 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar6 = 35;
					}
					else
					{
						iVar6 = 45;
					}
					break;
				case 8:
					Var7 = { func_222(1, 8) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					break;
				case 9:
					Var7 = { func_222(1, 9) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					break;
				case 15:
					Var7 = { func_222(1, 5) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					break;
				case 16:
					Var7 = { func_222(1, 5) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					break;
				case 17:
					Var7 = { func_222(1, 5) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					break;
			}
			if (!Local_1183[iVar1 /*33*/].f_17)
			{
				Local_1183[iVar1 /*33*/] = __LIB_1__::func_545(iVar12, Var7, Var7.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				Local_1183[iVar1 /*33*/].f_12 = 0;
				Local_1183[iVar1 /*33*/].f_13 = 0;
				Local_1183[iVar1 /*33*/].f_17 = 1;
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1183[iVar1 /*33*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_1183[iVar1 /*33*/], 186, false);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1183[iVar1 /*33*/], false);
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_1183[iVar1 /*33*/], true, true);
				__LIB_1__::func_766(Local_1183[iVar1 /*33*/], iVar11, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_1183[iVar1 /*33*/], iVar11, true, 0, false, false);
				PED::SET_PED_ACCURACY(Local_1183[iVar1 /*33*/], iVar6);
				PED::_0xC5B78E41DCF8227C(Local_1183[iVar1 /*33*/], 1);
				__LIB_1__::func_991(Local_1183[iVar1 /*33*/], 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_155[0 /*182*/]))
				{
					PED::REGISTER_TARGET(Local_1183[iVar1 /*33*/], Local_155[0 /*182*/], 1);
				}
				PED::REGISTER_TARGET(Local_1183[iVar1 /*33*/], Global_35, 1);
				PED::SET_COMBAT_FLOAT(Local_1183[iVar1 /*33*/], 3, 0.75f);
				PED::SET_PED_SEEING_RANGE(Local_1183[iVar1 /*33*/], 35f);
				PED::SET_PED_SHOOT_RATE(Local_1183[iVar1 /*33*/], 160);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1183[iVar1 /*33*/], 30, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_1183[iVar1 /*33*/], 2);
				if (bVar5)
				{
					PED::SET_PED_CONFIG_FLAG(Local_1183[iVar1 /*33*/], 112, true);
				}
				if (bVar3)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1183[iVar1 /*33*/], true);
				}
				if (bVar4)
				{
					__LIB_2__::func_279(Local_1183[iVar1 /*33*/], 1);
				}
				if (bVar2)
				{
					__LIB_1__::func_571(Local_1183[iVar1 /*33*/], Local_1183[iVar1 /*33*/].f_2, 0, -1, 1);
				}
			}
			if (bParam2)
			{
				return false;
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1240(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_119))
	{
		if (!__LIB_4__::func_948(uParam0, 4))
		{
			iLocal_119 = OBJECT::CREATE_OBJECT(iLocal_35, 2974f, 1307.6f, 48f, true, true, false, false, true);
		}
		else
		{
			iLocal_119 = OBJECT::CREATE_OBJECT(iLocal_35, 3020.43f, 1341.23f, 42.0553f, true, true, false, false, true);
		}
		ENTITY::SET_ENTITY_ROTATION(iLocal_119, -15.8807f, 179.757f, 66.1946f, 2, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		if (!__LIB_4__::func_948(uParam0, 4))
		{
			iLocal_120 = OBJECT::CREATE_OBJECT(iLocal_37, 3020.43f, 1341.23f, 48.0553f, true, true, false, false, true);
		}
		else
		{
			iLocal_120 = OBJECT::CREATE_OBJECT(iLocal_37, 3020.43f, 1341.23f, 42.0553f, true, true, false, false, true);
		}
		ENTITY::SET_ENTITY_ROTATION(iLocal_120, -15.8807f, 179.757f, 66.1946f, 2, true);
	}
}

void func_1242(int iParam0, int iParam1)
{
	if (__LIB_13__::func_666(*iParam0, iParam1))
	{
		__LIB_1__::func_681(iParam0, iParam1);
	}
}

void func_1243(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*33*/], 0))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER((*iParam0)[iVar0 /*33*/], !bParam2);
		}
		iVar0++;
	}
}

void func_1244(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*33*/], 0))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER((*iParam0)[iVar0 /*33*/], !bParam3);
		}
		iVar0++;
	}
}

bool func_1245(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	int iVar28;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar9 = true;
		bVar10 = false;
		bVar11 = false;
		bVar12 = false;
		bVar13 = false;
		if (__LIB_0__::func_302() >= 2)
		{
			iVar14 = 30;
		}
		else
		{
			iVar14 = 35;
		}
		fVar15 = 1f;
		fVar16 = 5f;
		fVar17 = 270f;
		vVar18 = { 0f, 0f, 0f };
		vVar21 = { 0f, 0f, 0f };
		vVar24 = { 0f, 0f, 0f };
		iVar27 = iLocal_23;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_752[iVar1 /*33*/]) || !Local_752[iVar1 /*33*/].f_17)
		{
			switch (iVar1)
			{
				case 0:
					vVar18 = { 2987.774f, 1345.249f, 43.0626f };
					iVar28 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2996.953f, 1350.385f, 42.9354f };
					bVar3 = true;
					bVar2 = true;
					fVar16 = 1f;
					bVar7 = true;
					bVar13 = true;
					break;
				case 1:
					vVar18 = { 2987.774f, 1345.249f, 43.0626f };
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2996.953f, 1350.385f, 42.9354f };
					vVar24 = { 2994.972f, 1352.734f, 43.0293f };
					bVar3 = true;
					bVar2 = true;
					fVar16 = 1f;
					bVar6 = true;
					bVar7 = true;
					bVar13 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 2:
					vVar18 = { 2985.194f, 1336.405f, 43.0849f };
					iVar28 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2988.18f, 1342.01f, 43.09f };
					bVar3 = true;
					bVar2 = true;
					fVar16 = 1f;
					bVar7 = true;
					bVar13 = true;
					break;
				case 3:
					vVar18 = { 2985.19f, 1336.23f, 43.08f };
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2985.19f, 1336.23f, 44.08f };
					bVar3 = true;
					fVar16 = 1f;
					bVar7 = true;
					bVar2 = true;
					bVar13 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 4:
					vVar18 = { 2987.58f, 1344.94f, 43.11f };
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2987.58f, 1344.94f, 44.11f };
					bVar3 = true;
					fVar16 = 1f;
					bVar7 = true;
					bVar2 = true;
					bVar13 = true;
					break;
				case 5:
					vVar18 = { 2994.992f, 1402.13f, 47.783f };
					iVar28 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2994.992f, 1402.13f, 47.783f };
					bVar3 = true;
					fVar16 = 1f;
					bVar11 = true;
					fVar15 = 0f;
					iVar27 = iLocal_22;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 6:
					vVar18 = { 2948.159f, 1377.359f, 42.9537f };
					iVar28 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2959.063f, 1387.98f, 42.917f };
					bVar3 = true;
					fVar16 = 2f;
					bVar11 = true;
					iVar27 = iLocal_22;
					break;
				case 7:
					vVar18 = { 2947.01f, 1381.159f, 50.3227f };
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2949.415f, 1380.632f, 50.32261f };
					bVar3 = true;
					fVar16 = 1f;
					fVar15 = 0.9f;
					bVar2 = true;
					bVar12 = true;
					bVar5 = true;
					iVar27 = iLocal_22;
					break;
				case 8:
					vVar18 = { 2934.854f, 1385.575f, 50.3226f };
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2951.521f, 1380.157f, 50.32256f };
					bVar3 = true;
					fVar16 = 0.75f;
					bVar2 = true;
					fVar15 = 0.9f;
					bVar12 = true;
					bVar5 = true;
					iVar27 = iLocal_22;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 9:
					vVar18 = { 2953.982f, 1371.297f, 50.3226f };
					fVar17 = 90f;
					iVar28 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar21 = { 2953.982f, 1371.297f, 50.3226f };
					bVar3 = false;
					fVar16 = 0.75f;
					bVar12 = true;
					bVar9 = false;
					bVar2 = true;
					iVar27 = iLocal_22;
					bVar10 = true;
					break;
			}
			if (!Local_752[iVar1 /*33*/].f_17)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_752[iVar1 /*33*/]))
				{
					Local_752[iVar1 /*33*/] = __LIB_1__::func_545(iVar27, vVar18, fVar17, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				else if (PED::_0xA0BC8FAED8CFEB3C(Local_752[iVar1 /*33*/]))
				{
					Local_752[iVar1 /*33*/].f_12 = 0;
					Local_752[iVar1 /*33*/].f_17 = 1;
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_752[iVar1 /*33*/], true);
					if (bVar7)
					{
						PED::REGISTER_TARGET(Local_752[iVar1 /*33*/], Local_155[0 /*182*/], 1);
						PED::REGISTER_TARGET(Local_752[iVar1 /*33*/], Global_35, 1);
					}
					if (!bVar10)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
						TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
						if (bVar5)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar21, 2f, 20000, 0.25f, 1, 40000f);
						}
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 45f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
						if (bVar6)
						{
							TASK::_TASK_PERFORM_SEQUENCE_2(Local_752[iVar1 /*33*/], iLocal_38, 0.6f, 0.6f);
						}
						else
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_752[iVar1 /*33*/], iLocal_38);
						}
					}
					if (!__LIB_0__::func_86(vVar21))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_752[iVar1 /*33*/], vVar21, fVar16, 0, 0, 0);
						if (!__LIB_0__::func_86(vVar24))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_752[iVar1 /*33*/], vVar24, fVar16, 1, 0, 0);
						}
					}
					if (bVar2)
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_752[iVar1 /*33*/], true);
					}
					if (bVar3)
					{
						__LIB_2__::func_279(Local_752[iVar1 /*33*/], 1);
					}
					if (bVar12)
					{
						PED::SET_PED_CONFIG_FLAG(Local_752[iVar1 /*33*/], 247, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_752[iVar1 /*33*/], 0, false);
					}
					if (bVar8)
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_752[iVar1 /*33*/], 0);
						PED::SET_COMBAT_FLOAT(Local_752[iVar1 /*33*/], 3, 2f);
					}
					else
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_752[iVar1 /*33*/], 1);
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_752[iVar1 /*33*/], bVar4, 0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_752[iVar1 /*33*/], joaat("REL_PLAYER_ENEMY"));
					PED::SET_PED_CONFIG_FLAG(Local_752[iVar1 /*33*/], 186, false);
					PED::SET_PED_CONFIG_FLAG(Local_752[iVar1 /*33*/], 281, true);
					TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_752[iVar1 /*33*/], false);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_752[iVar1 /*33*/], true, true);
					__LIB_1__::func_766(Local_752[iVar1 /*33*/], iVar28, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_752[iVar1 /*33*/], iVar28, true, 0, false, false);
					PED::SET_PED_ACCURACY(Local_752[iVar1 /*33*/], iVar14);
					PED::_0xC5B78E41DCF8227C(Local_752[iVar1 /*33*/], 1);
					__LIB_1__::func_991(Local_752[iVar1 /*33*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_752[iVar1 /*33*/], 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_752[iVar1 /*33*/], 35, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_752[iVar1 /*33*/], 50, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_752[iVar1 /*33*/], 2, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_752[iVar1 /*33*/], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_752[iVar1 /*33*/], 98, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_752[iVar1 /*33*/], 512, true);
					PED::SET_COMBAT_FLOAT(Local_752[iVar1 /*33*/], 3, 0.75f);
					PED::_0xD05AD61F242C626B(Local_752[iVar1 /*33*/], fVar15);
					if (!bVar11)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_752[iVar1 /*33*/], 30, true);
						PED::SET_PED_SHOOT_RATE(Local_752[iVar1 /*33*/], 160);
					}
					else
					{
						PED::SET_PED_SEEING_RANGE(Local_752[iVar1 /*33*/], 35f);
						PED::SET_PED_SHOOT_RATE(Local_752[iVar1 /*33*/], 160);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_752[iVar1 /*33*/], false);
						__LIB_2__::func_279(Local_752[iVar1 /*33*/], 1);
					}
					if (bVar9)
					{
						func_1734(&(Local_752[iVar1 /*33*/]), &(Local_752[iVar1 /*33*/].f_1), 1, bVar13);
					}
				}
			}
			if (bParam2)
			{
				return false;
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1246()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		OBJECT::DELETE_OBJECT(&iLocal_120);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_37);
	}
}

void func_1249(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			if (!__LIB_9__::func_344())
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			__LIB_5__::func_486(uParam0, "TRN1_OBJ02a", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, 1);
			break;
		case 1:
			if (func_1259(&Local_520, 7, 0) < 3 || !__LIB_1__::func_205(Global_35, iLocal_3430[23], 1, 0))
			{
				if (!func_1206(1))
				{
					if (func_1245(2, 4, 1))
					{
						func_1207(1);
						__LIB_1__::func_148(&uLocal_3528);
						__LIB_5__::func_372(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_75(&uLocal_3528) && __LIB_0__::func_264(&uLocal_3528) > 15f)
			{
				if (__LIB_11__::func_365(uParam0, "TRN1_OBJ02a", 4, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_3528);
				}
			}
			if (func_1259(&Local_520, 7, 0) < 2 || __LIB_1__::func_205(Global_35, iLocal_3430[24], 1, 0))
			{
				if (!func_1206(2))
				{
					if (func_1245(0, 1, 1))
					{
						if (__LIB_5__::func_314(uParam0, "TRN1_OBJ2a", 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_155[0 /*182*/], Local_752[0 /*33*/], 4000, 0, 51, 0);
							func_1207(2);
							__LIB_1__::func_148(&uLocal_3528);
							__LIB_5__::func_372(uParam0, 3);
						}
					}
				}
			}
			break;
		case 3:
			if (((!__LIB_1__::func_205(Global_35, iLocal_3430[23], 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_3430[24], 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_3430[25], 1, 0)) || func_1206(16384))
			{
				if (!func_1206(1048576))
				{
					if (!__LIB_5__::func_463() && __LIB_5__::func_314(uParam0, "TRN1_OBJ2b", 0))
					{
						func_1207(1048576);
						__LIB_1__::func_148(&uLocal_3528);
						__LIB_5__::func_486(uParam0, "TRN1_OBJ02b", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_5__::func_372(uParam0, 4);
					}
				}
			}
			break;
		case 4:
			if (!__LIB_9__::func_344())
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			if (__LIB_1__::func_205(Global_35, iLocal_3430[13], 1, 0))
			{
				if (__LIB_0__::func_75(&uLocal_3531) && __LIB_0__::func_264(&uLocal_3531) > 1f)
				{
					__LIB_1__::func_148(&uLocal_3528);
					__LIB_5__::func_372(uParam0, 5);
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			break;
		case 5:
			if (((((func_1736(Local_1183[2 /*33*/]) || func_1736(Local_1183[3 /*33*/])) && (!func_1736(Local_752[7 /*33*/]) || !func_1736(Local_752[8 /*33*/]))) && !__LIB_5__::func_463()) && __LIB_5__::func_314(uParam0, "TRN1_OBJ2b_BLDG", 0)) || (func_1736(Local_752[7 /*33*/]) && func_1736(Local_752[8 /*33*/])))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 6);
			}
			break;
		case 6:
			func_1737();
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_155[1 /*182*/], 0f, 0f, 0f, true, 2000, 2000, 500, 1726668277);
				func_1738();
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 7);
			}
			break;
		case 7:
			func_1738();
			func_1739();
			func_1737();
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_126[4]) > 1f) && func_1239(6, 8, 1))
			{
				__LIB_0__::func_37(&uLocal_3528);
				__LIB_5__::func_372(uParam0, 8);
			}
			break;
		case 8:
			func_1738();
			func_1739();
			func_1737();
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false) || (((ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_126[4]) < 8.5f && func_1265(&Local_1183, 4, 8) < 2) && func_1736(Local_752[7 /*33*/])) && func_1736(Local_752[8 /*33*/])))
			{
				if (__LIB_0__::func_665(Global_35, Local_155[1 /*182*/], 1, 1) < __LIB_0__::func_665(Local_155[0 /*182*/], Local_155[1 /*182*/], 1, 1) || __LIB_5__::func_314(uParam0, "TRN1_OBJ2c", 0))
				{
					__LIB_0__::func_37(&uLocal_3528);
					__LIB_5__::func_372(uParam0, 9);
				}
			}
			break;
		case 9:
			func_1738();
			func_1739();
			func_1737();
			if (__LIB_0__::func_665(Global_35, Local_155[0 /*182*/], 1, 1) > 4f)
			{
				if (!__LIB_0__::func_75(&uLocal_3528))
				{
					__LIB_1__::func_148(&uLocal_3528);
				}
				else if (((__LIB_0__::func_265(&uLocal_3528) > 4f && !__LIB_5__::func_463()) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false)) && __LIB_5__::func_314(uParam0, "TRN1_LAG_DUTCH", 0))
				{
					__LIB_1__::func_148(&uLocal_3528);
				}
			}
			else if (__LIB_0__::func_75(&uLocal_3528))
			{
				__LIB_0__::func_37(&uLocal_3528);
			}
			break;
	}
}

void func_1250(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	func_1740();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_272(Local_155[iVar1 /*182*/], 0))
		{
			switch (iVar1)
			{
				case 0:
					switch (Local_155[iVar1 /*182*/].f_169)
					{
						case 0:
							PED::REGISTER_TARGET(Local_155[iVar1 /*182*/], Local_520[2 /*33*/], 1);
							PED::REGISTER_TARGET(Local_155[iVar1 /*182*/], Local_520[3 /*33*/], 1);
							PED::REGISTER_TARGET(Local_155[iVar1 /*182*/], Local_520[4 /*33*/], 1);
							if (!__LIB_0__::func_163(Local_155[iVar1 /*182*/], 242628503))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 3017.88f, 1348.03f, 41.67f, 2000, 1, 0f, 0, 0, 0, 1, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 15f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							}
							func_1209(&(Local_155[iVar1 /*182*/].f_169), 19, iVar1);
							break;
						case 19:
							if (func_1736(Local_520[3 /*33*/]) && func_1736(Local_520[2 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_520[4 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_520[4 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 3018.795f, 1349.892f, 41.6773f, Local_520[4 /*33*/], 1.5f, 1, 2f, 1082130432 /* Float: 4f */, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_520[4 /*33*/], -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 12, iVar1);
							}
							else if (func_1259(&Local_520, 7, 0) < 1 || __LIB_1__::func_205(Global_35, iLocal_3430[25], 1, 0))
							{
								if (__LIB_1__::func_205(Global_35, iLocal_3430[25], 1, 0))
								{
									PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 170);
									if (!func_1736(Local_520[4 /*33*/]))
									{
										Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
										Local_135.f_10 = Local_520[4 /*33*/];
										Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_520[4 /*33*/], true, false) };
										ENTITY::_SET_ENTITY_HEALTH(Local_520[4 /*33*/], 0, 0);
									}
									else if (!func_1736(Local_520[3 /*33*/]))
									{
										Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
										Local_135.f_10 = Local_520[3 /*33*/];
										Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_520[3 /*33*/], true, false) };
										ENTITY::_SET_ENTITY_HEALTH(Local_520[3 /*33*/], 0, 0);
									}
									else if (!func_1736(Local_520[2 /*33*/]))
									{
										Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
										Local_135.f_10 = Local_520[2 /*33*/];
										Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_520[2 /*33*/], true, false) };
										ENTITY::_SET_ENTITY_HEALTH(Local_520[2 /*33*/], 0, 0);
									}
									Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
									Local_135.f_11 = Local_155[iVar1 /*182*/];
									Local_135.f_9 = Local_155[iVar1 /*182*/];
									Local_135.f_12 = 1;
									Local_135.f_13 = 1;
									Local_135.f_16 = 1;
									Local_135.f_15 = 1;
									Local_135.f_7 = 20f;
									MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
									if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_520[4 /*33*/]))
									{
										ENTITY::_SET_ENTITY_HEALTH(Local_520[4 /*33*/], 0, 0);
									}
									if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_520[3 /*33*/]))
									{
										ENTITY::_SET_ENTITY_HEALTH(Local_520[3 /*33*/], 0, 0);
									}
									if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_520[2 /*33*/]))
									{
										ENTITY::_SET_ENTITY_HEALTH(Local_520[2 /*33*/], 0, 0);
									}
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar1 /*182*/], 27, true);
									WEAPON::SET_PED_AMMO(Local_155[iVar1 /*182*/], -1, 32);
									__LIB_2__::func_279(Local_520[2 /*33*/], 1);
									__LIB_2__::func_279(Local_520[3 /*33*/], 1);
									__LIB_2__::func_279(Local_520[4 /*33*/], 1);
								}
								__LIB_1__::func_148(&(vLocal_3546[0 /*3*/]));
								func_1453(0, 3006.622f, 1347.188f, 42.1091f, 1f, 3011.369f, 1347.917f, 41.8176f, 0, 1);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 25, iVar1);
							}
							break;
						case 12:
							if (((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.5f) && !func_1736(Local_520[4 /*33*/])) && PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/]))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_520[4 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								__LIB_1__::func_265(Local_520[4 /*33*/], "GENERIC_FRIGHTENED_HIGH", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 0, 1);
								ENTITY::_SET_ENTITY_HEALTH(Local_520[4 /*33*/], 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 19, iVar1);
							}
							if (func_1259(&Local_520, 7, 0) < 1 || __LIB_1__::func_205(Global_35, iLocal_3430[25], 1, 0))
							{
								__LIB_1__::func_148(&(vLocal_3546[0 /*3*/]));
								func_1453(0, 3006.622f, 1347.188f, 42.1091f, 1f, 3011.369f, 1347.917f, 41.8176f, 0, 1);
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar1 /*182*/], 1.5f);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 25, iVar1);
							}
							break;
						case 25:
							func_1741();
							vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_752[0 /*33*/], true, false) };
							vVar5 = { ENTITY::GET_ENTITY_COORDS(Local_752[1 /*33*/], true, false) };
							if (((__LIB_2__::func_901(Local_752[0 /*33*/], Global_35) || vVar2.z < 42f) || __LIB_0__::func_264(&(vLocal_3546[0 /*3*/])) > 15f) && !func_1736(Local_752[1 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_752[1 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_752[1 /*33*/], false);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar1 /*182*/], Local_752[1 /*33*/], -1, 0, 0);
								__LIB_1__::func_148(&(vLocal_3546[0 /*3*/]));
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 13, iVar1);
							}
							else if ((func_1736(Local_752[1 /*33*/]) || vVar5.z < 42f) && !func_1736(Local_752[0 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_752[0 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_752[0 /*33*/], false);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar1 /*182*/], Local_752[0 /*33*/], -1, 0, 0);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 13, iVar1);
							}
							else if (func_1736(Local_752[3 /*33*/]) && !func_1736(Local_752[4 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_752[4 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_752[4 /*33*/], false);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar1 /*182*/], Local_752[4 /*33*/], -1, 0, 0);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 3, iVar1);
							}
							else if (func_1736(Local_752[4 /*33*/]) && !func_1736(Local_752[3 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_752[3 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_752[3 /*33*/], false);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar1 /*182*/], Local_752[3 /*33*/], -1, 0, 0);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 3, iVar1);
							}
							else if ((((func_1736(Local_752[0 /*33*/]) && func_1736(Local_752[1 /*33*/])) && func_1736(Local_752[3 /*33*/])) && func_1736(Local_752[4 /*33*/])) || __LIB_1__::func_205(Global_35, iLocal_3430[25], 1, 0))
							{
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 170);
								if (!func_1736(Local_752[4 /*33*/]))
								{
									Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
									Local_135.f_10 = Local_752[4 /*33*/];
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[4 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[4 /*33*/], 0, 0);
								}
								else if (!func_1736(Local_752[2 /*33*/]))
								{
									Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
									Local_135.f_10 = Local_752[2 /*33*/];
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[2 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[2 /*33*/], 0, 0);
								}
								else if (!func_1736(Local_752[3 /*33*/]))
								{
									Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
									Local_135.f_10 = Local_752[3 /*33*/];
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[3 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[3 /*33*/], 0, 0);
								}
								else if (!func_1736(Local_752[0 /*33*/]))
								{
									Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
									Local_135.f_10 = Local_752[0 /*33*/];
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[0 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[0 /*33*/], 0, 0);
								}
								else if (!func_1736(Local_752[1 /*33*/]))
								{
									Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
									Local_135.f_10 = Local_752[1 /*33*/];
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[1 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[1 /*33*/], 0, 0);
								}
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 20f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_752[2 /*33*/]))
								{
									ENTITY::_SET_ENTITY_HEALTH(Local_752[2 /*33*/], 0, 0);
								}
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_752[3 /*33*/]))
								{
									ENTITY::_SET_ENTITY_HEALTH(Local_752[3 /*33*/], 0, 0);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar1 /*182*/], 27, true);
								WEAPON::SET_PED_AMMO(Local_155[iVar1 /*182*/], -1, 32);
								__LIB_2__::func_279(Local_752[0 /*33*/], 1);
								__LIB_2__::func_279(Local_752[1 /*33*/], 1);
								__LIB_2__::func_279(Local_752[2 /*33*/], 1);
								__LIB_2__::func_279(Local_752[3 /*33*/], 1);
								__LIB_2__::func_279(Local_752[4 /*33*/], 1);
								func_1453(0, 2999.249f, 1349.587f, 42.7516f, 1f, 3006.622f, 1347.188f, 42.1091f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 20, iVar1);
							}
							break;
						case 13:
							func_1741();
							if (__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.5f)
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								if (!__LIB_0__::func_272(Local_752[1 /*33*/], 0))
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[0 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[0 /*33*/], 0, 0);
								}
								else
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[1 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[1 /*33*/], 0, 0);
								}
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 25, iVar1);
							}
							if (func_1736(Local_752[0 /*33*/]) && func_1736(Local_752[1 /*33*/]))
							{
								func_1453(0, 2999.249f, 1349.587f, 42.7516f, 1f, 3006.622f, 1347.188f, 42.1091f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 25, iVar1);
							}
							break;
						case 3:
							func_1741();
							if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.5f) && (!func_1736(Local_752[3 /*33*/]) || !func_1736(Local_752[4 /*33*/])))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								if (!__LIB_0__::func_272(Local_752[4 /*33*/], 0))
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[3 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[3 /*33*/], 0, 0);
								}
								else
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[4 /*33*/], true, false) };
									ENTITY::_SET_ENTITY_HEALTH(Local_752[4 /*33*/], 0, 0);
								}
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 25, iVar1);
							}
							if (func_1736(Local_752[3 /*33*/]) && func_1736(Local_752[4 /*33*/]))
							{
								func_1453(0, 2999.249f, 1349.587f, 42.7516f, 1f, 3006.622f, 1347.188f, 42.1091f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 25, iVar1);
							}
							break;
						case 20:
							func_1741();
							if ((func_1259(&Local_752, 10, -1) < 2 || __LIB_1__::func_205(Global_35, iLocal_3430[25], 1, 0)) || ((!__LIB_1__::func_205(Global_35, iLocal_3430[23], 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_3430[24], 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_3430[25], 1, 0)))
							{
								func_1207(16384);
								func_1453(0, 2975.228f, 1394.88f, 43.1824f, 1f, 2975.707f, 1400.624f, 43.2791f, 0, 1);
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								PED::_SET_PED_CROUCH_MOVEMENT(Local_155[iVar1 /*182*/], false, 0, false);
								if (__LIB_0__::func_272(Local_1083[0 /*33*/], 0))
								{
									WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], true);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(2), 0, 2094, 20, 0, 1, -1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2975.36f, 1395.452f, 43.1216f, Local_1083[0 /*33*/], 2f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 8193, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 2970.762f, 1398.104f, 43.1061f, 50f, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 6, iVar1);
								}
								else if (__LIB_0__::func_272(Local_752[5 /*33*/], 0))
								{
									WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], true);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(2), 0, 2094, 20, 0, 1, -1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2975.36f, 1395.452f, 43.1216f, Local_752[5 /*33*/], 2f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 8193, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 2970.762f, 1398.104f, 43.1061f, 50f, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 6, iVar1);
								}
								else if (__LIB_0__::func_272(Local_1083[1 /*33*/], 0))
								{
									PED::_0x8ACC0506743A8A5C(Local_155[iVar1 /*182*/], joaat("SCRIPT_CALMAIMPOSTCOMBAT_LOW"), 1, -1082130432 /* Float: -1f */);
									WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], true);
									PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 500);
									PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 300);
									__LIB_2__::func_279(Local_1083[1 /*33*/], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1083[1 /*33*/], false);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2986.25f, 1391.238f, 43.4537f, Local_1083[1 /*33*/], 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2975.015f, 1394.37f, 43.2323f, Local_1083[1 /*33*/], 1.5f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
									TASK::TASK_SHOOT_AT_ENTITY(0, Local_1083[1 /*33*/], -1, 0, 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									__LIB_1__::func_148(&uLocal_3571);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 31, iVar1);
								}
								else
								{
									PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 40);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(2), 0, 2094, 20, 0, 1, -1);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(3), 0, 2080, 8, 0, 1, -1);
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 2970.762f, 1398.104f, 43.1061f, 50f, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 21, iVar1);
								}
								__LIB_1__::func_148(&uLocal_3522);
								__LIB_1__::func_148(&(Local_155[iVar1 /*182*/].f_2));
							}
							else if ((func_1259(&Local_752, 10, -1) < 3 && __LIB_0__::func_272(Local_752[2 /*33*/], 0)) && !__LIB_0__::func_163(Local_155[iVar1 /*182*/], 242628503))
							{
								func_1743(0, Local_752[2 /*33*/], 0f, 0f, 0f, 1, 1073741824 /* Float: 2f */);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 26, iVar1);
							}
							else if ((func_1259(&Local_752, 10, -1) < 3 && __LIB_0__::func_272(Local_752[3 /*33*/], 0)) && !__LIB_0__::func_163(Local_155[iVar1 /*182*/], 242628503))
							{
								func_1743(0, Local_752[3 /*33*/], 0f, 0f, 0f, 1, 1073741824 /* Float: 2f */);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 26, iVar1);
							}
							else if ((func_1259(&Local_752, 10, -1) < 3 && __LIB_0__::func_272(Local_752[4 /*33*/], 0)) && !__LIB_0__::func_163(Local_155[iVar1 /*182*/], 242628503))
							{
								func_1743(0, Local_752[4 /*33*/], 0f, 0f, 0f, 1, 1073741824 /* Float: 2f */);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 26, iVar1);
							}
							else
							{
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 25, iVar1);
							}
							break;
						case 26:
							if (__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 1f)
							{
								if (!func_1736(Local_752[2 /*33*/]))
								{
									iVar8 = Local_752[2 /*33*/];
								}
								else if (!func_1736(Local_752[3 /*33*/]))
								{
									iVar8 = Local_752[3 /*33*/];
								}
								else if (!func_1736(Local_752[4 /*33*/]))
								{
									iVar8 = Local_752[4 /*33*/];
								}
								else
								{
									iVar8 = Local_752[4 /*33*/];
								}
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(iVar8, true, false) };
								Local_135.f_10 = iVar8;
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 10f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								ENTITY::_SET_ENTITY_HEALTH(iVar8, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 20, iVar1);
							}
							if ((func_1736(Local_752[2 /*33*/]) && func_1736(Local_752[3 /*33*/])) && func_1736(Local_752[4 /*33*/]))
							{
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 20, iVar1);
							}
							break;
						case 6:
							func_1744();
							if (__LIB_0__::func_665(Global_35, Local_155[iVar1 /*182*/], 1, 1) < 7.5f || __LIB_0__::func_665(Global_35, Local_752[5 /*33*/], 1, 1) < __LIB_0__::func_665(Local_155[iVar1 /*182*/], Local_752[5 /*33*/], 1, 1))
							{
								__LIB_4__::func_982(Local_155[iVar1 /*182*/], 2f);
							}
							else if (__LIB_0__::func_665(Global_35, Local_155[iVar1 /*182*/], 1, 1) > 12.5f)
							{
								__LIB_4__::func_982(Local_155[iVar1 /*182*/], 0f);
							}
							else
							{
								__LIB_4__::func_982(Local_155[iVar1 /*182*/], 1f);
							}
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[iVar1 /*182*/], func_410(2)) || TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[iVar1 /*182*/], func_410(3)))
							{
								iVar9 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_155[iVar1 /*182*/]);
								if ((iVar9 > 14 && __LIB_0__::func_232(Global_35, Local_155[iVar1 /*182*/], 1) > 100f) && !func_1206(33554432))
								{
									if (!func_1222(16) && !__LIB_5__::func_463())
									{
										if (!__LIB_5__::func_314(uParam0, "TRN1_LAG_DUTCH", 0))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar1 /*182*/], 27, false);
											PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 120);
											func_1719(16);
										}
									}
								}
							}
							if (!__LIB_0__::func_272(Local_752[5 /*33*/], 0) && !__LIB_0__::func_272(Local_1083[0 /*33*/], 0))
							{
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 500);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], true);
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 300);
								__LIB_2__::func_279(Local_1083[1 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1083[1 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2986.25f, 1391.238f, 43.4537f, Local_1083[1 /*33*/], 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2975.015f, 1394.37f, 43.2323f, Local_1083[1 /*33*/], 1.5f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1083[1 /*33*/], -1, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 30, iVar1);
							}
							else if (__LIB_0__::func_272(Local_1083[0 /*33*/], 0) && __LIB_8__::func_864(Local_155[iVar1 /*182*/], 2988.647f, 1389.108f, 43.2943f, 9f, 1, 1))
							{
								func_1743(0, Local_1083[0 /*33*/], 2992.003f, 1385.224f, 42.8282f, 1, 1.5f);
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 500);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], true);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 17, iVar1);
							}
							else if (__LIB_0__::func_272(Local_752[5 /*33*/], 0) && __LIB_8__::func_864(Local_155[iVar1 /*182*/], 2988.647f, 1389.108f, 43.2943f, 5f, 1, 1))
							{
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 500);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], true);
								func_1743(0, Local_752[5 /*33*/], 0f, 0f, 0f, 1, 1073741824 /* Float: 2f */);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 30, iVar1);
							}
							break;
						case 30:
							if ((__LIB_0__::func_75(&uLocal_3571) && (__LIB_0__::func_265(&uLocal_3571) > 0.5f || PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/]))) && !func_1736(Local_752[5 /*33*/]))
							{
								__LIB_1__::func_148(&uLocal_3571);
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 180);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], false);
								ENTITY::_SET_ENTITY_HEALTH(Local_752[5 /*33*/], 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 20, iVar1);
							}
							if (func_1736(Local_752[5 /*33*/]))
							{
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 180);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], false);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 20, iVar1);
							}
							break;
						case 17:
							if ((__LIB_0__::func_75(&uLocal_3571) && (__LIB_0__::func_265(&uLocal_3571) > 0.5f || PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/]))) && !func_1736(Local_1083[0 /*33*/]))
							{
								__LIB_1__::func_148(&uLocal_3571);
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 180);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], false);
								ENTITY::_SET_ENTITY_HEALTH(Local_1083[0 /*33*/], 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 20, iVar1);
							}
							if (func_1736(Local_1083[0 /*33*/]))
							{
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 180);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], false);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 20, iVar1);
							}
							break;
						case 31:
							if ((((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.5f) && PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/])) && __LIB_0__::func_48(Local_155[iVar1 /*182*/], Local_1083[1 /*33*/], 5f, 1)) && !func_1736(Local_1083[1 /*33*/]))
							{
								__LIB_1__::func_148(&uLocal_3571);
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 180);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], false);
								ENTITY::_SET_ENTITY_HEALTH(Local_1083[1 /*33*/], 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								PED::_0x8ACC0506743A8A5C(Local_155[iVar1 /*182*/], joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 21, iVar1);
							}
							if (func_1736(Local_1083[1 /*33*/]))
							{
								PED::SET_PED_SHOOT_RATE(Local_155[iVar1 /*182*/], 180);
								WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar1 /*182*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2975.114f, 1395.389f, 43.146f, Local_1183[3 /*33*/], 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								PED::_0x8ACC0506743A8A5C(Local_155[iVar1 /*182*/], joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 21, iVar1);
							}
							break;
						case 21:
							func_1745(0);
							if (!__LIB_0__::func_138(PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_155[iVar1 /*182*/], false), __LIB_11__::func_358(Global_35, 2974.589f, 1395.24f, 43.1806f, 2975.527f, 1400.058f, 43.3027f)))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_155[iVar1 /*182*/], __LIB_11__::func_358(Global_35, 2974.589f, 1395.24f, 43.1806f, 2975.527f, 1400.058f, 43.3027f), 0.75f, 1, 0, 0);
							}
							if (func_1736(Local_1183[2 /*33*/]) && !func_1736(Local_1183[3 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_1183[3 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1183[3 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2975.168f, 1398.264f, 43.2925f, Local_1183[3 /*33*/], 1.5f, 1, 2f, 1082130432 /* Float: 4f */, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1183[3 /*33*/], -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 27, iVar1);
							}
							else if (func_1736(Local_1183[3 /*33*/]) && !func_1736(Local_1183[2 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_1183[2 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1183[2 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2975.168f, 1398.264f, 43.2925f, Local_1183[2 /*33*/], 1.5f, 1, 2f, 1082130432 /* Float: 4f */, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1183[2 /*33*/], -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 27, iVar1);
							}
							if (func_1736(Local_1183[2 /*33*/]) && func_1736(Local_1183[3 /*33*/]))
							{
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 22, iVar1);
							}
							break;
						case 27:
							if ((__LIB_0__::func_75(&uLocal_3571) && (__LIB_0__::func_265(&uLocal_3571) > 0.5f || PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/]))) && (!func_1736(Local_752[2 /*33*/]) || !func_1736(Local_1183[3 /*33*/])))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								Local_135.f_3 = { 2969.6f, 1395.19f, 43.04f };
								if (__LIB_0__::func_272(Local_1183[2 /*33*/], 0))
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1183[2 /*33*/], true, false) };
								}
								else
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1183[3 /*33*/], true, false) };
								}
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								ENTITY::_SET_ENTITY_HEALTH(Local_1183[2 /*33*/], 0, 0);
								ENTITY::_SET_ENTITY_HEALTH(Local_1183[3 /*33*/], 0, 0);
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 50);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 22, iVar1);
							}
							if (func_1736(Local_1183[2 /*33*/]) && func_1736(Local_1183[3 /*33*/]))
							{
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 22, iVar1);
							}
							break;
						case 22:
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[iVar1 /*182*/], 1.5f);
							func_1745(1);
							if (!__LIB_0__::func_138(PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_155[iVar1 /*182*/], false), __LIB_11__::func_358(Global_35, 2969.777f, 1397.582f, 43.0728f, 2967.662f, 1402.923f, 42.9913f)))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_155[iVar1 /*182*/], __LIB_11__::func_358(Global_35, 2969.777f, 1397.582f, 43.0728f, 2967.662f, 1402.923f, 42.9913f), 0.75f, 1, 0, 0);
							}
							if (func_1736(Local_1183[4 /*33*/]) && !func_1736(Local_1183[5 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_1183[5 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1183[5 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1183[5 /*33*/], -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 28, iVar1);
							}
							else if (func_1736(Local_1183[5 /*33*/]) && !func_1736(Local_1183[4 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_1183[4 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1183[4 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2968.713f, 1400.465f, 42.9312f, Local_1183[4 /*33*/], 1.5f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1183[4 /*33*/], -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 28, iVar1);
							}
							if (func_1736(Local_1183[4 /*33*/]) && func_1736(Local_1183[5 /*33*/]))
							{
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 4, iVar1);
							}
							break;
						case 28:
							if ((__LIB_0__::func_75(&uLocal_3571) && (__LIB_0__::func_265(&uLocal_3571) > 0.5f || PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/]))) && (!func_1736(Local_752[4 /*33*/]) || !func_1736(Local_1183[5 /*33*/])))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								Local_135.f_3 = { 2969.6f, 1395.19f, 43.04f };
								if (__LIB_0__::func_272(Local_1183[4 /*33*/], 0))
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1183[4 /*33*/], true, false) };
								}
								else
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1183[5 /*33*/], true, false) };
								}
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								ENTITY::_SET_ENTITY_HEALTH(Local_1183[4 /*33*/], 0, 0);
								ENTITY::_SET_ENTITY_HEALTH(Local_1183[5 /*33*/], 0, 0);
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 50);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 23, iVar1);
							}
							if (func_1736(Local_1183[4 /*33*/]) && func_1736(Local_1183[5 /*33*/]))
							{
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 4, iVar1);
							}
							break;
						case 4:
							func_1745(1);
							if (func_1736(Local_752[7 /*33*/]) && !func_1736(Local_752[8 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_752[8 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_752[8 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_752[8 /*33*/], -1, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 40f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 5, iVar1);
							}
							else if (func_1736(Local_752[8 /*33*/]) && !func_1736(Local_752[7 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_752[7 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_752[7 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_752[7 /*33*/], -1, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 40f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 5, iVar1);
							}
							if (func_1736(Local_752[7 /*33*/]) && func_1736(Local_752[8 /*33*/]))
							{
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_1183[8 /*33*/], 2000, false, 1);
								TASK::TASK_COMBAT_PED(0, Local_1183[8 /*33*/], 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 40f, 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, 2959.997f, 1380.05f, 51.1171f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 32, iVar1);
							}
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[iVar1 /*182*/], 1.5f);
							break;
						case 5:
							if ((__LIB_0__::func_75(&uLocal_3571) && ((__LIB_0__::func_265(&uLocal_3571) > 0.3f && PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/])) || __LIB_0__::func_265(&uLocal_3571) > 1.2f)) && (!func_1736(Local_752[7 /*33*/]) || !func_1736(Local_752[8 /*33*/])))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								if (__LIB_0__::func_272(Local_752[7 /*33*/], 0))
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[7 /*33*/], true, false) };
								}
								else
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[8 /*33*/], true, false) };
								}
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								ENTITY::_SET_ENTITY_HEALTH(Local_752[7 /*33*/], 0, 0);
								ENTITY::_SET_ENTITY_HEALTH(Local_752[8 /*33*/], 0, 0);
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 4, iVar1);
							}
							if (func_1736(Local_752[7 /*33*/]) && func_1736(Local_752[8 /*33*/]))
							{
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								__LIB_1__::func_148(&uLocal_3528);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 4, iVar1);
							}
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[iVar1 /*182*/], 1.5f);
							break;
						case 32:
							func_1745(1);
							if (!__LIB_0__::func_138(PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_155[iVar1 /*182*/], false), __LIB_11__::func_358(Global_35, 2969.777f, 1397.582f, 43.0728f, 2967.662f, 1402.923f, 42.9913f)))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_155[iVar1 /*182*/], __LIB_11__::func_358(Global_35, 2969.777f, 1397.582f, 43.0728f, 2967.662f, 1402.923f, 42.9913f), 0.75f, 1, 0, 0);
							}
							if ((ANIMSCENE::_0xF94692EB9DC15D74(uLocal_126[4], 0) || ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_126[4]) > 7f) && !func_1736(Local_1183[8 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_1183[8 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1183[8 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1183[8 /*33*/], -1, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 40f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 33, iVar1);
							}
							if (func_1736(Local_1183[8 /*33*/]))
							{
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 23, iVar1);
							}
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[iVar1 /*182*/], 1.5f);
							break;
						case 33:
							if ((__LIB_0__::func_75(&uLocal_3571) && ((__LIB_0__::func_265(&uLocal_3571) > 0.3f && PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/])) || __LIB_0__::func_265(&uLocal_3571) > 1.2f)) && !func_1736(Local_1183[8 /*33*/]))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1183[8 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								ENTITY::_SET_ENTITY_HEALTH(Local_1183[8 /*33*/], 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 32, iVar1);
							}
							if (func_1736(Local_1183[8 /*33*/]))
							{
								func_1453(0, 2969.777f, 1397.582f, 43.0728f, 1f, 2967.662f, 1402.923f, 42.9913f, 0, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 23, iVar1);
							}
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[iVar1 /*182*/], 1.5f);
							break;
						case 23:
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[iVar1 /*182*/], 1.5f);
							func_1745(1);
							if (!__LIB_0__::func_138(PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_155[iVar1 /*182*/], false), __LIB_11__::func_358(Global_35, 2969.777f, 1397.582f, 43.0728f, 2967.662f, 1402.923f, 42.9913f)))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_155[iVar1 /*182*/], __LIB_11__::func_358(Global_35, 2969.777f, 1397.582f, 43.0728f, 2967.662f, 1402.923f, 42.9913f), 0.75f, 1, 0, 0);
							}
							if (func_1736(Local_1183[6 /*33*/]) && !func_1736(Local_1183[7 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_1183[7 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1183[7 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1183[7 /*33*/], -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 29, iVar1);
							}
							else if (func_1736(Local_1183[7 /*33*/]) && !func_1736(Local_1183[6 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 100);
								__LIB_2__::func_279(Local_1183[6 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1183[6 /*33*/], false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2968.713f, 1400.465f, 42.9312f, Local_1183[6 /*33*/], 1.5f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1183[6 /*33*/], -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 29, iVar1);
							}
							if (func_1736(Local_1183[6 /*33*/]) && func_1736(Local_1183[7 /*33*/]))
							{
								func_1453(0, 2961.052f, 1378.119f, 50.2243f, 0.75f, 0f, 0f, 0f, 0, 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2957.544f, 1387.591f, 42.8766f, 2f, 20000, 2f, 2049, 40000f);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(4), 3, 133216, -1, 0, 0, -1);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2957.089f, 1377.564f, 50.3226f, Local_520[0 /*33*/], 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 2561, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_520[0 /*33*/], -1, false, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar1 /*182*/], iLocal_38, 0.3f, 0.3f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3528);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 7, iVar1);
							}
							break;
						case 29:
							if ((__LIB_0__::func_75(&uLocal_3571) && (__LIB_0__::func_265(&uLocal_3571) > 0.5f || PED::IS_PED_SHOOTING(Local_155[iVar1 /*182*/]))) && (!func_1736(Local_752[6 /*33*/]) || !func_1736(Local_1183[7 /*33*/])))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar1 /*182*/], 0), true, false) };
								Local_135.f_3 = { 2969.6f, 1395.19f, 43.04f };
								if (__LIB_0__::func_272(Local_1183[6 /*33*/], 0))
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1183[6 /*33*/], true, false) };
								}
								else
								{
									Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1183[7 /*33*/], true, false) };
								}
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar1 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar1 /*182*/];
								Local_135.f_9 = Local_155[iVar1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&uLocal_3571);
								ENTITY::_SET_ENTITY_HEALTH(Local_1183[6 /*33*/], 0, 0);
								ENTITY::_SET_ENTITY_HEALTH(Local_1183[7 /*33*/], 0, 0);
								PED::SET_PED_ACCURACY(Local_155[iVar1 /*182*/], 50);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[iVar1 /*182*/], 50f, 0, 0);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 23, iVar1);
							}
							if (func_1736(Local_1183[6 /*33*/]) && func_1736(Local_1183[7 /*33*/]))
							{
								func_1453(0, 2961.052f, 1378.119f, 50.2243f, 0.75f, 0f, 0f, 0f, 0, 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2957.544f, 1387.591f, 42.8766f, 2f, 20000, 2f, 2049, 40000f);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(4), 3, 133216, -1, 0, 0, -1);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2957.089f, 1377.564f, 50.3226f, Local_520[0 /*33*/], 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 2561, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_520[0 /*33*/], -1, false, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar1 /*182*/], iLocal_38, 0.3f, 0.3f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								__LIB_1__::func_148(&uLocal_3528);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 7, iVar1);
							}
							break;
						case 7:
							__LIB_4__::func_982(Local_155[iVar1 /*182*/], 2f);
							if (__LIB_1__::func_205(Global_35, iLocal_3430[39], 1, 0))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 2952.923f, 1371.223f, 55.2543f, 2937.871f, 1380.813f, 57.95f, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 4202496, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, 2935.273f, 1381.246f, 58.2308f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(0, 2952.923f, 1371.223f, 55.2543f, 1.5f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), -1, 2);
							}
							break;
					}
					break;
				case 1:
					switch (Local_155[iVar1 /*182*/].f_169)
					{
						case 0:
							PED::REGISTER_TARGET(Local_155[iVar1 /*182*/], Local_520[2 /*33*/], 1);
							func_1209(&(Local_155[iVar1 /*182*/].f_169), 19, iVar1);
							break;
						case 19:
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false))
							{
								func_1451(Local_155[1 /*182*/], 2959.161f, 1380.676f, 50.2244f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 25, iVar1);
							}
							func_1739();
							break;
						case 25:
							if (((ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_126[4]) >= 5.75f) && !PED::IS_PED_DEAD_OR_DYING(Local_1183[1 /*33*/], true)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::_0xC6A6789BB405D11C(Local_155[1 /*182*/], 1), true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_752[1 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_153(Local_155[1 /*182*/], 0, 1, 0);
								Local_135.f_11 = Local_155[1 /*182*/];
								Local_135.f_9 = Local_155[1 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 2, iVar1);
							}
							func_1739();
							break;
						case 2:
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_126[4]) >= 7.2f))
							{
								ENTITY::_SET_ENTITY_HEALTH(Local_1183[1 /*33*/], 0, Local_155[1 /*182*/]);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 3, iVar1);
							}
							break;
						case 3:
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false) || ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_126[4], "MICAH"))
							{
								PED::_0x2208438012482A1A(Local_155[1 /*182*/], false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_155[1 /*182*/], 50f, 0, 0);
								if (__LIB_0__::func_272(Local_1183[1 /*33*/], 0))
								{
									__LIB_1__::func_864(Local_1183[1 /*33*/], 0, 0);
								}
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 31, iVar1);
							}
							break;
						case 31:
							if ((func_1266(&Local_1183, 1, 5, 1) == 0 && ENTITY::IS_ENTITY_DEAD(Local_752[7 /*33*/])) && ENTITY::IS_ENTITY_DEAD(Local_752[8 /*33*/]))
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_155[1 /*182*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 0, false);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_155[1 /*182*/], true);
								PED::_0x789DABD18E9024DB(Local_155[1 /*182*/], 13, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_520[0 /*33*/], true);
								ENTITY::FREEZE_ENTITY_POSITION(Local_520[0 /*33*/], false);
								ENTITY::SET_ENTITY_VISIBLE(Local_520[0 /*33*/], true);
								ENTITY::SET_ENTITY_COLLISION(Local_520[0 /*33*/], true, false);
								PED::_0x789DABD18E9024DB(Local_520[0 /*33*/], 13, 0);
								TASK::TASK_LOOK_AT_ENTITY(Local_520[0 /*33*/], Local_155[iVar1 /*182*/], -1, 0, 51, 1);
								PED::_0x630E7B01F091A197(Local_155[1 /*182*/], joaat("GS_FACE_TO_FACE"));
								PED::_0x630E7B01F091A197(Local_520[0 /*33*/], joaat("GS_FACE_TO_FACE"));
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2954.524f, 1374.042f, 50.3228f, 3f, 20000, 0.25f, 133696, 40000f);
								TASK::TASK_GRAPPLE(0, Local_520[0 /*33*/], joaat("AR_GRAPPLE_FRONT_FROM_FRONT"), 1, 1065353216 /* Float: 1f */, 1, 16777216);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[1 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1451(Local_155[1 /*182*/], 2955.572f, 1374.573f, 50.3228f, 0.75f, 0f, 0f, 0f, 0, 1);
								__LIB_1__::func_148(&uLocal_3522);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 20, iVar1);
							}
							break;
						case 20:
							if (func_1266(&Local_1183, 6, 8, 1) < 1 && ((__LIB_1__::func_205(Global_35, iLocal_3430[39], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_3430[32], 1, 0)) || __LIB_1__::func_205(Global_35, iLocal_3430[31], 1, 0)))
							{
								if (!func_1736(Local_520[0 /*33*/]))
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 27, true);
									ENTITY::SET_ENTITY_INVINCIBLE(Local_520[0 /*33*/], false);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_520[0 /*33*/], false);
									__LIB_2__::func_279(Local_520[0 /*33*/], 1);
									PED::_0xEAE3B5B019C8D23F(Local_155[1 /*182*/], 4);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 30, false);
									__LIB_1__::func_148(&uLocal_3571);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 22, iVar1);
								}
								else
								{
									__LIB_1__::func_148(&uLocal_3571);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 22, iVar1);
								}
							}
							if (ANIMSCENE::_0xF94692EB9DC15D74(uLocal_126[4], 0))
							{
								if ((!__LIB_0__::func_272(Local_520[0 /*33*/], 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_155[1 /*182*/], 242628503, true) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_155[1 /*182*/], 242628503, true) != 1)
								{
									VOLUME::_DELETE_VOLUME(iLocal_3430[38]);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2957.803f, 1371.773f, 51.0718f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_AIM_GUN_AT_COORD(0, 2961.042f, 1375.636f, 55.7882f, -1, false, true);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar1 /*182*/], iLocal_38);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								}
								else if (((__LIB_0__::func_272(Local_520[0 /*33*/], 0) && !__LIB_1__::func_205(Global_35, iLocal_3430[39], 1, 0)) && __LIB_0__::func_665(Local_155[1 /*182*/], Local_520[0 /*33*/], 1, 1) < 1.5f) && !__LIB_17__::func_516(&(Local_155[1 /*182*/])))
								{
									if (__LIB_0__::func_272(Local_1183[1 /*33*/], 0))
									{
										ENTITY::_SET_ENTITY_HEALTH(Local_1183[1 /*33*/], 0, 0);
									}
									ENTITY::FREEZE_ENTITY_POSITION(Local_520[0 /*33*/], false);
									func_849(Local_155[1 /*182*/], 2954.524f, 1374.042f, 50.3228f, 250.1182f, 2, 1073741824 /* Float: 2f */);
									func_849(Local_520[0 /*33*/], 2955.473f, 1373.216f, 50.3228f, 112.165f, 2, 1073741824 /* Float: 2f */);
									PED::SET_PED_COMBAT_MOVEMENT(Local_155[1 /*182*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 0, false);
									ENTITY::SET_ENTITY_INVINCIBLE(Local_155[1 /*182*/], true);
									PED::_0x789DABD18E9024DB(Local_155[1 /*182*/], 13, 0);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_520[0 /*33*/], true);
									ENTITY::SET_ENTITY_VISIBLE(Local_520[0 /*33*/], true);
									ENTITY::SET_ENTITY_COLLISION(Local_520[0 /*33*/], true, false);
									PED::_0x789DABD18E9024DB(Local_520[0 /*33*/], 13, 0);
									TASK::TASK_LOOK_AT_ENTITY(Local_520[0 /*33*/], Local_155[1 /*182*/], -1, 0, 51, 1);
									func_1451(Local_155[1 /*182*/], 2955.572f, 1374.573f, 50.3228f, 1.75f, 0f, 0f, 0f, 0, 1);
									PED::_0x630E7B01F091A197(Local_155[1 /*182*/], joaat("GS_FACE_TO_FACE"));
									PED::_0x630E7B01F091A197(Local_520[0 /*33*/], joaat("GS_FACE_TO_FACE"));
									TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(Local_155[1 /*182*/], Local_520[0 /*33*/], joaat("AR_GRAPPLE_FRONT_FROM_FRONT"), 0, 0, 1, 16777216);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 21, iVar1);
								}
							}
							break;
						case 21:
							if (func_1266(&Local_1183, 6, 8, 1) < 1 && ((__LIB_1__::func_205(Global_35, iLocal_3430[39], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_3430[32], 1, 0)) || __LIB_1__::func_205(Global_35, iLocal_3430[31], 1, 0)))
							{
								if (!func_1736(Local_520[0 /*33*/]))
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 27, true);
									ENTITY::SET_ENTITY_INVINCIBLE(Local_520[0 /*33*/], false);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_520[0 /*33*/], false);
									__LIB_2__::func_279(Local_520[0 /*33*/], 1);
									PED::_0xEAE3B5B019C8D23F(Local_155[1 /*182*/], 4);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 30, false);
									__LIB_1__::func_148(&uLocal_3571);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 22, iVar1);
								}
								else
								{
									__LIB_1__::func_148(&uLocal_3571);
									func_1209(&(Local_155[iVar1 /*182*/].f_169), 22, iVar1);
								}
							}
							break;
						case 22:
							if (!__LIB_1__::func_205(Global_35, iLocal_3430[39], 1, 0) && !__LIB_2__::func_167(Local_155[1 /*182*/], 1))
							{
								TASK::TASK_AIM_GUN_AT_COORD(Local_155[1 /*182*/], 2960.133f, 1378.158f, 50.2244f, -1, false, false);
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar1 /*182*/].f_169), 23, iVar1);
							}
							break;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1251(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	iVar5 = __LIB_4__::func_971(uParam0);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar3 = iVar0;
		if (__LIB_0__::func_272(Local_520[iVar3 /*33*/], 0))
		{
			__LIB_4__::func_982(Local_520[iVar3 /*33*/], 2f);
			switch (Local_520[iVar3 /*33*/].f_12)
			{
				case 0:
					if (iVar3 == 0)
					{
						__LIB_0__::func_19(&(Local_520[iVar3 /*33*/].f_12), 6);
					}
					else
					{
						__LIB_0__::func_19(&(Local_520[iVar3 /*33*/].f_12), 12);
					}
					break;
				case 12:
					PED::SET_PED_CONFIG_FLAG(Local_520[iVar3 /*33*/], 265, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_520[iVar3 /*33*/], joaat("REL_PLAYER_ENEMY"));
					PED::SET_PED_COMBAT_MOVEMENT(Local_520[iVar3 /*33*/], 1);
					PED::SET_COMBAT_FLOAT(Local_520[iVar3 /*33*/], 1, 4f);
					PED::SET_COMBAT_FLOAT(Local_520[iVar3 /*33*/], 3, 0.75f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_520[iVar3 /*33*/], 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_520[iVar3 /*33*/], 35, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_520[iVar3 /*33*/], 50, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_520[iVar3 /*33*/], 0, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_520[iVar3 /*33*/], 512, true);
					PED::SET_PED_MAX_TIME_IN_WATER(Local_520[iVar3 /*33*/], 0f);
					__LIB_0__::func_19(&(Local_520[iVar3 /*33*/].f_12), 13);
					break;
				case 13:
					if (!MAP::DOES_BLIP_EXIST(Local_520[iVar3 /*33*/].f_1))
					{
						Local_520[iVar3 /*33*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_520[iVar3 /*33*/]);
						MAP::_BLIP_SET_MODIFIER(Local_520[iVar3 /*33*/].f_1, -1034486097);
					}
					if (iVar3 == 4 && func_1736(Local_520[2 /*33*/]))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 3016.427f, 1337.151f, 41.7365f, Local_155[0 /*182*/], 3f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 15f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
						TASK::TASK_PERFORM_SEQUENCE(Local_520[iVar3 /*33*/], iLocal_38);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
						__LIB_0__::func_19(&(Local_520[iVar3 /*33*/].f_12), 14);
					}
					break;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_272(Local_752[iVar1 /*33*/], 0))
		{
			switch (Local_752[iVar1 /*33*/].f_12)
			{
				case 0:
					if (iVar1 == 3)
					{
						if (func_1736(Local_752[0 /*33*/]) || func_1736(Local_752[1 /*33*/]))
						{
							func_1451(Local_752[3 /*33*/], 2988.2f, 1347.24f, 43.11f, 1f, 2988.2f, 1347.24f, 43.11f, 0, 1);
							__LIB_0__::func_19(&(Local_520[iVar1 /*33*/].f_12), 1);
						}
					}
					else if (iVar1 == 4)
					{
						if (func_1736(Local_752[0 /*33*/]) || func_1736(Local_752[1 /*33*/]))
						{
							func_1451(Local_752[4 /*33*/], 2989.17f, 1354.18f, 43.17f, 1f, 2989.17f, 1354.18f, 43.17f, 0, 1);
							__LIB_0__::func_19(&(Local_520[iVar1 /*33*/].f_12), 1);
						}
					}
					else if (iVar1 == 5)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_752[iVar1 /*33*/], 0))
						{
							__LIB_4__::func_982(Local_752[iVar1 /*33*/], 1073741824 /* Float: 2f */);
						}
					}
					if (PED::IS_PED_FALLING(Local_752[iVar1 /*33*/]))
					{
						ENTITY::_SET_ENTITY_HEALTH(Local_752[iVar1 /*33*/], 0, 0);
					}
					break;
				case 1:
					break;
			}
		}
		iVar0++;
	}
	if (!func_1206(32768))
	{
		if (func_1239(4, 5, 1))
		{
			func_1244(&Local_1183, 4, 5, 0);
			__LIB_1__::func_148(&uLocal_3531);
			func_1207(32768);
		}
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = iVar0;
		if (__LIB_0__::func_272(Local_2704[iVar2 /*33*/], 0))
		{
			if (iVar2 == 0)
			{
				if (__LIB_0__::func_665(Global_35, Local_2704[iVar2 /*33*/], 1, 1) < 15f && !func_1222(1024))
				{
					func_1719(1024);
					__LIB_1__::func_265(Local_2704[iVar2 /*33*/], "PANIC_HELP", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 2, 1);
					__LIB_1__::func_148(&(Local_2704[iVar2 /*33*/].f_3));
				}
				else if ((__LIB_0__::func_665(Global_35, Local_2704[iVar2 /*33*/], 1, 1) < 10f && __LIB_0__::func_75(&(Local_2704[iVar2 /*33*/].f_3))) && __LIB_0__::func_265(&(Local_2704[iVar2 /*33*/].f_3)) > 5f)
				{
					__LIB_1__::func_265(Local_2704[iVar2 /*33*/], "PANIC_HELP", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 0, 1);
					__LIB_1__::func_148(&(Local_2704[iVar2 /*33*/].f_3));
				}
			}
			if (iVar2 == 1)
			{
				if (__LIB_0__::func_665(Global_35, Local_2704[iVar2 /*33*/], 1, 1) < 12f && !func_1222(2048))
				{
					func_1719(2048);
					__LIB_1__::func_265(Local_2704[iVar2 /*33*/], "PANIC_HELP", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 0, 1);
					__LIB_1__::func_148(&(Local_2704[iVar2 /*33*/].f_3));
				}
				else if ((__LIB_0__::func_665(Global_35, Local_2704[iVar2 /*33*/], 1, 1) < 10f && __LIB_0__::func_75(&(Local_2704[iVar2 /*33*/].f_3))) && __LIB_0__::func_265(&(Local_2704[iVar2 /*33*/].f_3)) > 5f)
				{
					__LIB_1__::func_265(Local_2704[iVar2 /*33*/], "PANIC_HELP", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 0, 1);
					__LIB_1__::func_148(&(Local_2704[iVar2 /*33*/].f_3));
				}
			}
			if (iVar2 == 2)
			{
				if (__LIB_0__::func_665(Global_35, Local_2704[iVar2 /*33*/], 1, 1) < 10f && !func_1222(4096))
				{
					func_1719(4096);
					__LIB_1__::func_265(Local_2704[iVar2 /*33*/], "GUN_RUN", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 0, 1);
					__LIB_1__::func_148(&(Local_2704[iVar2 /*33*/].f_3));
				}
				else if ((__LIB_0__::func_665(Global_35, Local_2704[iVar2 /*33*/], 1, 1) < 10f && __LIB_0__::func_75(&(Local_2704[iVar2 /*33*/].f_3))) && __LIB_0__::func_265(&(Local_2704[iVar2 /*33*/].f_3)) > 5f)
				{
					__LIB_1__::func_265(Local_2704[iVar2 /*33*/], "GUN_RUN", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 0, 1);
					__LIB_1__::func_148(&(Local_2704[iVar2 /*33*/].f_3));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar4 = iVar0;
		if (__LIB_0__::func_272(Local_1183[iVar4 /*33*/], 0))
		{
			switch (Local_1183[iVar4 /*33*/].f_12)
			{
				case 0:
					__LIB_0__::func_19(&(Local_1183[iVar4 /*33*/].f_12), 1);
					break;
				case 1:
					if (iVar5 >= 2 || __LIB_0__::func_665(Local_1183[iVar4 /*33*/], Global_35, 1, 1) < 20f)
					{
						if (iVar4 == 4 || iVar4 == 5)
						{
							if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[14], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_155[0 /*182*/], iLocal_3430[14], true, 0)) || func_1259(&Local_1183, 18, -1) < 4)
							{
								__LIB_1__::func_148(&(Local_1183[iVar4 /*33*/].f_3));
								__LIB_0__::func_19(&(Local_1183[iVar4 /*33*/].f_12), 2);
							}
						}
						else
						{
							__LIB_1__::func_148(&(Local_1183[iVar4 /*33*/].f_3));
							__LIB_0__::func_19(&(Local_1183[iVar4 /*33*/].f_12), 2);
						}
					}
					break;
				case 2:
					fVar6 = 0f;
					if (iVar4 == 1)
					{
						fVar6 = 7f;
						Local_1183[1 /*33*/].f_14 = { func_874(2, func_1748(1, 0)) };
					}
					if (__LIB_0__::func_75(&(Local_1183[iVar4 /*33*/].f_3)) && __LIB_0__::func_264(&(Local_1183[iVar4 /*33*/].f_3)) > fVar6)
					{
						if (iVar4 == 4)
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(17), 0, 24584, -1, 0, 1, -1);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 50f, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_1183[iVar4 /*33*/], iLocal_38);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							func_1451(Local_1183[iVar4 /*33*/], 2964.472f, 1403.492f, 43.0235f, 5f, 0f, 0f, 0f, 0, 1);
						}
						else if (iVar4 == 5)
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(18), 0, 8, -1, 0, 1, -1);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 50f, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_1183[iVar4 /*33*/], iLocal_38);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							func_1451(Local_1183[iVar4 /*33*/], 2964.472f, 1403.492f, 43.0235f, 5f, 0f, 0f, 0f, 0, 1);
						}
						else if (iVar4 == 7)
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 50f, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_1183[iVar4 /*33*/], iLocal_38);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							func_1451(Local_1183[iVar4 /*33*/], 2964.472f, 1403.492f, 43.0235f, 5f, 0f, 0f, 0f, 0, 1);
						}
						else if (iVar4 != 1)
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), Global_35, 3f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 5, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 50f, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_1183[iVar4 /*33*/], iLocal_38);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							func_1451(Local_1183[iVar4 /*33*/], 2964.472f, 1403.492f, 43.0235f, 5f, 0f, 0f, 0f, 0, 1);
						}
						__LIB_0__::func_19(&(Local_1183[iVar4 /*33*/].f_12), 3);
					}
					break;
				case 3:
					if (iVar4 == 3)
					{
						func_1451(Local_1183[iVar4 /*33*/], func_874(2, func_1748(iVar4, 0)), (1f * 2f), 0f, 0f, 0f, 0, 1);
						if (ENTITY::IS_ENTITY_AT_COORD(Local_1183[iVar4 /*33*/], func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 1.5f, 1.5f, 3f, false, true, 0))
						{
							__LIB_0__::func_19(&(Local_1183[iVar4 /*33*/].f_12), 12);
						}
					}
					else if (iVar4 == 7)
					{
						func_1451(Local_1183[iVar4 /*33*/], func_874(2, func_1748(iVar4, 0)), 0.75f, 0f, 0f, 0f, 0, 1);
						if (ENTITY::IS_ENTITY_AT_COORD(Local_1183[iVar4 /*33*/], func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 1.5f, 1.5f, 3f, false, true, 0))
						{
							__LIB_0__::func_19(&(Local_1183[iVar4 /*33*/].f_12), 12);
						}
					}
					else if (iVar4 != 1)
					{
						func_1451(Local_1183[iVar4 /*33*/], func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 3f, 0f, 0f, 0f, 0, 1);
						if (ENTITY::IS_ENTITY_AT_COORD(Local_1183[iVar4 /*33*/], func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 1.5f, 1.5f, 3f, false, true, 0))
						{
							__LIB_0__::func_19(&(Local_1183[iVar4 /*33*/].f_12), 12);
						}
					}
					break;
				case 12:
					if (iVar4 == 1)
					{
						func_1451(Local_1183[iVar4 /*33*/], Local_1183[1 /*33*/].f_14, 1f, 0f, 0f, 0f, 1, 1);
					}
					else
					{
						func_1451(Local_1183[iVar4 /*33*/], func_874(2, func_1748(iVar4, Local_1183[iVar4 /*33*/].f_13)), 1f, 0f, 0f, 0f, 1, 1);
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1183[iVar4 /*33*/], joaat("REL_PLAYER_ENEMY"));
					TASK::TASK_COMBAT_PED(Local_1183[iVar4 /*33*/], Global_35, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_1183[iVar4 /*33*/], 2);
					PED::SET_COMBAT_FLOAT(Local_1183[iVar4 /*33*/], 1, 4f);
					PED::SET_COMBAT_FLOAT(Local_1183[iVar4 /*33*/], 3, 0.75f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1183[iVar4 /*33*/], 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1183[iVar4 /*33*/], 35, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1183[iVar4 /*33*/], 50, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1183[iVar4 /*33*/], 0, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_1183[iVar4 /*33*/], 512, true);
					PED::SET_PED_SHOOT_RATE(Local_1183[iVar4 /*33*/], 160);
					PED::_0xD05AD61F242C626B(Local_155[1 /*182*/], 0f);
					__LIB_0__::func_19(&(Local_1183[iVar4 /*33*/].f_12), 13);
					break;
				case 13:
					if (!MAP::DOES_BLIP_EXIST(Local_1183[iVar4 /*33*/].f_1))
					{
						Local_1183[iVar4 /*33*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1183[iVar4 /*33*/]);
						MAP::_BLIP_SET_MODIFIER(Local_1183[iVar4 /*33*/].f_1, -1034486097);
					}
					if (iVar4 == 3)
					{
						if (!__LIB_0__::func_272(Local_1183[2 /*33*/], 0))
						{
							if (!func_1206(8192))
							{
								func_1207(8192);
								func_1451(Local_1183[iVar4 /*33*/], func_874(2, func_1748(iVar4, 1)), 1f, 0f, 0f, 0f, 1, 1);
							}
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1252(var uParam0)
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
	{
		if (!__LIB_0__::func_75(&uLocal_3577))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2927.1f, 1385.1f, 57.8f, joaat("ANN_MINEOFFICE_INT_MAIN")) && func_1239(15, 17, 1))
			{
				func_849(Local_1183[15 /*33*/], 2936.948f, 1385.826f, 56.8306f, 137.7614f, 32, 1073741824 /* Float: 2f */);
				func_849(Local_1183[16 /*33*/], 2921.929f, 1390.71f, 55.2547f, 54.7054f, 32, 1073741824 /* Float: 2f */);
				func_849(Local_1183[17 /*33*/], 2915.762f, 1385.121f, 57.0187f, 2.1321f, 32, 1073741824 /* Float: 2f */);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_1183[15 /*33*/], -1f);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_1183[16 /*33*/], -1f);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_1183[17 /*33*/], -1f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1183[15 /*33*/], 2936.948f, 1385.826f, 56.8306f, 5f, 0, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1183[16 /*33*/], 2921.929f, 1390.71f, 55.2547f, 5f, 0, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1183[17 /*33*/], 2915.762f, 1385.121f, 57.0187f, 5f, 0, 0, 0);
				Local_1183[15 /*33*/].f_12 = -1;
				Local_1183[16 /*33*/].f_12 = -1;
				Local_1183[17 /*33*/].f_12 = -1;
				__LIB_1__::func_148(&uLocal_3577);
			}
			else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2887.8f, 1399.1f, 66.8f, joaat("ANN_COALBREAKER_INT_MAIN")) && func_1239(15, 17, 1))
			{
				func_849(Local_1183[15 /*33*/], 2886.796f, 1400.686f, 63.9425f, 78.5985f, 32, 1073741824 /* Float: 2f */);
				func_849(Local_1183[16 /*33*/], 2890.015f, 1393.24f, 63.9442f, 109.864f, 32, 1073741824 /* Float: 2f */);
				func_849(Local_1183[17 /*33*/], 2892.333f, 1392.748f, 63.939f, 4.1689f, 32, 1073741824 /* Float: 2f */);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_1183[15 /*33*/], -1f);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_1183[16 /*33*/], -1f);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_1183[17 /*33*/], -1f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1183[15 /*33*/], 2886.796f, 1400.686f, 63.9425f, 5f, 0, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1183[16 /*33*/], 2890.015f, 1393.24f, 63.9442f, 5f, 0, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1183[17 /*33*/], 2892.333f, 1392.748f, 63.939f, 5f, 0, 0, 0);
				Local_1183[15 /*33*/].f_12 = -1;
				Local_1183[16 /*33*/].f_12 = -1;
				Local_1183[17 /*33*/].f_12 = -1;
				__LIB_1__::func_148(&uLocal_3577);
			}
		}
		else if (__LIB_0__::func_264(&uLocal_3577) > 4f && !PED::GET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 138, true))
		{
			__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 1, 1);
		}
	}
}

void func_1253()
{
	float fVar0;
	if (CLOCK::GET_CLOCK_HOURS() < 9)
	{
		if (CLOCK::GET_CLOCK_HOURS() == 8 && __LIB_0__::func_94(Global_35, 3016.182f, 1347.674f, 41.4418f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(2983.37f, 1391.938f, 43.4551f, 3016.182f, 1347.674f, 41.4418f, true))
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(false);
			if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 250)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(250);
			}
		}
		else
		{
			fVar0 = (__LIB_0__::func_94(Global_35, 2983.37f, 1391.938f, 43.4551f, 1) / MISC::GET_DISTANCE_BETWEEN_COORDS(3016.182f, 1347.674f, 41.4418f, 2983.37f, 1391.938f, 43.4551f, true));
			fVar0 = __LIB_0__::func_251(((fVar0 * -1f) + 1f), 0f, 1f);
			__LIB_5__::func_375(9, 0, fVar0, &Local_3603);
		}
	}
	else
	{
		if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
		{
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		}
		CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	}
}

void func_1254(var uParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3409[3]))
	{
		VEHICLE::_0xA19447D83294E29F(uLocal_3409[3], &iVar0, &iVar1);
		if (iVar1 < iVar0)
		{
			__LIB_5__::func_505(uParam0, "TRN1_FAIL_HORSE", "", 1, 0);
		}
	}
}

bool func_1255(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1) && iParam9 == joaat("BLIP_STYLE_COMPANION"))
	{
		iParam9 = 408396114;
	}
	bVar0 = __LIB_17__::func_519(uParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), sParam2, sParam3, 1, sParam4, iParam5, fParam7, fParam8);
	if (__LIB_4__::func_938(uParam0) != 1 && __LIB_4__::func_937(uParam0, 64))
	{
		if (bParam10)
		{
			__LIB_10__::func_936(uParam0, iParam1, iParam9, bVar0, iParam6);
		}
		__LIB_4__::func_969(uParam0, 64);
	}
	return bVar0;
}

int func_1259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iParam2 != iVar0)
		{
			if (__LIB_0__::func_272((*iParam0)[iVar0 /*33*/], 11))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1261(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		iVar2 = iLocal_25;
		bVar3 = false;
		bVar4 = false;
		bVar5 = true;
		fVar6 = 270f;
		vVar7 = { 0f, 0f, 0f };
		vVar10 = { 0f, 0f, 0f };
		vVar13 = { 0f, 0f, 0f };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2704[iVar1 /*33*/]))
		{
			switch (iVar1)
			{
				case 0:
					vVar7 = { 2963.998f, 1411.105f, 43.1202f };
					vVar10 = { 2994.18f, 1389.263f, 42.8707f };
					vVar13 = { 3024.234f, 1442.846f, 45.9687f };
					break;
				case 1:
					if (__LIB_8__::func_864(Global_35, 2995.01f, 1385.575f, 43.0902f, 15f, 1, 1))
					{
						vVar7 = { 2996.962f, 1414.307f, 44.2449f };
					}
					else
					{
						vVar7 = { 2995.01f, 1385.575f, 43.0902f };
					}
					vVar10 = { 2999.305f, 1403.718f, 43.5271f };
					vVar13 = { 3012.173f, 1421.651f, 44.359f };
					iVar2 = iLocal_25;
					break;
				case 2:
					bVar3 = true;
					vVar7 = { 2996.499f, 1413.063f, 44.1659f };
					vVar10 = { 2995.35f, 1394.851f, 43.0964f };
					vVar13 = { 3005.39f, 1437.877f, 45.2155f };
					iVar2 = iLocal_25;
					break;
				case 3:
					vVar7 = { 2945.113f, 1381.587f, 55.2547f };
					vVar10 = { 2954.015f, 1379.538f, 55.2543f };
					iVar2 = iLocal_24;
					bVar4 = true;
					break;
				case 4:
					vVar7 = { 2922.388f, 1385.793f, 55.2547f };
					iVar2 = iLocal_24;
					break;
				case 5:
					vVar7 = { 2918.131f, 1385.694f, 56.2274f };
					iVar2 = iLocal_24;
					bVar4 = true;
					break;
				case 6:
					vVar7 = { 2889.645f, 1402.384f, 63.9409f };
					iVar2 = iLocal_24;
					break;
				case 7:
					vVar7 = { 2864.439f, 1401.347f, 67.2318f };
					iVar2 = iLocal_24;
					bVar5 = false;
					break;
			}
			if (!Local_2704[iVar1 /*33*/].f_17)
			{
				Local_2704[iVar1 /*33*/] = __LIB_1__::func_545(iVar2, vVar7, fVar6, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				Local_2704[iVar1 /*33*/].f_12 = 0;
				Local_2704[iVar1 /*33*/].f_17 = 1;
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2704[iVar1 /*33*/], true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_2704[iVar1 /*33*/], 3);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2704[iVar1 /*33*/], iLocal_3630);
				PED::SET_PED_CONFIG_FLAG(Local_2704[iVar1 /*33*/], 186, false);
				PED::SET_PED_CONFIG_FLAG(Local_2704[iVar1 /*33*/], 281, true);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_2704[iVar1 /*33*/], 4, true);
				PED::SET_PED_CONFIG_FLAG(Local_2704[iVar1 /*33*/], 277, true);
				PED::_0xD05AD61F242C626B(Local_2704[iVar1 /*33*/], 0f);
				__LIB_1__::func_991(Local_2704[iVar1 /*33*/], joaat("HONOR_EVENT_SCARE"));
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
				if (bVar3)
				{
					TASK::TASK_PAUSE(0, 3000);
				}
				if (!__LIB_0__::func_86(vVar10))
				{
					TASK::_TASK_FLEE_FROM_COORD(0, vVar7, vVar10, 10f, -1, 1536, 1077936128 /* Float: 3f */, 0);
				}
				if (!__LIB_0__::func_86(vVar13))
				{
					TASK::_TASK_FLEE_FROM_COORD(0, vVar7, vVar13, 50f, -1, 3840, 1077936128 /* Float: 3f */, 0);
				}
				if (bVar4)
				{
					TASK::TASK_SET_CROUCH_MOVEMENT(0, bVar5, 0, false);
					TASK::TASK_HANDS_UP(0, -1, Global_35, -1, false);
				}
				else
				{
					TASK::TASK_COWER(0, -1, Global_35, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
				TASK::TASK_PERFORM_SEQUENCE(Local_2704[iVar1 /*33*/], iLocal_38);
				if (bParam2)
				{
					return false;
				}
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1262(int iParam0, int iParam1)
{
	if (!__LIB_13__::func_666(*iParam0, iParam1))
	{
		__LIB_1__::func_683(iParam0, iParam1);
	}
}

void func_1263()
{
	int iVar0;
	vector3 vVar1;
	__LIB_2__::func_279(Local_752[5 /*33*/], 1);
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_410(12), &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(func_410(12), (iVar0 - 1), &vVar1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_752[5 /*33*/], vVar1, 0.75f, 0, 0, 0);
	TASK::CLEAR_PED_TASKS(Local_752[5 /*33*/], true, false);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_410(12), 0, 4128, -1, 0, 1, -1);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
	TASK::TASK_PERFORM_SEQUENCE(Local_752[5 /*33*/], iLocal_38);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2983.994f, 1391.871f, 43.4409f, Local_155[0 /*182*/], 3f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 45f, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
	TASK::TASK_PERFORM_SEQUENCE(Local_1083[0 /*33*/], iLocal_38);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
}

int func_1265(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*33*/], 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1266(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (bParam3)
		{
			if ((iParam0[iVar0 /*33*/])->f_17)
			{
				if (__LIB_0__::func_272((*iParam0)[iVar0 /*33*/], 0))
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
		}
		else if (__LIB_0__::func_272((*iParam0)[iVar0 /*33*/], 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1267(int iParam0)
{
	return __LIB_0__::func_27(iLocal_3520, iParam0);
}

void func_1268()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = VEHICLE::_0x635423D55CA84FC8(-593637311);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = VEHICLE::_0x8DF5F6A19F99F0D5(-593637311, iVar1);
		STREAMING::REQUEST_MODEL(iVar2, false);
		iVar1++;
	}
}

bool func_1269()
{
	int iVar0;
	int iVar1;
	iVar0 = VEHICLE::_0x635423D55CA84FC8(-593637311);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(VEHICLE::_0x8DF5F6A19F99F0D5(-593637311, iVar1)))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_1270(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!__LIB_0__::func_27(iLocal_3517, 0) && !ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
	{
		__LIB_1__::func_683(&iLocal_3517, 0);
		(*uParam0)[0] = VEHICLE::_CREATE_MISSION_TRAIN(-593637311, vParam1, bParam4, false, true, true);
		return false;
	}
	else if (!__LIB_0__::func_27(iLocal_3517, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[0]) && VEHICLE::_0xBD3C4A2ED509205E((*uParam0)[0]))
		{
			__LIB_1__::func_683(&iLocal_3517, 1);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_3403[0], 0f);
			return true;
		}
		return false;
	}
	return true;
}

void func_1271()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = VEHICLE::_0x635423D55CA84FC8(-593637311);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = VEHICLE::_0x8DF5F6A19F99F0D5(-593637311, iVar1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		iVar1++;
	}
}

void func_1272(int iParam0)
{
	if (!func_1267(iParam0))
	{
		__LIB_1__::func_683(&iLocal_3520, iParam0);
	}
}

void func_1274(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		__LIB_0__::func_490(&(Local_2704[iVar1 /*33*/]), 0);
		iVar0++;
	}
}

void func_1275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		__LIB_0__::func_490(&(Local_520[iVar1 /*33*/]), 0);
		iVar0++;
	}
}

void func_1276(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		__LIB_0__::func_490(&(Local_752[iVar1 /*33*/]), 0);
		iVar0++;
	}
}

void func_1277(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		__LIB_0__::func_490(&(Local_1183[iVar1 /*33*/]), 0);
		iVar0++;
	}
}

void func_1278()
{
	Local_3603.f_3 = 0;
}

void func_1279()
{
	STREAMING::REQUEST_MODEL(iLocal_28, false);
	STREAMING::REQUEST_MODEL(iLocal_29, false);
}

bool func_1280()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_28))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_29))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT")))
	{
		return false;
	}
	return true;
}

void func_1281()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[5], "Coach02", uLocal_3409[3], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[5], "MicahBell", Local_155[1 /*182*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_126[5], "dutch", Local_155[0 /*182*/], 0);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_126[5], "PL_ENTER", true);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_126[5], "b_vehicle_loop", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_126[5], "b_ped_loop", false, false);
	ANIMSCENE::START_ANIM_SCENE(uLocal_126[5]);
}

void func_1283(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			__LIB_1__::func_148(&uLocal_3559);
			if (!__LIB_4__::func_948(uParam0, 4))
			{
				if (__LIB_5__::func_314(uParam0, "TRN1_OBJ3", 0))
				{
					__LIB_5__::func_372(uParam0, 2);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_155[0 /*182*/], true);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_155[1 /*182*/], true);
				}
			}
			else if (__LIB_5__::func_314(uParam0, "TRN1_OBJ3", 0))
			{
				__LIB_5__::func_372(uParam0, 2);
			}
			break;
		case 2:
			if ((__LIB_0__::func_393(Global_35, iLocal_3430[8], 0, 1) && Global_36.f_2 > 56f) && ((!func_1222(8192) && __LIB_5__::func_314(uParam0, "TRN1_DUTCHBANT1", 0)) || func_1222(8192)))
			{
				func_1719(8192);
				__LIB_0__::func_325(&iLocal_39);
				__LIB_5__::func_486(uParam0, "TRN1_OBJ03a", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_5__::func_372(uParam0, 3);
				__LIB_1__::func_148(&uLocal_3528);
				__LIB_1__::func_148(&uLocal_3559);
			}
			break;
		case 3:
			if ((__LIB_0__::func_75(&uLocal_3559) && __LIB_0__::func_265(&uLocal_3559) > 6f) && !__LIB_5__::func_463())
			{
				if (Global_36.f_2 < 53f)
				{
					__LIB_5__::func_314(uParam0, "TRN1_LAG_DUTCH", 0);
					__LIB_1__::func_148(&uLocal_3559);
				}
				else if (!func_1222(32768))
				{
					func_1719(32768);
					__LIB_5__::func_314(uParam0, "TRN1_MICAHBANT1", 0);
					__LIB_1__::func_148(&uLocal_3559);
				}
			}
			if ((((((func_1736(Local_1778[0 /*33*/]) && func_1736(Local_1778[1 /*33*/])) && func_1736(Local_1778[2 /*33*/])) && func_1736(Local_1778[3 /*33*/])) && func_1736(Local_1778[4 /*33*/])) || __LIB_1__::func_205(Global_35, iLocal_3430[27], 1, 0)) || __LIB_1__::func_205(Global_35, iLocal_3430[28], 1, 0))
			{
				if (func_1266(&Local_1778, 5, 9, 1) < 3)
				{
					__LIB_1__::func_148(&uLocal_3559);
					__LIB_5__::func_372(uParam0, 4);
				}
				else if ((__LIB_0__::func_75(&uLocal_3528) && __LIB_0__::func_265(&uLocal_3528) > 0.5f) && !__LIB_5__::func_463())
				{
					if (__LIB_5__::func_314(uParam0, "TRN1_CLEAR_WAY", 0))
					{
						__LIB_1__::func_148(&uLocal_3559);
						__LIB_5__::func_372(uParam0, 4);
					}
				}
			}
			break;
		case 4:
			if ((__LIB_0__::func_75(&uLocal_3559) && __LIB_0__::func_265(&uLocal_3559) > 6f) && !__LIB_5__::func_463())
			{
				if ((!__LIB_0__::func_393(Global_35, iLocal_3430[27], 0, 1) || Global_36.f_2 < 60f) && __LIB_0__::func_232(Global_35, Local_155[1 /*182*/], 1) > 130f)
				{
					__LIB_5__::func_314(uParam0, "TRN1_LAG_MICAH", 0);
					__LIB_1__::func_148(&uLocal_3559);
				}
				else if (!func_1222(16384))
				{
					__LIB_5__::func_314(uParam0, "TRN1_DUTCHBANT2", 0);
					func_1719(16384);
					__LIB_1__::func_148(&uLocal_3559);
				}
			}
			if ((((((func_1736(Local_1778[5 /*33*/]) && func_1736(Local_1778[6 /*33*/])) && func_1736(Local_1778[7 /*33*/])) && func_1736(Local_1778[8 /*33*/])) && func_1736(Local_1778[9 /*33*/])) && __LIB_0__::func_265(&uLocal_3528) > 0.5f) || __LIB_1__::func_205(Global_35, iLocal_3430[28], 1, 0))
			{
				if (__LIB_0__::func_94(Global_35, 2877.38f, 1405.07f, 67.62f, 1) < (__LIB_0__::func_94(Local_155[0 /*182*/], 2877.38f, 1405.07f, 67.62f, 1) - 2f) || (!__LIB_5__::func_463() && __LIB_5__::func_314(uParam0, "TRN1_FOLLOW_ME", 0)))
				{
					__LIB_5__::func_372(uParam0, 5);
					__LIB_1__::func_148(&uLocal_3559);
				}
			}
			break;
		case 5:
			if ((__LIB_0__::func_75(&uLocal_3559) && __LIB_0__::func_265(&uLocal_3559) > 6f) && !__LIB_5__::func_463())
			{
				if ((__LIB_0__::func_393(Global_35, iLocal_3430[27], 0, 1) || Global_36.f_2 < 60f) && __LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) > 140f)
				{
					__LIB_5__::func_314(uParam0, "TRN1_LAG_DUTCH", 0);
					__LIB_1__::func_148(&uLocal_3559);
				}
				else if (!func_1222(65536))
				{
					__LIB_5__::func_314(uParam0, "TRN1_MICAHBANT2", 0);
					func_1719(65536);
					__LIB_1__::func_148(&uLocal_3559);
				}
			}
			if ((!__LIB_5__::func_463() && ((((__LIB_0__::func_665(Global_35, Local_1778[10 /*33*/], 1, 1) < 6f || __LIB_2__::func_901(Local_1778[10 /*33*/], Global_35)) || __LIB_2__::func_901(Local_1778[11 /*33*/], Global_35)) || __LIB_2__::func_901(Local_1778[12 /*33*/], Global_35)) || __LIB_2__::func_901(Local_1778[13 /*33*/], Global_35))) && __LIB_5__::func_314(uParam0, "TRN1_OBJ5", 0))
			{
				__LIB_5__::func_372(uParam0, 6);
				__LIB_1__::func_148(&uLocal_3559);
			}
			break;
		case 6:
			if ((__LIB_0__::func_75(&uLocal_3559) && __LIB_0__::func_265(&uLocal_3559) > 6f) && !__LIB_5__::func_463())
			{
				if ((__LIB_0__::func_393(Global_35, iLocal_3430[27], 0, 1) || Global_36.f_2 < 60f) && __LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) > 130f)
				{
					if (__LIB_1__::func_985())
					{
						__LIB_5__::func_314(uParam0, "TRN1_LAG_DUTCH", 0);
					}
					else
					{
						__LIB_5__::func_314(uParam0, "TRN1_LAG_MICAH", 0);
					}
					__LIB_1__::func_148(&uLocal_3559);
				}
				else if (!func_1222(16384))
				{
					__LIB_5__::func_314(uParam0, "TRN1_DUTCHBANT2", 0);
					func_1719(16384);
					__LIB_1__::func_148(&uLocal_3559);
				}
				else if (!func_1222(65536))
				{
					__LIB_5__::func_314(uParam0, "TRN1_MICAHBANT2", 0);
					func_1719(65536);
					__LIB_1__::func_148(&uLocal_3559);
				}
			}
			if (func_1206(134217728) || func_1206(67108864))
			{
				if (!__LIB_5__::func_463() && __LIB_5__::func_314(uParam0, "TRN1_OBJ6", 0))
				{
					__LIB_5__::func_372(uParam0, 7);
				}
			}
			break;
		case 7:
			if ((((!__LIB_5__::func_463() && __LIB_0__::func_48(Local_155[0 /*182*/], Global_35, 7f, 1)) && __LIB_8__::func_864(Global_35, 2878.595f, 1402.595f, 67.7f, 5f, 1, 1)) && !func_1206(8388608)) && __LIB_5__::func_314(uParam0, "TRN1_OBJ7", 0))
			{
				__LIB_1__::func_148(&(vLocal_3546[0 /*3*/]));
				__LIB_5__::func_372(uParam0, 8);
			}
			else if ((((((((func_1736(Local_1778[17 /*33*/]) && func_1736(Local_1778[18 /*33*/])) && func_1736(Local_1778[19 /*33*/])) && func_1736(Local_1778[20 /*33*/])) && func_1736(Local_1778[21 /*33*/])) && func_1736(Local_1778[22 /*33*/])) && func_1736(Local_1778[23 /*33*/])) && !__LIB_5__::func_463()) && __LIB_5__::func_314(uParam0, "TRN1_GET_MOUNT", 0))
			{
				__LIB_0__::func_745(0);
				__LIB_0__::func_745(6);
				__LIB_0__::func_325(&iLocal_39);
				iLocal_39 = __LIB_8__::func_777(408396114, ENTITY::GET_ENTITY_COORDS(uLocal_3409[3], true, false), 6f, 1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
				__LIB_5__::func_486(uParam0, "TRN1_OBJ04", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_5__::func_590(uParam0, "TRN1_OBJ04", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_3559);
				__LIB_5__::func_372(uParam0, 9);
			}
			break;
		case 8:
			if ((((((((func_1736(Local_1778[17 /*33*/]) && func_1736(Local_1778[18 /*33*/])) && func_1736(Local_1778[19 /*33*/])) && func_1736(Local_1778[20 /*33*/])) && func_1736(Local_1778[21 /*33*/])) && func_1736(Local_1778[22 /*33*/])) && func_1736(Local_1778[23 /*33*/])) && !__LIB_5__::func_463()) && __LIB_5__::func_314(uParam0, "TRN1_GET_MOUNT", 0))
			{
				__LIB_0__::func_745(0);
				__LIB_0__::func_745(6);
				__LIB_0__::func_325(&iLocal_39);
				iLocal_39 = __LIB_8__::func_777(408396114, ENTITY::GET_ENTITY_COORDS(uLocal_3409[3], true, false), 6f, 1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
				__LIB_5__::func_486(uParam0, "TRN1_OBJ04", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_5__::func_590(uParam0, "TRN1_OBJ04", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_3559);
				__LIB_5__::func_372(uParam0, 9);
			}
			break;
		case 9:
			if ((__LIB_0__::func_75(&uLocal_3559) && __LIB_0__::func_265(&uLocal_3559) > 6f) && !__LIB_5__::func_463())
			{
				if ((__LIB_0__::func_393(Global_35, iLocal_3430[28], 0, 1) || Global_36.f_2 < 65f) && __LIB_0__::func_232(Global_35, Local_155[1 /*182*/], 1) > 130f)
				{
					if (__LIB_1__::func_985())
					{
						__LIB_5__::func_314(uParam0, "TRN1_LAG_DUTCH", 0);
					}
					else
					{
						__LIB_5__::func_314(uParam0, "TRN1_LAG_MICAH", 0);
					}
					__LIB_1__::func_148(&uLocal_3559);
				}
				else if (!func_1222(32768))
				{
					func_1719(32768);
					__LIB_5__::func_314(uParam0, "TRN1_MICAHBANT1", 0);
					__LIB_1__::func_148(&uLocal_3559);
				}
			}
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Local_155[0 /*182*/], iLocal_3430[26], true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Local_155[1 /*182*/], iLocal_3430[26], true, 0)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_3430[26], true, 0))
			{
				__LIB_5__::func_372(uParam0, 51);
			}
			break;
	}
}

void func_1284(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar7;
	int iVar8;
	vVar2.x = 0;
	vVar2.f_1 = 2;
	vVar2.f_2 = { 2879.091f, 1405.993f, 67.6992f };
	PED::SET_PED_RESET_FLAG(Local_155[0 /*182*/], 201, true);
	func_1740();
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = iVar1;
		if (__LIB_0__::func_272(Local_155[iVar0 /*182*/], 0))
		{
			switch (iVar0)
			{
				case 1:
					switch (Local_155[iVar0 /*182*/].f_169)
					{
						case 6:
							if ((__LIB_4__::func_937(uParam0, 8) && func_1736(Local_520[0 /*33*/])) || !__LIB_4__::func_937(uParam0, 8))
							{
								func_1453(1, 2954.523f, 1373.619f, 55.2549f, 1.5f, 0f, 0f, 0f, 0, 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 2957.754f, 1374.793f, 55.2541f, 2935.273f, 1381.246f, 58.2308f, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 2954.437f, 1374.397f, 55.255f, -1, 0, 0f, 0, 0, 0, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 20, iVar0);
							}
							break;
						case 19:
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
							if (__LIB_1__::func_205(Global_35, iLocal_3430[8], 1, 0) && __LIB_8__::func_864(Local_155[0 /*182*/], 2952.923f, 1371.223f, 55.2543f, 4.5f, 1, 1))
							{
								func_1453(1, 2954.523f, 1373.619f, 55.2549f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 20, iVar0);
							}
							else if (func_1736(Local_1778[2 /*33*/]) && func_1736(Local_1778[3 /*33*/]))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[4 /*33*/], false);
								__LIB_2__::func_279(Local_1778[4 /*33*/], 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, 2949.937f, 1381.27f, 55.2542f, 2949.937f, 1381.27f, 55.2542f, 2f, true, 0.5f, 4f, true, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 0f, 0f, 0f, 25f, 0, 3);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 0.4f, 0.4f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(1, 2946.589f, 1375.105f, 55.2548f, 1.5f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 7, iVar0);
							}
							else if (((__LIB_1__::func_205(Global_35, iLocal_3430[31], 1, 0) && __LIB_0__::func_272(Local_1778[2 /*33*/], 0)) || (func_1736(Local_1778[0 /*33*/]) && __LIB_0__::func_272(Local_1778[2 /*33*/], 0))) || func_1736(Local_1778[2 /*33*/]))
							{
								__LIB_2__::func_279(Local_1778[2 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[2 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[2 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 25, iVar0);
							}
							else if ((__LIB_1__::func_205(Global_35, iLocal_3430[33], 1, 0) && __LIB_0__::func_272(Local_1778[3 /*33*/], 0)) || (func_1736(Local_1778[0 /*33*/]) && __LIB_0__::func_272(Local_1778[3 /*33*/], 0)))
							{
								__LIB_2__::func_279(Local_1778[3 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[3 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[3 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 26, iVar0);
							}
							break;
						case 20:
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
							if (__LIB_1__::func_205(Global_35, iLocal_3430[9], 1, 0))
							{
								func_1453(1, 2957.67f, 1377.184f, 55.2544f, 1.5f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 19, iVar0);
							}
							else if (func_1736(Local_1778[0 /*33*/]))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[4 /*33*/], false);
								__LIB_2__::func_279(Local_1778[4 /*33*/], 1);
								PED::_SET_PED_CROUCH_MOVEMENT(Local_155[iVar0 /*182*/], true, 0, false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2947.574f, 1374.017f, 55.2546f, 1.5f, 20000, 0.25f, 1, 40000f);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 2947.574f, 1374.017f, 55.2546f, 25f, 0, 2);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 0.4f, 0.4f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(1, 2947.574f, 1374.017f, 55.2546f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 7, iVar0);
							}
							break;
						case 25:
							if (func_1736(Local_1778[2 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1453(1, 2949.937f, 1381.27f, 55.2542f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 7, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) || PED::IS_PED_SHOOTING(Local_155[iVar0 /*182*/]))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[2 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[2 /*33*/], 0, 0);
							}
							break;
						case 26:
							if (func_1736(Local_1778[3 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 7, iVar0);
							}
							else if (((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) || PED::IS_PED_SHOOTING(Local_155[iVar0 /*182*/])) && __LIB_8__::func_864(Local_1778[3 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[3 /*33*/], false), 1f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[3 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[3 /*33*/], 0, 0);
							}
							break;
						case 27:
							if (func_1736(Local_1778[4 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 20, iVar0);
							}
							else if (((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) || PED::IS_PED_SHOOTING(Local_155[iVar0 /*182*/])) && __LIB_8__::func_864(Local_1778[4 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[4 /*33*/], false), 1f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[4 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[4 /*33*/], 0, 0);
							}
							break;
						case 7:
							if ((((func_1736(Local_1778[0 /*33*/]) && func_1736(Local_1778[1 /*33*/])) && func_1736(Local_1778[2 /*33*/])) && func_1736(Local_1778[3 /*33*/])) && func_1736(Local_1778[4 /*33*/]))
							{
								if (__LIB_1__::func_205(Global_35, iLocal_3430[9], 1, 0))
								{
									func_1453(1, 2935.2f, 1385.02f, 56.83f, 0.75f, 0f, 0f, 0f, 0, 1);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2935.171f, 1384.583f, 56.8306f, 2f, 20000, 0.25f, 2049, 40000f);
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 0f, 0f, 0f, 25f, 0, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 0.25f, 0.25f);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								}
								else
								{
									func_1453(1, 2933.846f, 1380.943f, 56.8306f, 0.75f, 0f, 0f, 0f, 0, 1);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2933.846f, 1380.943f, 56.8306f, 2f, 20000, 0.25f, 2049, 40000f);
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 0f, 0f, 0f, 25f, 0, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 1.5f, 1.5f);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								}
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 8, iVar0);
							}
							else if (((((__LIB_1__::func_205(Global_35, iLocal_3430[33], 1, 0) && __LIB_0__::func_272(Local_1778[3 /*33*/], 0)) || (__LIB_1__::func_205(Global_35, iLocal_3430[27], 1, 0) && __LIB_0__::func_272(Local_1778[3 /*33*/], 0))) || (__LIB_8__::func_864(Global_35, 2941.564f, 1383.375f, 55.2545f, 2f, 1, 1) && __LIB_0__::func_272(Local_1778[3 /*33*/], 0))) || (__LIB_8__::func_864(Global_35, 2939.614f, 1376.703f, 55.2545f, 2f, 1, 1) && __LIB_0__::func_272(Local_1778[3 /*33*/], 0))) || ((func_1736(Local_1778[2 /*33*/]) && __LIB_0__::func_272(Local_1778[3 /*33*/], 0)) && __LIB_8__::func_864(Local_155[iVar0 /*182*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_155[iVar0 /*182*/], false), 2f, 1, 1)))
							{
								__LIB_2__::func_279(Local_1778[3 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[3 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[3 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 26, iVar0);
							}
							else if (((__LIB_1__::func_205(Global_35, iLocal_3430[27], 1, 0) && __LIB_0__::func_272(Local_1778[4 /*33*/], 0)) || (__LIB_8__::func_864(Global_35, 2941.564f, 1383.375f, 55.2545f, 2f, 1, 1) && __LIB_0__::func_272(Local_1778[4 /*33*/], 0))) || (__LIB_8__::func_864(Global_35, 2939.614f, 1376.703f, 55.2545f, 2f, 1, 1) && __LIB_0__::func_272(Local_1778[4 /*33*/], 0)))
							{
								__LIB_2__::func_279(Local_1778[4 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[4 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[4 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 27, iVar0);
							}
							break;
						case 8:
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
							if (__LIB_1__::func_205(Global_35, iLocal_3430[8], 1, 0) && __LIB_8__::func_864(Local_155[0 /*182*/], 2933.629f, 1379.734f, 56.8306f, 2f, 1, 1))
							{
								func_1453(1, 2933.846f, 1380.943f, 56.8306f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 21, iVar0);
							}
							else if (func_1265(&Local_1778, 5, 9) < 1)
							{
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[10 /*33*/], 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_1778[10 /*33*/], true, 0f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2910.719f, 1388.031f, 58.6344f, 2f, 20000, 1.5f, 1, 40000f);
								TASK::TASK_COMBAT_PED(0, Local_1778[10 /*33*/], 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 0.35f, 0.35f);
								func_1453(1, 2910.719f, 1388.031f, 58.6344f, 1f, 2913.167f, 1389.631f, 58.7308f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 9, iVar0);
							}
							else if (func_1736(Local_1778[8 /*33*/]) && !func_1736(Local_1778[5 /*33*/]))
							{
								__LIB_2__::func_279(Local_1778[5 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[5 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[5 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 28, iVar0);
							}
							else if ((__LIB_2__::func_901(Local_1778[9 /*33*/], Global_35) || __LIB_8__::func_864(Global_35, 2917.693f, 1383.696f, 56.1895f, 3f, 1, 1)) && !func_1736(Local_1778[6 /*33*/]))
							{
								__LIB_2__::func_279(Local_1778[6 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[6 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[6 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 29, iVar0);
							}
							else if ((__LIB_2__::func_901(Local_1778[6 /*33*/], Global_35) || __LIB_8__::func_864(Global_35, 2920.634f, 1390.957f, 56.1875f, 3f, 1, 1)) && !func_1736(Local_1778[9 /*33*/]))
							{
								__LIB_2__::func_279(Local_1778[9 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[9 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[9 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 30, iVar0);
							}
							break;
						case 21:
							if (__LIB_1__::func_205(Global_35, iLocal_3430[9], 1, 0))
							{
								func_1453(1, 2935.171f, 1384.583f, 56.8306f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 8, iVar0);
							}
							else if (func_1265(&Local_1778, 5, 9) < 1)
							{
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[10 /*33*/], 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_1778[10 /*33*/], true, 0f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2910.719f, 1388.031f, 58.6344f, 2f, 20000, 1.5f, 8193, 40000f);
								TASK::TASK_COMBAT_PED(0, Local_1778[10 /*33*/], 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 0.35f, 0.35f);
								func_1453(1, 2910.719f, 1388.031f, 58.6344f, 1f, 2913.167f, 1389.631f, 58.7308f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 9, iVar0);
							}
							break;
						case 28:
							if (func_1736(Local_1778[5 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 8, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) && __LIB_8__::func_864(Local_1778[5 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[5 /*33*/], false), 2f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[5 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[5 /*33*/], 0, 0);
							}
							break;
						case 29:
							if (func_1736(Local_1778[6 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 8, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) && __LIB_8__::func_864(Local_1778[6 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[6 /*33*/], false), 2f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[6 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[6 /*33*/], 0, 0);
							}
							break;
						case 30:
							if (func_1736(Local_1778[9 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 8, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) && __LIB_8__::func_864(Local_1778[9 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[9 /*33*/], false), 2f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[9 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[9 /*33*/], 0, 0);
							}
							break;
						case 9:
							if (__LIB_0__::func_232(Global_35, Local_1778[10 /*33*/], 1) < __LIB_0__::func_232(Local_155[iVar0 /*182*/], Local_1778[10 /*33*/], 1))
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 3f);
							}
							if (func_1736(Local_1778[10 /*33*/]))
							{
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[14 /*33*/], 1);
								func_1453(1, 2890.533f, 1394.77f, 63.9446f, 0.75f, 2892.542f, 1394.322f, 63.9404f, 0, 1);
								if ((!PED::IS_PED_INJURED(Local_1778[11 /*33*/]) || !PED::IS_PED_INJURED(Local_1778[12 /*33*/])) || !PED::IS_PED_INJURED(Local_1778[13 /*33*/]))
								{
									PED::SET_PED_FIRING_PATTERN(Local_155[iVar0 /*182*/], joaat("FIRING_PATTERN_FULL_AUTO"));
									WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar0 /*182*/], true);
									vVar2.f_2 = { 2892.314f, 1382.621f, 63.3136f };
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
									if (PED::IS_PED_IN_COVER(Local_155[iVar0 /*182*/], false, false))
									{
										AICOVERPOINT::TASK_EXIT_COVER(&vVar2);
									}
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, 2900.201f, 1392.93f, 61.8427f, Local_1778[13 /*33*/], 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 30000, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, 2890.666f, 1395.099f, 63.9448f, Local_1778[13 /*33*/], 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 30000, 0);
									TASK::TASK_COMBAT_PED(0, Local_1778[14 /*33*/], 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								}
								Local_155[iVar0 /*182*/].f_169 = 10;
							}
							break;
						case 10:
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[iVar0 /*182*/], 0))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_155[iVar0 /*182*/], 2f, 1, -1082130432 /* Float: -1f */, 0);
							}
							if ((((func_1736(Local_1778[10 /*33*/]) && func_1736(Local_1778[11 /*33*/])) && func_1736(Local_1778[12 /*33*/])) && func_1736(Local_1778[13 /*33*/])) || __LIB_1__::func_205(Local_155[iVar0 /*182*/], iLocal_3430[28], 1, 0))
							{
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[11 /*33*/]);
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[12 /*33*/]);
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[13 /*33*/]);
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[14 /*33*/], 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_1778[14 /*33*/], true, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
								PED::SET_PED_FIRING_PATTERN(Local_155[iVar0 /*182*/], joaat("FIRING_PATTERN_COMPANION_MICAH"));
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2890.666f, 1395.099f, 63.9448f, 2f, 20000, 0.25f, 2112, 40000f);
								TASK::TASK_COMBAT_PED(0, Local_1778[14 /*33*/], 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 2889.542f, 1394.792f, 63.9421f, 20f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(1, 2890.533f, 1394.77f, 63.9446f, 0.75f, 2892.542f, 1394.322f, 63.9404f, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, true);
								Local_155[iVar0 /*182*/].f_169 = 14;
							}
							break;
						case 14:
							if (func_1736(Local_1778[14 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar0 /*182*/], 100);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1778[15 /*33*/], 2000, 0, 0);
								TASK::TASK_COMBAT_PED(0, Local_1778[19 /*33*/], 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(1, 2876.51f, 1400.643f, 67.6953f, 0.75f, 2875.72f, 1402.82f, 67.8186f, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
								Local_155[iVar0 /*182*/].f_169 = 22;
							}
							else if (func_1736(Local_1778[15 /*33*/]))
							{
								PED::SET_PED_ACCURACY(Local_155[iVar0 /*182*/], 100);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[14 /*33*/], false);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								if (!__LIB_1__::func_205(Local_155[iVar0 /*182*/], iLocal_3430[28], 1, 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2876.51f, 1400.643f, 67.6953f, 2f, 20000, 1f, 1, 40000f);
								}
								else if (PED::IS_PED_IN_COVER(Local_155[iVar0 /*182*/], false, false))
								{
									AICOVERPOINT::TASK_EXIT_COVER(&vVar2);
								}
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1778[14 /*33*/], 3000, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
								TASK::TASK_COMBAT_PED(0, Local_1778[19 /*33*/], 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(1, 2876.51f, 1400.643f, 67.6953f, 0.75f, 2879.107f, 1401.978f, 67.7011f, 0, 1);
								Local_155[iVar0 /*182*/].f_169 = 22;
							}
							break;
						case 22:
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
							if ((!func_1736(Local_1778[14 /*33*/]) && __LIB_0__::func_75(&uLocal_3571)) && __LIB_0__::func_265(&uLocal_3571) >= 0.45f)
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[14 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[14 /*33*/], 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
							}
							if (__LIB_8__::func_864(Local_155[iVar0 /*182*/], 2876.51f, 1400.643f, 67.6953f, 4f, 1, 1) && !func_1206(67108864))
							{
								func_1207(67108864);
								PED::SET_PED_ACCURACY(Local_155[iVar0 /*182*/], 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
							}
							if (((PED::IS_PED_INJURED(Local_1778[17 /*33*/]) && PED::IS_PED_INJURED(Local_1778[18 /*33*/])) && PED::IS_PED_INJURED(Local_1778[19 /*33*/])) && PED::IS_PED_INJURED(Local_1778[20 /*33*/]))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2866.254f, 1410.548f, 66.8251f, Local_1778[22 /*33*/], 2f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								TASK::TASK_COMBAT_PED(0, Local_1778[21 /*33*/], 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(1, 2866.254f, 1410.548f, 66.8251f, 0.75f, 2866.254f, 1410.548f, 66.8251f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 11, 2);
							}
							else if (func_1265(&Local_1778, 17, 20) == 2)
							{
								if (!PED::IS_PED_INJURED(Local_1778[20 /*33*/]))
								{
									func_1743(iVar0, Local_1778[20 /*33*/], 2878.809f, 1401.534f, 67.7007f, 1, 1073741824 /* Float: 2f */);
								}
								else if (!PED::IS_PED_INJURED(Local_1778[19 /*33*/]))
								{
									func_1743(iVar0, Local_1778[19 /*33*/], 2878.809f, 1401.534f, 67.7007f, 1, 1073741824 /* Float: 2f */);
								}
								else if (!PED::IS_PED_INJURED(Local_1778[18 /*33*/]))
								{
									func_1743(iVar0, Local_1778[18 /*33*/], 2878.809f, 1401.534f, 67.7007f, 1, 1073741824 /* Float: 2f */);
								}
								else if (!PED::IS_PED_INJURED(Local_1778[17 /*33*/]))
								{
									func_1743(iVar0, Local_1778[17 /*33*/], 2878.809f, 1401.534f, 67.7007f, 1, 1073741824 /* Float: 2f */);
								}
								__LIB_1__::func_148(&(Local_155[iVar0 /*182*/].f_2));
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 17, iVar0);
							}
							break;
						case 17:
							if (__LIB_0__::func_75(&(Local_155[iVar0 /*182*/].f_2)) && __LIB_0__::func_265(&(Local_155[iVar0 /*182*/].f_2)) >= 2f)
							{
								if (!func_1736(Local_1778[20 /*33*/]))
								{
									iVar7 = Local_1778[20 /*33*/];
								}
								else if (!func_1736(Local_1778[19 /*33*/]))
								{
									iVar7 = Local_1778[19 /*33*/];
								}
								else if (!func_1736(Local_1778[18 /*33*/]))
								{
									iVar7 = Local_1778[18 /*33*/];
								}
								else if (!func_1736(Local_1778[17 /*33*/]))
								{
									iVar7 = Local_1778[17 /*33*/];
								}
								else
								{
									iVar7 = Local_1778[17 /*33*/];
								}
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar0 /*182*/], 0), true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(iVar7, true, false) };
								Local_135.f_10 = iVar7;
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 10f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&(Local_155[iVar0 /*182*/].f_2));
								ENTITY::_SET_ENTITY_HEALTH(iVar7, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 22, iVar0);
							}
							if (((func_1736(Local_1778[17 /*33*/]) && func_1736(Local_1778[18 /*33*/])) && func_1736(Local_1778[19 /*33*/])) && func_1736(Local_1778[20 /*33*/]))
							{
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 22, iVar0);
							}
							break;
						case 11:
							if ((PED::IS_PED_INJURED(Local_1778[21 /*33*/]) && PED::IS_PED_INJURED(Local_1778[22 /*33*/])) && PED::IS_PED_INJURED(Local_1778[23 /*33*/]))
							{
								__LIB_1__::func_733(Local_155[iVar0 /*182*/]);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 13, 2);
							}
							break;
						case 13:
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(__LIB_3__::func_568(uLocal_3409[3], 3), true, false), 2f, 20000, 0.25f, 516, 40000f);
							TASK::TASK_ANIMAL_INTERACTION(0, __LIB_3__::func_568(uLocal_3409[3], 3), joaat("INTERACTION_FOOD"), 0, 1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							func_1209(&(Local_155[iVar0 /*182*/].f_169), 31, 2);
							break;
						case 31:
							if (ENTITY::IS_ENTITY_IN_VOLUME(Local_155[iVar0 /*182*/], iLocal_3430[26], true, 0))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 35, 2);
							}
							break;
						case 35:
							break;
					}
					break;
				case 0:
					switch (Local_155[iVar0 /*182*/].f_169)
					{
						case 6:
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 2952.923f, 1371.223f, 55.2543f, 2937.871f, 1380.813f, 57.95f, 3f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 4202496, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
							TASK::TASK_AIM_GUN_AT_COORD(0, 2935.273f, 1381.246f, 58.2308f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							func_1453(0, 2952.923f, 1371.223f, 55.2543f, 1.5f, 0f, 0f, 0f, 0, 1);
							func_1209(&(Local_155[iVar0 /*182*/].f_169), 20, iVar0);
							break;
						case 19:
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
							if (__LIB_1__::func_205(Global_35, iLocal_3430[8], 1, 0))
							{
								func_1453(0, 2952.923f, 1371.223f, 55.2543f, 1.5f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 20, iVar0);
							}
							else if (func_1736(Local_1778[2 /*33*/]))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[1 /*33*/], false);
								__LIB_2__::func_279(Local_1778[1 /*33*/], 1);
								PED::_SET_PED_CROUCH_MOVEMENT(Local_155[iVar0 /*182*/], true, 0, false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2950.862f, 1379.952f, 55.2545f, 1.5f, 20000, 0.25f, 1, 40000f);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 2950.862f, 1379.952f, 55.2545f, 25f, 0, 2);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 1f, 1f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(0, 2946.32f, 1382.07f, 55.25f, 1.5f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 7, iVar0);
							}
							break;
						case 20:
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
							if (__LIB_1__::func_205(Global_35, iLocal_3430[9], 1, 0) && __LIB_8__::func_864(Local_155[1 /*182*/], 2957.67f, 1377.184f, 55.2544f, 4.5f, 1, 1))
							{
								func_1453(0, 2955.496f, 1375.873f, 55.2548f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 19, iVar0);
							}
							else if (func_1736(Local_1778[0 /*33*/]) && func_1736(Local_1778[1 /*33*/]))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[4 /*33*/], false);
								__LIB_2__::func_279(Local_1778[4 /*33*/], 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2945.396f, 1374.024f, 55.2543f, 2f, 20000, 0.25f, 1, 40000f);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 0f, 0f, 0f, 25f, 0, 3);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 0.35f, 0.35f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(0, 2945.396f, 1374.024f, 55.2543f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 7, iVar0);
							}
							else if ((((__LIB_1__::func_205(Global_35, iLocal_3430[32], 1, 0) && __LIB_0__::func_272(Local_1778[0 /*33*/], 0)) || (func_1736(Local_1778[1 /*33*/]) && __LIB_0__::func_272(Local_1778[0 /*33*/], 0))) || (func_1736(Local_1778[3 /*33*/]) && __LIB_0__::func_272(Local_1778[0 /*33*/], 0))) || func_1736(Local_1778[3 /*33*/]))
							{
								__LIB_2__::func_279(Local_1778[0 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[0 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[0 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 25, iVar0);
							}
							else if ((__LIB_1__::func_205(Global_35, iLocal_3430[34], 1, 0) && __LIB_0__::func_272(Local_1778[1 /*33*/], 0)) || (func_1736(Local_1778[3 /*33*/]) && __LIB_0__::func_272(Local_1778[1 /*33*/], 0)))
							{
								__LIB_2__::func_279(Local_1778[1 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[1 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[1 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 26, iVar0);
							}
							break;
						case 25:
							if (func_1736(Local_1778[0 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1453(0, 2943.601f, 1374.832f, 55.2544f, 1.5f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 7, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) || PED::IS_PED_SHOOTING(Local_155[iVar0 /*182*/]))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[0 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[0 /*33*/], 0, 0);
							}
							break;
						case 26:
							if (func_1736(Local_1778[1 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 19, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) || PED::IS_PED_SHOOTING(Local_155[iVar0 /*182*/]))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[1 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[1 /*33*/], 0, 0);
							}
							break;
						case 27:
							if (func_1736(Local_1778[2 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 19, iVar0);
							}
							else if (((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) || PED::IS_PED_SHOOTING(Local_155[iVar0 /*182*/])) && __LIB_8__::func_864(Local_1778[2 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[4 /*33*/], false), 2f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[2 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[2 /*33*/], 0, 0);
							}
							break;
						case 7:
							if ((((func_1736(Local_1778[0 /*33*/]) && func_1736(Local_1778[1 /*33*/])) && func_1736(Local_1778[2 /*33*/])) && func_1736(Local_1778[3 /*33*/])) && func_1736(Local_1778[4 /*33*/]))
							{
								if (__LIB_1__::func_205(Global_35, iLocal_3430[9], 1, 0))
								{
									func_1453(0, 2934.692f, 1383.267f, 56.8306f, 0.75f, 0f, 0f, 0f, 0, 1);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2934.692f, 1383.267f, 56.8306f, 2f, 20000, 0.25f, 2049, 40000f);
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 0f, 0f, 0f, 25f, 0, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 1.25f, 1.25f);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								}
								else
								{
									func_1453(0, 2933.629f, 1379.734f, 56.8306f, 0.75f, 0f, 0f, 0f, 0, 1);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2933.629f, 1379.734f, 56.8306f, 2f, 20000, 0.25f, 2049, 40000f);
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 0f, 0f, 0f, 25f, 0, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								}
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 8, iVar0);
							}
							else if (((__LIB_1__::func_205(Global_35, iLocal_3430[34], 1, 0) && __LIB_0__::func_272(Local_1778[1 /*33*/], 0)) || (__LIB_1__::func_205(Global_35, iLocal_3430[27], 1, 0) && __LIB_0__::func_272(Local_1778[1 /*33*/], 0))) || (((func_1736(Local_1778[3 /*33*/]) && __LIB_0__::func_272(Local_1778[1 /*33*/], 0)) || (__LIB_8__::func_864(Global_35, 2941.564f, 1383.375f, 55.2545f, 2f, 1, 1) && __LIB_0__::func_272(Local_1778[1 /*33*/], 0))) || ((__LIB_8__::func_864(Global_35, 2939.614f, 1376.703f, 55.2545f, 2f, 1, 1) && __LIB_0__::func_272(Local_1778[1 /*33*/], 0)) && __LIB_8__::func_864(Local_155[iVar0 /*182*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_155[iVar0 /*182*/], false), 2f, 1, 1))))
							{
								__LIB_2__::func_279(Local_1778[1 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[1 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[1 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 26, iVar0);
							}
							else if (((__LIB_1__::func_205(Global_35, iLocal_3430[27], 1, 0) && __LIB_0__::func_272(Local_1778[2 /*33*/], 0)) || (__LIB_8__::func_864(Global_35, 2941.564f, 1383.375f, 55.2545f, 2f, 1, 1) && __LIB_0__::func_272(Local_1778[2 /*33*/], 0))) || (__LIB_8__::func_864(Global_35, 2939.614f, 1376.703f, 55.2545f, 2f, 1, 1) && __LIB_0__::func_272(Local_1778[2 /*33*/], 0)))
							{
								__LIB_2__::func_279(Local_1778[2 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[2 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[2 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 27, iVar0);
							}
							break;
						case 8:
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
							if (__LIB_1__::func_205(Global_35, iLocal_3430[8], 1, 0))
							{
								func_1453(0, 2933.629f, 1379.734f, 56.8306f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 21, iVar0);
							}
							else if (func_1265(&Local_1778, 5, 9) < 1)
							{
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[12 /*33*/], 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2912.31f, 1392.405f, 58.6344f, 2f, 20000, 1.5f, 1, 40000f);
								TASK::TASK_COMBAT_PED(0, Local_1778[12 /*33*/], 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 0.3f, 0.3f);
								func_1453(0, 2912.31f, 1392.405f, 58.6344f, 1f, 2913.167f, 1389.631f, 58.7308f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 9, iVar0);
							}
							break;
						case 21:
							if (__LIB_1__::func_205(Global_35, iLocal_3430[9], 1, 0) && __LIB_8__::func_864(Local_155[1 /*182*/], 2935.171f, 1384.583f, 56.8306f, 2f, 1, 1))
							{
								func_1453(0, 2934.692f, 1383.267f, 56.8306f, 1f, 0f, 0f, 0f, 0, 1);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 8, iVar0);
							}
							else if (func_1265(&Local_1778, 5, 9) < 1)
							{
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[12 /*33*/], 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								if (__LIB_1__::func_205(Local_155[iVar0 /*182*/], iLocal_3430[9], 1, 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2936.082f, 1385.312f, 56.8306f, 3f, 20000, 1.5f, 1, 40000f);
								}
								TASK::TASK_COMBAT_PED(0, Local_1778[12 /*33*/], 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::_TASK_PERFORM_SEQUENCE_2(Local_155[iVar0 /*182*/], iLocal_38, 0.3f, 0.3f);
								func_1453(0, 2912.31f, 1392.405f, 58.6344f, 1f, 2913.167f, 1389.631f, 58.7308f, 0, 1);
								__LIB_1__::func_148(&uLocal_3528);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 9, iVar0);
							}
							else if (func_1736(Local_1778[5 /*33*/]) && !func_1736(Local_1778[8 /*33*/]))
							{
								__LIB_2__::func_279(Local_1778[8 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[8 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[8 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 28, iVar0);
							}
							else if ((__LIB_2__::func_901(Local_1778[6 /*33*/], Global_35) || __LIB_8__::func_864(Global_35, 2920.634f, 1390.957f, 56.1875f, 3f, 1, 1)) && !func_1736(Local_1778[9 /*33*/]))
							{
								__LIB_2__::func_279(Local_1778[9 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[9 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[9 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 29, iVar0);
							}
							else if ((__LIB_2__::func_901(Local_1778[9 /*33*/], Global_35) || __LIB_8__::func_864(Global_35, 2917.693f, 1383.696f, 56.1895f, 3f, 1, 1)) && !func_1736(Local_1778[6 /*33*/]))
							{
								__LIB_2__::func_279(Local_1778[6 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[6 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[6 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 30, iVar0);
							}
							break;
						case 28:
							if (func_1736(Local_1778[8 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 21, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) && __LIB_8__::func_864(Local_1778[8 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[8 /*33*/], false), 2f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[8 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[8 /*33*/], 0, 0);
							}
							break;
						case 29:
							if (func_1736(Local_1778[9 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 21, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) && __LIB_8__::func_864(Local_1778[9 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[9 /*33*/], false), 2f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[9 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[9 /*33*/], 0, 0);
							}
							break;
						case 30:
							if (func_1736(Local_1778[6 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 21, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.4f) && __LIB_8__::func_864(Local_1778[6 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[6 /*33*/], false), 2f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[6 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[6 /*33*/], 0, 0);
							}
							break;
						case 9:
							if (__LIB_0__::func_232(Global_35, Local_1778[10 /*33*/], 1) < __LIB_0__::func_232(Local_155[iVar0 /*182*/], Local_1778[10 /*33*/], 1))
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 3f);
							}
							else
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
							}
							if (ENTITY::IS_ENTITY_DEAD(Local_1778[10 /*33*/]))
							{
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[14 /*33*/]);
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[15 /*33*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
								func_1453(0, 2890.91f, 1398.22f, 63.98f, 1.35f, 2892.426f, 1401.147f, 63.941f, 1, 0);
								if ((!PED::IS_PED_INJURED(Local_1778[11 /*33*/]) || !PED::IS_PED_INJURED(Local_1778[12 /*33*/])) || !PED::IS_PED_INJURED(Local_1778[13 /*33*/]))
								{
									WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_155[iVar0 /*182*/], true);
									PED::SET_PED_FIRING_PATTERN(Local_155[iVar0 /*182*/], joaat("FIRING_PATTERN_FULL_AUTO"));
									vVar2.f_2 = { 2892.314f, 1382.621f, 63.3136f };
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
									TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
									if (PED::IS_PED_IN_COVER(Local_155[iVar0 /*182*/], false, false))
									{
										AICOVERPOINT::TASK_EXIT_COVER(&vVar2);
									}
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, 2899.271f, 1396.208f, 62.5995f, Local_1778[12 /*33*/], 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 30000, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, 2894.405f, 1398.081f, 63.9424f, Local_1778[12 /*33*/], 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 30000, 0);
									TASK::TASK_COMBAT_PED(0, Local_1778[15 /*33*/], 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, 2879.091f, 1405.993f, 67.6992f, 15f, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
									TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								}
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 10, iVar0);
							}
							else if (((__LIB_0__::func_665(Global_35, Local_1778[10 /*33*/], 1, 1) < 6f || __LIB_2__::func_901(Local_1778[11 /*33*/], Global_35)) || __LIB_2__::func_901(Local_1778[12 /*33*/], Global_35)) || __LIB_2__::func_901(Local_1778[13 /*33*/], Global_35))
							{
								__LIB_2__::func_279(Local_1778[10 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[10 /*33*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::TASK_SHOOT_AT_ENTITY(Local_155[iVar0 /*182*/], Local_1778[10 /*33*/], -1, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 15, iVar0);
							}
							break;
						case 15:
							if (func_1736(Local_1778[10 /*33*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[iVar0 /*182*/], 0f, 0f, 0f, 25f, 0, 3);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 9, iVar0);
							}
							else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.2f) && __LIB_8__::func_864(Local_1778[10 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[10 /*33*/], false), 2f, 1, 1))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_155[iVar0 /*182*/], true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[10 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 0f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								ENTITY::_SET_ENTITY_HEALTH(Local_1778[10 /*33*/], 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 9, iVar0);
							}
							break;
						case 10:
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[iVar0 /*182*/], 0))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_155[iVar0 /*182*/], 2f, 1, -1082130432 /* Float: -1f */, 0);
							}
							if ((((PED::IS_PED_INJURED(Local_1778[10 /*33*/]) && PED::IS_PED_INJURED(Local_1778[11 /*33*/])) && PED::IS_PED_INJURED(Local_1778[12 /*33*/])) && PED::IS_PED_INJURED(Local_1778[13 /*33*/])) || __LIB_1__::func_205(Local_155[iVar0 /*182*/], iLocal_3430[28], 1, 0))
							{
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[11 /*33*/]);
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[12 /*33*/]);
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[13 /*33*/]);
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[14 /*33*/]);
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[15 /*33*/], 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_1778[15 /*33*/], true, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
								PED::SET_PED_FIRING_PATTERN(Local_155[iVar0 /*182*/], joaat("FIRING_PATTERN_COMPANION_DUTCH"));
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								if (!func_1736(Local_1778[15 /*33*/]))
								{
									TASK::TASK_COMBAT_PED(0, Local_1778[15 /*33*/], 0, 0);
								}
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(0, 2890.91f, 1398.22f, 63.98f, 1.35f, 2892.426f, 1401.147f, 63.941f, 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, true);
								__LIB_1__::func_148(&uLocal_3522);
								Local_155[iVar0 /*182*/].f_169 = 14;
							}
							break;
						case 14:
							if ((func_1736(Local_1778[14 /*33*/]) && !func_1736(Local_1778[15 /*33*/])) || __LIB_0__::func_264(&uLocal_3522) > 14f)
							{
								PED::_0x4707E9C23D8CA3FE(Local_155[iVar0 /*182*/], Local_1778[14 /*33*/]);
								PED::REGISTER_TARGET(Local_155[iVar0 /*182*/], Local_1778[15 /*33*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[15 /*33*/], false);
								PED::SET_PED_ACCURACY(Local_155[iVar0 /*182*/], 100);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, true);
								__LIB_1__::func_148(&uLocal_3571);
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								if (!__LIB_1__::func_205(Local_155[iVar0 /*182*/], iLocal_3430[28], 1, 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2891.78f, 1399.442f, 63.9422f, 2f, 20000, 1f, 0, 40000f);
								}
								TASK::TASK_SHOOT_AT_ENTITY(0, Local_1778[15 /*33*/], 2000, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(0, 2879.091f, 1405.993f, 67.6992f, 0.75f, 2880.489f, 1404.106f, 67.7027f, 1, 0);
								Local_155[iVar0 /*182*/].f_169 = 22;
							}
							else if (func_1736(Local_1778[15 /*33*/]))
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_155[iVar0 /*182*/], 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								if (PED::IS_PED_IN_COVER(Local_155[iVar0 /*182*/], false, false))
								{
									AICOVERPOINT::TASK_EXIT_COVER(&vVar2);
								}
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1453(0, 2879.091f, 1405.993f, 67.6992f, 0.75f, 2875.72f, 1402.82f, 67.8186f, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
								Local_155[iVar0 /*182*/].f_169 = 22;
							}
							break;
						case 22:
							if (!func_1736(Local_1778[15 /*33*/]) && (PED::IS_PED_SHOOTING(Local_155[iVar0 /*182*/]) || (__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) >= 1.5f)))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar0 /*182*/], 0), true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1778[15 /*33*/], true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 10f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_864(Local_1778[15 /*33*/], 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
							}
							if (__LIB_8__::func_864(Local_155[iVar0 /*182*/], 2879.091f, 1405.993f, 67.6992f, 4f, 1, 1) && !func_1206(134217728))
							{
								func_1207(134217728);
								PED::SET_PED_ACCURACY(Local_155[iVar0 /*182*/], 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 27, false);
							}
							if (((PED::IS_PED_INJURED(Local_1778[17 /*33*/]) && PED::IS_PED_INJURED(Local_1778[18 /*33*/])) && PED::IS_PED_INJURED(Local_1778[19 /*33*/])) && PED::IS_PED_INJURED(Local_1778[20 /*33*/]))
							{
								func_1453(0, 2862.21f, 1410.72f, 67.32f, 1f, 2866.254f, 1410.548f, 66.8251f, 0, 1);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 2862.21f, 1410.72f, 67.32f, 2855.763f, 1397.213f, 68.6803f, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
								TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 11, 2);
							}
							else if (func_1265(&Local_1778, 17, 20) == 1)
							{
								if (!PED::IS_PED_INJURED(Local_1778[17 /*33*/]))
								{
									func_1743(iVar0, Local_1778[17 /*33*/], 0f, 0f, 0f, 1, 1073741824 /* Float: 2f */);
								}
								else if (!PED::IS_PED_INJURED(Local_1778[18 /*33*/]))
								{
									func_1743(iVar0, Local_1778[18 /*33*/], 0f, 0f, 0f, 1, 1073741824 /* Float: 2f */);
								}
								else if (!PED::IS_PED_INJURED(Local_1778[19 /*33*/]))
								{
									func_1743(iVar0, Local_1778[19 /*33*/], 0f, 0f, 0f, 1, 1073741824 /* Float: 2f */);
								}
								else if (!PED::IS_PED_INJURED(Local_1778[20 /*33*/]))
								{
									func_1743(iVar0, Local_1778[20 /*33*/], 0f, 0f, 0f, 1, 1073741824 /* Float: 2f */);
								}
								__LIB_1__::func_148(&(Local_155[iVar0 /*182*/].f_2));
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 17, iVar0);
							}
							else if ((func_1265(&Local_1778, 17, 20) < 3 && ENTITY::GET_ENTITY_HEALTH(iLocal_118) > 0) && __LIB_0__::func_264(&(vLocal_3546[0 /*3*/])) > 4f)
							{
								func_1758(iVar0, 2878.431f, 1403.518f, 67.8108f);
								__LIB_1__::func_148(&(Local_155[iVar0 /*182*/].f_2));
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 34, iVar0);
							}
							break;
						case 34:
							if ((__LIB_0__::func_75(&(Local_155[iVar0 /*182*/].f_2)) && __LIB_0__::func_265(&(Local_155[iVar0 /*182*/].f_2)) >= 1f) && PED::IS_PED_SHOOTING(Local_155[iVar0 /*182*/]))
							{
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar0 /*182*/], 0), true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_118, true, false) };
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 1000f;
								Local_135.f_18 = 1;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								Local_135 = { 2851.203f, 1412.978f, 70.4821f };
								Local_135.f_6 = joaat("WEAPON_SNIPERRIFLE_CARCANO");
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 0;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 1000f;
								Local_135.f_18 = 1;
								Local_135.f_19 = 1;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&(Local_155[iVar0 /*182*/].f_2));
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 22, iVar0);
							}
							else if (ENTITY::GET_ENTITY_HEALTH(iLocal_118) <= 0)
							{
								__LIB_1__::func_148(&(Local_155[iVar0 /*182*/].f_2));
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 22, iVar0);
							}
							break;
						case 17:
							if (__LIB_0__::func_75(&(Local_155[iVar0 /*182*/].f_2)) && __LIB_0__::func_265(&(Local_155[iVar0 /*182*/].f_2)) >= 2f)
							{
								if (!func_1736(Local_1778[17 /*33*/]))
								{
									iVar8 = Local_1778[17 /*33*/];
								}
								else if (!func_1736(Local_1778[18 /*33*/]))
								{
									iVar8 = Local_1778[18 /*33*/];
								}
								else if (!func_1736(Local_1778[19 /*33*/]))
								{
									iVar8 = Local_1778[19 /*33*/];
								}
								else if (!func_1736(Local_1778[20 /*33*/]))
								{
									iVar8 = Local_1778[20 /*33*/];
								}
								else
								{
									iVar8 = Local_1778[20 /*33*/];
								}
								Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iVar0 /*182*/], 0), true, false) };
								Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(iVar8, true, false) };
								Local_135.f_10 = iVar8;
								Local_135.f_6 = __LIB_0__::func_399(Local_155[iVar0 /*182*/], 1, 0, 0);
								Local_135.f_11 = Local_155[iVar0 /*182*/];
								Local_135.f_9 = Local_155[iVar0 /*182*/];
								Local_135.f_12 = 1;
								Local_135.f_13 = 1;
								Local_135.f_16 = 1;
								Local_135.f_15 = 1;
								Local_135.f_7 = 10f;
								MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
								__LIB_1__::func_148(&(Local_155[iVar0 /*182*/].f_2));
								ENTITY::_SET_ENTITY_HEALTH(iVar8, 0, 0);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 22, iVar0);
							}
							if (((func_1736(Local_1778[17 /*33*/]) && func_1736(Local_1778[18 /*33*/])) && func_1736(Local_1778[19 /*33*/])) && func_1736(Local_1778[20 /*33*/]))
							{
								__LIB_1__::func_148(&uLocal_3571);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 22, iVar0);
							}
							break;
						case 11:
							if ((PED::IS_PED_INJURED(Local_1778[21 /*33*/]) && PED::IS_PED_INJURED(Local_1778[22 /*33*/])) && PED::IS_PED_INJURED(Local_1778[23 /*33*/]))
							{
								__LIB_1__::func_733(Local_155[iVar0 /*182*/]);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 13, 2);
							}
							break;
						case 13:
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(__LIB_3__::func_568(uLocal_3409[3], 2), true, false), 2f, 20000, 0.25f, 516, 40000f);
							TASK::TASK_ANIMAL_INTERACTION(0, __LIB_3__::func_568(uLocal_3409[3], 2), joaat("INTERACTION_FOOD"), 0, 1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_155[iVar0 /*182*/], iLocal_38);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							func_1209(&(Local_155[iVar0 /*182*/].f_169), 31, 2);
							break;
						case 31:
							if (ENTITY::IS_ENTITY_IN_VOLUME(Local_155[iVar0 /*182*/], iLocal_3430[26], true, 0))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iVar0 /*182*/], 30, false);
								func_1209(&(Local_155[iVar0 /*182*/].f_169), 35, 2);
							}
							break;
						case 35:
							break;
					}
					break;
			}
		}
		iVar1++;
	}
}

void func_1285()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_272(Local_1778[iVar1 /*33*/], 0))
		{
			switch (iVar1)
			{
				case 4:
					if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.45f) && __LIB_8__::func_864(Local_1778[iVar1 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[iVar1 /*33*/], false), 2f, 1, 1))
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1778[iVar1 /*33*/], 0), true, false) };
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
						{
							case 0:
								Local_135.f_3 = { 2954.94f, 1369.82f, 58.28f };
								break;
							case 1:
								Local_135.f_3 = { 2952.83f, 1380.91f, 56.11f };
								break;
							case 2:
								Local_135.f_3 = { 2961.01f, 1373.25f, 57.73f };
								break;
							case 3:
								Local_135.f_3 = { 2947.32f, 1376.51f, 56.07f };
								break;
							case 4:
								Local_135.f_3 = { 2952.13f, 1376.63f, 55.91f };
								break;
						}
						Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
						Local_135.f_11 = Local_1778[iVar1 /*33*/];
						Local_135.f_9 = Local_1778[iVar1 /*33*/];
						Local_135.f_12 = 1;
						Local_135.f_13 = 1;
						Local_135.f_16 = 1;
						Local_135.f_15 = 1;
						Local_135.f_7 = 0f;
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
						__LIB_1__::func_148(&uLocal_3571);
					}
					break;
				case 3:
					if ((PED::IS_PED_IN_COVER(Local_1778[iVar1 /*33*/], false, false) && __LIB_0__::func_75(&uLocal_3571)) && __LIB_0__::func_265(&uLocal_3571) < 0.3f)
					{
						PED::SET_PED_RESET_FLAG(Local_1778[iVar1 /*33*/], 9, true);
					}
					break;
				case 2:
					if (__LIB_1__::func_205(Global_35, iLocal_3430[8], 1, 0) && !func_1293(1))
					{
						func_1294(1);
						func_1451(Local_1778[iVar1 /*33*/], 2936.205f, 1384.732f, 56.8306f, 1f, 2946.531f, 1381.445f, 55.2546f, 0, 1);
						func_1451(Local_1778[1 /*33*/], 2938.748f, 1377.195f, 55.2546f, 1f, 2944.83f, 1383.01f, 55.25f, 0, 1);
						func_1451(Local_1778[3 /*33*/], 2944.83f, 1383.01f, 55.25f, 1f, 2939.123f, 1384.62f, 55.6515f, 0, 1);
					}
					else if ((__LIB_0__::func_75(&uLocal_3522) && __LIB_0__::func_265(&uLocal_3522) > 5f) || PED::IS_PED_INJURED(Local_1778[1 /*33*/]))
					{
						func_1451(Local_1778[iVar1 /*33*/], 2944.83f, 1383.01f, 55.25f, 2f, 0f, 0f, 0f, 0, 1);
					}
					break;
				case 1:
					if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.45f) && __LIB_8__::func_864(Local_1778[iVar1 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[iVar1 /*33*/], false), 2f, 1, 1))
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1778[iVar1 /*33*/], 0), true, false) };
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
						{
							case 0:
								Local_135.f_3 = { 2954.94f, 1369.82f, 58.28f };
								break;
							case 1:
								Local_135.f_3 = { 2952.83f, 1380.91f, 56.11f };
								break;
							case 2:
								Local_135.f_3 = { 2961.01f, 1373.25f, 57.73f };
								break;
							case 3:
								Local_135.f_3 = { 2947.32f, 1376.51f, 56.07f };
								break;
							case 4:
								Local_135.f_3 = { 2952.13f, 1376.63f, 55.91f };
								break;
						}
						Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
						Local_135.f_11 = Local_1778[iVar1 /*33*/];
						Local_135.f_9 = Local_1778[iVar1 /*33*/];
						Local_135.f_12 = 1;
						Local_135.f_13 = 1;
						Local_135.f_16 = 1;
						Local_135.f_15 = 1;
						Local_135.f_7 = 0f;
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
						__LIB_1__::func_148(&uLocal_3571);
					}
					if (__LIB_1__::func_205(Global_35, iLocal_3430[9], 1, 0) && !func_1293(1))
					{
						func_1294(1);
						func_1451(Local_1778[iVar1 /*33*/], 2934.606f, 1378.326f, 56.8306f, 1f, 2945.927f, 1374.225f, 55.2545f, 0, 1);
						func_1451(Local_1778[2 /*33*/], 2940.605f, 1384.134f, 55.2544f, 1f, 2944.83f, 1383.01f, 55.25f, 0, 1);
					}
					else if ((__LIB_0__::func_75(&uLocal_3522) && __LIB_0__::func_265(&uLocal_3522) > 20f) || PED::IS_PED_INJURED(Local_1778[2 /*33*/]))
					{
						func_1451(Local_1778[iVar1 /*33*/], 2935.557f, 1377.857f, 56.2252f, 1f, 0f, 0f, 0f, 0, 1);
					}
					break;
				case 6:
					if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.45f) && __LIB_8__::func_864(Local_1778[iVar1 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[iVar1 /*33*/], false), 2f, 1, 1))
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1778[iVar1 /*33*/], 0), true, false) };
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
						{
							case 0:
								Local_135.f_3 = { 2931.54f, 1381.84f, 58.98f };
								break;
							case 1:
								Local_135.f_3 = { 2933.02f, 1380.46f, 57.04f };
								break;
							case 2:
								Local_135.f_3 = { 2930.92f, 1384.89f, 55.95f };
								break;
							case 3:
								Local_135.f_3 = { 2936.17f, 1386.9f, 58.43f };
								break;
							case 4:
								Local_135.f_3 = { 2932.91f, 1383.52f, 57.11f };
								break;
						}
						Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
						Local_135.f_11 = Local_1778[iVar1 /*33*/];
						Local_135.f_9 = Local_1778[iVar1 /*33*/];
						Local_135.f_12 = 0;
						Local_135.f_13 = 1;
						Local_135.f_16 = 1;
						Local_135.f_15 = 1;
						Local_135.f_7 = 0f;
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
						__LIB_1__::func_148(&uLocal_3571);
					}
					break;
				case 9:
					if (((func_1736(Local_1778[6 /*33*/]) && __LIB_0__::func_75(&uLocal_3571)) && __LIB_0__::func_265(&uLocal_3571) > 0.45f) && __LIB_8__::func_864(Local_1778[iVar1 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[iVar1 /*33*/], false), 2f, 1, 1))
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1778[iVar1 /*33*/], 0), true, false) };
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
						{
							case 0:
								Local_135.f_3 = { 2931.54f, 1381.84f, 58.98f };
								break;
							case 1:
								Local_135.f_3 = { 2933.02f, 1380.46f, 57.04f };
								break;
							case 2:
								Local_135.f_3 = { 2930.92f, 1384.89f, 55.95f };
								break;
							case 3:
								Local_135.f_3 = { 2936.17f, 1386.9f, 58.43f };
								break;
							case 4:
								Local_135.f_3 = { 2932.91f, 1383.52f, 57.11f };
								break;
						}
						Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
						Local_135.f_11 = Local_1778[iVar1 /*33*/];
						Local_135.f_9 = Local_1778[iVar1 /*33*/];
						Local_135.f_12 = 0;
						Local_135.f_13 = 1;
						Local_135.f_16 = 1;
						Local_135.f_15 = 1;
						Local_135.f_7 = 0f;
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
						__LIB_1__::func_148(&uLocal_3571);
					}
					break;
				case 14:
					break;
				case 15:
					if (PED::IS_PED_INJURED(Local_1778[14 /*33*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1778[iVar1 /*33*/], Local_155[0 /*182*/], 1, 1))
					{
						__LIB_1__::func_864(Local_1778[iVar1 /*33*/], 0, 0);
					}
					break;
				case 21:
					if ((func_1265(&Local_1778, 17, 20) < 3 || ENTITY::IS_ENTITY_DEAD(iLocal_118)) || __LIB_1__::func_205(Global_35, iLocal_3430[30], 1, 0))
					{
						func_1451(Local_1778[iVar1 /*33*/], 2856.704f, 1405.513f, 67.6891f, 2f, 0f, 0f, 0f, 0, 1);
					}
					break;
				case 22:
					if ((func_1265(&Local_1778, 17, 20) < 3 || ENTITY::IS_ENTITY_DEAD(iLocal_118)) || __LIB_1__::func_205(Global_35, iLocal_3430[30], 1, 0))
					{
						func_1451(Local_1778[iVar1 /*33*/], 2857.361f, 1399.357f, 67.5468f, 2f, 0f, 0f, 0f, 0, 1);
					}
					break;
				case 23:
					if ((func_1265(&Local_1778, 17, 20) < 3 || ENTITY::IS_ENTITY_DEAD(iLocal_118)) || __LIB_1__::func_205(Global_35, iLocal_3430[30], 1, 0))
					{
						func_1451(Local_1778[iVar1 /*33*/], 2853.036f, 1407.357f, 67.6468f, 2f, 0f, 0f, 0f, 0, 1);
					}
					break;
				case 19:
					if (Local_1778[iVar1 /*33*/].f_12 == 0 && Global_36.f_2 > 68.5f)
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1778[iVar1 /*33*/], 2855.991f, 1414.22f, 67.743f, 0.75f, 1, 0, 0);
					}
					else if ((__LIB_0__::func_75(&uLocal_3571) && __LIB_0__::func_265(&uLocal_3571) > 0.45f) && __LIB_8__::func_864(Local_1778[iVar1 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[iVar1 /*33*/], false), 2f, 1, 1))
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1778[iVar1 /*33*/], 0), true, false) };
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
						{
							case 0:
								Local_135.f_3 = { 2874f, 1403.94f, 68.8f };
								break;
							case 1:
								Local_135.f_3 = { 2877.99f, 1405.94f, 69.6f };
								break;
							case 2:
								Local_135.f_3 = { 2876.6f, 1403.59f, 71.45f };
								break;
							case 3:
								Local_135.f_3 = { 2871.76f, 1404.96f, 70.61f };
								break;
							case 4:
								Local_135.f_3 = { 2877.93f, 1406.91f, 68.67f };
								break;
						}
						Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
						Local_135.f_11 = Local_1778[iVar1 /*33*/];
						Local_135.f_9 = Local_1778[iVar1 /*33*/];
						Local_135.f_12 = 0;
						Local_135.f_13 = 1;
						Local_135.f_16 = 1;
						Local_135.f_15 = 1;
						Local_135.f_7 = 0f;
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
						if (!__LIB_0__::func_272(Local_1778[17 /*33*/], 0))
						{
							__LIB_1__::func_148(&uLocal_3571);
						}
					}
					break;
				case 17:
					if (__LIB_0__::func_264(&uLocal_3571) > 0.5f && __LIB_8__::func_864(Local_1778[iVar1 /*33*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_1778[iVar1 /*33*/], false), 2f, 1, 1))
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1778[iVar1 /*33*/], 0), true, false) };
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
						{
							case 0:
								Local_135.f_3 = { 2873.59f, 1405.01f, 67.79f };
								break;
							case 1:
								Local_135.f_3 = { 2878.13f, 1405.79f, 69.21f };
								break;
							case 2:
								Local_135.f_3 = { 2877.1f, 1406.12f, 68.4f };
								break;
							case 3:
								Local_135.f_3 = { 2871.96f, 1404.57f, 67.84f };
								break;
							case 4:
								Local_135.f_3 = { 2875.81f, 1401.73f, 67.79f };
								break;
						}
						Local_135.f_6 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
						Local_135.f_11 = Local_1778[iVar1 /*33*/];
						Local_135.f_9 = Local_1778[iVar1 /*33*/];
						Local_135.f_12 = 0;
						Local_135.f_13 = 1;
						Local_135.f_16 = 1;
						Local_135.f_15 = 1;
						Local_135.f_7 = 0f;
						MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
						__LIB_1__::func_148(&uLocal_3571);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1286()
{
	float fVar0;
	float fVar1;
	if (CLOCK::GET_CLOCK_HOURS() < 12)
	{
		if (CLOCK::GET_CLOCK_HOURS() == 11 && CLOCK::GET_CLOCK_MINUTES() >= 55)
		{
			CLOCK::SET_CLOCK_TIME(12, 0, 0);
			func_1278();
		}
		else
		{
			fVar0 = ((56.3f - Global_36.f_2) / 5f);
			fVar0 = __LIB_0__::func_251(((fVar0 * -1f) + 1f), 0f, 1f);
			__LIB_5__::func_375(12, 0, fVar0, &Local_3603);
		}
	}
	else if (CLOCK::GET_CLOCK_HOURS() < 16)
	{
		if (CLOCK::GET_CLOCK_HOURS() == 15 && CLOCK::GET_CLOCK_MINUTES() > 50)
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(false);
			if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 250)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(250);
			}
		}
		else
		{
			fVar1 = (__LIB_0__::func_94(Global_35, 2878.605f, 1402.829f, 67.6999f, 1) / MISC::GET_DISTANCE_BETWEEN_COORDS(2957.922f, 1375.306f, 55.2541f, 2878.605f, 1402.829f, 67.6999f, true));
			fVar1 = __LIB_0__::func_251(((fVar1 * -1f) + 1f), 0f, 1f);
			__LIB_5__::func_375(16, 0, fVar1, &Local_3603);
		}
	}
	else
	{
		if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
		{
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		}
		CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	}
}

void func_1287()
{
	if (__LIB_1__::func_205(Global_35, iLocal_3430[36], 1, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	}
}

void func_1288(var uParam0)
{
	func_1759(uParam0);
	func_1760(uParam0);
}

void func_1289()
{
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_118, true, false), 10f) && !func_1206(8388608))
	{
		if (!__LIB_0__::func_75(&uLocal_3568))
		{
			func_1207(8388608);
			MISC::SET_TIME_SCALE(0.35f);
			__LIB_1__::func_148(&uLocal_3568);
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_118, 1, 0f, -2f, 4.5f, 0f, 0f, 0f, 0, false, false, true, false, true);
			MISC::_0x4D5C9CC7E7E23E09();
		}
	}
	else if (__LIB_0__::func_75(&uLocal_3568) && __LIB_0__::func_265(&uLocal_3568) > 1f)
	{
		MISC::SET_TIME_SCALE(1f);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uLocal_3580[0], false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_0__::func_37(&uLocal_3568);
	}
}

bool func_1290(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	int iVar26;
	int iVar27;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar5 = false;
		iVar6 = 1;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
		bVar11 = true;
		bVar12 = false;
		bVar13 = false;
		iVar14 = 30;
		fVar15 = 1.5f;
		fVar16 = 5f;
		vVar17 = { 0f, 0f, 0f };
		vVar20 = { 0f, 0f, 0f };
		vVar23 = { 0f, 0f, 0f };
		iVar26 = Global_35;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1778[iVar1 /*33*/]))
		{
			switch (iVar1)
			{
				case 0:
					vVar17 = { 2929.556f, 1379.814f, 55.2547f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2941.93f, 1375.15f, 55.25f };
					bVar10 = true;
					fVar16 = 1.25f;
					bVar7 = true;
					bVar2 = true;
					break;
				case 1:
					vVar17 = { 2924.761f, 1380.271f, 55.2547f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2934.86f, 1380.787f, 56.8306f };
					bVar10 = true;
					fVar16 = 1f;
					bVar7 = true;
					bVar2 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 2:
					vVar17 = { 2931.985f, 1388.766f, 55.2547f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2935.808f, 1382.373f, 56.8306f };
					bVar10 = true;
					fVar16 = 1.25f;
					iVar6 = 0;
					bVar12 = true;
					bVar7 = true;
					bVar2 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 3:
					vVar17 = { 2932.868f, 1388.811f, 55.2547f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2941.005f, 1382.92f, 55.2547f };
					bVar10 = true;
					bVar3 = true;
					bVar12 = true;
					fVar16 = 1f;
					bVar7 = true;
					bVar2 = true;
					break;
				case 4:
					vVar17 = { 2928.195f, 1384.312f, 55.2547f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2934.848f, 1381.924f, 56.8306f };
					bVar10 = true;
					fVar16 = 0.75f;
					iVar6 = 0;
					bVar3 = true;
					bVar7 = true;
					bVar2 = true;
					break;
				case 5:
					vVar17 = { 2923.451f, 1393.756f, 55.0178f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2924.917f, 1390.389f, 55.2547f };
					vVar23 = { 2918.928f, 1387.484f, 56.1889f };
					bVar3 = true;
					fVar16 = 2f;
					bVar10 = true;
					bVar9 = true;
					bVar2 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 6:
					vVar17 = { 2902.992f, 1394.568f, 61.1117f };
					iVar27 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
					vVar20 = { 2917.465f, 1392.35f, 57.6081f };
					vVar23 = { 2918.928f, 1387.484f, 56.1889f };
					fVar16 = 1.75f;
					bVar10 = true;
					bVar7 = true;
					bVar2 = true;
					bVar3 = true;
					bVar13 = true;
					iVar26 = Global_35;
					fVar15 = 2f;
					break;
				case 7:
					vVar17 = { 2912.273f, 1391.155f, 58.6344f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2918.928f, 1387.484f, 56.1889f };
					vVar23 = { 2916.25f, 1390.995f, 57.8315f };
					bVar10 = true;
					fVar16 = 2.5f;
					bVar7 = true;
					bVar3 = true;
					bVar13 = true;
					fVar15 = 2f;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					iVar26 = Local_155[0 /*182*/];
					break;
				case 8:
					vVar17 = { 2922.021f, 1380.294f, 55.2082f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2922.941f, 1381.636f, 55.2547f };
					vVar23 = { 2916.255f, 1384.272f, 56.9968f };
					bVar10 = true;
					fVar16 = 0.75f;
					bVar7 = true;
					bVar2 = true;
					break;
				case 9:
					vVar17 = { 2911.849f, 1389.254f, 58.6344f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2916.255f, 1384.272f, 56.9968f };
					vVar23 = { 2918.928f, 1387.484f, 56.1889f };
					bVar7 = true;
					bVar10 = true;
					fVar16 = 0.75f;
					bVar3 = true;
					bVar2 = true;
					break;
				case 10:
					vVar17 = { 2896.095f, 1394.326f, 63.359f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2896.095f, 1394.326f, 63.359f };
					bVar3 = true;
					bVar10 = true;
					bVar8 = true;
					bVar2 = true;
					bVar7 = true;
					break;
				case 11:
					vVar17 = { 2893.94f, 1367.69f, 59.83f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2893.94f, 1367.69f, 59.83f };
					bVar3 = true;
					bVar2 = true;
					bVar7 = true;
					bVar10 = true;
					fVar16 = 0.75f;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					bVar12 = true;
					break;
				case 12:
					vVar17 = { 2889.685f, 1378.291f, 61.7359f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2889.81f, 1378.72f, 61.74f };
					bVar3 = true;
					bVar8 = true;
					bVar7 = true;
					bVar10 = true;
					bVar2 = true;
					fVar16 = 0.75f;
					bVar12 = true;
					break;
				case 13:
					vVar17 = { 2889.81f, 1382.08f, 61.74f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2889.81f, 1382.08f, 61.74f };
					bVar3 = true;
					bVar7 = true;
					bVar10 = true;
					bVar2 = true;
					fVar16 = 0.75f;
					bVar12 = true;
					break;
				case 14:
					vVar17 = { 2882.632f, 1395.538f, 65.695f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2883.492f, 1397.862f, 66.695f };
					bVar3 = true;
					bVar10 = true;
					fVar16 = 1.25f;
					bVar7 = true;
					bVar2 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 15:
					vVar17 = { 2876.33f, 1405.437f, 67.4188f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2881.45f, 1405.516f, 67.7038f };
					bVar3 = true;
					bVar10 = true;
					fVar16 = 0.75f;
					bVar7 = true;
					bVar2 = true;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 16:
					vVar17 = { 2864.71f, 1410.289f, 66.9827f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2864.71f, 1410.289f, 66.9827f };
					bVar8 = false;
					bVar2 = true;
					fVar15 = 3f;
					bVar11 = false;
					iVar6 = 0;
					break;
				case 17:
					vVar17 = { 2858.89f, 1394.64f, 66.8701f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2858.533f, 1401.54f, 67.6018f };
					bVar10 = true;
					fVar16 = 1f;
					bVar12 = true;
					bVar7 = true;
					iVar6 = 0;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 18:
					vVar17 = { 2857.342f, 1418.315f, 67.6677f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2860.383f, 1410.039f, 67.4171f };
					bVar10 = true;
					bVar3 = true;
					fVar16 = 1f;
					bVar12 = true;
					bVar7 = true;
					iVar6 = 0;
					break;
				case 19:
					vVar17 = { 2840.5f, 1404.7f, 68f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2840.5f, 1404.7f, 68f };
					bVar3 = true;
					bVar12 = true;
					bVar10 = true;
					fVar16 = 1f;
					bVar7 = true;
					iVar6 = 0;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					break;
				case 20:
					vVar17 = { 2854.646f, 1410.755f, 67.8743f };
					iVar27 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2854.912f, 1411.314f, 67.8537f };
					bVar10 = true;
					bVar3 = true;
					bVar12 = true;
					fVar16 = 1.5f;
					bVar7 = true;
					iVar6 = 0;
					break;
				case 21:
					vVar17 = { 2846.048f, 1384.47f, 66.5714f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2846.048f, 1384.47f, 66.5714f };
					bVar3 = true;
					bVar10 = true;
					fVar16 = 1f;
					bVar7 = true;
					fVar15 = 3f;
					bVar13 = true;
					iVar6 = 0;
					iVar26 = Global_35;
					break;
				case 22:
					vVar17 = { 2844.318f, 1384.49f, 66.5115f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2844.318f, 1384.49f, 66.5115f };
					bVar3 = true;
					bVar10 = true;
					fVar16 = 1f;
					bVar7 = true;
					fVar15 = 3f;
					bVar13 = true;
					iVar26 = Local_155[0 /*182*/];
					break;
				case 23:
					vVar17 = { 2847.165f, 1387.604f, 66.9029f };
					iVar27 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					vVar20 = { 2847.165f, 1387.604f, 66.9029f };
					bVar3 = true;
					bVar10 = true;
					fVar16 = 1f;
					bVar7 = true;
					fVar15 = 3f;
					bVar13 = true;
					iVar6 = 0;
					if (__LIB_0__::func_302() >= 2)
					{
						iVar14 = 35;
					}
					else
					{
						iVar14 = 45;
					}
					iVar26 = Local_155[1 /*182*/];
					break;
			}
			if (!Local_1778[iVar1 /*33*/].f_17)
			{
				Local_1778[iVar1 /*33*/] = __LIB_1__::func_545(iLocal_22, vVar17, 270f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				Local_1778[iVar1 /*33*/].f_12 = 0;
				Local_1778[iVar1 /*33*/].f_17 = 1;
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1778[iVar1 /*33*/], true);
				if (bVar7)
				{
					PED::REGISTER_TARGET(Local_1778[iVar1 /*33*/], Local_155[0 /*182*/], 1);
					PED::REGISTER_TARGET(Local_1778[iVar1 /*33*/], Local_155[1 /*182*/], 1);
					PED::REGISTER_TARGET(Local_1778[iVar1 /*33*/], Global_35, 1);
				}
				if (!__LIB_0__::func_86(vVar20))
				{
					Local_1778[iVar1 /*33*/].f_13 = 0;
					if (bVar10)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_1778[iVar1 /*33*/], true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1778[iVar1 /*33*/], vVar20, fVar16, 1, 0, 0);
						if (!__LIB_0__::func_138(vVar23, 0f, 0f, 0f))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1778[iVar1 /*33*/], vVar23, fVar16, 1, 1, 0);
							PED::SET_COMBAT_FLOAT(Local_1778[iVar1 /*33*/], 61, 4f);
						}
					}
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
					TASK::TASK_SET_CROUCH_MOVEMENT(0, bVar5, 0, false);
					if (bVar4)
					{
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar20, -1, 1, 0f, 0, 0, 0, 0, 0, 0);
					}
					else if (bVar13)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar20, iVar26, fVar15, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					}
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vVar20, 50f, 0, 14);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
					if (bVar9)
					{
						TASK::_TASK_PERFORM_SEQUENCE_2(Local_1778[iVar1 /*33*/], iLocal_38, 1f, 1f);
					}
					else
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_1778[iVar1 /*33*/], iLocal_38);
					}
				}
				if (bVar2)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1778[iVar1 /*33*/], true);
				}
				if (bVar3)
				{
					__LIB_2__::func_279(Local_1778[iVar1 /*33*/], 1);
				}
				if (bVar8)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_1778[iVar1 /*33*/], 0);
					PED::SET_COMBAT_FLOAT(Local_1778[iVar1 /*33*/], 3, 2f);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1778[iVar1 /*33*/], joaat("REL_PLAYER_ENEMY"));
				PED::SET_PED_CONFIG_FLAG(Local_1778[iVar1 /*33*/], 186, false);
				PED::SET_PED_CONFIG_FLAG(Local_1778[iVar1 /*33*/], 281, true);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1778[iVar1 /*33*/], false);
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_1778[iVar1 /*33*/], true, true);
				__LIB_1__::func_766(Local_1778[iVar1 /*33*/], iVar27, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_1__::func_991(Local_1778[iVar1 /*33*/], 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_1778[iVar1 /*33*/], iVar27, true, 0, false, false);
				PED::SET_PED_ACCURACY(Local_1778[iVar1 /*33*/], iVar14);
				PED::_0xC5B78E41DCF8227C(Local_1778[iVar1 /*33*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1778[iVar1 /*33*/], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1778[iVar1 /*33*/], 35, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1778[iVar1 /*33*/], 50, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1778[iVar1 /*33*/], 2, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1778[iVar1 /*33*/], 30, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1778[iVar1 /*33*/], 58, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1778[iVar1 /*33*/], 98, true);
				if (iVar6 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1778[iVar1 /*33*/], 0, false);
				}
				if (bVar12)
				{
					PED::_0x20E54854DEF6A54A(Local_1778[iVar1 /*33*/], joaat("FIRING_PATTERN_FULL_AUTO"));
					PED::SET_PED_SHOOT_RATE(Local_1778[iVar1 /*33*/], 250);
					WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_1778[iVar1 /*33*/], true);
				}
				else
				{
					PED::SET_COMBAT_FLOAT(Local_1778[iVar1 /*33*/], 3, 0.65f);
					PED::SET_PED_SHOOT_RATE(Local_1778[iVar1 /*33*/], 160);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(Local_1778[iVar1 /*33*/], 512, true);
				if (bVar11)
				{
					func_1734(&(Local_1778[iVar1 /*33*/]), &(Local_1778[iVar1 /*33*/].f_1), 1, 0);
				}
			}
			if (bParam2)
			{
				return false;
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1291()
{
	if (__LIB_0__::func_264(&uLocal_3571) > 1.25f)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				Local_135 = { 2930.312f, 1384.006f, 58.5081f };
				break;
			case 1:
				Local_135 = { 2919.272f, 1383.704f, 58.5762f };
				break;
			case 2:
				Local_135 = { 2929.2f, 1387.606f, 57.1849f };
				break;
		}
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				Local_135.f_3 = { 2941.287f, 1379.55f, 56.7654f };
				break;
			case 1:
				Local_135.f_3 = { 2941.528f, 1378.302f, 56.4952f };
				break;
			case 2:
				Local_135.f_3 = { 2954.416f, 1372.157f, 56.2056f };
				break;
			case 3:
				Local_135.f_3 = { 2954.343f, 1379.767f, 57.3364f };
				break;
		}
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 1))
		{
			case 0:
				Local_135.f_6 = joaat("WEAPON_REPEATER_CARBINE");
				break;
			case 1:
				Local_135.f_6 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
		Local_135.f_12 = 1;
		Local_135.f_13 = 0;
		Local_135.f_16 = 1;
		Local_135.f_15 = 0;
		Local_135.f_7 = 0f;
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
		__LIB_0__::func_268(&uLocal_3571, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.6f));
	}
	else if (!__LIB_0__::func_75(&uLocal_3571))
	{
		__LIB_1__::func_148(&uLocal_3571);
	}
}

void func_1292()
{
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[0 /*182*/], 0f, 0f, 0f, 50f, 0, 3);
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_155[1 /*182*/], 0f, 0f, 0f, 50f, 0, 3);
}

bool func_1293(int iParam0)
{
	return __LIB_0__::func_27(iLocal_3519, iParam0);
}

void func_1294(int iParam0)
{
	if (!func_1293(iParam0))
	{
		__LIB_1__::func_683(&iLocal_3519, iParam0);
	}
}

void func_1295(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		__LIB_0__::func_490(&(Local_1778[iVar1 /*33*/]), 1);
		iVar0++;
	}
}

bool func_1298(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = iVar0;
		if (iVar2 == 0 || iVar2 == 1)
		{
			if (iVar2 == 0)
			{
				iVar1 = 2;
			}
			else if (iVar2 == 1)
			{
				iVar1 = 3;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_155[iVar2 /*182*/].f_1))
			{
				if (func_1762(&(uLocal_3409[3])))
				{
					Local_155[iVar2 /*182*/].f_1 = __LIB_3__::func_568(uLocal_3409[3], iVar1);
				}
				else
				{
					return false;
				}
				if (bParam0)
				{
					return false;
				}
			}
			else
			{
				func_1763(&(Local_155[iVar2 /*182*/].f_1), iVar0);
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3399))
		{
			if (func_1762(&(uLocal_3409[3])))
			{
				iLocal_3399 = __LIB_3__::func_568(uLocal_3409[3], 0);
			}
			else
			{
				return false;
			}
			if (bParam0)
			{
				return false;
			}
		}
		else
		{
			func_1764(&iLocal_3399);
			return true;
		}
		iVar0++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3400))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3409[3]) && __LIB_4__::func_818(&(uLocal_3409[3])))
		{
			iLocal_3400 = __LIB_3__::func_568(uLocal_3409[3], 1);
		}
		else
		{
			return false;
		}
		if (bParam0)
		{
			return false;
		}
	}
	else
	{
		func_1764(&iLocal_3400);
		return true;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_3399) && ENTITY::DOES_ENTITY_EXIST(Local_155[0 /*182*/].f_1)) && ENTITY::DOES_ENTITY_EXIST(Local_155[1 /*182*/].f_1))
	{
		func_1201(Local_155[0 /*182*/].f_1, func_222(11, 4), 2, 1073741824 /* Float: 2f */);
		func_1763(&(Local_155[0 /*182*/].f_1), 0);
		func_1201(Local_155[1 /*182*/].f_1, func_222(10, 4), 2, 1073741824 /* Float: 2f */);
		func_1763(&(Local_155[1 /*182*/].f_1), 1);
		func_1201(iLocal_3399, func_222(12, 4), 2, 1073741824 /* Float: 2f */);
		func_1764(&iLocal_3399);
		return true;
	}
	return false;
}

void func_1300(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122[0]))
	{
		iLocal_122[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_33, 2851f, 1425f, 59f, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122[1]))
	{
		iLocal_122[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_33, 2851f, 1425f, 59f, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122[2]))
	{
		iLocal_122[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_33, 2851f, 1425f, 59f, true, true, false, true);
	}
	ENTITY::SET_ENTITY_COLLISION(iLocal_122[0], false, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_122[1], false, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_122[2], false, false);
	ENTITY::_0xA9E6D8F2DDFC4DB9(iLocal_122[0], 1);
	ENTITY::_0xA9E6D8F2DDFC4DB9(iLocal_122[1], 1);
	ENTITY::_0xA9E6D8F2DDFC4DB9(iLocal_122[2], 1);
	__LIB_5__::func_580(uParam0, iLocal_122[0], "p_cs_horseHarness01x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_122[1], "p_cs_horseHarness01x^1", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_122[2], "p_cs_horseHarness01x^2", 0, 0, 0, 0);
}

bool func_1301(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<4> Var6;
	int iVar10;
	int iVar11;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		bVar2 = true;
		bVar3 = false;
		bVar4 = false;
		bVar5 = true;
		iVar10 = 100;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2969[iVar1 /*33*/]))
		{
			switch (iVar1)
			{
				case 0:
					Var6 = { func_222(6, 0) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = true;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(6), 32);
					Local_2969[iVar1 /*33*/].f_25 = 3;
					Local_2969[iVar1 /*33*/].f_23 = 3;
					Local_2969[iVar1 /*33*/].f_24 = -5;
					Local_2969[iVar1 /*33*/].f_27 = 20;
					break;
				case 1:
					Var6 = { func_222(6, 1) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar4 = true;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(5), 32);
					Local_2969[iVar1 /*33*/].f_25 = 2;
					Local_2969[iVar1 /*33*/].f_23 = 3;
					Local_2969[iVar1 /*33*/].f_24 = -6;
					Local_2969[iVar1 /*33*/].f_27 = 20;
					break;
				case 2:
					Var6 = { func_222(6, 2) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = true;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(5), 32);
					Local_2969[iVar1 /*33*/].f_25 = 26;
					Local_2969[iVar1 /*33*/].f_23 = 38;
					Local_2969[iVar1 /*33*/].f_24 = -6;
					Local_2969[iVar1 /*33*/].f_27 = 63;
					break;
				case 3:
					Var6 = { func_222(6, 3) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = true;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(6), 32);
					Local_2969[iVar1 /*33*/].f_25 = 25;
					Local_2969[iVar1 /*33*/].f_23 = 40;
					Local_2969[iVar1 /*33*/].f_24 = -6;
					Local_2969[iVar1 /*33*/].f_27 = 65;
					break;
				case 4:
					Var6 = { func_222(6, 8) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = true;
					iVar10 = 150;
					bVar5 = false;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(7), 32);
					Local_2969[iVar1 /*33*/].f_25 = 44;
					Local_2969[iVar1 /*33*/].f_23 = 19;
					Local_2969[iVar1 /*33*/].f_24 = -25;
					Local_2969[iVar1 /*33*/].f_27 = 103;
					Local_2969[iVar1 /*33*/].f_20 = 0;
					break;
				case 5:
					Var6 = { func_222(6, 9) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = false;
					iVar10 = 150;
					bVar5 = false;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(8), 32);
					Local_2969[iVar1 /*33*/].f_25 = 45;
					Local_2969[iVar1 /*33*/].f_23 = 30;
					Local_2969[iVar1 /*33*/].f_24 = 0;
					Local_2969[iVar1 /*33*/].f_27 = 106;
					Local_2969[iVar1 /*33*/].f_20 = 0;
					break;
				case 6:
					Var6 = { func_222(6, 12) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = true;
					iVar10 = 170;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(8), 32);
					Local_2969[iVar1 /*33*/].f_25 = 105;
					Local_2969[iVar1 /*33*/].f_23 = 57;
					Local_2969[iVar1 /*33*/].f_24 = 0;
					Local_2969[iVar1 /*33*/].f_27 = 114;
					Local_2969[iVar1 /*33*/].f_19 = 1;
					Local_2969[iVar1 /*33*/].f_20 = 0;
					break;
				case 7:
					Var6 = { func_222(6, 13) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = false;
					iVar10 = 180;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(7), 32);
					Local_2969[iVar1 /*33*/].f_25 = 90;
					Local_2969[iVar1 /*33*/].f_23 = 57;
					Local_2969[iVar1 /*33*/].f_24 = 0;
					Local_2969[iVar1 /*33*/].f_27 = 126;
					Local_2969[iVar1 /*33*/].f_20 = 0;
					break;
				case 8:
					Var6 = { func_222(6, 14) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = false;
					bVar4 = false;
					bVar5 = false;
					iVar10 = 150;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(7), 32);
					Local_2969[iVar1 /*33*/].f_25 = 125;
					Local_2969[iVar1 /*33*/].f_23 = 95;
					Local_2969[iVar1 /*33*/].f_24 = 0;
					Local_2969[iVar1 /*33*/].f_27 = 150;
					Local_2969[iVar1 /*33*/].f_20 = 1;
					break;
				case 9:
					Var6 = { func_222(6, 16) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = true;
					bVar5 = false;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(8), 32);
					Local_2969[iVar1 /*33*/].f_25 = 136;
					Local_2969[iVar1 /*33*/].f_23 = 99;
					Local_2969[iVar1 /*33*/].f_24 = 5;
					Local_2969[iVar1 /*33*/].f_27 = 162;
					Local_2969[iVar1 /*33*/].f_19 = 1;
					Local_2969[iVar1 /*33*/].f_20 = 1;
					break;
				case 10:
					Var6 = { func_222(6, 15) };
					iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = true;
					bVar5 = false;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(6), 32);
					Local_2969[iVar1 /*33*/].f_25 = 136;
					Local_2969[iVar1 /*33*/].f_23 = 155;
					Local_2969[iVar1 /*33*/].f_24 = -5;
					Local_2969[iVar1 /*33*/].f_27 = 170;
					Local_2969[iVar1 /*33*/].f_19 = 1;
					break;
				case 11:
					Var6 = { func_222(6, 19) };
					iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					bVar3 = true;
					bVar4 = true;
					bVar5 = false;
					iVar10 = 200;
					StringCopy(&(Local_2969[iVar1 /*33*/].f_29), func_410(8), 32);
					Local_2969[iVar1 /*33*/].f_25 = 125;
					Local_2969[iVar1 /*33*/].f_23 = 86;
					Local_2969[iVar1 /*33*/].f_24 = 0;
					Local_2969[iVar1 /*33*/].f_27 = 162;
					Local_2969[iVar1 /*33*/].f_19 = 1;
					Local_2969[iVar1 /*33*/].f_20 = 0;
					break;
			}
			if (Local_2969[iVar1 /*33*/].f_22 == -1)
			{
				Local_2969[iVar1 /*33*/].f_22 = GRAPHICS::CREATE_TRACKED_POINT();
			}
			if (Local_2969[iVar1 /*33*/].f_22 != -1)
			{
				if (Local_2969[iVar1 /*33*/].f_17 == 0)
				{
					GRAPHICS::SET_TRACKED_POINT_INFO(Local_2969[iVar1 /*33*/].f_22, Var6, 2f);
					if (!GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_2969[iVar1 /*33*/].f_22))
					{
						if (!Local_2969[iVar1 /*33*/].f_17)
						{
							if (__LIB_0__::func_75(&(Local_2969[iVar1 /*33*/].f_6)))
							{
								if (__LIB_0__::func_264(&(Local_2969[iVar1 /*33*/].f_6)) < 5f)
								{
									return false;
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_2969[iVar1 /*33*/].f_2))
							{
								Local_2969[iVar1 /*33*/].f_2 = __LIB_1__::func_545(iLocal_30, Var6, Var6.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2969[iVar1 /*33*/].f_2, true);
								TASK::TASK_STAND_STILL(Local_2969[iVar1 /*33*/].f_2, -1);
								TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_2969[iVar1 /*33*/].f_2, true);
								TASK::_0x9DE63896B176EA94(Local_2969[iVar1 /*33*/].f_2, 1);
								TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_2969[iVar1 /*33*/].f_2, false, 1f);
								return false;
							}
							else
							{
								Local_2969[iVar1 /*33*/] = __LIB_1__::func_545(iLocal_22, Var6, Var6.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
								Local_2969[iVar1 /*33*/].f_12 = 0;
								Local_2969[iVar1 /*33*/].f_13 = 0;
								Local_2969[iVar1 /*33*/].f_17 = 1;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2969[iVar1 /*33*/], true);
								PED::SET_PED_CONFIG_FLAG(Local_2969[iVar1 /*33*/], 186, false);
								TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_2969[iVar1 /*33*/], false);
								WEAPON::REMOVE_ALL_PED_WEAPONS(Local_2969[iVar1 /*33*/], true, true);
								__LIB_1__::func_766(Local_2969[iVar1 /*33*/], iVar11, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
								__LIB_1__::func_991(Local_2969[iVar1 /*33*/], 0);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2969[iVar1 /*33*/], iVar11, true, 0, false, false);
								PED::SET_PED_ACCURACY(Local_2969[iVar1 /*33*/], 20);
								PED::_0xC5B78E41DCF8227C(Local_2969[iVar1 /*33*/], 1);
								TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_2969[iVar1 /*33*/], true);
								TASK::_0x9DE63896B176EA94(Local_2969[iVar1 /*33*/], 1);
								TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_2969[iVar1 /*33*/], false, 1f);
								if (bVar3)
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2969[iVar1 /*33*/], true);
								}
								PED::_SET_PED_DAMAGE_MODIFIER(Local_2969[iVar1 /*33*/], 0.5f);
								ENTITY::SET_ENTITY_MAX_HEALTH(Local_2969[iVar1 /*33*/], iVar10);
								ENTITY::_SET_ENTITY_HEALTH(Local_2969[iVar1 /*33*/], iVar10, 0);
								if (bVar4)
								{
									__LIB_2__::func_279(Local_2969[iVar1 /*33*/], 1);
								}
								if (bVar2)
								{
									__LIB_1__::func_571(Local_2969[iVar1 /*33*/], Local_2969[iVar1 /*33*/].f_2, 0, -1, 1);
								}
								if (bVar5)
								{
									func_1734(&(Local_2969[iVar1 /*33*/]), &(Local_2969[iVar1 /*33*/].f_1), bVar5, 0);
								}
								if (bParam2)
								{
									return false;
								}
							}
						}
					}
				}
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1302(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (!PED::DOES_GROUP_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_GROUP(2);
	}
	if (PED::DOES_GROUP_EXIST(*uParam0))
	{
		PED::SET_GROUP_FORMATION(*uParam0, iParam3);
		if (!__LIB_0__::func_272(*uParam1, 0))
		{
			return;
		}
		PED::SET_PED_CONFIG_FLAG(*uParam1, 279, true);
		if (iParam2 == 0)
		{
			if (*uParam1 == Global_35)
			{
				if (!PED::DOES_GROUP_EXIST(*uParam0))
				{
					return;
				}
				iVar0 = PED::GET_PED_AS_GROUP_LEADER(*uParam0);
				if (!__LIB_0__::func_272(iVar0, 0))
				{
					return;
				}
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), iVar0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
				PED::_0x9BBEAF8B0C007F1E(iVar0, 0);
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(*uParam1, *uParam0);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 280, true);
			}
		}
		else if (!PED::_0x878B68960C1C2A35(*uParam1, *uParam0))
		{
			if (PED::IS_PED_IN_GROUP(*uParam1))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam1, 279, false);
				PED::REMOVE_PED_FROM_GROUP(*uParam1);
			}
			PED::SET_PED_AS_GROUP_LEADER(*uParam1, *uParam0, false);
		}
	}
}

void func_1303(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	if (!PED::DOES_GROUP_EXIST(iParam0) || !__LIB_0__::func_272(*uParam1, 0))
	{
		return;
	}
	if (PED::IS_PED_GROUP_MEMBER(*uParam1, iParam0, 0))
	{
		return;
	}
	if (PED::IS_PED_IN_GROUP(*uParam1) && iParam2 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, 279, false);
		PED::REMOVE_PED_FROM_GROUP(*uParam1);
	}
	if (*uParam1 == Global_35)
	{
		if (!PED::DOES_GROUP_EXIST(iParam0))
		{
			return;
		}
		iVar0 = PED::GET_PED_AS_GROUP_LEADER(iParam0);
		if (!__LIB_0__::func_272(iVar0, 0))
		{
			return;
		}
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), iVar0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
		PED::_0x9BBEAF8B0C007F1E(iVar0, 0);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, 279, true);
		PED::SET_PED_AS_GROUP_MEMBER(*uParam1, iParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 280, true);
	}
}

void func_1304(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (iParam2 == 0)
		{
			if (__LIB_5__::func_570(uParam0, *uParam1))
			{
				if (!__LIB_5__::func_558(uParam0, *uParam1, 256))
				{
					__LIB_5__::func_572(uParam0, *uParam1, 256);
				}
			}
		}
		else if (iParam2 == 1)
		{
			if (__LIB_5__::func_570(uParam0, *uParam1))
			{
				if (!__LIB_5__::func_558(uParam0, *uParam1, 256))
				{
					__LIB_5__::func_572(uParam0, *uParam1, 256);
				}
			}
		}
		func_1766(uParam0, uParam1, iParam2);
		PED::_0x8ACC0506743A8A5C(*uParam1, joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
		if (__LIB_4__::func_939(uParam0) == iLocal_16)
		{
			if (iParam2 == 0)
			{
				__LIB_4__::func_7(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_UNARMED"), true, 0, true, false);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_UNARMED"), true, 1, true, false);
			}
			else if (iParam2 == 1)
			{
				__LIB_4__::func_7(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_4__::func_7(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_UNARMED"), true, 0, true, false);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_UNARMED"), true, 1, true, false);
			}
		}
		else if (__LIB_4__::func_939(uParam0) == iLocal_19)
		{
			if (iParam2 == 0)
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), 0, false))
				{
					__LIB_4__::func_7(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), 50, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), true, 0, false, false);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), 0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), true, 3, false, false);
				}
			}
			else if (iParam2 == 1)
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), 0, false))
				{
					__LIB_4__::func_7(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), 50, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), true, 0, false, false);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), 0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), true, 3, false, false);
				}
			}
		}
		else if (iParam2 == 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), 0, false))
			{
				__LIB_4__::func_7(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), 50, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), true, 0, false, false);
			}
		}
		else if (iParam2 == 1)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), 0, false))
			{
				__LIB_4__::func_7(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), 50, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), true, 0, false, false);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), 0, false))
			{
				__LIB_4__::func_7(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), 50, 13, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH_DUALWIELD"), true, 1, false, false);
			}
		}
		PED::SET_PED_CONFIG_FLAG(*uParam1, 252, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*uParam1, true);
		AUDIO::STOP_PED_SPEAKING(*uParam1, true);
	}
}

void func_1306(var uParam0)
{
	if (func_1317(1) > 4)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (func_1255(uParam0, iLocal_3399, "HORSE_RET", "HORSE_FAIL", 40f, 50f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1))
			{
				__LIB_10__::func_930(uParam0, Local_155[0 /*182*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				func_1262(&(Local_155[0 /*182*/].f_177), 8);
			}
			else if (__LIB_13__::func_666(Local_155[0 /*182*/].f_177, 8))
			{
				func_1242(&(Local_155[0 /*182*/].f_177), 8);
				__LIB_10__::func_935(uParam0, Local_155[0 /*182*/], 1);
			}
		}
		else if (func_1255(uParam0, Local_155[0 /*182*/], "TRN1_GANG_RETURN", "TRN1_GANG_ABANDON", 50f, 75f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1))
		{
			__LIB_10__::func_930(uParam0, Local_155[0 /*182*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			func_1262(&(Local_155[0 /*182*/].f_177), 8);
		}
		else if (__LIB_13__::func_666(Local_155[0 /*182*/].f_177, 8))
		{
			func_1242(&(Local_155[0 /*182*/].f_177), 8);
			__LIB_10__::func_935(uParam0, Local_155[0 /*182*/], 1);
		}
	}
	if ((!__LIB_0__::func_272(iLocal_3399, 0) || !__LIB_0__::func_272(Local_155[1 /*182*/].f_1, 0)) || !__LIB_0__::func_272(Local_155[0 /*182*/].f_1, 0))
	{
		__LIB_5__::func_505(uParam0, "TRN1_FAIL_HORSE", "", 1, 0);
	}
}

void func_1307(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (__LIB_11__::func_365(uParam0, "TRN1_OBJ8", 0, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_486(uParam0, "TRN1_OBJ05", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_5__::func_372(uParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_9__::func_344())
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			if (func_1206(4194304) && !func_1222(512))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 3);
			}
			if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, 2212.85f, 1593.216f, 84.1408f, 180f))
			{
				if (__LIB_0__::func_264(&uLocal_3531) > 5f)
				{
					if (__LIB_11__::func_365(uParam0, "TRN1_OBJ05", 4, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_3528);
						__LIB_5__::func_372(uParam0, -1);
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			break;
		case 3:
			if (!__LIB_9__::func_344())
			{
				__LIB_1__::func_148(&uLocal_3531);
			}
			if (__LIB_0__::func_264(&uLocal_3531) > 5f)
			{
				if (__LIB_11__::func_365(uParam0, "TRN1_KILL_CHASE", 0, 0, 0))
				{
					func_1768();
					__LIB_5__::func_372(uParam0, 2);
					func_1719(512);
				}
			}
			break;
		case 4:
			if (__LIB_11__::func_365(uParam0, "TRN1_SPOT_LEFTC", 0, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 2);
			}
			break;
		case 5:
			if (__LIB_11__::func_365(uParam0, "TRN1_SPOT_UP", 0, 2f, 0))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 2);
			}
			break;
		case 6:
			if (__LIB_11__::func_365(uParam0, "TRN1_SPOT_FOR", 0, 3f, 0))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 2);
			}
			break;
		case 7:
			if (__LIB_11__::func_365(uParam0, "TRN1_SPOT_LEFTF", 0, 3.5f, 0))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 2);
			}
			break;
		case 8:
			if (__LIB_11__::func_365(uParam0, "TRN1_SPOT_FINAL", 0, 2.5f, 0))
			{
				__LIB_1__::func_148(&uLocal_3531);
				__LIB_5__::func_372(uParam0, 2);
			}
			break;
	}
}

void func_1308(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar6 = __LIB_4__::func_971(uParam0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar7 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_2969[iVar7 /*33*/]))
		{
			func_1769(iVar7);
			func_1770(iVar7);
			func_1771(iVar7, iVar1, vVar2);
			switch (Local_2969[iVar7 /*33*/].f_12)
			{
				case 0:
					if (__LIB_0__::func_272(Local_2969[iVar7 /*33*/], 0))
					{
						if (iVar6 > 0)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[0 /*182*/], 0))
							{
								if (__LIB_0__::func_272(Local_155[0 /*182*/], 0))
								{
									iVar8 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_155[0 /*182*/]);
								}
								if (iVar8 > Local_2969[iVar7 /*33*/].f_25)
								{
									if ((((iVar7 == 0 || iVar7 == 1) || iVar7 == 2) || iVar7 == 3) || iVar7 == 10)
									{
										__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 2);
									}
									else
									{
										__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 4);
									}
									if (iVar7 == 0)
									{
										__LIB_5__::func_372(uParam0, 4);
									}
									else if (iVar7 == 2)
									{
										__LIB_5__::func_372(uParam0, 5);
									}
									else if (iVar7 == 4)
									{
										__LIB_5__::func_372(uParam0, 6);
									}
									else if (iVar7 == 6)
									{
										__LIB_5__::func_372(uParam0, 7);
									}
									else if (iVar7 == 9)
									{
										__LIB_5__::func_372(uParam0, 8);
									}
									__LIB_1__::func_148(&(Local_2969[iVar7 /*33*/].f_3));
								}
							}
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_272(Local_2969[iVar7 /*33*/], 0))
					{
						vVar2 = { func_222(6, func_1772(iVar7, 0)) };
						iVar9 = 516;
						if (iVar7 == 10)
						{
							func_1734(&(Local_2969[iVar7 /*33*/]), &(Local_2969[iVar7 /*33*/].f_1), 1, 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_2969[iVar7 /*33*/], vVar2, Global_35, 2.001f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, iVar9, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						}
						else if (iVar7 == 2 || iVar7 == 3)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2969[iVar7 /*33*/], vVar2, 2.5f, -1, 0.25f, iVar9, vVar2.f_3);
						}
						else if (iVar7 == 4)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2969[iVar7 /*33*/], vVar2, 2.001f, -1, 0.25f, iVar9, vVar2.f_3);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2969[iVar7 /*33*/], vVar2, 1.75f, -1, 0.25f, iVar9, vVar2.f_3);
						}
						PED::REGISTER_TARGET(Local_155[0 /*182*/], Local_2969[iVar7 /*33*/], 1);
						PED::REGISTER_TARGET(Local_155[1 /*182*/], Local_2969[iVar7 /*33*/], 1);
						PED::REGISTER_TARGET(Local_2969[iVar7 /*33*/], Local_155[0 /*182*/], 1);
						PED::REGISTER_TARGET(Local_2969[iVar7 /*33*/], Local_155[1 /*182*/], 1);
						PED::REGISTER_TARGET(Local_2969[iVar7 /*33*/], Global_35, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2969[iVar7 /*33*/], joaat("REL_PLAYER_ENEMY"));
						PED::SET_PED_COMBAT_MOVEMENT(Local_2969[iVar7 /*33*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 46, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 35, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 2, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 30, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 98, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_2969[iVar7 /*33*/], 512, true);
						__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 3);
					}
					break;
				case 3:
					if (__LIB_0__::func_272(Local_2969[iVar7 /*33*/], 0))
					{
						vVar2 = { func_222(6, func_1772(iVar7, 0)) };
						if (ENTITY::IS_ENTITY_AT_COORD(Local_2969[iVar7 /*33*/], vVar2, 2f, 2f, 3f, false, true, 0) && func_1317(1) >= Local_2969[iVar7 /*33*/].f_25)
						{
							if (iVar7 == 2 || iVar7 == 1)
							{
								TASK::TASK_HORSE_ACTION(Local_2969[iVar7 /*33*/].f_2, 1, 0, 0);
							}
							TASK::CLEAR_PED_TASKS(Local_2969[iVar7 /*33*/], true, false);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
							TASK::TASK_STAND_STILL(0, 2500);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_2969[iVar7 /*33*/], iLocal_38);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 4);
							__LIB_1__::func_148(&(Local_2969[iVar7 /*33*/].f_3));
							if (iVar7 == 9 || iVar7 == 10)
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_2969[iVar7 /*33*/], 0);
								__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 12);
							}
						}
					}
					break;
				case 4:
					if (__LIB_0__::func_272(Local_2969[iVar7 /*33*/], 0))
					{
						if (func_1317(1) >= Local_2969[iVar7 /*33*/].f_25 && !__LIB_0__::func_163(Local_2969[iVar7 /*33*/], 242628503))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_2969[iVar7 /*33*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 50, true);
							func_1734(&(Local_2969[iVar7 /*33*/]), &(Local_2969[iVar7 /*33*/].f_1), 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
							if (Local_2969[iVar7 /*33*/].f_20)
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &(Local_2969[iVar7 /*33*/].f_29), Local_2969[iVar7 /*33*/].f_23, 518, Local_2969[iVar7 /*33*/].f_28, 0, 1, -1);
							}
							else
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &(Local_2969[iVar7 /*33*/].f_29), Local_2969[iVar7 /*33*/].f_23, 516, Local_2969[iVar7 /*33*/].f_28, 0, 1, -1);
							}
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
							TASK::TASK_PERFORM_SEQUENCE(Local_2969[iVar7 /*33*/], iLocal_38);
							__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 5);
						}
					}
					break;
				case 5:
					if (__LIB_0__::func_272(Local_2969[iVar7 /*33*/], 0))
					{
						if (!MAP::DOES_BLIP_EXIST(Local_2969[iVar7 /*33*/].f_1))
						{
							Local_2969[iVar7 /*33*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_2969[iVar7 /*33*/]);
							MAP::_BLIP_SET_MODIFIER(Local_2969[iVar7 /*33*/].f_1, -1034486097);
						}
						if (__LIB_0__::func_665(Local_2969[iVar7 /*33*/], Local_155[0 /*182*/], 1, 1) < 50f)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2969[iVar7 /*33*/], joaat("REL_PLAYER_ENEMY"));
							__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 12);
						}
					}
					break;
				case 12:
					if (__LIB_0__::func_272(Local_2969[iVar7 /*33*/], 0))
					{
						if (__LIB_0__::func_75(&(Local_2969[iVar7 /*33*/].f_3)) && __LIB_0__::func_264(&(Local_2969[iVar7 /*33*/].f_3)) > 1.5f)
						{
							PED::REGISTER_TARGET(Local_155[0 /*182*/], Local_2969[iVar7 /*33*/], 1);
							PED::REGISTER_TARGET(Local_155[1 /*182*/], Local_2969[iVar7 /*33*/], 1);
							PED::REGISTER_TARGET(Local_2969[iVar7 /*33*/], Local_155[0 /*182*/], 1);
							PED::REGISTER_TARGET(Local_2969[iVar7 /*33*/], Local_155[1 /*182*/], 1);
							PED::REGISTER_TARGET(Local_2969[iVar7 /*33*/], Global_35, 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2969[iVar7 /*33*/], joaat("REL_PLAYER_ENEMY"));
							PED::SET_PED_COMBAT_MOVEMENT(Local_2969[iVar7 /*33*/], 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 46, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 35, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 30, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2969[iVar7 /*33*/], 98, false);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_2969[iVar7 /*33*/], 512, true);
							TASK::TASK_COMBAT_HATED_TARGETS(Local_2969[iVar7 /*33*/], -1f);
							__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 13);
						}
					}
					break;
				case 13:
					if (__LIB_0__::func_272(Local_2969[iVar7 /*33*/], 0))
					{
						if (!MAP::DOES_BLIP_EXIST(Local_2969[iVar7 /*33*/].f_1))
						{
							Local_2969[iVar7 /*33*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_2969[iVar7 /*33*/]);
							MAP::_BLIP_SET_MODIFIER(Local_2969[iVar7 /*33*/].f_1, -1034486097);
						}
						if (func_1206(4194304))
						{
							PED::SET_PED_FLEE_ATTRIBUTES(Local_2969[iVar7 /*33*/], 512, false);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2969[iVar7 /*33*/], joaat("REL_CIVMALE"));
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2969[iVar7 /*33*/], 2843.597f, 1439.622f, 68.3202f, 2.5f, -1, 0.25f, 0, 40000f);
							PED::SET_PED_KEEP_TASK(Local_2969[iVar7 /*33*/], true);
							PED::SET_PED_KEEP_TASK(Local_2969[iVar7 /*33*/].f_2, true);
							__LIB_0__::func_490(&(Local_2969[iVar7 /*33*/]), 1);
							__LIB_0__::func_490(&(Local_2969[iVar7 /*33*/].f_2), 1);
						}
						if (!__LIB_0__::func_163(Local_2969[iVar7 /*33*/], 658540077))
						{
							TASK::TASK_COMBAT_HATED_TARGETS(Local_2969[iVar7 /*33*/], -1f);
							__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 21);
						}
					}
					break;
				case 28:
					if (ENTITY::DOES_ENTITY_EXIST(Local_2969[iVar7 /*33*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2969[iVar7 /*33*/].f_2))
						{
							if (!PED::IS_PED_FLEEING(Local_2969[iVar7 /*33*/].f_2))
							{
								PED::SET_PED_TO_RAGDOLL(Local_2969[iVar7 /*33*/].f_2, 2000, 2000, 0, false, false, false);
								__LIB_0__::func_19(&(Local_2969[iVar7 /*33*/].f_12), 29);
							}
						}
					}
					break;
				case 29:
					if (!ENTITY::IS_ENTITY_DEAD(Local_2969[iVar7 /*33*/].f_2))
					{
						if (!PED::IS_PED_RAGDOLL(Local_2969[iVar7 /*33*/].f_2))
						{
							if (!PED::IS_PED_FLEEING(Local_2969[iVar7 /*33*/].f_2))
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(Local_2969[iVar7 /*33*/].f_2, Global_35, 3, 1, -1082130432 /* Float: -1f */, -1, 0);
							}
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1309(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		switch (Local_155[iVar1 /*182*/].f_169)
		{
			case 0:
				if (!PED::IS_PED_ON_MOUNT(Local_155[iVar1 /*182*/]))
				{
					if (!__LIB_0__::func_163(Local_155[iVar1 /*182*/], 1868526510))
					{
						TASK::TASK_MOUNT_ANIMAL(Local_155[iVar1 /*182*/], Local_155[iVar1 /*182*/].f_1, -1, -1, 3f, 1, 0, 0);
					}
				}
				if (PED::IS_PED_ON_MOUNT(Local_155[iVar1 /*182*/]))
				{
					func_1209(&(Local_155[iVar1 /*182*/].f_169), 6, 2);
					__LIB_1__::func_148(&(Local_155[iVar1 /*182*/].f_2));
				}
				func_1455(iVar1);
				break;
			case 6:
				if (!PED::IS_PED_ON_MOUNT(Local_155[iVar1 /*182*/]))
				{
					func_1209(&(Local_155[iVar1 /*182*/].f_169), 34, 2);
				}
				if (iVar1 == 0)
				{
					StringCopy(&(Local_155[iVar1 /*182*/].f_178), func_410(5), 32);
				}
				else if (iVar1 == 1)
				{
					StringCopy(&(Local_155[iVar1 /*182*/].f_178), func_410(6), 32);
				}
				if (iVar1 == 0)
				{
					if (!__LIB_0__::func_163(Local_155[iVar1 /*182*/], 658540077))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_155[iVar1 /*182*/], &(Local_155[iVar1 /*182*/].f_178), 0, 25706, 191, 0, 1, -1);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_155[iVar1 /*182*/], 1);
						PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_155[iVar1 /*182*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
						PED::_0x9BBEAF8B0C007F1E(Global_35, 0);
						PED::SET_PED_CAN_RAGDOLL(Local_155[iVar1 /*182*/], false);
						PED::SET_PED_CAN_RAGDOLL(Local_155[iVar1 /*182*/].f_1, false);
					}
				}
				else if (iVar1 == 1)
				{
					if (!__LIB_0__::func_163(Local_155[iVar1 /*182*/], 658540077))
					{
						func_1456(&(Local_155[iVar1 /*182*/].f_178), Local_155[iVar1 /*182*/], Local_155[0 /*182*/], 1092616192 /* Float: 10f */);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_155[iVar1 /*182*/], 1);
						PED::SET_PED_CAN_RAGDOLL(Local_155[iVar1 /*182*/], false);
					}
				}
				func_1209(&(Local_155[iVar1 /*182*/].f_169), 19, 2);
				break;
			case 19:
				if (!PED::IS_PED_ON_MOUNT(Local_155[iVar1 /*182*/]))
				{
					func_1209(&(Local_155[iVar1 /*182*/].f_169), 34, 2);
				}
				if (iVar1 == 0)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[iVar1 /*182*/], 0))
					{
						if (func_1317(1) < 184)
						{
							fVar2 = func_1773(&(Local_155[iVar1 /*182*/]), &(Local_155[iVar1 /*182*/].f_178));
							__LIB_5__::func_537(Local_155[iVar1 /*182*/], fVar2, 0, 0.4f, 1, 100f, 100f, 120f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
						}
						else if ((func_1317(1) >= 175 && !func_1206(4194304)) || func_1317(1) >= 190)
						{
							__LIB_5__::func_537(Local_155[iVar1 /*182*/], 0f, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
						}
						else if (__LIB_1__::func_348(Local_155[iVar1 /*182*/], Local_155[1 /*182*/]) < 10f)
						{
							__LIB_5__::func_537(Local_155[iVar1 /*182*/], 1.75f, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
						}
						else if (__LIB_1__::func_348(Local_155[iVar1 /*182*/], Local_155[1 /*182*/]) >= 10f && __LIB_1__::func_348(Local_155[iVar1 /*182*/], Local_155[1 /*182*/]) < 50f)
						{
							__LIB_5__::func_537(Local_155[iVar1 /*182*/], 1.75f, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
						}
						else
						{
							__LIB_5__::func_537(Local_155[iVar1 /*182*/], 0f, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
						}
					}
				}
				else if (iVar1 == 1)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[iVar1 /*182*/], 0))
					{
						if (func_1317(1) < 182)
						{
							fVar3 = func_1773(&(Local_155[iVar1 /*182*/]), &(Local_155[iVar1 /*182*/].f_178));
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_155[iVar1 /*182*/], fVar3, 0, -1082130432 /* Float: -1f */, 0);
						}
						else if ((func_1317(1) >= 175 && !func_1206(4194304)) || func_1317(0) >= 187)
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_155[iVar1 /*182*/], 0f, 0, -1082130432 /* Float: -1f */, 0);
						}
						else if (__LIB_1__::func_348(Local_155[iVar1 /*182*/], Local_155[0 /*182*/]) < 10f)
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_155[iVar1 /*182*/], 1.75f, 0, -1082130432 /* Float: -1f */, 0);
						}
						else if (__LIB_1__::func_348(Local_155[iVar1 /*182*/], Local_155[0 /*182*/]) >= 10f && __LIB_1__::func_348(Local_155[iVar1 /*182*/], Local_155[0 /*182*/]) < 50f)
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_155[iVar1 /*182*/], 1.75f, 0, -1082130432 /* Float: -1f */, 0);
						}
						else
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_155[iVar1 /*182*/], 0f, 0, -1082130432 /* Float: -1f */, 0);
						}
					}
				}
				break;
			case 34:
				if (!__LIB_0__::func_163(Local_155[iVar1 /*182*/], 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(Local_155[iVar1 /*182*/], Local_155[iVar1 /*182*/].f_1, -1, -1, 3f, 1, 0, 0);
				}
				if (PED::IS_PED_ON_MOUNT(Local_155[iVar1 /*182*/]))
				{
					func_1209(&(Local_155[iVar1 /*182*/].f_169), 6, 2);
				}
				break;
		}
		iVar0++;
	}
}

void func_1310()
{
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")) && PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_1__::func_283(&uLocal_3562, 0);
		__LIB_0__::func_37(&uLocal_3565);
	}
	else
	{
		__LIB_1__::func_283(&uLocal_3565, 0);
	}
	if (func_1317(1) <= 183)
	{
		if ((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")) || (func_1317(1) > 11 && func_1317(1) < 27)) && iLocal_3514 == 0)
		{
			iLocal_3514 = 1;
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(Global_35, 2.5f);
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_410(5), 1, 2f, 1f, 1);
		}
		else if (((func_1317(1) <= 11 || func_1317(1) >= 27) && (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")) || !PED::IS_PED_ON_MOUNT(Global_35))) && iLocal_3514 == 1)
		{
			__LIB_0__::func_37(&uLocal_3562);
			__LIB_0__::func_37(&uLocal_3565);
			iLocal_3514 = 0;
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_410(5), 1, 5f, 0.5f, 1);
		}
	}
	else
	{
		iLocal_3514 = 0;
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_410(5), 0, 1f, 0.5f, 1);
	}
}

void func_1311()
{
	__LIB_8__::func_769(joaat("HONOR_EVENT_KILL_HORSE"));
}

void func_1312(var uParam0)
{
	var uVar0;
	if (((__LIB_0__::func_272(iLocal_3399, 0) && __LIB_4__::func_971(uParam0) > 0) && !PED::IS_PED_ON_MOUNT(Global_35)) && (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1868526510, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1868526510, true) != 1))
	{
		if ((func_1222(512) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3399, 999013589, true) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3399, 999013589, true) != 1)
		{
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_410(5), Global_36, &uVar0);
			TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(iLocal_3399, Global_35, func_410(5), 0f, 0f, uVar0, 0, 188, 0);
			__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 1, 1);
			__LIB_8__::func_795(uParam0, Local_155[1 /*182*/], 1, 1);
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3399, 999013589, true) == 1)
		{
			if (__LIB_0__::func_665(iLocal_3399, Global_35, 1, 1) < 2f)
			{
				__LIB_4__::func_982(iLocal_3399, 0f);
			}
			else if (__LIB_0__::func_665(iLocal_3399, Global_35, 1, 1) >= 2f && __LIB_0__::func_665(iLocal_3399, Global_35, 1, 1) < 3f)
			{
				__LIB_4__::func_982(iLocal_3399, 1.5f);
			}
			else
			{
				__LIB_4__::func_982(iLocal_3399, 2f);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3399, 1056466932, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3399, 1056466932, true) != 1)
		{
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_3399, Global_35, 0f, -3f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		}
	}
	else if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_3399, 1056466932, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_3399, 658540077, true) == 1) && PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::CLEAR_PED_TASKS(iLocal_3399, true, false);
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 0, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/], 0, 1);
	}
}

void func_1313(var uParam0)
{
	if (__LIB_5__::func_484(&uLocal_3543, 30f) || func_1777(&uLocal_3543, 25f))
	{
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 1, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/], 1, 1);
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/].f_1, 1, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/].f_1, 1, 1);
		ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 0, false);
		ENTITY::SET_ENTITY_PROOFS(Local_155[1 /*182*/], 0, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_155[0 /*182*/], false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_155[1 /*182*/], false);
	}
	else
	{
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 0, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/], 0, 1);
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/].f_1, 0, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/].f_1, 0, 1);
		ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 1, false);
		ENTITY::SET_ENTITY_PROOFS(Local_155[1 /*182*/], 1, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_155[0 /*182*/], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_155[1 /*182*/], true);
	}
}

void func_1314()
{
	float fVar0;
	if (CLOCK::GET_CLOCK_HOURS() < 18)
	{
		fVar0 = (__LIB_0__::func_94(Global_35, 2243.644f, 1574.721f, 87.3328f, 1) / MISC::GET_DISTANCE_BETWEEN_COORDS(2858.139f, 1421.602f, 67.5102f, 2243.644f, 1574.721f, 87.3328f, true));
		fVar0 = __LIB_0__::func_251(((fVar0 * -1f) + 1f), 0f, 1f);
		__LIB_5__::func_375(18, 0, fVar0, &Local_3603);
	}
	else
	{
		CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	}
}

void func_1316()
{
	if (__LIB_2__::func_901(Local_2969[0 /*33*/], Global_35) && !func_1736(Local_2969[1 /*33*/]))
	{
		if (!__LIB_0__::func_75(&uLocal_3571))
		{
			__LIB_1__::func_148(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Local_155[1 /*182*/], Local_2969[1 /*33*/], 1, 0, -1082130432 /* Float: -1f */);
		}
		else if (__LIB_0__::func_265(&uLocal_3571) > 0.75f)
		{
			func_1778(1, Local_2969[1 /*33*/]);
			__LIB_0__::func_37(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[0 /*182*/]);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[1 /*182*/]);
		}
	}
	else if (__LIB_2__::func_901(Local_2969[1 /*33*/], Global_35) && !func_1736(Local_2969[0 /*33*/]))
	{
		if (!__LIB_0__::func_75(&uLocal_3571))
		{
			__LIB_1__::func_148(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Local_155[1 /*182*/], Local_2969[0 /*33*/], 1, 0, -1082130432 /* Float: -1f */);
		}
		else if (__LIB_0__::func_265(&uLocal_3571) > 0.5f)
		{
			func_1778(1, Local_2969[0 /*33*/]);
			__LIB_0__::func_37(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[0 /*182*/]);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[1 /*182*/]);
		}
	}
	if (__LIB_2__::func_901(Local_2969[2 /*33*/], Global_35) && !func_1736(Local_2969[3 /*33*/]))
	{
		if (!__LIB_0__::func_75(&uLocal_3571))
		{
			__LIB_1__::func_148(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Local_155[0 /*182*/], Local_2969[3 /*33*/], 1, 0, -1082130432 /* Float: -1f */);
		}
		else if (__LIB_0__::func_265(&uLocal_3571) > 0.5f)
		{
			func_1778(0, Local_2969[3 /*33*/]);
			__LIB_0__::func_37(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[0 /*182*/]);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[1 /*182*/]);
		}
	}
	else if (__LIB_2__::func_901(Local_2969[3 /*33*/], Global_35) && !func_1736(Local_2969[2 /*33*/]))
	{
		if (!__LIB_0__::func_75(&uLocal_3571))
		{
			__LIB_1__::func_148(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Local_155[0 /*182*/], Local_2969[2 /*33*/], 1, 0, -1082130432 /* Float: -1f */);
		}
		else if (__LIB_0__::func_265(&uLocal_3571) > 1.2f)
		{
			func_1778(0, Local_2969[2 /*33*/]);
			__LIB_0__::func_37(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[0 /*182*/]);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[1 /*182*/]);
		}
	}
	if (__LIB_2__::func_901(Local_2969[7 /*33*/], Global_35) && !func_1736(Local_2969[6 /*33*/]))
	{
		if (!__LIB_0__::func_75(&uLocal_3571))
		{
			__LIB_1__::func_148(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Local_155[1 /*182*/], Local_2969[6 /*33*/], 1, 0, -1082130432 /* Float: -1f */);
		}
		else if (__LIB_0__::func_265(&uLocal_3571) > 0.5f)
		{
			func_1778(1, Local_2969[6 /*33*/]);
			__LIB_0__::func_37(&uLocal_3571);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[0 /*182*/]);
			TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Local_155[1 /*182*/]);
		}
	}
}

int func_1317(bool bParam0)
{
	int iVar0;
	iVar0 = -1;
	if (bParam0)
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[0 /*182*/], 0))
		{
			iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_155[0 /*182*/]);
		}
	}
	else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[1 /*182*/], 0))
	{
		iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_155[1 /*182*/]);
	}
	return iVar0;
}

void func_1318()
{
	if (!func_1206(4194304))
	{
		if (func_1265(&Local_2969, 0, 11) <= 0)
		{
			func_1207(4194304);
		}
	}
}

void func_1321()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_3399, 0, -1f, -1f, -1f);
	TASK::TASK_MOUNT_ANIMAL(0, iLocal_3399, 20000, -1, 2f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_38);
}

void func_1322()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121))
	{
		iLocal_121 = OBJECT::CREATE_OBJECT(iLocal_36, 2246f, 1578.6f, 88f, true, true, false, false, true);
		OBJECT::_SET_APPLY_OBJECT_TXD(iLocal_121, joaat("UI_LETTER_WINTER_4_MINING"), 0, 0);
	}
}

void func_1327()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1784(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1351(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1351(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1382(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_849(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_1383(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_4__::func_948(uParam0, 512))
	{
		if (__LIB_4__::func_948(uParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1805(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_5__::func_572(uParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_5__::func_572(uParam0, iParam1, 128);
	}
	else
	{
		__LIB_5__::func_571(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

bool func_1418(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			func_1847(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_5__::func_376(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_8__::func_812(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_5__::func_488(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_8__::func_812(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_9__::func_165(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_5__::func_502(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_0__::func_264(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_5__::func_308(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_1__::func_148(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_8__::func_812(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_308(uParam0, iParam5))
			{
				__LIB_8__::func_812(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1424(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_9__::func_250(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false))
				{
					__LIB_8__::func_938(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
				{
					__LIB_1__::func_747(uParam4, 4);
					return false;
				}
				else
				{
					if (__LIB_4__::func_584(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					__LIB_5__::func_265(uParam5);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_5__::func_331(uParam5, __LIB_4__::func_939(uParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_4__::func_937(uParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
				{
				}
				else
				{
					__LIB_5__::func_309(uParam4);
				}
				__LIB_1__::func_148(&(uParam4->f_1));
				__LIB_1__::func_747(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (__LIB_8__::func_930(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
					{
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_8__::func_864(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_5__::func_253(uParam5) != 0 || (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_8__::func_938(uParam4, &uParam0, uParam5);
						__LIB_1__::func_747(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_390(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_5__::func_265(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_5__::func_448(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_1__::func_148(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_1__::func_747(uParam4, 4);
				}
				else if (__LIB_0__::func_84(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				__LIB_9__::func_250(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_585(uParam4) - __LIB_4__::func_586(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_988(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_586(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_989(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
				}
				__LIB_8__::func_942(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_804);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_586(uParam4) <= 5000) && __LIB_4__::func_586(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_5__::func_129(&(uParam4->f_861), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_586(uParam4) >= 5000 && __LIB_4__::func_586(uParam4) <= (__LIB_4__::func_585(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_989(uParam4))
			{
				__LIB_8__::func_942(uParam4);
				return true;
			}
			break;
		case 4:
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3)
				{
					if (__LIB_5__::func_266(uParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_584(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
				}
				if (__LIB_0__::func_81(uParam4) == 3)
				{
					if (__LIB_0__::func_84(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			__LIB_1__::func_747(uParam4, 4);
			break;
	}
	return false;
}

void func_1431(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_4__::func_939(uParam0) >= iLocal_16 && __LIB_4__::func_939(uParam0) <= iLocal_20)
		{
			__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
		}
	}
}

bool func_1432(var uParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_155[iVar1 /*182*/]))
		{
			Var2 = { func_491(func_1905(Local_155[iVar1 /*182*/].f_170), __LIB_5__::func_24(__LIB_4__::func_939(uParam0))) };
			if (!__LIB_5__::func_52(uParam0))
			{
				if (func_841(uParam0, Local_155[iVar1 /*182*/].f_170, &(Local_155[iVar1 /*182*/]), 0, Var2, Var2.f_1, Var2.f_2, Var2.f_3, 1, -922193456, 1, 0, 1, 0))
				{
				}
			}
			else if (func_841(uParam0, Local_155[iVar1 /*182*/].f_170, &(Local_155[iVar1 /*182*/]), 0, 0, 0, 0, 0, 0, -922193456, 1, 0, 1, 0))
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_155[iVar1 /*182*/]))
		{
			if (iVar1 == 0)
			{
				if (!iLocal_3505[0])
				{
					iLocal_3505[0] = 1;
					func_1304(uParam0, &(Local_155[iVar1 /*182*/]), iVar1);
				}
			}
			else if (iVar1 == 1)
			{
				if (!iLocal_3505[4])
				{
					iLocal_3505[4] = 1;
					func_1304(uParam0, &(Local_155[iVar1 /*182*/]), iVar1);
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_1433(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar10;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		bVar2 = false;
		bVar3 = true;
		iVar4 = -1;
		fVar5 = 5f;
		fVar6 = 270f;
		vVar7 = { 0f, 0f, 0f };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2571[iVar1 /*33*/]))
		{
			switch (iVar1)
			{
				case 0:
					vVar7 = { 2972.677f, 1305.625f, 42.7861f };
					iVar10 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					fVar5 = 1.5f;
					break;
				case 1:
					vVar7 = { 2995.377f, 1369.584f, 42.2536f };
					fVar6 = 18.2316f;
					iVar10 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					fVar5 = 1f;
					iVar4 = 0;
					break;
				case 2:
					vVar7 = { 2993.31f, 1371.46f, 43.33f };
					fVar6 = -110f;
					iVar10 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					fVar5 = 1f;
					iVar4 = 2;
					break;
				case 3:
					vVar7 = { 3006.252f, 1231f, 43.3795f };
					fVar6 = 29.5646f;
					if (CLOCK::GET_CLOCK_HOURS() > 5 && CLOCK::GET_CLOCK_HOURS() < 22)
					{
						iVar10 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					}
					else
					{
						iVar10 = joaat("WEAPON_MELEE_LANTERN");
					}
					fVar5 = 1f;
					iVar4 = 1;
					bVar2 = true;
					break;
			}
			if (!Local_2571[iVar1 /*33*/].f_17)
			{
				Local_2571[iVar1 /*33*/] = __LIB_1__::func_545(iLocal_22, vVar7, fVar6, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				Local_2571[iVar1 /*33*/].f_12 = 0;
				Local_2571[iVar1 /*33*/].f_17 = 1;
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2571[iVar1 /*33*/], true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_2571[iVar1 /*33*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2571[iVar1 /*33*/], joaat("REL_PLAYER_DISLIKE"));
				PED::SET_PED_CONFIG_FLAG(Local_2571[iVar1 /*33*/], 186, false);
				PED::SET_PED_CONFIG_FLAG(Local_2571[iVar1 /*33*/], 281, true);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_2571[iVar1 /*33*/], false);
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_2571[iVar1 /*33*/], iVar10, 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_2571[iVar1 /*33*/], iVar10, true, 0, false, false);
				PED::SET_PED_ACCURACY(Local_2571[iVar1 /*33*/], 30);
				PED::_0xC5B78E41DCF8227C(Local_2571[iVar1 /*33*/], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2571[iVar1 /*33*/], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2571[iVar1 /*33*/], 35, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2571[iVar1 /*33*/], 50, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2571[iVar1 /*33*/], 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2571[iVar1 /*33*/], 2, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2571[iVar1 /*33*/], 58, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2571[iVar1 /*33*/], 98, true);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_2571[iVar1 /*33*/], 512, true);
				switch (iVar4)
				{
					case -1:
						TASK::TASK_WANDER_IN_AREA(Local_2571[iVar1 /*33*/], vVar7, fVar5, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
						break;
					case 0:
						__LIB_1__::func_473(Local_2571[iVar1 /*33*/], joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
						break;
					case 1:
						break;
					case 2:
						__LIB_1__::func_473(Local_2571[iVar1 /*33*/], joaat("WORLD_HUMAN_STAND_WAITING"), -1, 0, 0, -1082130432 /* Float: -1f */);
						break;
				}
				if (bVar2)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2571[iVar1 /*33*/], iLocal_3408, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3408, "chassis_dummy"), 0f, 0f, 0f, 0f, 1.5f, 1.5f, false, false, false, false, 2, true, false, false);
				}
				if (bVar3)
				{
					func_1734(&(Local_2571[iVar1 /*33*/]), &(Local_2571[iVar1 /*33*/].f_1), 1, 0);
					MAP::_BLIP_SET_MODIFIER(Local_2571[iVar1 /*33*/].f_1, -1034486097);
				}
			}
			if (bParam2)
			{
				return false;
			}
		}
		else if (bParam2)
		{
			if (iVar1 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1436(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (__LIB_4__::func_939(uParam0) == iLocal_16)
		{
			if (iVar0 == 0)
			{
				func_1906(iVar0);
			}
		}
		iVar0++;
	}
}

int func_1437(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		vVar2 = { func_874(8, iVar1) };
		fVar5 = func_1907(8, iVar1);
		switch (iVar1)
		{
			case 0:
				iVar6 = 1;
				iVar7 = 1;
				iVar8 = 0;
				break;
			case 1:
				iVar6 = 3;
				iVar7 = 0;
				iVar8 = 0;
				break;
			case 2:
				iVar6 = 3;
				iVar7 = 1;
				iVar8 = 0;
				break;
			case 3:
				iVar6 = 0;
				iVar7 = 1;
				iVar8 = 0;
				break;
			case 4:
				iVar6 = 3;
				iVar7 = 0;
				iVar8 = 0;
				break;
			case 5:
				iVar6 = 3;
				iVar7 = 1;
				iVar8 = 0;
				break;
			case 6:
				iVar6 = 3;
				iVar7 = 1;
				iVar8 = 0;
				break;
			case 7:
				iVar6 = 0;
				iVar7 = 0;
				iVar8 = 6;
				break;
			case 8:
				iVar6 = 1;
				iVar7 = 1;
				iVar8 = 0;
				break;
			case 9:
				iVar6 = 3;
				iVar7 = 1;
				iVar8 = 0;
				break;
			case 10:
				iVar6 = 0;
				iVar7 = 0;
				iVar8 = 6;
				break;
			case 11:
				iVar6 = 0;
				iVar7 = 0;
				iVar8 = 6;
				break;
		}
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_105[iVar1]) && !TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(vVar2, 0))
		{
			iLocal_105[iVar1] = TASK::ADD_COVER_POINT(vVar2, fVar5, iVar6, iVar7, iVar8, false);
		}
		iVar0++;
	}
	return 1;
}

void func_1439(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_4__::func_939(uParam0);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (__LIB_0__::func_30(iLocal_3618[iVar0]))
		{
			if (((iVar1 == iLocal_16 || iVar1 == iLocal_17) || iVar1 == iLocal_19) || iVar1 == iLocal_20)
			{
				__LIB_1__::func_948(iLocal_3618[iVar0], 0, 0f, 0, 0, 1f, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_1444(int iParam0, int iParam1)
{
	int iVar0;
	switch (iParam1)
	{
		case 0:
			func_849(iParam0, 2330.368f, 1342.976f, 104.9149f, 197.4951f, 2, 1073741824 /* Float: 2f */);
			iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2330.368f, 1342.976f, 104.9149f, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
			break;
		case 1:
			func_849(iParam0, 2368.945f, 1339.163f, 105.2111f, 289.643f, 2, 1073741824 /* Float: 2f */);
			iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2368.945f, 1339.163f, 105.2111f, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
			break;
		case 2:
			func_849(iParam0, 2368.167f, 1341.394f, 105.1306f, 278.2452f, 2, 1073741824 /* Float: 2f */);
			iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2368.167f, 1341.394f, 105.1306f, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
			break;
		case 3:
			func_849(iParam0, 2372.338f, 1340.619f, 105.1468f, 86.3442f, 2, 1073741824 /* Float: 2f */);
			iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2372.338f, 1340.619f, 105.1468f, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
			break;
		case 4:
			func_849(iParam0, 2374.023f, 1340.043f, 105.2251f, 128.2629f, 2, 1073741824 /* Float: 2f */);
			iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2374.023f, 1340.043f, 105.2251f, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
			break;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iParam0, iVar0, "", -1, false, true, 0, false, -1f, false);
	}
	else
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}

void func_1451(int iParam0, vector3 vParam1, float fParam4, vector3 vParam5, int iParam8, int iParam9)
{
	if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iParam0, false))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
	if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iParam0, true))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
	}
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, vParam1, fParam4, iParam8, 0, 0);
	if (!__LIB_0__::func_86(vParam5))
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, vParam5, fParam4, iParam9, 1, 0);
	}
}

void func_1453(int iParam0, vector3 vParam1, float fParam4, vector3 vParam5, float fParam8, float fParam9)
{
	Local_155[iParam0 /*182*/].f_171 = { 0f, 0f, 0f };
	Local_155[iParam0 /*182*/].f_174 = { 0f, 0f, 0f };
	Local_155[iParam0 /*182*/].f_171 = { vParam1 };
	if (!__LIB_0__::func_86(vParam5))
	{
		Local_155[iParam0 /*182*/].f_174 = { vParam5 };
	}
	func_1451(Local_155[iParam0 /*182*/], vParam1, fParam4, vParam5, fParam8, fParam9);
}

int func_1454()
{
	if (!__LIB_8__::func_747(&uLocal_3521, 0) && PED::_0xA0BC8FAED8CFEB3C(iLocal_3399))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iLocal_3399, 1522539835, 1);
		PED::_UPDATE_PED_VARIATION(iLocal_3399, false, true, true, true, false);
		func_1920(&uLocal_3521, 0);
	}
	else if (!__LIB_8__::func_747(&uLocal_3521, 0))
	{
		return 0;
	}
	if (!__LIB_8__::func_747(&uLocal_3521, 2) && PED::_0xA0BC8FAED8CFEB3C(Local_155[1 /*182*/].f_1))
	{
		PED::_SET_PED_COMPONENT_DISABLED(Local_155[1 /*182*/].f_1, 1522539835, 1);
		PED::_UPDATE_PED_VARIATION(Local_155[1 /*182*/].f_1, false, true, true, true, false);
		func_1920(&uLocal_3521, 2);
	}
	else if (!__LIB_8__::func_747(&uLocal_3521, 2))
	{
		return 0;
	}
	if (!__LIB_8__::func_747(&uLocal_3521, 1) && PED::_0xA0BC8FAED8CFEB3C(Local_155[0 /*182*/].f_1))
	{
		PED::_SET_PED_COMPONENT_DISABLED(Local_155[0 /*182*/].f_1, 1522539835, 1);
		PED::_UPDATE_PED_VARIATION(Local_155[0 /*182*/].f_1, false, true, true, true, false);
		func_1920(&uLocal_3521, 1);
	}
	else if (!__LIB_8__::func_747(&uLocal_3521, 1))
	{
		return 0;
	}
	return 1;
}

void func_1455(int iParam0)
{
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_155[iParam0 /*182*/], true);
	PED::SET_PED_CAN_RAGDOLL(Local_155[iParam0 /*182*/], false);
	PED::SET_PED_CAN_RAGDOLL(Local_155[iParam0 /*182*/].f_1, false);
	PED::SET_PED_ACCURACY(Local_155[iParam0 /*182*/], 100);
	PED::SET_PED_COMBAT_RANGE(Local_155[iParam0 /*182*/], 3);
	PED::SET_PED_COMBAT_ABILITY(Local_155[iParam0 /*182*/], 2);
	PED::SET_PED_SEEING_RANGE(Local_155[iParam0 /*182*/], 750f);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 35, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[iParam0 /*182*/], 98, false);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_155[0 /*182*/].f_1, true);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_155[1 /*182*/].f_1, true);
	PED::_0xED1C764997A86D5A(Local_155[0 /*182*/], Local_155[0 /*182*/].f_1);
	PED::_0xED1C764997A86D5A(Local_155[1 /*182*/], Local_155[1 /*182*/].f_1);
	PED::SET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 167, true);
	PED::SET_PED_CONFIG_FLAG(Local_155[1 /*182*/], 167, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_155[iParam0 /*182*/], true);
}

void func_1456(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar0))
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, (iVar0 - 1), &uVar2))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 658540077, true) != 1)
					{
						func_1921(sParam0, iParam1, &iVar1, 0, 0);
					}
					else if (__LIB_0__::func_665(iParam1, iParam2, 1, 1) > fParam3)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, 2f, 0, -1082130432 /* Float: -1f */, 0);
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam1, 2f);
					}
					else if (__LIB_0__::func_665(iParam1, iParam2, 1, 1) < 5f)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, 1f, 0, -1082130432 /* Float: -1f */, 0);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, 1f);
					}
				}
			}
		}
	}
}

int func_1461(var uParam0)
{
	struct<27> Var0;
	int iVar38;
	char[] cVar39[8];
	int iVar40;
	bool bVar41;
	bool bVar42;
	if ((!__LIB_0__::func_272(Global_35, 0) || !__LIB_0__::func_272(Local_155[0 /*182*/], 0)) || !__LIB_0__::func_272(Local_155[1 /*182*/], 0))
	{
		return 0;
	}
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	iVar38 = __LIB_4__::func_939(uParam0);
	iVar40 = 19456;
	switch (iLocal_3586)
	{
		case 0:
			bVar41 = false;
			if (iVar38 == iLocal_16)
			{
				if (func_1206(4) && func_1206(8))
				{
					if (!func_1206(64))
					{
						bVar41 = true;
					}
				}
				if (func_1222(4))
				{
					fLocal_3515 = 1f;
				}
				else
				{
					fLocal_3515 = 1f;
				}
			}
			if (bVar41)
			{
				func_1208(3);
			}
			break;
		case 1:
			if (iVar38 == iLocal_16)
			{
				cVar39 = func_410(0);
				func_1207(4);
			}
			else if (iVar38 == iLocal_17)
			{
				cVar39 = func_410(2);
				func_1207(16);
			}
			__LIB_11__::func_9(Local_155[0 /*182*/], Global_35, &Var0, 0f, 0f, 0f, cVar39, iVar40, 1, 6.5f, 4.5f, 1.8f, fLocal_3515, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			__LIB_3__::func_898(Global_35, Local_155[0 /*182*/], &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 1, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1082130432 /* Float: -1f */, 2.5f);
			__LIB_4__::func_982(Local_155[0 /*182*/], 1f);
			__LIB_1__::func_731(&uLocal_3587);
			func_1208(2);
			break;
		case 2:
			if (iVar38 == iLocal_16)
			{
				cVar39 = func_410(1);
				func_1207(8);
			}
			else if (iVar38 == iLocal_17)
			{
				cVar39 = func_410(4);
				func_1207(32);
			}
			__LIB_11__::func_9(Local_155[1 /*182*/], Global_35, &Var0, 0f, 0f, 0f, cVar39, iVar40, 1, 4.5f, 3.5f, 1.8f, fLocal_3515, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			__LIB_3__::func_898(Global_35, Local_155[1 /*182*/], &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 1, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1082130432 /* Float: -1f */, 2.5f);
			__LIB_1__::func_731(&uLocal_3587);
			func_1208(0);
			break;
		case 3:
			bVar42 = false;
			if (iVar38 == iLocal_16)
			{
				bVar42 = func_1206(64);
				if (func_1222(4))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[0 /*182*/], 2.5f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[1 /*182*/], 2.5f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2.5f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[0 /*182*/], 1f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_155[1 /*182*/], 1f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2.5f);
				}
			}
			else if (iVar38 == iLocal_17)
			{
				bVar42 = func_1206(128);
			}
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_155[0 /*182*/], 0) && !func_1222(4))
			{
				func_1208(1);
			}
			if (bVar42)
			{
				__LIB_9__::func_397(&uLocal_3587, Local_155[0 /*182*/]);
			}
			break;
		case 4:
			__LIB_1__::func_726(Local_155[0 /*182*/], 1);
			__LIB_1__::func_726(Local_155[1 /*182*/], 1);
			func_1229(Global_35, 1);
			__LIB_5__::func_438(&uLocal_3587);
			func_1208(0);
			break;
	}
	return 1;
}

void func_1462(int iParam0)
{
	if (iParam0 != iLocal_16)
	{
		POPULATION::_0xF45E46DEECF7DF6E(14336, 0, 0, -1, -1);
	}
	else
	{
		POPULATION::_0xF45E46DEECF7DF6E(595968, 0, 0, -1, -1);
	}
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xBA0980B5C0A11924(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

void func_1473(var uParam0)
{
	struct<8> Var0;
	func_1932(uParam0);
	if (__LIB_5__::func_253(uParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_5__::func_253(uParam0) == 0 && !__LIB_4__::func_937(uParam0, 8))
	{
		__LIB_5__::func_284(uParam0);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
	__LIB_5__::func_74(uParam0);
	__LIB_4__::func_992(uParam0, 67108864);
	__LIB_4__::func_992(uParam0, 8192);
	__LIB_4__::func_969(uParam0, 4);
	__LIB_4__::func_969(uParam0, 512);
	__LIB_4__::func_969(uParam0, 65536);
	__LIB_4__::func_969(uParam0, 1024);
	__LIB_4__::func_969(uParam0, 262144);
	__LIB_4__::func_969(uParam0, 16777216);
	__LIB_4__::func_969(uParam0, 64);
	__LIB_4__::func_958(uParam0, 128);
	__LIB_4__::func_944(uParam0, -2147483648);
	__LIB_4__::func_993(uParam0, 1);
	if (__LIB_4__::func_948(uParam0, 4194304))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_4__::func_958(uParam0, 4194304);
	__LIB_4__::func_958(uParam0, 8388608);
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 64) || !__LIB_4__::func_947(uParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_4__::func_937(uParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_0__::func_37(&(uParam0->f_13106));
	__LIB_1__::func_148(&(uParam0->f_13112));
	__LIB_5__::func_598(uParam0, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1));
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_5__::func_310(uParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	func_1938(uParam0);
	if (__LIB_4__::func_939(uParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_5__::func_490(uParam0, 16);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

void func_1488(var uParam0)
{
	int iVar0;
	iVar0 = func_1967(uParam0);
	SCRIPTS::_0x50B72A754EE64A71(iVar0);
}

void func_1489(bool bParam0, bool bParam1)
{
	if (func_1968(255) == 4)
	{
		return;
	}
	if (__LIB_0__::func_86(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		__LIB_4__::func_686(0);
	}
	else
	{
		if (bParam1)
		{
			__LIB_4__::func_840(0, 0, 0, 1);
		}
		__LIB_4__::func_687(0);
		__LIB_1__::func_963(&(Global_1109400.f_389));
		Global_1109400.f_389 = 0f;
		Global_1109400.f_389.f_5 = 1;
		Global_1109400.f_389.f_16 = 0;
		Global_1109400.f_389.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1109400.f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400.f_389.f_17 = { Global_1899378.f_23.f_1, Global_1899378.f_23.f_1, Global_1899378.f_23.f_1 };
		Global_1109400.f_389.f_17.f_9 = joaat("VOLSPHERE");
		__LIB_1__::func_961(&(Global_1109400.f_428));
		Global_1109400.f_428.f_6 = { Global_1109400.f_389.f_17.f_6 };
		Global_1109400.f_428 = Global_1109400.f_389;
		Global_1109400.f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400.f_22.f_16 = 0;
			Global_1109400.f_22.f_17 = 0;
		}
	}
	__LIB_1__::func_964(Global_1109400.f_389, 42);
	__LIB_1__::func_962(Global_1109400.f_428, 42);
}

void func_1643(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_661(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_661(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1648(struct<6> Param0)
{
	if (!func_2062(Param0.f_4, 1))
	{
	}
	if (!func_2062(Param0, 1))
	{
	}
	if (!func_2062(Param0.f_2, 1))
	{
	}
	if (!func_2062(Param0.f_5, 1))
	{
	}
	if (!func_2062(Param0.f_3, 1))
	{
	}
	if (!func_2062(Param0.f_1, 1))
	{
	}
}

int func_1680(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::_DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9445; //curOff = 6715
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9445; //curOff = 7287
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9445; //curOff = 7859
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9445; //curOff = 8173
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9445; //curOff = 8874
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = iVar0;
			return iVar0;
		}
bool func_1681(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !__LIB_0__::func_181())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_1699(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3408))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, true, true, false, false);
		if (bParam6)
		{
			VEHICLE::_0x6B53F4B811E583D2(*iParam0, bParam6);
		}
		if (bParam7)
		{
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, bParam7);
		}
		return false;
	}
	return true;
}

bool func_1700()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_118))
	{
		iLocal_118 = VEHICLE::CREATE_VEHICLE(iLocal_28, 2851.314f, 1408.809f, 68.3299f, 180f, true, true, true, false);
		VEHICLE::_0x226C6A4E3346D288(iLocal_118, 0);
		return false;
	}
	return true;
}

bool func_1701(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = VEHICLE::_CREATE_DRAFT_VEHICLE(iParam1, vParam2, fParam5, true, true, bParam6, 0, false);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 9);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(*uParam0, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 0f);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, bParam7);
		return false;
	}
	return true;
}

bool func_1702(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3425[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					iLocal_3425[iVar0] = __LIB_1__::func_545(iLocal_30, 2858.139f, 1421.602f, 67.5102f, 0f, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
					break;
				case 1:
					iLocal_3425[iVar0] = __LIB_1__::func_545(iLocal_30, 2858.139f, 1421.602f, 67.5102f, 0f, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
					break;
				case 2:
					iLocal_3425[iVar0] = __LIB_1__::func_545(iLocal_31, 2858.139f, 1421.602f, 67.5102f, 0f, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
					break;
				case 3:
					iLocal_3425[iVar0] = __LIB_1__::func_545(iLocal_32, 2858.139f, 1421.602f, 67.5102f, 0f, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
					break;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3425[iVar0]))
			{
			}
			else if (bParam1 || iVar0 == 3)
			{
				func_2103(iLocal_3425[iVar0], 1);
			}
			if (!VEHICLE::_0x316CDB5B6E8F4110(iLocal_3425[iVar0], uParam0, iVar0))
			{
			}
			__LIB_1__::func_991(iLocal_3425[iVar0], 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_3425[iVar0], true);
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_1703(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(uParam2, iVar0, 2);
	if (iVar6 >= iParam3)
	{
	}
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			iVar3 = iVar1;
			if (!__LIB_0__::func_208(iVar3, uParam1))
			{
				(*uParam0)[iVar4] = iVar3;
				iVar4++;
			}
		}
		if (iVar4 >= iParam3)
		{
		}
		else
		{
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_1719(int iParam0)
{
	if (!func_1222(iParam0))
	{
		__LIB_1__::func_683(&iLocal_3518, iParam0);
	}
}

bool func_1729(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		iVar1 = iVar0;
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar5 = false;
		iVar10 = joaat("META_OUTFIT_DEFAULT");
		iVar11 = joaat("WEAPON_UNARMED");
		switch (iVar1)
		{
			case 0:
				vVar6 = { 2973f, 1307.6f, 44f };
				fVar9 = 63.1089f;
				iVar11 = joaat("WEAPON_UNARMED");
				bVar4 = true;
				iVar12 = iLocal_34;
				bVar5 = true;
				break;
			case 1:
				vVar6 = { 2974f, 1307.6f, 44f };
				fVar9 = 63.1089f;
				iVar11 = joaat("WEAPON_UNARMED");
				bVar4 = true;
				iVar12 = iLocal_26;
				bVar5 = true;
				break;
			case 2:
				if (!__LIB_4__::func_948(uParam0, 4))
				{
					vVar6 = { 2974f, 1307.6f, 44f };
				}
				else
				{
					vVar6 = { 3023.312f, 1342.075f, 43.5f };
				}
				fVar9 = 63.4753f;
				iVar11 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
				iVar12 = iLocal_22;
				bVar5 = true;
				iVar10 = 1892654866;
				break;
			case 3:
				if (!__LIB_4__::func_948(uParam0, 4))
				{
					vVar6 = { 2974f, 1307.6f, 44f };
				}
				else
				{
					vVar6 = { 3024.077f, 1344f, 43.3f };
				}
				fVar9 = 173.6091f;
				iVar12 = iLocal_22;
				if (bParam4)
				{
					iVar11 = joaat("WEAPON_REPEATER_CARBINE");
				}
				bVar5 = true;
				iVar10 = 2131639183;
				bVar4 = true;
				break;
			case 4:
				if (!__LIB_4__::func_948(uParam0, 4))
				{
					vVar6 = { 2974f, 1307.6f, 44f };
				}
				else
				{
					vVar6 = { 3024.095f, 1340.213f, 43.3f };
				}
				fVar9 = 53.1443f;
				bVar3 = true;
				bVar4 = true;
				if (bParam4)
				{
					iVar11 = joaat("WEAPON_REPEATER_CARBINE");
				}
				bVar5 = true;
				iVar10 = -1935583563;
				iVar12 = iLocal_22;
				break;
			case 5:
				vVar6 = { 3019.938f, 1342.876f, 43.3f };
				fVar9 = 173.6091f;
				iVar11 = joaat("WEAPON_REPEATER_CARBINE");
				iVar12 = iLocal_22;
				break;
			case 6:
				vVar6 = { 3019.938f, 1342.876f, 43.3f };
				iVar11 = __LIB_3__::func_430(16777216, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
				iVar12 = iLocal_22;
				break;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_520[iVar1 /*33*/]))
		{
			if (bVar5)
			{
				Local_520[iVar1 /*33*/] = __LIB_1__::func_545(iVar12, vVar6, fVar9, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0);
				Local_520[iVar1 /*33*/].f_12 = -1;
			}
			else
			{
				Local_520[iVar1 /*33*/] = __LIB_1__::func_545(iVar12, vVar6, fVar9, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				Local_520[iVar1 /*33*/].f_12 = 0;
			}
			Local_520[iVar1 /*33*/].f_13 = 0;
			Local_520[iVar1 /*33*/].f_17 = 1;
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_520[iVar1 /*33*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_520[iVar1 /*33*/], 186, false);
			PED::SET_COMBAT_FLOAT(Local_520[iVar1 /*33*/], 3, 0.75f);
			TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_520[iVar1 /*33*/], false);
			func_1451(Local_520[iVar1 /*33*/], vVar6, 1f, 0f, 0f, 0f, 0, 1);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_520[iVar1 /*33*/], true, true);
			if (iVar11 != joaat("WEAPON_UNARMED"))
			{
				__LIB_1__::func_766(Local_520[iVar1 /*33*/], iVar11, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			__LIB_1__::func_991(Local_520[iVar1 /*33*/], 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_520[iVar1 /*33*/], iVar11, true, 0, false, false);
			PED::SET_PED_ACCURACY(Local_520[iVar1 /*33*/], 12);
			PED::_0xC5B78E41DCF8227C(Local_520[iVar1 /*33*/], 1);
			PED::SET_PED_SHOOT_RATE(Local_520[iVar1 /*33*/], 300);
			if (bVar3)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_520[iVar1 /*33*/], true);
			}
			if (bVar4)
			{
				__LIB_2__::func_279(Local_520[iVar1 /*33*/], 1);
			}
			if (bVar2)
			{
				__LIB_1__::func_571(Local_520[iVar1 /*33*/], Local_520[iVar1 /*33*/].f_2, 0, -1, 1);
			}
			if (bParam3)
			{
				return false;
			}
		}
		else if (Local_520[iVar1 /*33*/].f_12 == -1)
		{
			if (PED::_0xA0BC8FAED8CFEB3C(Local_520[iVar1 /*33*/]))
			{
				PED::_SET_PED_BODY_COMPONENT(Local_520[iVar1 /*33*/], iVar10);
				PED::_UPDATE_PED_VARIATION(Local_520[iVar1 /*33*/], false, true, true, true, false);
				Local_520[iVar1 /*33*/].f_12 = 0;
			}
			else
			{
				return false;
			}
		}
		else if (bParam3)
		{
			if (iVar1 == iParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1734(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && __LIB_0__::func_272(*uParam0, 2))
	{
		if (!MAP::DOES_BLIP_EXIST(*uParam1))
		{
			*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam0);
			if (bParam2)
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, -1034486097);
			}
			else
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, 287169430);
			}
			if (bParam3)
			{
				MAP::SET_BLIP_SPRITE(*uParam1, joaat("BLIP_AMBIENT_LAW"), true);
			}
		}
	}
}

bool func_1736(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (((ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_FATALLY_INJURED(iParam0)) || PED::IS_PED_INJURED(iParam0)) || !__LIB_0__::func_272(iParam0, 11)))
	{
		return true;
	}
	return false;
}

void func_1737()
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_126[4], "Pbl_Breakout_Shoots_Goon_Doorway") || !ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_126[4], "pbl_breakout_shoots_goon_mid_fight"))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_126[4], "pbl_breakout_shoots_goon_mid_fight");
		ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_126[4], "Pbl_Breakout_Shoots_Goon_Doorway");
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_126[4], false))
	{
		if (!__LIB_0__::func_272(Local_1183[1 /*33*/], 0))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(uLocal_126[4], "pbl_breakout_shoots_goon_doorway") && ENTITY::HAS_ANIM_EVENT_FIRED(Local_155[1 /*182*/], -1036243210))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_126[4], "Pbl_Breakout_Shoots_Goon_Doorway"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_126[4], "Pbl_Breakout_Shoots_Goon_Doorway");
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_126[4], "pbl_breakout_shoots_goon_doorway", false);
				}
			}
			else if ((!ANIMSCENE::_0x1F0E401031E20146(uLocal_126[4], "pbl_breakout_shoots_goon_mid_fight") && !ANIMSCENE::_0x1F0E401031E20146(uLocal_126[4], "pbl_breakout_shoots_goon_doorway")) && (ENTITY::HAS_ANIM_EVENT_FIRED(Local_155[1 /*182*/], 1922111536) || (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_126[4]) > 2.9f && ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_126[4]) < 4f)))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_126[4], "pbl_breakout_shoots_goon_mid_fight"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_126[4], "pbl_breakout_shoots_goon_mid_fight");
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_126[4], "pbl_breakout_shoots_goon_mid_fight", false);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uLocal_126[4], "LETTER", false)) && ENTITY::GET_ENTITY_LOD_DIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uLocal_126[4], "LETTER", false)) < 50)
	{
		ENTITY::SET_ENTITY_LOD_DIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uLocal_126[4], "LETTER", false), 50);
	}
}

void func_1738()
{
	if (((__LIB_0__::func_272(Local_520[0 /*33*/], 0) && __LIB_1__::func_205(Global_35, iLocal_3430[38], 1, 0)) && Global_36.f_2 > 47f) && !ANIMSCENE::_0xF94692EB9DC15D74(uLocal_126[4], 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Local_520[0 /*33*/], 0, 0);
	}
}

void func_1739()
{
	if (__LIB_1__::func_205(Global_35, iLocal_3430[38], 1, 0))
	{
		if (Global_36.f_2 < 47f && ANIMSCENE::_0xF94692EB9DC15D74(uLocal_126[4], 0))
		{
			if (__LIB_0__::func_272(Local_520[0 /*33*/], 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_155[1 /*182*/], joaat("SCRIPT_TASK_GRAPPLE"), true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Local_155[1 /*182*/], joaat("SCRIPT_TASK_GRAPPLE"), true) != 1)
				{
					if (__LIB_0__::func_272(Local_1183[1 /*33*/], 0))
					{
						ENTITY::_SET_ENTITY_HEALTH(Local_1183[1 /*33*/], 0, 0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_520[0 /*33*/], false);
					func_849(Local_155[1 /*182*/], 2954.524f, 1374.042f, 50.3228f, 250.1182f, 2, 1073741824 /* Float: 2f */);
					func_849(Local_520[0 /*33*/], 2955.473f, 1373.216f, 50.3228f, 112.165f, 2, 1073741824 /* Float: 2f */);
					PED::SET_PED_COMBAT_MOVEMENT(Local_155[1 /*182*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_155[1 /*182*/], 0, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_155[1 /*182*/], true);
					PED::_0x789DABD18E9024DB(Local_155[1 /*182*/], 13, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_520[0 /*33*/], true);
					ENTITY::SET_ENTITY_VISIBLE(Local_520[0 /*33*/], true);
					ENTITY::SET_ENTITY_COLLISION(Local_520[0 /*33*/], true, false);
					PED::_0x789DABD18E9024DB(Local_520[0 /*33*/], 13, 0);
					func_1451(Local_155[1 /*182*/], 2955.572f, 1374.573f, 50.3228f, 0.75f, 0f, 0f, 0f, 0, 1);
					PED::_0x630E7B01F091A197(Local_155[1 /*182*/], joaat("GS_FACE_TO_FACE"));
					PED::_0x630E7B01F091A197(Local_520[0 /*33*/], joaat("GS_FACE_TO_FACE"));
					TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(Local_155[1 /*182*/], Local_520[0 /*33*/], joaat("AR_GRAPPLE_FRONT_FROM_FRONT"), 0, 0, 1, 16777216);
					VOLUME::_DELETE_VOLUME(iLocal_3430[38]);
					__LIB_1__::func_148(&uLocal_3522);
					func_1209(&(Local_155[1 /*182*/].f_169), 20, 1);
				}
			}
		}
		else if ((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_155[1 /*182*/], uLocal_126[4]) && TASK::GET_SCRIPT_TASK_STATUS(Local_155[1 /*182*/], 242628503, true) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_155[1 /*182*/], 242628503, true) != 1)
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_520[0 /*33*/], false);
			__LIB_1__::func_864(Local_520[0 /*33*/], 1, 0);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2957.803f, 1371.773f, 51.0718f, 2f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_AIM_GUN_AT_COORD(0, 2961.042f, 1375.636f, 55.7882f, -1, false, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
			TASK::TASK_PERFORM_SEQUENCE(Local_155[1 /*182*/], iLocal_38);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
			func_1209(&(Local_155[1 /*182*/].f_169), 20, 1);
		}
	}
}

void func_1740()
{
	int iVar0;
	int iVar1;
	PED::SET_PED_RESET_FLAG(Local_155[0 /*182*/], 201, true);
	PED::SET_PED_RESET_FLAG(Local_155[1 /*182*/], 201, true);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_272(Local_155[iVar1 /*182*/], 0))
		{
			if (!__LIB_0__::func_86(Local_155[iVar1 /*182*/].f_174))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_155[iVar1 /*182*/], Local_155[iVar1 /*182*/].f_171, 1f, 1f, 3f, false, true, 0))
				{
					if (__LIB_13__::func_666(Local_155[iVar1 /*182*/].f_177, 1))
					{
						func_1242(&(Local_155[iVar1 /*182*/].f_177), 1);
					}
					if (ENTITY::IS_ENTITY_AT_COORD(Global_35, Local_155[iVar1 /*182*/].f_171, 1.5f, 1.5f, 3f, false, true, 0))
					{
						if (!__LIB_13__::func_666(Local_155[iVar1 /*182*/].f_177, 2))
						{
							func_1453(iVar1, Local_155[iVar1 /*182*/].f_174, 1f, Local_155[iVar1 /*182*/].f_171, 0, 1);
							func_1262(&(Local_155[iVar1 /*182*/].f_177), 2);
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(Local_155[iVar1 /*182*/], Local_155[iVar1 /*182*/].f_174, 1f, 1f, 3f, false, true, 0))
				{
					if (__LIB_13__::func_666(Local_155[iVar1 /*182*/].f_177, 2))
					{
						func_1242(&(Local_155[iVar1 /*182*/].f_177), 2);
					}
					if (ENTITY::IS_ENTITY_AT_COORD(Global_35, Local_155[iVar1 /*182*/].f_174, 1.5f, 1.5f, 3f, false, true, 0))
					{
						if (!__LIB_13__::func_666(Local_155[iVar1 /*182*/].f_177, 1))
						{
							func_1453(iVar1, Local_155[iVar1 /*182*/].f_171, 1f, Local_155[iVar1 /*182*/].f_174, 0, 1);
							func_1262(&(Local_155[iVar1 /*182*/].f_177), 1);
						}
					}
				}
				else
				{
					if (__LIB_13__::func_666(Local_155[iVar1 /*182*/].f_177, 1))
					{
						func_1242(&(Local_155[iVar1 /*182*/].f_177), 1);
					}
					if (__LIB_13__::func_666(Local_155[iVar1 /*182*/].f_177, 2))
					{
						func_1242(&(Local_155[iVar1 /*182*/].f_177), 2);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1741()
{
	if (((__LIB_0__::func_272(Local_752[2 /*33*/], 0) || __LIB_0__::func_272(Local_752[3 /*33*/], 0)) || __LIB_0__::func_272(Local_752[4 /*33*/], 0)) && __LIB_0__::func_265(&uLocal_3571) > 0.6f)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				if (__LIB_0__::func_272(Local_752[2 /*33*/], 0))
				{
					Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[2 /*33*/], 0), true, false) };
				}
				break;
			case 1:
				if (__LIB_0__::func_272(Local_752[3 /*33*/], 0))
				{
					Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[3 /*33*/], 0), true, false) };
				}
				break;
			case 2:
				if (__LIB_0__::func_272(Local_752[4 /*33*/], 0))
				{
					Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[4 /*33*/], 0), true, false) };
				}
				break;
		}
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				Local_135.f_3 = { 3005.85f, 1346.72f, 42.57f };
				break;
			case 1:
				Local_135.f_3 = { 3008.83f, 1349.6f, 42.7f };
				break;
			case 2:
				Local_135.f_3 = { 3008.67f, 1344.77f, 42.53f };
				break;
			case 3:
				Local_135.f_3 = { 2998.48f, 1348.58f, 44.16f };
				break;
			case 4:
				Local_135.f_3 = { 3003.69f, 1349.8f, 42.37f };
				break;
			case 5:
				Local_135.f_3 = { 3000.72f, 1348.25f, 42.57f };
				break;
		}
		Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
		if (__LIB_0__::func_272(Local_752[2 /*33*/], 0))
		{
			Local_135.f_11 = Local_752[2 /*33*/];
			Local_135.f_9 = Local_752[7 /*33*/];
		}
		else if (__LIB_0__::func_272(Local_752[3 /*33*/], 0))
		{
			Local_135.f_11 = Local_752[3 /*33*/];
			Local_135.f_9 = Local_752[8 /*33*/];
		}
		else
		{
			Local_135.f_11 = Local_752[4 /*33*/];
			Local_135.f_9 = Local_752[4 /*33*/];
		}
		Local_135.f_12 = 1;
		Local_135.f_13 = 1;
		Local_135.f_16 = 1;
		Local_135.f_15 = 1;
		Local_135.f_7 = 0f;
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
		__LIB_1__::func_148(&uLocal_3571);
	}
}

void func_1743(int iParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6)
{
	PED::SET_PED_ACCURACY(Local_155[iParam0 /*182*/], 300);
	__LIB_2__::func_279(iParam1, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam1, false);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
	if (!__LIB_0__::func_86(vParam2))
	{
		if (bParam5)
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vParam2, iParam1, fParam6, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		}
		else
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vParam2, iParam1, fParam6, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		}
	}
	TASK::TASK_SHOOT_AT_ENTITY(0, iParam1, 8000, 0, 1);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
	TASK::TASK_PERFORM_SEQUENCE(Local_155[iParam0 /*182*/], iLocal_38);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
}

void func_1744()
{
	if (__LIB_0__::func_272(Local_752[5 /*33*/], 0) && __LIB_0__::func_265(&uLocal_3571) > 1.1f)
	{
		Local_135 = { ENTITY::GET_ENTITY_COORDS(Local_752[5 /*33*/], true, false) };
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				Local_135.f_3 = { 2988.86f, 1371.61f, 42.73f };
				break;
			case 1:
				Local_135.f_3 = { 2984.46f, 1368.27f, 42.79f };
				break;
			case 2:
				Local_135.f_3 = { 2989.06f, 1361.37f, 43.42f };
				break;
			case 3:
				Local_135.f_3 = { 2990.16f, 1366.48f, 42.27f };
				break;
			case 4:
				Local_135.f_3 = { 2984.68f, 1374.52f, 42.76f };
				break;
		}
		Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
		Local_135.f_11 = Local_752[5 /*33*/];
		Local_135.f_9 = Local_752[5 /*33*/];
		Local_135.f_12 = 1;
		Local_135.f_13 = 1;
		Local_135.f_16 = 1;
		Local_135.f_15 = 1;
		Local_135.f_7 = 10f;
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
		__LIB_1__::func_148(&uLocal_3571);
	}
}

void func_1745(bool bParam0)
{
	if (bParam0)
	{
		if (__LIB_0__::func_272(Local_752[7 /*33*/], 0) || __LIB_0__::func_272(Local_752[8 /*33*/], 0))
		{
			if (__LIB_0__::func_265(&uLocal_3571) > 1.05f)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 1))
				{
					case 0:
						if (__LIB_0__::func_272(Local_752[7 /*33*/], 0))
						{
							Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[7 /*33*/], 0), true, false) };
						}
						else
						{
							Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[8 /*33*/], 0), true, false) };
						}
						break;
					case 1:
						if (__LIB_0__::func_272(Local_752[8 /*33*/], 0))
						{
							Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[8 /*33*/], 0), true, false) };
						}
						else
						{
							Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[7 /*33*/], 0), true, false) };
						}
						break;
				}
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						Local_135.f_3 = { 2964.26f, 1395.09f, 44.72f };
						break;
					case 1:
						Local_135.f_3 = { 2965.92f, 1402.72f, 43.57f };
						break;
					case 2:
						Local_135.f_3 = { 2963.59f, 1398.13f, 42.96f };
						break;
					case 3:
						Local_135.f_3 = { 2961.3f, 1404f, 43.82f };
						break;
				}
				Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
				if (__LIB_0__::func_272(Local_752[7 /*33*/], 0))
				{
					Local_135.f_11 = Local_752[7 /*33*/];
					Local_135.f_9 = Local_752[7 /*33*/];
				}
				else
				{
					Local_135.f_11 = Local_752[8 /*33*/];
					Local_135.f_9 = Local_752[8 /*33*/];
				}
				Local_135.f_12 = 1;
				Local_135.f_13 = 1;
				Local_135.f_16 = 1;
				Local_135.f_15 = 1;
				Local_135.f_7 = 0f;
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
				__LIB_1__::func_148(&uLocal_3571);
			}
		}
		else if ((__LIB_0__::func_272(Local_1183[8 /*33*/], 0) || __LIB_0__::func_272(Local_1183[9 /*33*/], 0)) && __LIB_0__::func_265(&uLocal_3571) > 1.05f)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 1))
			{
				case 0:
					if (__LIB_0__::func_272(Local_1183[8 /*33*/], 0))
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1183[8 /*33*/], 0), true, false) };
					}
					else
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1183[9 /*33*/], 0), true, false) };
					}
					break;
				case 1:
					if (__LIB_0__::func_272(Local_1183[9 /*33*/], 0))
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1183[9 /*33*/], 0), true, false) };
					}
					else
					{
						Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_1183[8 /*33*/], 0), true, false) };
					}
					break;
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					Local_135.f_3 = { 2964.747f, 1401.607f, 43.6746f };
					break;
				case 1:
					Local_135.f_3 = { 2964.114f, 1405.868f, 45.0008f };
					break;
				case 2:
					Local_135.f_3 = { 2963.28f, 1396.488f, 42.6067f };
					break;
				case 3:
					Local_135.f_3 = { 2960.886f, 1398.241f, 42.5511f };
					break;
			}
			Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
			if (__LIB_0__::func_272(Local_1183[8 /*33*/], 0))
			{
				Local_135.f_11 = Local_1183[8 /*33*/];
				Local_135.f_9 = Local_1183[8 /*33*/];
			}
			else
			{
				Local_135.f_11 = Local_1183[9 /*33*/];
				Local_135.f_9 = Local_1183[9 /*33*/];
			}
			Local_135.f_12 = 1;
			Local_135.f_13 = 1;
			Local_135.f_16 = 1;
			Local_135.f_15 = 1;
			Local_135.f_7 = 0f;
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
			__LIB_1__::func_148(&uLocal_3571);
		}
	}
	else if ((__LIB_0__::func_272(Local_752[7 /*33*/], 0) || __LIB_0__::func_272(Local_752[8 /*33*/], 0)) && __LIB_0__::func_265(&uLocal_3571) > 1.05f)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 1))
		{
			case 0:
				if (__LIB_0__::func_272(Local_752[7 /*33*/], 0))
				{
					Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[7 /*33*/], 0), true, false) };
				}
				else
				{
					Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[8 /*33*/], 0), true, false) };
				}
				break;
			case 1:
				if (__LIB_0__::func_272(Local_752[8 /*33*/], 0))
				{
					Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[8 /*33*/], 0), true, false) };
				}
				else
				{
					Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_752[7 /*33*/], 0), true, false) };
				}
				break;
		}
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				Local_135.f_3 = { 2972.93f, 1393.28f, 44.1f };
				break;
			case 1:
				Local_135.f_3 = { 2973.97f, 1394.74f, 43.91f };
				break;
			case 2:
				Local_135.f_3 = { 2965.12f, 1396.09f, 45.11f };
				break;
			case 3:
				Local_135.f_3 = { 2969.6f, 1395.19f, 43.04f };
				break;
		}
		Local_135.f_6 = __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
		if (__LIB_0__::func_272(Local_752[7 /*33*/], 0))
		{
			Local_135.f_11 = Local_752[7 /*33*/];
			Local_135.f_9 = Local_752[7 /*33*/];
		}
		else
		{
			Local_135.f_11 = Local_752[8 /*33*/];
			Local_135.f_9 = Local_752[8 /*33*/];
		}
		Local_135.f_12 = 1;
		Local_135.f_13 = 1;
		Local_135.f_16 = 1;
		Local_135.f_15 = 1;
		Local_135.f_7 = 0f;
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
		__LIB_1__::func_148(&uLocal_3571);
	}
}

int func_1748(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 19;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 4;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 5;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 6;
				case 1:
					return 7;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 8;
				case 1:
					return 9;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 10;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 11;
				case 1:
					return 12;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 13;
				case 1:
					return 14;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 15;
				case 1:
					return 15;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 16;
				case 1:
					return 16;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 17;
				case 1:
					return 17;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 18;
				case 1:
					return 18;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_1758(int iParam0, vector3 vParam1)
{
	PED::SET_PED_ACCURACY(Local_155[iParam0 /*182*/], 100);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_38);
	if (!__LIB_0__::func_86(vParam1))
	{
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, vParam1, 2853.507f, 1408.571f, 70.2684f, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
	}
	TASK::TASK_SHOOT_AT_COORD(0, 2853.507f, 1408.571f, 70.2684f, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_38);
	TASK::TASK_PERFORM_SEQUENCE(Local_155[iParam0 /*182*/], iLocal_38);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_38);
}

void func_1759(var uParam0)
{
	if (__LIB_5__::func_484(&uLocal_3543, 30f))
	{
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 1, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/], 1, 1);
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/].f_1, 1, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/].f_1, 1, 1);
		ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 0, false);
		ENTITY::SET_ENTITY_PROOFS(Local_155[1 /*182*/], 0, false);
	}
	else
	{
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 0, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/], 0, 1);
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/].f_1, 0, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/].f_1, 0, 1);
		ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 1, false);
		ENTITY::SET_ENTITY_PROOFS(Local_155[1 /*182*/], 1, false);
	}
}

void func_1760(var uParam0)
{
	if (!__LIB_0__::func_75(&uLocal_3574) && (__LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) > 400f || ((INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_155[0 /*182*/]) && __LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) > 400f) && __LIB_0__::func_232(Global_35, Local_155[1 /*182*/], 1) > 400f)))
	{
		__LIB_1__::func_148(&uLocal_3574);
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
		__LIB_5__::func_486(uParam0, "GANG_RET", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_5__::func_590(uParam0, "GANG_RET", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_75(&uLocal_3574) && ((((__LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) <= 400f && __LIB_0__::func_232(Global_35, Local_155[1 /*182*/], 1) <= 400f) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_155[0 /*182*/])) || ((INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_155[0 /*182*/]) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0) && __LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) <= 400f)) || ((INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_155[0 /*182*/]) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0) && __LIB_0__::func_232(Global_35, Local_155[1 /*182*/], 1) <= 400f)))
	{
		__LIB_0__::func_37(&uLocal_3574);
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 0, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/], 0, 1);
		ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 1, false);
		ENTITY::SET_ENTITY_PROOFS(Local_155[1 /*182*/], 1, false);
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
		if (__LIB_4__::func_979(uParam0) > 7)
		{
			__LIB_5__::func_486(uParam0, "TRN1_OBJ04", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_590(uParam0, "TRN1_OBJ04", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		else
		{
			__LIB_5__::func_486(uParam0, "TRN1_OBJ03a", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_590(uParam0, "TRN1_OBJ03a", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
	}
	else if (__LIB_0__::func_75(&uLocal_3574) && __LIB_0__::func_232(Global_35, Local_155[0 /*182*/], 1) > 2500f)
	{
		__LIB_5__::func_505(uParam0, "GANG_FAIL", "", 1, 0);
	}
	if ((__LIB_0__::func_264(&uLocal_3574) > 7.5f && !PED::GET_PED_CONFIG_FLAG(Local_155[0 /*182*/], 138, true)) && !PED::GET_PED_CONFIG_FLAG(Local_155[1 /*182*/], 138, true))
	{
		__LIB_8__::func_795(uParam0, Local_155[0 /*182*/], 1, 1);
		__LIB_8__::func_795(uParam0, Local_155[1 /*182*/], 1, 1);
		ENTITY::SET_ENTITY_PROOFS(Local_155[0 /*182*/], 0, false);
		ENTITY::SET_ENTITY_PROOFS(Local_155[1 /*182*/], 0, false);
	}
}

bool func_1762(var uParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::_IS_DRAFT_VEHICLE(*uParam0))
		{
			if (VEHICLE::_0xA19447D83294E29F(*uParam0, &iVar0, &iVar1))
			{
				if (iVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_1763(var uParam0, int iParam1)
{
	char cVar0[32];
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (iParam1 == 0)
		{
			StringCopy(&cVar0, "HORSE_DUTCH", 32);
		}
		else if (iParam1 == 1)
		{
			StringCopy(&cVar0, "HORSE_MICAH", 32);
		}
		PED::SET_PED_NAME_DEBUG(*uParam0, &cVar0);
		PED::_0xFD6943B6DF77E449(*uParam0, false);
		PED::_0x2EB75FB86C41F026(*uParam0, 3, 0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 284, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		if (!__LIB_0__::func_163(*uParam0, -982327190))
		{
			TASK::TASK_STAND_STILL(*uParam0, -1);
		}
	}
}

void func_1764(int iParam0)
{
	char cVar0[32];
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		StringCopy(&cVar0, "PLAYER_HORSE", 32);
		PED::SET_PED_NAME_DEBUG(*iParam0, &cVar0);
		PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
		PED::_0xFD6943B6DF77E449(*iParam0, false);
		PED::_0x2EB75FB86C41F026(*iParam0, 3, 0);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 284, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		TASK::TASK_STAND_STILL(*iParam0, -1);
	}
}

void func_1766(var uParam0, var uParam1, int iParam2)
{
	char cVar0[16];
	if (iParam2 == 0)
	{
		StringCopy(&cVar0, "DUTCH", 16);
	}
	else if (iParam2 == 1)
	{
		StringCopy(&cVar0, "MICAH_BELL", 16);
	}
	__LIB_5__::func_106(uParam0, *uParam1, &cVar0, 0);
}

void func_1768()
{
	__LIB_8__::func_797(Local_155[0 /*182*/], &(Local_155[0 /*182*/].f_2));
	__LIB_8__::func_797(Local_155[1 /*182*/], &(Local_155[1 /*182*/].f_2));
}

void func_1769(int iParam0)
{
	if (((ENTITY::IS_ENTITY_DEAD(Local_2969[iParam0 /*33*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2969[iParam0 /*33*/].f_2)) && !PED::IS_PED_FLEEING(Local_2969[iParam0 /*33*/].f_2)) && !__LIB_13__::func_666(Local_2969[iParam0 /*33*/].f_21, 2))
	{
		PED::_0x4707E9C23D8CA3FE(Local_155[0 /*182*/], Local_2969[iParam0 /*33*/]);
		PED::_0x4707E9C23D8CA3FE(Local_155[1 /*182*/], Local_2969[iParam0 /*33*/]);
		if ((__LIB_17__::func_517(iParam0) && iParam0 != 4) && iParam0 != 5)
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_2969[iParam0 /*33*/].f_2, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		else
		{
			Local_2969[iParam0 /*33*/].f_12 = 28;
			func_1262(&(Local_2969[iParam0 /*33*/].f_21), 2);
			__LIB_3__::func_676(Local_2969[iParam0 /*33*/].f_2, 1000, 5000, 0, 0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_2969[iParam0 /*33*/].f_2) || PED::_IS_PED_FALLING_2(Local_2969[iParam0 /*33*/]))
	{
		PED::_0x4707E9C23D8CA3FE(Local_155[0 /*182*/], Local_2969[iParam0 /*33*/]);
		PED::_0x4707E9C23D8CA3FE(Local_155[1 /*182*/], Local_2969[iParam0 /*33*/]);
		if (!ENTITY::IS_ENTITY_DEAD(Local_2969[iParam0 /*33*/]))
		{
			__LIB_1__::func_864(Local_2969[iParam0 /*33*/], 0, 0);
		}
	}
}

void func_1770(int iParam0)
{
	vector3 vVar0;
	if ((Local_2969[iParam0 /*33*/].f_19 && !func_1736(Local_2969[iParam0 /*33*/])) && func_1317(1) >= Local_2969[iParam0 /*33*/].f_27)
	{
		Local_2969[iParam0 /*33*/].f_19 = 0;
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2969[iParam0 /*33*/], false);
		__LIB_2__::func_279(Local_2969[iParam0 /*33*/], 1);
		if (__LIB_1__::func_985())
		{
			Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[0 /*182*/], 0), true, false) };
			Local_135.f_6 = __LIB_0__::func_399(Local_155[0 /*182*/], 1, 0, 0);
			Local_135.f_11 = Local_155[0 /*182*/];
			Local_135.f_9 = Local_155[0 /*182*/];
		}
		else
		{
			Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[0 /*182*/], 0), true, false) };
			Local_135.f_6 = __LIB_0__::func_399(Local_155[0 /*182*/], 1, 0, 0);
			Local_135.f_11 = Local_155[0 /*182*/];
			Local_135.f_9 = Local_155[0 /*182*/];
		}
		Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_2969[iParam0 /*33*/], true, false) };
		Local_135.f_10 = Local_2969[iParam0 /*33*/];
		Local_135.f_12 = 1;
		Local_135.f_13 = 1;
		Local_135.f_16 = 1;
		Local_135.f_15 = 1;
		Local_135.f_7 = 10f;
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
		__LIB_1__::func_864(Local_2969[iParam0 /*33*/], 0, 0);
	}
	else if (func_1317(1) >= Local_2969[iParam0 /*33*/].f_27 && !PED::GET_PED_CONFIG_FLAG(Local_2969[iParam0 /*33*/], 138, true))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2969[iParam0 /*33*/], false);
		__LIB_2__::func_279(Local_2969[iParam0 /*33*/], 1);
	}
	else if (func_1317(1) >= Local_2969[iParam0 /*33*/].f_27)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_2969[iParam0 /*33*/], true, false) };
		if (MISC::IS_BULLET_IN_AREA(vVar0, 7f, false))
		{
			__LIB_1__::func_864(Local_2969[iParam0 /*33*/], 0, 0);
		}
	}
}

void func_1771(int iParam0, int iParam1, vector3 vParam2, var uParam5)
{
	float fVar0;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_2969[iParam0 /*33*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_2969[iParam0 /*33*/]) > Local_2969[iParam0 /*33*/].f_23)
	{
		Local_2969[iParam0 /*33*/].f_26 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_2969[iParam0 /*33*/]);
		fVar0 = func_2128(&(Local_2969[iParam0 /*33*/]));
		if (iParam0 != 10)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_2969[iParam0 /*33*/], fVar0, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&(Local_2969[iParam0 /*33*/].f_29), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iParam1);
			if (iParam1 + 3 >= Local_2969[iParam0 /*33*/].f_26)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_2969[iParam0 /*33*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else if (!__LIB_0__::func_86(vParam2) && ENTITY::IS_ENTITY_AT_COORD(Local_2969[iParam0 /*33*/], vParam2, 2f, 2f, 3f, false, true, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_2969[iParam0 /*33*/], 0f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_2969[iParam0 /*33*/], 1.25f, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
	else
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_2969[iParam0 /*33*/], 2.5f);
	}
}

int func_1772(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 5;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 6;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 10;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 11;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 17;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 18;
				default:
					break;
			}
			break;
	}
	return 4;
}

float func_1773(var uParam0, char* sParam1)
{
	float fVar0;
	int iVar1;
	var uVar2;
	float fVar5;
	fVar0 = 1.75f;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*uParam0, 0))
	{
		iVar1 = TASK::GET_PED_WAYPOINT_PROGRESS(*uParam0);
		TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iVar1, &uVar2);
		if (iVar1 >= 0)
		{
			if (__LIB_6__::func_912(Global_35, *uParam0, sParam1, 1112014848 /* Float: 50f */))
			{
				fVar0 = 3f;
			}
			else
			{
				fVar5 = __LIB_0__::func_665(*uParam0, Global_35, 1, 1);
				if (fVar5 > 35f)
				{
					fVar0 = 1.5f;
				}
				else if (fVar5 < 5f)
				{
					fVar0 = 3f;
				}
				else if (fVar5 < 17.5f)
				{
					fVar0 = 2.5f;
				}
			}
		}
	}
	return fVar0;
}

bool func_1777(var uParam0, float fParam1)
{
	if (!PED::IS_PED_SHOOTING(Global_35))
	{
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		else if (__LIB_0__::func_264(uParam0) >= fParam1)
		{
			return true;
		}
	}
	else if (__LIB_0__::func_75(uParam0))
	{
		__LIB_0__::func_37(uParam0);
	}
	return false;
}

void func_1778(int iParam0, int iParam1)
{
	if (__LIB_0__::func_232(Local_155[iParam0 /*182*/], iParam1, 1) < 400f)
	{
		Local_135 = { ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_155[iParam0 /*182*/], 0), true, false) };
		Local_135.f_9 = Local_155[iParam0 /*182*/];
		Local_135.f_3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
		Local_135.f_10 = iParam1;
		Local_135.f_6 = __LIB_0__::func_399(Local_155[iParam0 /*182*/], 1, 0, 0);
		Local_135.f_11 = Local_155[iParam0 /*182*/];
		Local_135.f_12 = 1;
		Local_135.f_13 = 1;
		Local_135.f_16 = 1;
		Local_135.f_15 = 1;
		Local_135.f_7 = 10f;
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_135);
		__LIB_1__::func_864(iParam1, 0, 0);
	}
	__LIB_1__::func_864(iParam1, 0, 0);
}

int func_1784(int iParam0, int iParam1)
{
	var uVar0;
	return func_2130(&uVar0, iParam0, iParam1);
}

void func_1805(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_4__::func_998(uParam0)))
	{
		__LIB_5__::func_25(uParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (__LIB_0__::func_31(iParam2))
		{
			sParam3 = __LIB_1__::func_464(iParam2, 0);
		}
		else
		{
			sParam3 = __LIB_4__::func_608(iParam2);
		}
	}
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		func_2154(uParam0, iParam1, 415348, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(uParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(uParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

void func_1847(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 4096) && uParam0->f_2286)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_5__::func_488(uParam0);
	__LIB_5__::func_354(uParam0, uParam0->f_2287, uParam0->f_2289);
	__LIB_5__::func_77(uParam0);
	if (uParam0->f_2290 && !uParam0->f_2289)
	{
		if (((((uParam0->f_2285 >= 0 && uParam0->f_1406[uParam0->f_2285 /*41*/].f_17 > 0f) && uParam0->f_2078 >= 0) && !__LIB_8__::func_864(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, (uParam0->f_1406[uParam0->f_2285 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_4__::func_562(uParam0, 33554432)) && !__LIB_4__::func_562(uParam0, 4))
		{
			__LIB_9__::func_71(uParam0, uParam0->f_2287);
			return;
		}
	}
	if (!__LIB_4__::func_562(uParam0, 4))
	{
		if (__LIB_5__::func_78(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_2074 = uParam0->f_2078;
				__LIB_4__::func_532(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_9__::func_71(uParam0, uParam0->f_2287);
		}
		if (uParam0->f_1406[uParam0->f_2080 /*41*/].f_29)
		{
			fVar0 = __LIB_11__::func_322(uParam0, uParam0->f_2080);
			if (fVar0 < 0f || (uParam0->f_2287 && fVar0 < 1f))
			{
				uParam0->f_2078 = uParam0->f_2080;
				if (!bParam2)
				{
					uParam0->f_2074 = uParam0->f_2080;
					__LIB_4__::func_532(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_2079 == -1f || fVar0 <= uParam0->f_2079) || uParam0->f_2080 == uParam0->f_2078)
				{
					if (uParam0->f_2080 != uParam0->f_2078)
					{
					}
					uParam0->f_2078 = uParam0->f_2080;
					uParam0->f_2079 = fVar0;
					__LIB_4__::func_532(uParam0, 16);
					if (((!__LIB_4__::func_562(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, true) < (uParam0->f_1406[uParam0->f_2078 /*41*/].f_11 + 5f))
					{
						__LIB_5__::func_355(uParam0);
						__LIB_4__::func_532(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_2078 == uParam0->f_2080)
			{
				__LIB_4__::func_563(uParam0, 16);
			}
		}
		if (uParam0->f_2080 + 1 >= 8)
		{
			uParam0->f_2080 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_2080 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1406[iVar2 /*41*/].f_29)
				{
					uParam0->f_2080 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_2080 = 0;
			}
		}
		if (uParam0->f_2078 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 2) && uParam0->f_2287)
		{
			return;
		}
	}
	if (__LIB_4__::func_562(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1);
		if (uParam0->f_2287 && fVar4 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_2 + uParam0->f_1406[uParam0->f_2078 /*41*/].f_10))
			{
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_2289 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_2291) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_2291))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_2291, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_2291))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_2291);
			}
		}
		else if ((uParam0->f_2287 && fVar4 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2288))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_2288, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_2287 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_2288) > 1.25f) || __LIB_4__::func_562(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269) && __LIB_11__::func_322(uParam0, uParam0->f_2078) < 10000f) && __LIB_4__::func_562(uParam0, 16)) || __LIB_4__::func_562(uParam0, 4))
		{
			if (!__LIB_4__::func_562(uParam0, 4))
			{
				__LIB_4__::func_532(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_4__::func_575(uParam0, uParam0->f_2078))
			{
				iVar7 |= 2048;
			}
			if (__LIB_5__::func_79(Global_35, &(uParam0->f_2076), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_1406[uParam0->f_2078 /*41*/].f_7, uParam0->f_1406[uParam0->f_2078 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_2076 = 0;
				__LIB_4__::func_563(uParam0, 4);
			}
		}
	}
	else if (__LIB_4__::func_562(uParam0, 4))
	{
		__LIB_4__::func_563(uParam0, 4);
	}
}

int func_1905(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11;
		case 6:
			return 10;
	}
	return 12;
}

void func_1906(int iParam0)
{
	struct<4> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42[iParam0]))
	{
		if (iParam0 == 0)
		{
			Var0 = { 2914.214f, 1322.176f, 44.0914f };
			Var0.f_3 = -200.61f;
		}
		if (iParam0 == 0)
		{
			iLocal_42[iParam0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_3__::func_136(-405768775, 0));
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_42[iParam0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_42[iParam0], Var0, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_42[iParam0], 0f, 0f, Var0.f_3, 2, true);
		}
	}
}

float func_1907(int iParam0, int iParam1)
{
	return func_964(iParam0, iParam1);
}

void func_1920(int iParam0, int iParam1)
{
	if (!__LIB_8__::func_747(iParam0, iParam1))
	{
		__LIB_1__::func_683(iParam0, iParam1);
	}
}

void func_1921(char* sParam0, int iParam1, int* iParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), iParam2))
			{
				if (bParam3)
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sParam0, *iParam2, 0, -1, 0, 1, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam0, *iParam2, 0, -1, 0, 1, -1);
				}
			}
			else if (bParam3)
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sParam0, 0, 0, -1, 1, 0, -1);
			}
			else
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam0, 0, 0, -1, 1, 0, -1);
			}
			PED::SET_PED_KEEP_TASK(iParam1, bParam4);
		}
	}
}

void func_1932(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26)
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4096))
	{
		if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_937(uParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2271(128);
							if (__LIB_0__::func_154(iVar1))
							{
								if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, true, 0, false, false);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_2272(uParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33));
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8192))
	{
		if (__LIB_4__::func_937(uParam0, 1024) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

void func_1938(var uParam0)
{
	int iVar0;
	iVar0 = func_1967(uParam0);
	SCRIPTS::_0x7D654266025E921B(iVar0);
}

int func_1967(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			return joaat("CHAL_CTX_CHECKPOINT_1");
		case 1:
			return joaat("CHAL_CTX_CHECKPOINT_2");
		case 2:
			return joaat("CHAL_CTX_CHECKPOINT_3");
		case 3:
			return joaat("CHAL_CTX_CHECKPOINT_4");
		case 4:
			return joaat("CHAL_CTX_CHECKPOINT_5");
		case 5:
			return joaat("CHAL_CTX_CHECKPOINT_6");
		case 6:
			return joaat("CHAL_CTX_CHECKPOINT_7");
		case 7:
			return joaat("CHAL_CTX_CHECKPOINT_8");
		case 8:
			return joaat("CHAL_CTX_CHECKPOINT_9");
		case 9:
			return joaat("CHAL_CTX_CHECKPOINT_10");
		case 10:
			return joaat("CHAL_CTX_CHECKPOINT_11");
		case 11:
			return joaat("CHAL_CTX_CHECKPOINT_12");
		case 12:
			return joaat("CHAL_CTX_CHECKPOINT_13");
		case 13:
			return joaat("CHAL_CTX_CHECKPOINT_14");
		case 14:
			return joaat("CHAL_CTX_CHECKPOINT_15");
		case 15:
			return joaat("CHAL_CTX_CHECKPOINT_16");
			Jump @447; //curOff = 345
			return joaat("CHAL_CTX_CHECKPOINT_17");
			Jump @447; //curOff = 356
			return joaat("CHAL_CTX_CHECKPOINT_18");
			Jump @447; //curOff = 367
			return joaat("CHAL_CTX_CHECKPOINT_19");
			Jump @447; //curOff = 378
			return joaat("CHAL_CTX_CHECKPOINT_20");
			Jump @447; //curOff = 389
			return joaat("CHAL_CTX_CHECKPOINT_21");
			Jump @447; //curOff = 400
			return joaat("CHAL_CTX_CHECKPOINT_22");
			Jump @447; //curOff = 411
			return joaat("CHAL_CTX_CHECKPOINT_23");
			Jump @447; //curOff = 422
			return joaat("CHAL_CTX_CHECKPOINT_24");
			Jump @447; //curOff = 433
			return joaat("CHAL_CTX_CHECKPOINT_25");
			return 0;
		}
int func_1968(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (Global_1225639.f_21[iParam0])
	{
		return Global_1108178[iParam0 /*37*/].f_1;
	}
	return 25;
}

bool func_2062(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_2062(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2062(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2062(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2062(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_2103(int iParam0, bool bParam1)
{
	PED::_0xA2B8E47442C76CEC(iParam0, 1522539835);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_2128(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	fVar4 = 1.75f;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*uParam0, 0))
	{
		uParam0->f_26 = TASK::GET_PED_WAYPOINT_PROGRESS(*uParam0);
		TASK::WAYPOINT_RECORDING_GET_COORD(&(Local_155[0 /*182*/].f_178), func_1317(1), &vVar1);
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&(uParam0->f_29), vVar1, &iVar0))
		{
			iVar0 = __LIB_0__::func_309((iVar0 + uParam0->f_24), 0, 100000);
		}
		fVar4 = 1.25f;
		if ((iVar0 < uParam0->f_26 && !__LIB_0__::func_48(*uParam0, Global_35, 20f, 1)) && func_1317(1) < iVar0)
		{
			fVar4 = 1f;
		}
		else if ((iVar0 < uParam0->f_26 && !__LIB_0__::func_48(*uParam0, Global_35, 20f, 1)) && func_1317(1) >= iVar0)
		{
			fVar4 = 1.501f;
		}
		else if (iVar0 < uParam0->f_26 && __LIB_0__::func_48(*uParam0, Global_35, 20f, 1))
		{
			fVar4 = 1.501f;
		}
		else if (iVar0 > uParam0->f_26)
		{
			fVar4 = 3f;
		}
		else
		{
			fVar4 = 2.5f;
		}
	}
	if (func_1317(1) > 160)
	{
		fVar4 = 1.5f;
	}
	return fVar4;
}

int func_2130(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_2130(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2154(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		if (!__LIB_5__::func_306(uParam0, iParam1, &iVar0))
		{
			if (!__LIB_5__::func_307(uParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 1);
	uParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	uParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	uParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	uParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			uParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			uParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(uParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	uParam0->f_13145++;
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
	{
		if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
		{
			EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 415348;
			iVar1++;
		}
		__LIB_5__::func_561(uParam0, iParam1, 2, 4);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 8);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 512);
		__LIB_5__::func_563(uParam0, iParam1, 5000, 512);
		if (uParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_5__::func_564(uParam0, iParam1, -2147483648);
		}
	}
}

int func_2271(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1351(&uVar0, iParam0, 0);
	iVar9 = func_2130(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (__LIB_0__::func_27(iParam0, 256))
			{
				return joaat("WEAPON_UNARMED");
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return iVar9;
		}
	}
	else if (iVar9 == 0)
	{
		return iVar8;
	}
	if (WEAPON::_0xA2091482ED42EF85(Global_35, &uVar0) > WEAPON::_0xA2091482ED42EF85(Global_35, &uVar4) && !__LIB_0__::func_27(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

void func_2272(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (uParam0->f_7374 != 0 && uParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != uParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, uParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4)) && __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2271(128);
					if (__LIB_0__::func_154(iVar2))
					{
						if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar2, false, 0, false, false);
						}
					}
				}
			}
			else
			{
				iVar3 = func_2271(128);
				if (__LIB_0__::func_154(iVar3))
				{
					if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, false, 0, false, false);
					}
				}
			}
		}
	}
}

