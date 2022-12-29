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
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	char* sLocal_58 = NULL;
	char* sLocal_59 = NULL;
	char* sLocal_60 = NULL;
	char* sLocal_61 = NULL;
	char* sLocal_62 = NULL;
	char* sLocal_63 = NULL;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	char* sLocal_67 = NULL;
	char* sLocal_68 = NULL;
	char* sLocal_69 = NULL;
	char* sLocal_70 = NULL;
	char* sLocal_71 = NULL;
	char* sLocal_72 = NULL;
	char* sLocal_73 = NULL;
	char* sLocal_74 = NULL;
	char* sLocal_75 = NULL;
	char* sLocal_76 = NULL;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<10> Local_79[29];
	struct<10> Local_370[57];
	vector3 vLocal_941[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<164> Local_969[3];
	struct<21> Local_1462[3];
	int iLocal_1526 = 0;
	int iLocal_1527[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1543[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1561[3] = { 0, 0, 0 };
	int iLocal_1565[4] = { 0, 0, 0, 0 };
	int iLocal_1570 = 0;
	struct<10> Local_1571[3];
	int iLocal_1602[4] = { 0, 0, 0, 0 };
	vector3 vLocal_1607[29] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<2> Local_1695[10];
	int iLocal_1716 = 0;
	int iLocal_1717 = 0;
	int iLocal_1718 = 0;
	int iLocal_1719 = 0;
	int iLocal_1720[42] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1763 = 0;
	char* sLocal_1764 = NULL;
	int iLocal_1765 = 0;
	int iLocal_1766 = 0;
	int iLocal_1767 = 0;
	int iLocal_1768[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1779 = 0;
	float fLocal_1780 = 0f;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	int iLocal_1800[3] = { 0, 0, 0 };
	int iLocal_1804 = 0;
	int iLocal_1805 = 0;
	int iLocal_1806 = 0;
	int iLocal_1807 = 0;
	int iLocal_1808 = 0;
	int iLocal_1809 = 0;
	int iLocal_1810[3] = { 0, 0, 0 };
	int iLocal_1814 = 0;
	int iLocal_1815 = 0;
	int iLocal_1816 = 0;
	int iLocal_1817 = 0;
	bool bLocal_1818 = false;
	int iLocal_1819 = 0;
	int iLocal_1820 = 0;
	struct<1279> Local_1821[2];
	int iLocal_4380[5] = { 0, 0, 0, 0, 0 };
	struct<7> Local_4386 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_4393 = 0;
	var uLocal_4394 = -1082130432;
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
	int iLocal_4406 = 0;
	int iLocal_4407 = 0;
	int iLocal_4408 = 0;
	char* sLocal_4409 = NULL;
	int iLocal_4410 = 0;
	char* sLocal_4411 = NULL;
	char* sLocal_4412 = NULL;
	int iLocal_4413 = 0;
	char* sLocal_4414 = NULL;
	char* sLocal_4415 = NULL;
	int iLocal_4416 = 0;
	int iLocal_4417 = 0;
	float fLocal_4418 = 0f;
	int iLocal_4419 = 0;
	int iLocal_4420 = 0;
	int iLocal_4421 = 0;
	int iLocal_4422 = 0;
	struct<4> Local_4423 = { 0, 1050253722, 1067030938, 0 } ;
	var uLocal_4427 = 0;
	var uLocal_4428 = -1082130432;
	var uLocal_4429 = -1082130432;
	struct<4> Local_4430 = { 0, 1050253722, 1067030938, 0 } ;
	var uLocal_4434 = 0;
	var uLocal_4435 = -1082130432;
	var uLocal_4436 = -1082130432;
	struct<4> Local_4437 = { 0, 1050253722, 1067030938, 0 } ;
	var uLocal_4441 = 0;
	var uLocal_4442 = -1082130432;
	var uLocal_4443 = -1082130432;
	struct<4> Local_4444 = { 0, 1050253722, 1067030938, 0 } ;
	var uLocal_4448 = 0;
	var uLocal_4449 = -1082130432;
	var uLocal_4450 = -1082130432;
	bool bLocal_4451 = false;
	float fLocal_4452 = 0f;
	int iLocal_4453 = 0;
	int iLocal_4454 = 0;
	int iLocal_4455 = 0;
	int iLocal_4456[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_4485 = false;
	int iLocal_4486[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_4495 = 0;
	int iLocal_4496 = 0;
	int iLocal_4497 = 0;
	int iLocal_4498 = 0;
	int iLocal_4499 = 0;
	int iLocal_4500 = 0;
	char* sLocal_4501 = NULL;
	bool bLocal_4502 = false;
	var uLocal_4503 = 0;
	var uLocal_4504 = 27;
	var uLocal_4505 = 8;
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
	var uLocal_4526 = -1;
	var uLocal_4527 = 8;
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
	var uLocal_4548 = -1;
	var uLocal_4549 = 8;
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
	var uLocal_4570 = -1;
	var uLocal_4571 = 8;
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
	var uLocal_4592 = -1;
	var uLocal_4593 = 8;
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
	var uLocal_4614 = -1;
	var uLocal_4615 = 8;
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
	var uLocal_4636 = -1;
	var uLocal_4637 = 8;
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
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = -1;
	var uLocal_4659 = 8;
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
	var uLocal_4680 = -1;
	var uLocal_4681 = 8;
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
	var uLocal_4702 = -1;
	var uLocal_4703 = 8;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
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
	var uLocal_4724 = -1;
	var uLocal_4725 = 8;
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
	var uLocal_4746 = -1;
	var uLocal_4747 = 8;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = -1;
	var uLocal_4769 = 8;
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
	var uLocal_4790 = -1;
	var uLocal_4791 = 8;
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
	var uLocal_4812 = -1;
	var uLocal_4813 = 8;
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
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = -1;
	var uLocal_4835 = 8;
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
	var uLocal_4856 = -1;
	var uLocal_4857 = 8;
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
	var uLocal_4878 = -1;
	var uLocal_4879 = 8;
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
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = -1;
	var uLocal_4901 = 8;
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
	var uLocal_4922 = -1;
	var uLocal_4923 = 8;
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
	var uLocal_4944 = -1;
	var uLocal_4945 = 8;
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
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = -1;
	var uLocal_4967 = 8;
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
	var uLocal_4988 = -1;
	var uLocal_4989 = 8;
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
	var uLocal_5010 = -1;
	var uLocal_5011 = 8;
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
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = -1;
	var uLocal_5033 = 8;
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
	var uLocal_5054 = -1;
	var uLocal_5055 = 8;
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
	var uLocal_5076 = -1;
	var uLocal_5077 = 8;
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
	var uLocal_5097 = 0;
	var uLocal_5098 = -1;
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
	var uLocal_5137 = 2;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 60;
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
	var uLocal_5164 = 0;
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
	var uLocal_5231 = 0;
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
	var uLocal_5298 = 0;
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
	var uLocal_5322 = 40;
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
	var uLocal_5365 = 0;
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
	var uLocal_5432 = 0;
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
	var uLocal_5499 = 0;
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
	var uLocal_5523 = 20;
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
	var uLocal_5566 = 0;
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
	var uLocal_5584 = 14;
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
	var uLocal_5629 = 60;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 20;
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
	var uLocal_5700 = 0;
	var uLocal_5701 = 20;
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
	var uLocal_5767 = 0;
	var uLocal_5768 = 20;
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
	var uLocal_5834 = 0;
	var uLocal_5835 = 20;
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
	var uLocal_5901 = 0;
	var uLocal_5902 = 20;
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
	var uLocal_5968 = 0;
	var uLocal_5969 = 20;
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
	var uLocal_6035 = 0;
	var uLocal_6036 = 20;
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
	var uLocal_6102 = 0;
	var uLocal_6103 = 20;
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
	var uLocal_6169 = 0;
	var uLocal_6170 = 20;
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
	var uLocal_6236 = 0;
	var uLocal_6237 = 20;
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
	var uLocal_6303 = 0;
	var uLocal_6304 = 20;
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
	var uLocal_6370 = 0;
	var uLocal_6371 = 20;
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
	var uLocal_6437 = 0;
	var uLocal_6438 = 20;
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
	var uLocal_6504 = 0;
	var uLocal_6505 = 20;
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
	var uLocal_6571 = 0;
	var uLocal_6572 = 20;
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
	var uLocal_6638 = 0;
	var uLocal_6639 = 20;
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
	var uLocal_6705 = 0;
	var uLocal_6706 = 20;
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
	var uLocal_6772 = 0;
	var uLocal_6773 = 20;
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
	var uLocal_6839 = 0;
	var uLocal_6840 = 20;
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
	var uLocal_6906 = 0;
	var uLocal_6907 = 20;
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
	var uLocal_6973 = 0;
	var uLocal_6974 = 20;
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
	var uLocal_7040 = 0;
	var uLocal_7041 = 20;
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
	var uLocal_7107 = 0;
	var uLocal_7108 = 20;
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
	var uLocal_7174 = 0;
	var uLocal_7175 = 20;
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
	var uLocal_7241 = 0;
	var uLocal_7242 = 20;
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
	var uLocal_7308 = 0;
	var uLocal_7309 = 20;
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
	var uLocal_7375 = 0;
	var uLocal_7376 = 20;
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
	var uLocal_7442 = 0;
	var uLocal_7443 = 20;
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
	var uLocal_7509 = 0;
	var uLocal_7510 = 20;
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
	var uLocal_7576 = 0;
	var uLocal_7577 = 20;
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
	var uLocal_7643 = 0;
	var uLocal_7644 = 20;
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
	var uLocal_7710 = 0;
	var uLocal_7711 = 20;
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
	var uLocal_7777 = 0;
	var uLocal_7778 = 20;
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
	var uLocal_7844 = 0;
	var uLocal_7845 = 20;
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
	var uLocal_7911 = 0;
	var uLocal_7912 = 20;
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
	var uLocal_7978 = 0;
	var uLocal_7979 = 20;
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
	var uLocal_8045 = 0;
	var uLocal_8046 = 20;
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
	var uLocal_8112 = 0;
	var uLocal_8113 = 20;
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
	var uLocal_8179 = 0;
	var uLocal_8180 = 20;
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
	var uLocal_8246 = 0;
	var uLocal_8247 = 20;
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
	var uLocal_8313 = 0;
	var uLocal_8314 = 20;
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
	var uLocal_8380 = 0;
	var uLocal_8381 = 20;
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
	var uLocal_8447 = 0;
	var uLocal_8448 = 20;
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
	var uLocal_8514 = 0;
	var uLocal_8515 = 20;
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
	var uLocal_8581 = 0;
	var uLocal_8582 = 20;
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
	var uLocal_8648 = 0;
	var uLocal_8649 = 20;
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
	var uLocal_8715 = 0;
	var uLocal_8716 = 20;
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
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 20;
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
	var uLocal_8819 = 0;
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
	var uLocal_8850 = 20;
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
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
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
	var uLocal_8896 = 0;
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
	var uLocal_8917 = 20;
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
	var uLocal_8941 = 0;
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
	var uLocal_8984 = 20;
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
	var uLocal_9051 = 20;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
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
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 20;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
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
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 20;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
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
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 20;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
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
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 20;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
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
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 20;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
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
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 20;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
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
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 20;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
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
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 20;
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
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 0;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 10;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
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
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 10;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
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
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 3;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 5;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 5;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 5;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 24;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 0;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
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
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 0;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
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
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 30;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 3;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = -1;
	var uLocal_9938 = 0;
	var uLocal_9939 = 5;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 10;
	var uLocal_9951 = 3;
	var uLocal_9952 = 500;
	var uLocal_9953 = 10000;
	var uLocal_9954 = 0;
	var uLocal_9955 = 3;
	var uLocal_9956 = 500;
	var uLocal_9957 = 10000;
	var uLocal_9958 = 0;
	var uLocal_9959 = 3;
	var uLocal_9960 = 500;
	var uLocal_9961 = 10000;
	var uLocal_9962 = 0;
	var uLocal_9963 = 3;
	var uLocal_9964 = 500;
	var uLocal_9965 = 10000;
	var uLocal_9966 = 0;
	var uLocal_9967 = 3;
	var uLocal_9968 = 500;
	var uLocal_9969 = 10000;
	var uLocal_9970 = 0;
	var uLocal_9971 = 3;
	var uLocal_9972 = 500;
	var uLocal_9973 = 10000;
	var uLocal_9974 = 0;
	var uLocal_9975 = 3;
	var uLocal_9976 = 500;
	var uLocal_9977 = 10000;
	var uLocal_9978 = 0;
	var uLocal_9979 = 3;
	var uLocal_9980 = 500;
	var uLocal_9981 = 10000;
	var uLocal_9982 = 0;
	var uLocal_9983 = 3;
	var uLocal_9984 = 500;
	var uLocal_9985 = 10000;
	var uLocal_9986 = 0;
	var uLocal_9987 = 3;
	var uLocal_9988 = 500;
	var uLocal_9989 = 10000;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 3;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = -1;
	var uLocal_10003 = 0;
	var uLocal_10004 = 5;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 10;
	var uLocal_10016 = 3;
	var uLocal_10017 = 500;
	var uLocal_10018 = 10000;
	var uLocal_10019 = 0;
	var uLocal_10020 = 3;
	var uLocal_10021 = 500;
	var uLocal_10022 = 10000;
	var uLocal_10023 = 0;
	var uLocal_10024 = 3;
	var uLocal_10025 = 500;
	var uLocal_10026 = 10000;
	var uLocal_10027 = 0;
	var uLocal_10028 = 3;
	var uLocal_10029 = 500;
	var uLocal_10030 = 10000;
	var uLocal_10031 = 0;
	var uLocal_10032 = 3;
	var uLocal_10033 = 500;
	var uLocal_10034 = 10000;
	var uLocal_10035 = 0;
	var uLocal_10036 = 3;
	var uLocal_10037 = 500;
	var uLocal_10038 = 10000;
	var uLocal_10039 = 0;
	var uLocal_10040 = 3;
	var uLocal_10041 = 500;
	var uLocal_10042 = 10000;
	var uLocal_10043 = 0;
	var uLocal_10044 = 3;
	var uLocal_10045 = 500;
	var uLocal_10046 = 10000;
	var uLocal_10047 = 0;
	var uLocal_10048 = 3;
	var uLocal_10049 = 500;
	var uLocal_10050 = 10000;
	var uLocal_10051 = 0;
	var uLocal_10052 = 3;
	var uLocal_10053 = 500;
	var uLocal_10054 = 10000;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 3;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = -1;
	var uLocal_10068 = 0;
	var uLocal_10069 = 5;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 10;
	var uLocal_10081 = 3;
	var uLocal_10082 = 500;
	var uLocal_10083 = 10000;
	var uLocal_10084 = 0;
	var uLocal_10085 = 3;
	var uLocal_10086 = 500;
	var uLocal_10087 = 10000;
	var uLocal_10088 = 0;
	var uLocal_10089 = 3;
	var uLocal_10090 = 500;
	var uLocal_10091 = 10000;
	var uLocal_10092 = 0;
	var uLocal_10093 = 3;
	var uLocal_10094 = 500;
	var uLocal_10095 = 10000;
	var uLocal_10096 = 0;
	var uLocal_10097 = 3;
	var uLocal_10098 = 500;
	var uLocal_10099 = 10000;
	var uLocal_10100 = 0;
	var uLocal_10101 = 3;
	var uLocal_10102 = 500;
	var uLocal_10103 = 10000;
	var uLocal_10104 = 0;
	var uLocal_10105 = 3;
	var uLocal_10106 = 500;
	var uLocal_10107 = 10000;
	var uLocal_10108 = 0;
	var uLocal_10109 = 3;
	var uLocal_10110 = 500;
	var uLocal_10111 = 10000;
	var uLocal_10112 = 0;
	var uLocal_10113 = 3;
	var uLocal_10114 = 500;
	var uLocal_10115 = 10000;
	var uLocal_10116 = 0;
	var uLocal_10117 = 3;
	var uLocal_10118 = 500;
	var uLocal_10119 = 10000;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 3;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = -1;
	var uLocal_10133 = 0;
	var uLocal_10134 = 5;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 10;
	var uLocal_10146 = 3;
	var uLocal_10147 = 500;
	var uLocal_10148 = 10000;
	var uLocal_10149 = 0;
	var uLocal_10150 = 3;
	var uLocal_10151 = 500;
	var uLocal_10152 = 10000;
	var uLocal_10153 = 0;
	var uLocal_10154 = 3;
	var uLocal_10155 = 500;
	var uLocal_10156 = 10000;
	var uLocal_10157 = 0;
	var uLocal_10158 = 3;
	var uLocal_10159 = 500;
	var uLocal_10160 = 10000;
	var uLocal_10161 = 0;
	var uLocal_10162 = 3;
	var uLocal_10163 = 500;
	var uLocal_10164 = 10000;
	var uLocal_10165 = 0;
	var uLocal_10166 = 3;
	var uLocal_10167 = 500;
	var uLocal_10168 = 10000;
	var uLocal_10169 = 0;
	var uLocal_10170 = 3;
	var uLocal_10171 = 500;
	var uLocal_10172 = 10000;
	var uLocal_10173 = 0;
	var uLocal_10174 = 3;
	var uLocal_10175 = 500;
	var uLocal_10176 = 10000;
	var uLocal_10177 = 0;
	var uLocal_10178 = 3;
	var uLocal_10179 = 500;
	var uLocal_10180 = 10000;
	var uLocal_10181 = 0;
	var uLocal_10182 = 3;
	var uLocal_10183 = 500;
	var uLocal_10184 = 10000;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 3;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = -1;
	var uLocal_10198 = 0;
	var uLocal_10199 = 5;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 10;
	var uLocal_10211 = 3;
	var uLocal_10212 = 500;
	var uLocal_10213 = 10000;
	var uLocal_10214 = 0;
	var uLocal_10215 = 3;
	var uLocal_10216 = 500;
	var uLocal_10217 = 10000;
	var uLocal_10218 = 0;
	var uLocal_10219 = 3;
	var uLocal_10220 = 500;
	var uLocal_10221 = 10000;
	var uLocal_10222 = 0;
	var uLocal_10223 = 3;
	var uLocal_10224 = 500;
	var uLocal_10225 = 10000;
	var uLocal_10226 = 0;
	var uLocal_10227 = 3;
	var uLocal_10228 = 500;
	var uLocal_10229 = 10000;
	var uLocal_10230 = 0;
	var uLocal_10231 = 3;
	var uLocal_10232 = 500;
	var uLocal_10233 = 10000;
	var uLocal_10234 = 0;
	var uLocal_10235 = 3;
	var uLocal_10236 = 500;
	var uLocal_10237 = 10000;
	var uLocal_10238 = 0;
	var uLocal_10239 = 3;
	var uLocal_10240 = 500;
	var uLocal_10241 = 10000;
	var uLocal_10242 = 0;
	var uLocal_10243 = 3;
	var uLocal_10244 = 500;
	var uLocal_10245 = 10000;
	var uLocal_10246 = 0;
	var uLocal_10247 = 3;
	var uLocal_10248 = 500;
	var uLocal_10249 = 10000;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 3;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = -1;
	var uLocal_10263 = 0;
	var uLocal_10264 = 5;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 10;
	var uLocal_10276 = 3;
	var uLocal_10277 = 500;
	var uLocal_10278 = 10000;
	var uLocal_10279 = 0;
	var uLocal_10280 = 3;
	var uLocal_10281 = 500;
	var uLocal_10282 = 10000;
	var uLocal_10283 = 0;
	var uLocal_10284 = 3;
	var uLocal_10285 = 500;
	var uLocal_10286 = 10000;
	var uLocal_10287 = 0;
	var uLocal_10288 = 3;
	var uLocal_10289 = 500;
	var uLocal_10290 = 10000;
	var uLocal_10291 = 0;
	var uLocal_10292 = 3;
	var uLocal_10293 = 500;
	var uLocal_10294 = 10000;
	var uLocal_10295 = 0;
	var uLocal_10296 = 3;
	var uLocal_10297 = 500;
	var uLocal_10298 = 10000;
	var uLocal_10299 = 0;
	var uLocal_10300 = 3;
	var uLocal_10301 = 500;
	var uLocal_10302 = 10000;
	var uLocal_10303 = 0;
	var uLocal_10304 = 3;
	var uLocal_10305 = 500;
	var uLocal_10306 = 10000;
	var uLocal_10307 = 0;
	var uLocal_10308 = 3;
	var uLocal_10309 = 500;
	var uLocal_10310 = 10000;
	var uLocal_10311 = 0;
	var uLocal_10312 = 3;
	var uLocal_10313 = 500;
	var uLocal_10314 = 10000;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 3;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = -1;
	var uLocal_10328 = 0;
	var uLocal_10329 = 5;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 10;
	var uLocal_10341 = 3;
	var uLocal_10342 = 500;
	var uLocal_10343 = 10000;
	var uLocal_10344 = 0;
	var uLocal_10345 = 3;
	var uLocal_10346 = 500;
	var uLocal_10347 = 10000;
	var uLocal_10348 = 0;
	var uLocal_10349 = 3;
	var uLocal_10350 = 500;
	var uLocal_10351 = 10000;
	var uLocal_10352 = 0;
	var uLocal_10353 = 3;
	var uLocal_10354 = 500;
	var uLocal_10355 = 10000;
	var uLocal_10356 = 0;
	var uLocal_10357 = 3;
	var uLocal_10358 = 500;
	var uLocal_10359 = 10000;
	var uLocal_10360 = 0;
	var uLocal_10361 = 3;
	var uLocal_10362 = 500;
	var uLocal_10363 = 10000;
	var uLocal_10364 = 0;
	var uLocal_10365 = 3;
	var uLocal_10366 = 500;
	var uLocal_10367 = 10000;
	var uLocal_10368 = 0;
	var uLocal_10369 = 3;
	var uLocal_10370 = 500;
	var uLocal_10371 = 10000;
	var uLocal_10372 = 0;
	var uLocal_10373 = 3;
	var uLocal_10374 = 500;
	var uLocal_10375 = 10000;
	var uLocal_10376 = 0;
	var uLocal_10377 = 3;
	var uLocal_10378 = 500;
	var uLocal_10379 = 10000;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 3;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = -1;
	var uLocal_10393 = 0;
	var uLocal_10394 = 5;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 10;
	var uLocal_10406 = 3;
	var uLocal_10407 = 500;
	var uLocal_10408 = 10000;
	var uLocal_10409 = 0;
	var uLocal_10410 = 3;
	var uLocal_10411 = 500;
	var uLocal_10412 = 10000;
	var uLocal_10413 = 0;
	var uLocal_10414 = 3;
	var uLocal_10415 = 500;
	var uLocal_10416 = 10000;
	var uLocal_10417 = 0;
	var uLocal_10418 = 3;
	var uLocal_10419 = 500;
	var uLocal_10420 = 10000;
	var uLocal_10421 = 0;
	var uLocal_10422 = 3;
	var uLocal_10423 = 500;
	var uLocal_10424 = 10000;
	var uLocal_10425 = 0;
	var uLocal_10426 = 3;
	var uLocal_10427 = 500;
	var uLocal_10428 = 10000;
	var uLocal_10429 = 0;
	var uLocal_10430 = 3;
	var uLocal_10431 = 500;
	var uLocal_10432 = 10000;
	var uLocal_10433 = 0;
	var uLocal_10434 = 3;
	var uLocal_10435 = 500;
	var uLocal_10436 = 10000;
	var uLocal_10437 = 0;
	var uLocal_10438 = 3;
	var uLocal_10439 = 500;
	var uLocal_10440 = 10000;
	var uLocal_10441 = 0;
	var uLocal_10442 = 3;
	var uLocal_10443 = 500;
	var uLocal_10444 = 10000;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 3;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = -1;
	var uLocal_10458 = 0;
	var uLocal_10459 = 5;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 10;
	var uLocal_10471 = 3;
	var uLocal_10472 = 500;
	var uLocal_10473 = 10000;
	var uLocal_10474 = 0;
	var uLocal_10475 = 3;
	var uLocal_10476 = 500;
	var uLocal_10477 = 10000;
	var uLocal_10478 = 0;
	var uLocal_10479 = 3;
	var uLocal_10480 = 500;
	var uLocal_10481 = 10000;
	var uLocal_10482 = 0;
	var uLocal_10483 = 3;
	var uLocal_10484 = 500;
	var uLocal_10485 = 10000;
	var uLocal_10486 = 0;
	var uLocal_10487 = 3;
	var uLocal_10488 = 500;
	var uLocal_10489 = 10000;
	var uLocal_10490 = 0;
	var uLocal_10491 = 3;
	var uLocal_10492 = 500;
	var uLocal_10493 = 10000;
	var uLocal_10494 = 0;
	var uLocal_10495 = 3;
	var uLocal_10496 = 500;
	var uLocal_10497 = 10000;
	var uLocal_10498 = 0;
	var uLocal_10499 = 3;
	var uLocal_10500 = 500;
	var uLocal_10501 = 10000;
	var uLocal_10502 = 0;
	var uLocal_10503 = 3;
	var uLocal_10504 = 500;
	var uLocal_10505 = 10000;
	var uLocal_10506 = 0;
	var uLocal_10507 = 3;
	var uLocal_10508 = 500;
	var uLocal_10509 = 10000;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 3;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = -1;
	var uLocal_10523 = 0;
	var uLocal_10524 = 5;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 10;
	var uLocal_10536 = 3;
	var uLocal_10537 = 500;
	var uLocal_10538 = 10000;
	var uLocal_10539 = 0;
	var uLocal_10540 = 3;
	var uLocal_10541 = 500;
	var uLocal_10542 = 10000;
	var uLocal_10543 = 0;
	var uLocal_10544 = 3;
	var uLocal_10545 = 500;
	var uLocal_10546 = 10000;
	var uLocal_10547 = 0;
	var uLocal_10548 = 3;
	var uLocal_10549 = 500;
	var uLocal_10550 = 10000;
	var uLocal_10551 = 0;
	var uLocal_10552 = 3;
	var uLocal_10553 = 500;
	var uLocal_10554 = 10000;
	var uLocal_10555 = 0;
	var uLocal_10556 = 3;
	var uLocal_10557 = 500;
	var uLocal_10558 = 10000;
	var uLocal_10559 = 0;
	var uLocal_10560 = 3;
	var uLocal_10561 = 500;
	var uLocal_10562 = 10000;
	var uLocal_10563 = 0;
	var uLocal_10564 = 3;
	var uLocal_10565 = 500;
	var uLocal_10566 = 10000;
	var uLocal_10567 = 0;
	var uLocal_10568 = 3;
	var uLocal_10569 = 500;
	var uLocal_10570 = 10000;
	var uLocal_10571 = 0;
	var uLocal_10572 = 3;
	var uLocal_10573 = 500;
	var uLocal_10574 = 10000;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 3;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = -1;
	var uLocal_10588 = 0;
	var uLocal_10589 = 5;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 10;
	var uLocal_10601 = 3;
	var uLocal_10602 = 500;
	var uLocal_10603 = 10000;
	var uLocal_10604 = 0;
	var uLocal_10605 = 3;
	var uLocal_10606 = 500;
	var uLocal_10607 = 10000;
	var uLocal_10608 = 0;
	var uLocal_10609 = 3;
	var uLocal_10610 = 500;
	var uLocal_10611 = 10000;
	var uLocal_10612 = 0;
	var uLocal_10613 = 3;
	var uLocal_10614 = 500;
	var uLocal_10615 = 10000;
	var uLocal_10616 = 0;
	var uLocal_10617 = 3;
	var uLocal_10618 = 500;
	var uLocal_10619 = 10000;
	var uLocal_10620 = 0;
	var uLocal_10621 = 3;
	var uLocal_10622 = 500;
	var uLocal_10623 = 10000;
	var uLocal_10624 = 0;
	var uLocal_10625 = 3;
	var uLocal_10626 = 500;
	var uLocal_10627 = 10000;
	var uLocal_10628 = 0;
	var uLocal_10629 = 3;
	var uLocal_10630 = 500;
	var uLocal_10631 = 10000;
	var uLocal_10632 = 0;
	var uLocal_10633 = 3;
	var uLocal_10634 = 500;
	var uLocal_10635 = 10000;
	var uLocal_10636 = 0;
	var uLocal_10637 = 3;
	var uLocal_10638 = 500;
	var uLocal_10639 = 10000;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 3;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = -1;
	var uLocal_10653 = 0;
	var uLocal_10654 = 5;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 10;
	var uLocal_10666 = 3;
	var uLocal_10667 = 500;
	var uLocal_10668 = 10000;
	var uLocal_10669 = 0;
	var uLocal_10670 = 3;
	var uLocal_10671 = 500;
	var uLocal_10672 = 10000;
	var uLocal_10673 = 0;
	var uLocal_10674 = 3;
	var uLocal_10675 = 500;
	var uLocal_10676 = 10000;
	var uLocal_10677 = 0;
	var uLocal_10678 = 3;
	var uLocal_10679 = 500;
	var uLocal_10680 = 10000;
	var uLocal_10681 = 0;
	var uLocal_10682 = 3;
	var uLocal_10683 = 500;
	var uLocal_10684 = 10000;
	var uLocal_10685 = 0;
	var uLocal_10686 = 3;
	var uLocal_10687 = 500;
	var uLocal_10688 = 10000;
	var uLocal_10689 = 0;
	var uLocal_10690 = 3;
	var uLocal_10691 = 500;
	var uLocal_10692 = 10000;
	var uLocal_10693 = 0;
	var uLocal_10694 = 3;
	var uLocal_10695 = 500;
	var uLocal_10696 = 10000;
	var uLocal_10697 = 0;
	var uLocal_10698 = 3;
	var uLocal_10699 = 500;
	var uLocal_10700 = 10000;
	var uLocal_10701 = 0;
	var uLocal_10702 = 3;
	var uLocal_10703 = 500;
	var uLocal_10704 = 10000;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 3;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = -1;
	var uLocal_10718 = 0;
	var uLocal_10719 = 5;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 10;
	var uLocal_10731 = 3;
	var uLocal_10732 = 500;
	var uLocal_10733 = 10000;
	var uLocal_10734 = 0;
	var uLocal_10735 = 3;
	var uLocal_10736 = 500;
	var uLocal_10737 = 10000;
	var uLocal_10738 = 0;
	var uLocal_10739 = 3;
	var uLocal_10740 = 500;
	var uLocal_10741 = 10000;
	var uLocal_10742 = 0;
	var uLocal_10743 = 3;
	var uLocal_10744 = 500;
	var uLocal_10745 = 10000;
	var uLocal_10746 = 0;
	var uLocal_10747 = 3;
	var uLocal_10748 = 500;
	var uLocal_10749 = 10000;
	var uLocal_10750 = 0;
	var uLocal_10751 = 3;
	var uLocal_10752 = 500;
	var uLocal_10753 = 10000;
	var uLocal_10754 = 0;
	var uLocal_10755 = 3;
	var uLocal_10756 = 500;
	var uLocal_10757 = 10000;
	var uLocal_10758 = 0;
	var uLocal_10759 = 3;
	var uLocal_10760 = 500;
	var uLocal_10761 = 10000;
	var uLocal_10762 = 0;
	var uLocal_10763 = 3;
	var uLocal_10764 = 500;
	var uLocal_10765 = 10000;
	var uLocal_10766 = 0;
	var uLocal_10767 = 3;
	var uLocal_10768 = 500;
	var uLocal_10769 = 10000;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 3;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = -1;
	var uLocal_10783 = 0;
	var uLocal_10784 = 5;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 10;
	var uLocal_10796 = 3;
	var uLocal_10797 = 500;
	var uLocal_10798 = 10000;
	var uLocal_10799 = 0;
	var uLocal_10800 = 3;
	var uLocal_10801 = 500;
	var uLocal_10802 = 10000;
	var uLocal_10803 = 0;
	var uLocal_10804 = 3;
	var uLocal_10805 = 500;
	var uLocal_10806 = 10000;
	var uLocal_10807 = 0;
	var uLocal_10808 = 3;
	var uLocal_10809 = 500;
	var uLocal_10810 = 10000;
	var uLocal_10811 = 0;
	var uLocal_10812 = 3;
	var uLocal_10813 = 500;
	var uLocal_10814 = 10000;
	var uLocal_10815 = 0;
	var uLocal_10816 = 3;
	var uLocal_10817 = 500;
	var uLocal_10818 = 10000;
	var uLocal_10819 = 0;
	var uLocal_10820 = 3;
	var uLocal_10821 = 500;
	var uLocal_10822 = 10000;
	var uLocal_10823 = 0;
	var uLocal_10824 = 3;
	var uLocal_10825 = 500;
	var uLocal_10826 = 10000;
	var uLocal_10827 = 0;
	var uLocal_10828 = 3;
	var uLocal_10829 = 500;
	var uLocal_10830 = 10000;
	var uLocal_10831 = 0;
	var uLocal_10832 = 3;
	var uLocal_10833 = 500;
	var uLocal_10834 = 10000;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 3;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = -1;
	var uLocal_10848 = 0;
	var uLocal_10849 = 5;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 10;
	var uLocal_10861 = 3;
	var uLocal_10862 = 500;
	var uLocal_10863 = 10000;
	var uLocal_10864 = 0;
	var uLocal_10865 = 3;
	var uLocal_10866 = 500;
	var uLocal_10867 = 10000;
	var uLocal_10868 = 0;
	var uLocal_10869 = 3;
	var uLocal_10870 = 500;
	var uLocal_10871 = 10000;
	var uLocal_10872 = 0;
	var uLocal_10873 = 3;
	var uLocal_10874 = 500;
	var uLocal_10875 = 10000;
	var uLocal_10876 = 0;
	var uLocal_10877 = 3;
	var uLocal_10878 = 500;
	var uLocal_10879 = 10000;
	var uLocal_10880 = 0;
	var uLocal_10881 = 3;
	var uLocal_10882 = 500;
	var uLocal_10883 = 10000;
	var uLocal_10884 = 0;
	var uLocal_10885 = 3;
	var uLocal_10886 = 500;
	var uLocal_10887 = 10000;
	var uLocal_10888 = 0;
	var uLocal_10889 = 3;
	var uLocal_10890 = 500;
	var uLocal_10891 = 10000;
	var uLocal_10892 = 0;
	var uLocal_10893 = 3;
	var uLocal_10894 = 500;
	var uLocal_10895 = 10000;
	var uLocal_10896 = 0;
	var uLocal_10897 = 3;
	var uLocal_10898 = 500;
	var uLocal_10899 = 10000;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 3;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = -1;
	var uLocal_10913 = 0;
	var uLocal_10914 = 5;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 10;
	var uLocal_10926 = 3;
	var uLocal_10927 = 500;
	var uLocal_10928 = 10000;
	var uLocal_10929 = 0;
	var uLocal_10930 = 3;
	var uLocal_10931 = 500;
	var uLocal_10932 = 10000;
	var uLocal_10933 = 0;
	var uLocal_10934 = 3;
	var uLocal_10935 = 500;
	var uLocal_10936 = 10000;
	var uLocal_10937 = 0;
	var uLocal_10938 = 3;
	var uLocal_10939 = 500;
	var uLocal_10940 = 10000;
	var uLocal_10941 = 0;
	var uLocal_10942 = 3;
	var uLocal_10943 = 500;
	var uLocal_10944 = 10000;
	var uLocal_10945 = 0;
	var uLocal_10946 = 3;
	var uLocal_10947 = 500;
	var uLocal_10948 = 10000;
	var uLocal_10949 = 0;
	var uLocal_10950 = 3;
	var uLocal_10951 = 500;
	var uLocal_10952 = 10000;
	var uLocal_10953 = 0;
	var uLocal_10954 = 3;
	var uLocal_10955 = 500;
	var uLocal_10956 = 10000;
	var uLocal_10957 = 0;
	var uLocal_10958 = 3;
	var uLocal_10959 = 500;
	var uLocal_10960 = 10000;
	var uLocal_10961 = 0;
	var uLocal_10962 = 3;
	var uLocal_10963 = 500;
	var uLocal_10964 = 10000;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 3;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = -1;
	var uLocal_10978 = 0;
	var uLocal_10979 = 5;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 0;
	var uLocal_10989 = 0;
	var uLocal_10990 = 10;
	var uLocal_10991 = 3;
	var uLocal_10992 = 500;
	var uLocal_10993 = 10000;
	var uLocal_10994 = 0;
	var uLocal_10995 = 3;
	var uLocal_10996 = 500;
	var uLocal_10997 = 10000;
	var uLocal_10998 = 0;
	var uLocal_10999 = 3;
	var uLocal_11000 = 500;
	var uLocal_11001 = 10000;
	var uLocal_11002 = 0;
	var uLocal_11003 = 3;
	var uLocal_11004 = 500;
	var uLocal_11005 = 10000;
	var uLocal_11006 = 0;
	var uLocal_11007 = 3;
	var uLocal_11008 = 500;
	var uLocal_11009 = 10000;
	var uLocal_11010 = 0;
	var uLocal_11011 = 3;
	var uLocal_11012 = 500;
	var uLocal_11013 = 10000;
	var uLocal_11014 = 0;
	var uLocal_11015 = 3;
	var uLocal_11016 = 500;
	var uLocal_11017 = 10000;
	var uLocal_11018 = 0;
	var uLocal_11019 = 3;
	var uLocal_11020 = 500;
	var uLocal_11021 = 10000;
	var uLocal_11022 = 0;
	var uLocal_11023 = 3;
	var uLocal_11024 = 500;
	var uLocal_11025 = 10000;
	var uLocal_11026 = 0;
	var uLocal_11027 = 3;
	var uLocal_11028 = 500;
	var uLocal_11029 = 10000;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 3;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = -1;
	var uLocal_11043 = 0;
	var uLocal_11044 = 5;
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
	var uLocal_11055 = 10;
	var uLocal_11056 = 3;
	var uLocal_11057 = 500;
	var uLocal_11058 = 10000;
	var uLocal_11059 = 0;
	var uLocal_11060 = 3;
	var uLocal_11061 = 500;
	var uLocal_11062 = 10000;
	var uLocal_11063 = 0;
	var uLocal_11064 = 3;
	var uLocal_11065 = 500;
	var uLocal_11066 = 10000;
	var uLocal_11067 = 0;
	var uLocal_11068 = 3;
	var uLocal_11069 = 500;
	var uLocal_11070 = 10000;
	var uLocal_11071 = 0;
	var uLocal_11072 = 3;
	var uLocal_11073 = 500;
	var uLocal_11074 = 10000;
	var uLocal_11075 = 0;
	var uLocal_11076 = 3;
	var uLocal_11077 = 500;
	var uLocal_11078 = 10000;
	var uLocal_11079 = 0;
	var uLocal_11080 = 3;
	var uLocal_11081 = 500;
	var uLocal_11082 = 10000;
	var uLocal_11083 = 0;
	var uLocal_11084 = 3;
	var uLocal_11085 = 500;
	var uLocal_11086 = 10000;
	var uLocal_11087 = 0;
	var uLocal_11088 = 3;
	var uLocal_11089 = 500;
	var uLocal_11090 = 10000;
	var uLocal_11091 = 0;
	var uLocal_11092 = 3;
	var uLocal_11093 = 500;
	var uLocal_11094 = 10000;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 3;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = -1;
	var uLocal_11108 = 0;
	var uLocal_11109 = 5;
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
	var uLocal_11120 = 10;
	var uLocal_11121 = 3;
	var uLocal_11122 = 500;
	var uLocal_11123 = 10000;
	var uLocal_11124 = 0;
	var uLocal_11125 = 3;
	var uLocal_11126 = 500;
	var uLocal_11127 = 10000;
	var uLocal_11128 = 0;
	var uLocal_11129 = 3;
	var uLocal_11130 = 500;
	var uLocal_11131 = 10000;
	var uLocal_11132 = 0;
	var uLocal_11133 = 3;
	var uLocal_11134 = 500;
	var uLocal_11135 = 10000;
	var uLocal_11136 = 0;
	var uLocal_11137 = 3;
	var uLocal_11138 = 500;
	var uLocal_11139 = 10000;
	var uLocal_11140 = 0;
	var uLocal_11141 = 3;
	var uLocal_11142 = 500;
	var uLocal_11143 = 10000;
	var uLocal_11144 = 0;
	var uLocal_11145 = 3;
	var uLocal_11146 = 500;
	var uLocal_11147 = 10000;
	var uLocal_11148 = 0;
	var uLocal_11149 = 3;
	var uLocal_11150 = 500;
	var uLocal_11151 = 10000;
	var uLocal_11152 = 0;
	var uLocal_11153 = 3;
	var uLocal_11154 = 500;
	var uLocal_11155 = 10000;
	var uLocal_11156 = 0;
	var uLocal_11157 = 3;
	var uLocal_11158 = 500;
	var uLocal_11159 = 10000;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 3;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = -1;
	var uLocal_11173 = 0;
	var uLocal_11174 = 5;
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
	var uLocal_11185 = 10;
	var uLocal_11186 = 3;
	var uLocal_11187 = 500;
	var uLocal_11188 = 10000;
	var uLocal_11189 = 0;
	var uLocal_11190 = 3;
	var uLocal_11191 = 500;
	var uLocal_11192 = 10000;
	var uLocal_11193 = 0;
	var uLocal_11194 = 3;
	var uLocal_11195 = 500;
	var uLocal_11196 = 10000;
	var uLocal_11197 = 0;
	var uLocal_11198 = 3;
	var uLocal_11199 = 500;
	var uLocal_11200 = 10000;
	var uLocal_11201 = 0;
	var uLocal_11202 = 3;
	var uLocal_11203 = 500;
	var uLocal_11204 = 10000;
	var uLocal_11205 = 0;
	var uLocal_11206 = 3;
	var uLocal_11207 = 500;
	var uLocal_11208 = 10000;
	var uLocal_11209 = 0;
	var uLocal_11210 = 3;
	var uLocal_11211 = 500;
	var uLocal_11212 = 10000;
	var uLocal_11213 = 0;
	var uLocal_11214 = 3;
	var uLocal_11215 = 500;
	var uLocal_11216 = 10000;
	var uLocal_11217 = 0;
	var uLocal_11218 = 3;
	var uLocal_11219 = 500;
	var uLocal_11220 = 10000;
	var uLocal_11221 = 0;
	var uLocal_11222 = 3;
	var uLocal_11223 = 500;
	var uLocal_11224 = 10000;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 3;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = -1;
	var uLocal_11238 = 0;
	var uLocal_11239 = 5;
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
	var uLocal_11250 = 10;
	var uLocal_11251 = 3;
	var uLocal_11252 = 500;
	var uLocal_11253 = 10000;
	var uLocal_11254 = 0;
	var uLocal_11255 = 3;
	var uLocal_11256 = 500;
	var uLocal_11257 = 10000;
	var uLocal_11258 = 0;
	var uLocal_11259 = 3;
	var uLocal_11260 = 500;
	var uLocal_11261 = 10000;
	var uLocal_11262 = 0;
	var uLocal_11263 = 3;
	var uLocal_11264 = 500;
	var uLocal_11265 = 10000;
	var uLocal_11266 = 0;
	var uLocal_11267 = 3;
	var uLocal_11268 = 500;
	var uLocal_11269 = 10000;
	var uLocal_11270 = 0;
	var uLocal_11271 = 3;
	var uLocal_11272 = 500;
	var uLocal_11273 = 10000;
	var uLocal_11274 = 0;
	var uLocal_11275 = 3;
	var uLocal_11276 = 500;
	var uLocal_11277 = 10000;
	var uLocal_11278 = 0;
	var uLocal_11279 = 3;
	var uLocal_11280 = 500;
	var uLocal_11281 = 10000;
	var uLocal_11282 = 0;
	var uLocal_11283 = 3;
	var uLocal_11284 = 500;
	var uLocal_11285 = 10000;
	var uLocal_11286 = 0;
	var uLocal_11287 = 3;
	var uLocal_11288 = 500;
	var uLocal_11289 = 10000;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 3;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = -1;
	var uLocal_11303 = 0;
	var uLocal_11304 = 5;
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
	var uLocal_11315 = 10;
	var uLocal_11316 = 3;
	var uLocal_11317 = 500;
	var uLocal_11318 = 10000;
	var uLocal_11319 = 0;
	var uLocal_11320 = 3;
	var uLocal_11321 = 500;
	var uLocal_11322 = 10000;
	var uLocal_11323 = 0;
	var uLocal_11324 = 3;
	var uLocal_11325 = 500;
	var uLocal_11326 = 10000;
	var uLocal_11327 = 0;
	var uLocal_11328 = 3;
	var uLocal_11329 = 500;
	var uLocal_11330 = 10000;
	var uLocal_11331 = 0;
	var uLocal_11332 = 3;
	var uLocal_11333 = 500;
	var uLocal_11334 = 10000;
	var uLocal_11335 = 0;
	var uLocal_11336 = 3;
	var uLocal_11337 = 500;
	var uLocal_11338 = 10000;
	var uLocal_11339 = 0;
	var uLocal_11340 = 3;
	var uLocal_11341 = 500;
	var uLocal_11342 = 10000;
	var uLocal_11343 = 0;
	var uLocal_11344 = 3;
	var uLocal_11345 = 500;
	var uLocal_11346 = 10000;
	var uLocal_11347 = 0;
	var uLocal_11348 = 3;
	var uLocal_11349 = 500;
	var uLocal_11350 = 10000;
	var uLocal_11351 = 0;
	var uLocal_11352 = 3;
	var uLocal_11353 = 500;
	var uLocal_11354 = 10000;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 3;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = -1;
	var uLocal_11368 = 0;
	var uLocal_11369 = 5;
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
	var uLocal_11380 = 10;
	var uLocal_11381 = 3;
	var uLocal_11382 = 500;
	var uLocal_11383 = 10000;
	var uLocal_11384 = 0;
	var uLocal_11385 = 3;
	var uLocal_11386 = 500;
	var uLocal_11387 = 10000;
	var uLocal_11388 = 0;
	var uLocal_11389 = 3;
	var uLocal_11390 = 500;
	var uLocal_11391 = 10000;
	var uLocal_11392 = 0;
	var uLocal_11393 = 3;
	var uLocal_11394 = 500;
	var uLocal_11395 = 10000;
	var uLocal_11396 = 0;
	var uLocal_11397 = 3;
	var uLocal_11398 = 500;
	var uLocal_11399 = 10000;
	var uLocal_11400 = 0;
	var uLocal_11401 = 3;
	var uLocal_11402 = 500;
	var uLocal_11403 = 10000;
	var uLocal_11404 = 0;
	var uLocal_11405 = 3;
	var uLocal_11406 = 500;
	var uLocal_11407 = 10000;
	var uLocal_11408 = 0;
	var uLocal_11409 = 3;
	var uLocal_11410 = 500;
	var uLocal_11411 = 10000;
	var uLocal_11412 = 0;
	var uLocal_11413 = 3;
	var uLocal_11414 = 500;
	var uLocal_11415 = 10000;
	var uLocal_11416 = 0;
	var uLocal_11417 = 3;
	var uLocal_11418 = 500;
	var uLocal_11419 = 10000;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 3;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = -1;
	var uLocal_11433 = 0;
	var uLocal_11434 = 5;
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
	var uLocal_11445 = 10;
	var uLocal_11446 = 3;
	var uLocal_11447 = 500;
	var uLocal_11448 = 10000;
	var uLocal_11449 = 0;
	var uLocal_11450 = 3;
	var uLocal_11451 = 500;
	var uLocal_11452 = 10000;
	var uLocal_11453 = 0;
	var uLocal_11454 = 3;
	var uLocal_11455 = 500;
	var uLocal_11456 = 10000;
	var uLocal_11457 = 0;
	var uLocal_11458 = 3;
	var uLocal_11459 = 500;
	var uLocal_11460 = 10000;
	var uLocal_11461 = 0;
	var uLocal_11462 = 3;
	var uLocal_11463 = 500;
	var uLocal_11464 = 10000;
	var uLocal_11465 = 0;
	var uLocal_11466 = 3;
	var uLocal_11467 = 500;
	var uLocal_11468 = 10000;
	var uLocal_11469 = 0;
	var uLocal_11470 = 3;
	var uLocal_11471 = 500;
	var uLocal_11472 = 10000;
	var uLocal_11473 = 0;
	var uLocal_11474 = 3;
	var uLocal_11475 = 500;
	var uLocal_11476 = 10000;
	var uLocal_11477 = 0;
	var uLocal_11478 = 3;
	var uLocal_11479 = 500;
	var uLocal_11480 = 10000;
	var uLocal_11481 = 0;
	var uLocal_11482 = 3;
	var uLocal_11483 = 500;
	var uLocal_11484 = 10000;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 3;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = -1;
	var uLocal_11498 = 0;
	var uLocal_11499 = 5;
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
	var uLocal_11510 = 10;
	var uLocal_11511 = 3;
	var uLocal_11512 = 500;
	var uLocal_11513 = 10000;
	var uLocal_11514 = 0;
	var uLocal_11515 = 3;
	var uLocal_11516 = 500;
	var uLocal_11517 = 10000;
	var uLocal_11518 = 0;
	var uLocal_11519 = 3;
	var uLocal_11520 = 500;
	var uLocal_11521 = 10000;
	var uLocal_11522 = 0;
	var uLocal_11523 = 3;
	var uLocal_11524 = 500;
	var uLocal_11525 = 10000;
	var uLocal_11526 = 0;
	var uLocal_11527 = 3;
	var uLocal_11528 = 500;
	var uLocal_11529 = 10000;
	var uLocal_11530 = 0;
	var uLocal_11531 = 3;
	var uLocal_11532 = 500;
	var uLocal_11533 = 10000;
	var uLocal_11534 = 0;
	var uLocal_11535 = 3;
	var uLocal_11536 = 500;
	var uLocal_11537 = 10000;
	var uLocal_11538 = 0;
	var uLocal_11539 = 3;
	var uLocal_11540 = 500;
	var uLocal_11541 = 10000;
	var uLocal_11542 = 0;
	var uLocal_11543 = 3;
	var uLocal_11544 = 500;
	var uLocal_11545 = 10000;
	var uLocal_11546 = 0;
	var uLocal_11547 = 3;
	var uLocal_11548 = 500;
	var uLocal_11549 = 10000;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 3;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = -1;
	var uLocal_11563 = 0;
	var uLocal_11564 = 5;
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
	var uLocal_11575 = 10;
	var uLocal_11576 = 3;
	var uLocal_11577 = 500;
	var uLocal_11578 = 10000;
	var uLocal_11579 = 0;
	var uLocal_11580 = 3;
	var uLocal_11581 = 500;
	var uLocal_11582 = 10000;
	var uLocal_11583 = 0;
	var uLocal_11584 = 3;
	var uLocal_11585 = 500;
	var uLocal_11586 = 10000;
	var uLocal_11587 = 0;
	var uLocal_11588 = 3;
	var uLocal_11589 = 500;
	var uLocal_11590 = 10000;
	var uLocal_11591 = 0;
	var uLocal_11592 = 3;
	var uLocal_11593 = 500;
	var uLocal_11594 = 10000;
	var uLocal_11595 = 0;
	var uLocal_11596 = 3;
	var uLocal_11597 = 500;
	var uLocal_11598 = 10000;
	var uLocal_11599 = 0;
	var uLocal_11600 = 3;
	var uLocal_11601 = 500;
	var uLocal_11602 = 10000;
	var uLocal_11603 = 0;
	var uLocal_11604 = 3;
	var uLocal_11605 = 500;
	var uLocal_11606 = 10000;
	var uLocal_11607 = 0;
	var uLocal_11608 = 3;
	var uLocal_11609 = 500;
	var uLocal_11610 = 10000;
	var uLocal_11611 = 0;
	var uLocal_11612 = 3;
	var uLocal_11613 = 500;
	var uLocal_11614 = 10000;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 3;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = -1;
	var uLocal_11628 = 0;
	var uLocal_11629 = 5;
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
	var uLocal_11640 = 10;
	var uLocal_11641 = 3;
	var uLocal_11642 = 500;
	var uLocal_11643 = 10000;
	var uLocal_11644 = 0;
	var uLocal_11645 = 3;
	var uLocal_11646 = 500;
	var uLocal_11647 = 10000;
	var uLocal_11648 = 0;
	var uLocal_11649 = 3;
	var uLocal_11650 = 500;
	var uLocal_11651 = 10000;
	var uLocal_11652 = 0;
	var uLocal_11653 = 3;
	var uLocal_11654 = 500;
	var uLocal_11655 = 10000;
	var uLocal_11656 = 0;
	var uLocal_11657 = 3;
	var uLocal_11658 = 500;
	var uLocal_11659 = 10000;
	var uLocal_11660 = 0;
	var uLocal_11661 = 3;
	var uLocal_11662 = 500;
	var uLocal_11663 = 10000;
	var uLocal_11664 = 0;
	var uLocal_11665 = 3;
	var uLocal_11666 = 500;
	var uLocal_11667 = 10000;
	var uLocal_11668 = 0;
	var uLocal_11669 = 3;
	var uLocal_11670 = 500;
	var uLocal_11671 = 10000;
	var uLocal_11672 = 0;
	var uLocal_11673 = 3;
	var uLocal_11674 = 500;
	var uLocal_11675 = 10000;
	var uLocal_11676 = 0;
	var uLocal_11677 = 3;
	var uLocal_11678 = 500;
	var uLocal_11679 = 10000;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 3;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = -1;
	var uLocal_11693 = 0;
	var uLocal_11694 = 5;
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
	var uLocal_11705 = 10;
	var uLocal_11706 = 3;
	var uLocal_11707 = 500;
	var uLocal_11708 = 10000;
	var uLocal_11709 = 0;
	var uLocal_11710 = 3;
	var uLocal_11711 = 500;
	var uLocal_11712 = 10000;
	var uLocal_11713 = 0;
	var uLocal_11714 = 3;
	var uLocal_11715 = 500;
	var uLocal_11716 = 10000;
	var uLocal_11717 = 0;
	var uLocal_11718 = 3;
	var uLocal_11719 = 500;
	var uLocal_11720 = 10000;
	var uLocal_11721 = 0;
	var uLocal_11722 = 3;
	var uLocal_11723 = 500;
	var uLocal_11724 = 10000;
	var uLocal_11725 = 0;
	var uLocal_11726 = 3;
	var uLocal_11727 = 500;
	var uLocal_11728 = 10000;
	var uLocal_11729 = 0;
	var uLocal_11730 = 3;
	var uLocal_11731 = 500;
	var uLocal_11732 = 10000;
	var uLocal_11733 = 0;
	var uLocal_11734 = 3;
	var uLocal_11735 = 500;
	var uLocal_11736 = 10000;
	var uLocal_11737 = 0;
	var uLocal_11738 = 3;
	var uLocal_11739 = 500;
	var uLocal_11740 = 10000;
	var uLocal_11741 = 0;
	var uLocal_11742 = 3;
	var uLocal_11743 = 500;
	var uLocal_11744 = 10000;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 3;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = -1;
	var uLocal_11758 = 0;
	var uLocal_11759 = 5;
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
	var uLocal_11770 = 10;
	var uLocal_11771 = 3;
	var uLocal_11772 = 500;
	var uLocal_11773 = 10000;
	var uLocal_11774 = 0;
	var uLocal_11775 = 3;
	var uLocal_11776 = 500;
	var uLocal_11777 = 10000;
	var uLocal_11778 = 0;
	var uLocal_11779 = 3;
	var uLocal_11780 = 500;
	var uLocal_11781 = 10000;
	var uLocal_11782 = 0;
	var uLocal_11783 = 3;
	var uLocal_11784 = 500;
	var uLocal_11785 = 10000;
	var uLocal_11786 = 0;
	var uLocal_11787 = 3;
	var uLocal_11788 = 500;
	var uLocal_11789 = 10000;
	var uLocal_11790 = 0;
	var uLocal_11791 = 3;
	var uLocal_11792 = 500;
	var uLocal_11793 = 10000;
	var uLocal_11794 = 0;
	var uLocal_11795 = 3;
	var uLocal_11796 = 500;
	var uLocal_11797 = 10000;
	var uLocal_11798 = 0;
	var uLocal_11799 = 3;
	var uLocal_11800 = 500;
	var uLocal_11801 = 10000;
	var uLocal_11802 = 0;
	var uLocal_11803 = 3;
	var uLocal_11804 = 500;
	var uLocal_11805 = 10000;
	var uLocal_11806 = 0;
	var uLocal_11807 = 3;
	var uLocal_11808 = 500;
	var uLocal_11809 = 10000;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 3;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = -1;
	var uLocal_11823 = 0;
	var uLocal_11824 = 5;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 10;
	var uLocal_11836 = 3;
	var uLocal_11837 = 500;
	var uLocal_11838 = 10000;
	var uLocal_11839 = 0;
	var uLocal_11840 = 3;
	var uLocal_11841 = 500;
	var uLocal_11842 = 10000;
	var uLocal_11843 = 0;
	var uLocal_11844 = 3;
	var uLocal_11845 = 500;
	var uLocal_11846 = 10000;
	var uLocal_11847 = 0;
	var uLocal_11848 = 3;
	var uLocal_11849 = 500;
	var uLocal_11850 = 10000;
	var uLocal_11851 = 0;
	var uLocal_11852 = 3;
	var uLocal_11853 = 500;
	var uLocal_11854 = 10000;
	var uLocal_11855 = 0;
	var uLocal_11856 = 3;
	var uLocal_11857 = 500;
	var uLocal_11858 = 10000;
	var uLocal_11859 = 0;
	var uLocal_11860 = 3;
	var uLocal_11861 = 500;
	var uLocal_11862 = 10000;
	var uLocal_11863 = 0;
	var uLocal_11864 = 3;
	var uLocal_11865 = 500;
	var uLocal_11866 = 10000;
	var uLocal_11867 = 0;
	var uLocal_11868 = 3;
	var uLocal_11869 = 500;
	var uLocal_11870 = 10000;
	var uLocal_11871 = 0;
	var uLocal_11872 = 3;
	var uLocal_11873 = 500;
	var uLocal_11874 = 10000;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 1;
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
	var uLocal_11891 = 65;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
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
	var uLocal_12541 = 0;
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
	var uLocal_12672 = 1097859072;
	var uLocal_12673 = 1101004800;
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
	var uLocal_12700 = 4;
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
	var uLocal_12772 = 40;
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
	var uLocal_13182 = 0;
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
	var uLocal_13413 = 40;
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
	var uLocal_14054 = 60;
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
	var uLocal_14143 = 0;
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
	var uLocal_14384 = 0;
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
	var uLocal_14414 = 0;
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
	var uLocal_14426 = 0;
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
	var uLocal_14437 = 0;
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
	var uLocal_14450 = 0;
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
	var uLocal_14463 = 0;
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
	var uLocal_14476 = 0;
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
	var uLocal_14489 = 0;
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
	var uLocal_14502 = 0;
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
	var uLocal_14515 = 0;
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
	var uLocal_14528 = 0;
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
	var uLocal_14541 = 0;
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
	var uLocal_14554 = 0;
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
	var uLocal_14567 = 0;
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
	var uLocal_14580 = 0;
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
	var uLocal_14593 = 0;
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
	var uLocal_14606 = 0;
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
	var uLocal_14619 = 0;
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
	var uLocal_14632 = 0;
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
	var uLocal_14645 = 0;
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
	var uLocal_14658 = 0;
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
	var uLocal_14671 = 0;
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
	var uLocal_14684 = 0;
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
	var uLocal_14697 = 0;
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
	var uLocal_14710 = 0;
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
	var uLocal_14723 = 0;
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
	var uLocal_14736 = 0;
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
	var uLocal_14749 = 0;
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
	var uLocal_14762 = 0;
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
	var uLocal_14775 = 0;
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
	var uLocal_14788 = 0;
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
	var uLocal_14801 = 0;
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
	var uLocal_14814 = 0;
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
	var uLocal_14827 = 0;
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
	var uLocal_14840 = 0;
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
	var uLocal_14853 = 0;
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
	var uLocal_14866 = 0;
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
	var uLocal_14879 = 0;
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
	var uLocal_14892 = 0;
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
	var uLocal_14905 = 0;
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
	var uLocal_14918 = 0;
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
	var uLocal_14931 = 0;
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
	var uLocal_14944 = 0;
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
	var uLocal_14957 = 0;
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
	var uLocal_14970 = 0;
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
	var uLocal_14983 = 0;
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
	var uLocal_14996 = 0;
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
	var uLocal_15009 = 0;
	var uLocal_15010 = 0;
	var uLocal_15011 = 0;
	var uLocal_15012 = 0;
	var uLocal_15013 = 0;
	var uLocal_15014 = 0;
	var uLocal_15015 = 15;
	var uLocal_15016 = 0;
	var uLocal_15017 = 0;
	var uLocal_15018 = 0;
	var uLocal_15019 = 0;
	var uLocal_15020 = 0;
	var uLocal_15021 = 0;
	var uLocal_15022 = 0;
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
	var uLocal_15035 = 0;
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
	var uLocal_15048 = 0;
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
	var uLocal_15061 = 0;
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
	var uLocal_15074 = 0;
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
	var uLocal_15087 = 0;
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
	var uLocal_15100 = 0;
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
	var uLocal_15113 = 0;
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
	var uLocal_15126 = 0;
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
	var uLocal_15139 = 0;
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
	var uLocal_15152 = 0;
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
	var uLocal_15165 = 0;
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
	var uLocal_15178 = 0;
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
	var uLocal_15191 = 0;
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
	var uLocal_15204 = 0;
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
	var uLocal_15217 = 0;
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
	var uLocal_15230 = 0;
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
	var uLocal_15243 = 0;
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
	var uLocal_15256 = 10;
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
	var uLocal_15269 = 0;
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
	var uLocal_15286 = -1;
	var uLocal_15287 = 0;
	var uLocal_15288 = 0;
	var uLocal_15289 = 0;
	var uLocal_15290 = 0;
	var uLocal_15291 = 0;
	var uLocal_15292 = 0;
	var uLocal_15293 = 0;
	var uLocal_15294 = 0;
	var uLocal_15295 = 0;
	var uLocal_15296 = 0;
	var uLocal_15297 = 0;
	var uLocal_15298 = 65;
	var uLocal_15299 = 0;
	var uLocal_15300 = 0;
	var uLocal_15301 = 0;
	var uLocal_15302 = 0;
	var uLocal_15303 = 0;
	var uLocal_15304 = 0;
	var uLocal_15305 = 0;
	var uLocal_15306 = 0;
	var uLocal_15307 = 0;
	var uLocal_15308 = 0;
	var uLocal_15309 = -1569615261;
	var uLocal_15310 = 0;
	var uLocal_15311 = 0;
	var uLocal_15312 = 0;
	var uLocal_15313 = 0;
	var uLocal_15314 = 0;
	var uLocal_15315 = 0;
	var uLocal_15316 = 0;
	var uLocal_15317 = 0;
	var uLocal_15318 = 0;
	var uLocal_15319 = 0;
	var uLocal_15320 = 0;
	var uLocal_15321 = 0;
	var uLocal_15322 = -1569615261;
	var uLocal_15323 = 0;
	var uLocal_15324 = 0;
	var uLocal_15325 = 0;
	var uLocal_15326 = 0;
	var uLocal_15327 = 0;
	var uLocal_15328 = 0;
	var uLocal_15329 = 0;
	var uLocal_15330 = 0;
	var uLocal_15331 = 0;
	var uLocal_15332 = 0;
	var uLocal_15333 = 0;
	var uLocal_15334 = 0;
	var uLocal_15335 = -1569615261;
	var uLocal_15336 = 0;
	var uLocal_15337 = 0;
	var uLocal_15338 = 0;
	var uLocal_15339 = 0;
	var uLocal_15340 = 0;
	var uLocal_15341 = 0;
	var uLocal_15342 = 0;
	var uLocal_15343 = 0;
	var uLocal_15344 = 0;
	var uLocal_15345 = 0;
	var uLocal_15346 = 0;
	var uLocal_15347 = 0;
	var uLocal_15348 = -1569615261;
	var uLocal_15349 = 0;
	var uLocal_15350 = 0;
	var uLocal_15351 = 0;
	var uLocal_15352 = 0;
	var uLocal_15353 = 0;
	var uLocal_15354 = 0;
	var uLocal_15355 = 0;
	var uLocal_15356 = 0;
	var uLocal_15357 = 0;
	var uLocal_15358 = 0;
	var uLocal_15359 = 0;
	var uLocal_15360 = 0;
	var uLocal_15361 = -1569615261;
	var uLocal_15362 = 0;
	var uLocal_15363 = 0;
	var uLocal_15364 = 0;
	var uLocal_15365 = 0;
	var uLocal_15366 = 0;
	var uLocal_15367 = 0;
	var uLocal_15368 = 0;
	var uLocal_15369 = 0;
	var uLocal_15370 = 0;
	var uLocal_15371 = 0;
	var uLocal_15372 = 0;
	var uLocal_15373 = 0;
	var uLocal_15374 = -1569615261;
	var uLocal_15375 = 0;
	var uLocal_15376 = 0;
	var uLocal_15377 = 0;
	var uLocal_15378 = 0;
	var uLocal_15379 = 0;
	var uLocal_15380 = 0;
	var uLocal_15381 = 0;
	var uLocal_15382 = 0;
	var uLocal_15383 = 0;
	var uLocal_15384 = 0;
	var uLocal_15385 = 0;
	var uLocal_15386 = 0;
	var uLocal_15387 = -1569615261;
	var uLocal_15388 = 0;
	var uLocal_15389 = 0;
	var uLocal_15390 = 0;
	var uLocal_15391 = 0;
	var uLocal_15392 = 0;
	var uLocal_15393 = 0;
	var uLocal_15394 = 0;
	var uLocal_15395 = 0;
	var uLocal_15396 = 0;
	var uLocal_15397 = 0;
	var uLocal_15398 = 0;
	var uLocal_15399 = 0;
	var uLocal_15400 = -1569615261;
	var uLocal_15401 = 0;
	var uLocal_15402 = 0;
	var uLocal_15403 = 0;
	var uLocal_15404 = 0;
	var uLocal_15405 = 0;
	var uLocal_15406 = 0;
	var uLocal_15407 = 0;
	var uLocal_15408 = 0;
	var uLocal_15409 = 0;
	var uLocal_15410 = 0;
	var uLocal_15411 = 0;
	var uLocal_15412 = 0;
	var uLocal_15413 = -1569615261;
	var uLocal_15414 = 0;
	var uLocal_15415 = 0;
	var uLocal_15416 = 0;
	var uLocal_15417 = 0;
	var uLocal_15418 = 0;
	var uLocal_15419 = 0;
	var uLocal_15420 = 0;
	var uLocal_15421 = 0;
	var uLocal_15422 = 0;
	var uLocal_15423 = 0;
	var uLocal_15424 = 0;
	var uLocal_15425 = 0;
	var uLocal_15426 = -1569615261;
	var uLocal_15427 = 0;
	var uLocal_15428 = 0;
	var uLocal_15429 = 0;
	var uLocal_15430 = 0;
	var uLocal_15431 = 0;
	var uLocal_15432 = 0;
	var uLocal_15433 = 0;
	var uLocal_15434 = 0;
	var uLocal_15435 = 0;
	var uLocal_15436 = 0;
	var uLocal_15437 = 0;
	var uLocal_15438 = 0;
	var uLocal_15439 = -1569615261;
	var uLocal_15440 = 0;
	var uLocal_15441 = 0;
	var uLocal_15442 = 0;
	var uLocal_15443 = 0;
	var uLocal_15444 = 0;
	var uLocal_15445 = 0;
	var uLocal_15446 = 0;
	var uLocal_15447 = 0;
	var uLocal_15448 = 0;
	var uLocal_15449 = 0;
	var uLocal_15450 = 0;
	var uLocal_15451 = 0;
	var uLocal_15452 = -1569615261;
	var uLocal_15453 = 0;
	var uLocal_15454 = 0;
	var uLocal_15455 = 0;
	var uLocal_15456 = 0;
	var uLocal_15457 = 0;
	var uLocal_15458 = 0;
	var uLocal_15459 = 0;
	var uLocal_15460 = 0;
	var uLocal_15461 = 0;
	var uLocal_15462 = 0;
	var uLocal_15463 = 0;
	var uLocal_15464 = 0;
	var uLocal_15465 = -1569615261;
	var uLocal_15466 = 0;
	var uLocal_15467 = 0;
	var uLocal_15468 = 0;
	var uLocal_15469 = 0;
	var uLocal_15470 = 0;
	var uLocal_15471 = 0;
	var uLocal_15472 = 0;
	var uLocal_15473 = 0;
	var uLocal_15474 = 0;
	var uLocal_15475 = 0;
	var uLocal_15476 = 0;
	var uLocal_15477 = 0;
	var uLocal_15478 = -1569615261;
	var uLocal_15479 = 0;
	var uLocal_15480 = 0;
	var uLocal_15481 = 0;
	var uLocal_15482 = 0;
	var uLocal_15483 = 0;
	var uLocal_15484 = 0;
	var uLocal_15485 = 0;
	var uLocal_15486 = 0;
	var uLocal_15487 = 0;
	var uLocal_15488 = 0;
	var uLocal_15489 = 0;
	var uLocal_15490 = 0;
	var uLocal_15491 = -1569615261;
	var uLocal_15492 = 0;
	var uLocal_15493 = 0;
	var uLocal_15494 = 0;
	var uLocal_15495 = 0;
	var uLocal_15496 = 0;
	var uLocal_15497 = 0;
	var uLocal_15498 = 0;
	var uLocal_15499 = 0;
	var uLocal_15500 = 0;
	var uLocal_15501 = 0;
	var uLocal_15502 = 0;
	var uLocal_15503 = 0;
	var uLocal_15504 = -1569615261;
	var uLocal_15505 = 0;
	var uLocal_15506 = 0;
	var uLocal_15507 = 0;
	var uLocal_15508 = 0;
	var uLocal_15509 = 0;
	var uLocal_15510 = 0;
	var uLocal_15511 = 0;
	var uLocal_15512 = 0;
	var uLocal_15513 = 0;
	var uLocal_15514 = 0;
	var uLocal_15515 = 0;
	var uLocal_15516 = 0;
	var uLocal_15517 = -1569615261;
	var uLocal_15518 = 0;
	var uLocal_15519 = 0;
	var uLocal_15520 = 0;
	var uLocal_15521 = 0;
	var uLocal_15522 = 0;
	var uLocal_15523 = 0;
	var uLocal_15524 = 0;
	var uLocal_15525 = 0;
	var uLocal_15526 = 0;
	var uLocal_15527 = 0;
	var uLocal_15528 = 0;
	var uLocal_15529 = 0;
	var uLocal_15530 = -1569615261;
	var uLocal_15531 = 0;
	var uLocal_15532 = 0;
	var uLocal_15533 = 0;
	var uLocal_15534 = 0;
	var uLocal_15535 = 0;
	var uLocal_15536 = 0;
	var uLocal_15537 = 0;
	var uLocal_15538 = 0;
	var uLocal_15539 = 0;
	var uLocal_15540 = 0;
	var uLocal_15541 = 0;
	var uLocal_15542 = 0;
	var uLocal_15543 = -1569615261;
	var uLocal_15544 = 0;
	var uLocal_15545 = 0;
	var uLocal_15546 = 0;
	var uLocal_15547 = 0;
	var uLocal_15548 = 0;
	var uLocal_15549 = 0;
	var uLocal_15550 = 0;
	var uLocal_15551 = 0;
	var uLocal_15552 = 0;
	var uLocal_15553 = 0;
	var uLocal_15554 = 0;
	var uLocal_15555 = 0;
	var uLocal_15556 = -1569615261;
	var uLocal_15557 = 0;
	var uLocal_15558 = 0;
	var uLocal_15559 = 0;
	var uLocal_15560 = 0;
	var uLocal_15561 = 0;
	var uLocal_15562 = 0;
	var uLocal_15563 = 0;
	var uLocal_15564 = 0;
	var uLocal_15565 = 0;
	var uLocal_15566 = 0;
	var uLocal_15567 = 0;
	var uLocal_15568 = 0;
	var uLocal_15569 = -1569615261;
	var uLocal_15570 = 0;
	var uLocal_15571 = 0;
	var uLocal_15572 = 0;
	var uLocal_15573 = 0;
	var uLocal_15574 = 0;
	var uLocal_15575 = 0;
	var uLocal_15576 = 0;
	var uLocal_15577 = 0;
	var uLocal_15578 = 0;
	var uLocal_15579 = 0;
	var uLocal_15580 = 0;
	var uLocal_15581 = 0;
	var uLocal_15582 = -1569615261;
	var uLocal_15583 = 0;
	var uLocal_15584 = 0;
	var uLocal_15585 = 0;
	var uLocal_15586 = 0;
	var uLocal_15587 = 0;
	var uLocal_15588 = 0;
	var uLocal_15589 = 0;
	var uLocal_15590 = 0;
	var uLocal_15591 = 0;
	var uLocal_15592 = 0;
	var uLocal_15593 = 0;
	var uLocal_15594 = 0;
	var uLocal_15595 = -1569615261;
	var uLocal_15596 = 0;
	var uLocal_15597 = 0;
	var uLocal_15598 = 0;
	var uLocal_15599 = 0;
	var uLocal_15600 = 0;
	var uLocal_15601 = 0;
	var uLocal_15602 = 0;
	var uLocal_15603 = 0;
	var uLocal_15604 = 0;
	var uLocal_15605 = 0;
	var uLocal_15606 = 0;
	var uLocal_15607 = 0;
	var uLocal_15608 = -1569615261;
	var uLocal_15609 = 0;
	var uLocal_15610 = 0;
	var uLocal_15611 = 0;
	var uLocal_15612 = 0;
	var uLocal_15613 = 0;
	var uLocal_15614 = 0;
	var uLocal_15615 = 0;
	var uLocal_15616 = 0;
	var uLocal_15617 = 0;
	var uLocal_15618 = 0;
	var uLocal_15619 = 0;
	var uLocal_15620 = 0;
	var uLocal_15621 = -1569615261;
	var uLocal_15622 = 0;
	var uLocal_15623 = 0;
	var uLocal_15624 = 0;
	var uLocal_15625 = 0;
	var uLocal_15626 = 0;
	var uLocal_15627 = 0;
	var uLocal_15628 = 0;
	var uLocal_15629 = 0;
	var uLocal_15630 = 0;
	var uLocal_15631 = 0;
	var uLocal_15632 = 0;
	var uLocal_15633 = 0;
	var uLocal_15634 = -1569615261;
	var uLocal_15635 = 0;
	var uLocal_15636 = 0;
	var uLocal_15637 = 0;
	var uLocal_15638 = 0;
	var uLocal_15639 = 0;
	var uLocal_15640 = 0;
	var uLocal_15641 = 0;
	var uLocal_15642 = 0;
	var uLocal_15643 = 0;
	var uLocal_15644 = 0;
	var uLocal_15645 = 0;
	var uLocal_15646 = 0;
	var uLocal_15647 = -1569615261;
	var uLocal_15648 = 0;
	var uLocal_15649 = 0;
	var uLocal_15650 = 0;
	var uLocal_15651 = 0;
	var uLocal_15652 = 0;
	var uLocal_15653 = 0;
	var uLocal_15654 = 0;
	var uLocal_15655 = 0;
	var uLocal_15656 = 0;
	var uLocal_15657 = 0;
	var uLocal_15658 = 0;
	var uLocal_15659 = 0;
	var uLocal_15660 = -1569615261;
	var uLocal_15661 = 0;
	var uLocal_15662 = 0;
	var uLocal_15663 = 0;
	var uLocal_15664 = 0;
	var uLocal_15665 = 0;
	var uLocal_15666 = 0;
	var uLocal_15667 = 0;
	var uLocal_15668 = 0;
	var uLocal_15669 = 0;
	var uLocal_15670 = 0;
	var uLocal_15671 = 0;
	var uLocal_15672 = 0;
	var uLocal_15673 = -1569615261;
	var uLocal_15674 = 0;
	var uLocal_15675 = 0;
	var uLocal_15676 = 0;
	var uLocal_15677 = 0;
	var uLocal_15678 = 0;
	var uLocal_15679 = 0;
	var uLocal_15680 = 0;
	var uLocal_15681 = 0;
	var uLocal_15682 = 0;
	var uLocal_15683 = 0;
	var uLocal_15684 = 0;
	var uLocal_15685 = 0;
	var uLocal_15686 = -1569615261;
	var uLocal_15687 = 0;
	var uLocal_15688 = 0;
	var uLocal_15689 = 0;
	var uLocal_15690 = 0;
	var uLocal_15691 = 0;
	var uLocal_15692 = 0;
	var uLocal_15693 = 0;
	var uLocal_15694 = 0;
	var uLocal_15695 = 0;
	var uLocal_15696 = 0;
	var uLocal_15697 = 0;
	var uLocal_15698 = 0;
	var uLocal_15699 = -1569615261;
	var uLocal_15700 = 0;
	var uLocal_15701 = 0;
	var uLocal_15702 = 0;
	var uLocal_15703 = 0;
	var uLocal_15704 = 0;
	var uLocal_15705 = 0;
	var uLocal_15706 = 0;
	var uLocal_15707 = 0;
	var uLocal_15708 = 0;
	var uLocal_15709 = 0;
	var uLocal_15710 = 0;
	var uLocal_15711 = 0;
	var uLocal_15712 = -1569615261;
	var uLocal_15713 = 0;
	var uLocal_15714 = 0;
	var uLocal_15715 = 0;
	var uLocal_15716 = 0;
	var uLocal_15717 = 0;
	var uLocal_15718 = 0;
	var uLocal_15719 = 0;
	var uLocal_15720 = 0;
	var uLocal_15721 = 0;
	var uLocal_15722 = 0;
	var uLocal_15723 = 0;
	var uLocal_15724 = 0;
	var uLocal_15725 = -1569615261;
	var uLocal_15726 = 0;
	var uLocal_15727 = 0;
	var uLocal_15728 = 0;
	var uLocal_15729 = 0;
	var uLocal_15730 = 0;
	var uLocal_15731 = 0;
	var uLocal_15732 = 0;
	var uLocal_15733 = 0;
	var uLocal_15734 = 0;
	var uLocal_15735 = 0;
	var uLocal_15736 = 0;
	var uLocal_15737 = 0;
	var uLocal_15738 = -1569615261;
	var uLocal_15739 = 0;
	var uLocal_15740 = 0;
	var uLocal_15741 = 0;
	var uLocal_15742 = 0;
	var uLocal_15743 = 0;
	var uLocal_15744 = 0;
	var uLocal_15745 = 0;
	var uLocal_15746 = 0;
	var uLocal_15747 = 0;
	var uLocal_15748 = 0;
	var uLocal_15749 = 0;
	var uLocal_15750 = 0;
	var uLocal_15751 = -1569615261;
	var uLocal_15752 = 0;
	var uLocal_15753 = 0;
	var uLocal_15754 = 0;
	var uLocal_15755 = 0;
	var uLocal_15756 = 0;
	var uLocal_15757 = 0;
	var uLocal_15758 = 0;
	var uLocal_15759 = 0;
	var uLocal_15760 = 0;
	var uLocal_15761 = 0;
	var uLocal_15762 = 0;
	var uLocal_15763 = 0;
	var uLocal_15764 = -1569615261;
	var uLocal_15765 = 0;
	var uLocal_15766 = 0;
	var uLocal_15767 = 0;
	var uLocal_15768 = 0;
	var uLocal_15769 = 0;
	var uLocal_15770 = 0;
	var uLocal_15771 = 0;
	var uLocal_15772 = 0;
	var uLocal_15773 = 0;
	var uLocal_15774 = 0;
	var uLocal_15775 = 0;
	var uLocal_15776 = 0;
	var uLocal_15777 = -1569615261;
	var uLocal_15778 = 0;
	var uLocal_15779 = 0;
	var uLocal_15780 = 0;
	var uLocal_15781 = 0;
	var uLocal_15782 = 0;
	var uLocal_15783 = 0;
	var uLocal_15784 = 0;
	var uLocal_15785 = 0;
	var uLocal_15786 = 0;
	var uLocal_15787 = 0;
	var uLocal_15788 = 0;
	var uLocal_15789 = 0;
	var uLocal_15790 = -1569615261;
	var uLocal_15791 = 0;
	var uLocal_15792 = 0;
	var uLocal_15793 = 0;
	var uLocal_15794 = 0;
	var uLocal_15795 = 0;
	var uLocal_15796 = 0;
	var uLocal_15797 = 0;
	var uLocal_15798 = 0;
	var uLocal_15799 = 0;
	var uLocal_15800 = 0;
	var uLocal_15801 = 0;
	var uLocal_15802 = 0;
	var uLocal_15803 = -1569615261;
	var uLocal_15804 = 0;
	var uLocal_15805 = 0;
	var uLocal_15806 = 0;
	var uLocal_15807 = 0;
	var uLocal_15808 = 0;
	var uLocal_15809 = 0;
	var uLocal_15810 = 0;
	var uLocal_15811 = 0;
	var uLocal_15812 = 0;
	var uLocal_15813 = 0;
	var uLocal_15814 = 0;
	var uLocal_15815 = 0;
	var uLocal_15816 = -1569615261;
	var uLocal_15817 = 0;
	var uLocal_15818 = 0;
	var uLocal_15819 = 0;
	var uLocal_15820 = 0;
	var uLocal_15821 = 0;
	var uLocal_15822 = 0;
	var uLocal_15823 = 0;
	var uLocal_15824 = 0;
	var uLocal_15825 = 0;
	var uLocal_15826 = 0;
	var uLocal_15827 = 0;
	var uLocal_15828 = 0;
	var uLocal_15829 = -1569615261;
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
	var uLocal_15842 = -1569615261;
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
	var uLocal_15855 = -1569615261;
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
	var uLocal_15868 = -1569615261;
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
	var uLocal_15881 = -1569615261;
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
	var uLocal_15894 = -1569615261;
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
	var uLocal_15907 = -1569615261;
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
	var uLocal_15920 = -1569615261;
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
	var uLocal_15933 = -1569615261;
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
	var uLocal_15946 = -1569615261;
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
	var uLocal_15959 = -1569615261;
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
	var uLocal_15972 = -1569615261;
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
	var uLocal_15985 = -1569615261;
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
	var uLocal_15998 = -1569615261;
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
	var uLocal_16011 = -1569615261;
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
	var uLocal_16024 = -1569615261;
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
	var uLocal_16037 = -1569615261;
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
	var uLocal_16050 = -1569615261;
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
	var uLocal_16063 = -1569615261;
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
	var uLocal_16076 = -1569615261;
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
	var uLocal_16089 = -1569615261;
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
	var uLocal_16102 = -1569615261;
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
	var uLocal_16115 = -1569615261;
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
	var uLocal_16128 = -1569615261;
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
	var uLocal_16141 = -1569615261;
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
	var uLocal_16158 = 0;
	var uLocal_16159 = 1;
	var uLocal_16160 = 30;
	var uLocal_16161 = -1;
	var uLocal_16162 = 0;
	var uLocal_16163 = 1;
	var uLocal_16164 = 0;
	var uLocal_16165 = 0;
	var uLocal_16166 = 0;
	var uLocal_16167 = 0;
	var uLocal_16168 = 0;
	var uLocal_16169 = 0;
	var uLocal_16170 = 0;
	var uLocal_16171 = 0;
	var uLocal_16172 = 0;
	var uLocal_16173 = 1065353216;
	var uLocal_16174 = 0;
	var uLocal_16175 = 0;
	var uLocal_16176 = 1065353216;
	var uLocal_16177 = 1;
	var uLocal_16178 = 0;
	var uLocal_16179 = -1;
	var uLocal_16180 = 0;
	var uLocal_16181 = 1;
	var uLocal_16182 = 0;
	var uLocal_16183 = 0;
	var uLocal_16184 = 0;
	var uLocal_16185 = 0;
	var uLocal_16186 = 0;
	var uLocal_16187 = 0;
	var uLocal_16188 = 0;
	var uLocal_16189 = 0;
	var uLocal_16190 = 0;
	var uLocal_16191 = 1065353216;
	var uLocal_16192 = 0;
	var uLocal_16193 = 0;
	var uLocal_16194 = 1065353216;
	var uLocal_16195 = 1;
	var uLocal_16196 = 0;
	var uLocal_16197 = -1;
	var uLocal_16198 = 0;
	var uLocal_16199 = 1;
	var uLocal_16200 = 0;
	var uLocal_16201 = 0;
	var uLocal_16202 = 0;
	var uLocal_16203 = 0;
	var uLocal_16204 = 0;
	var uLocal_16205 = 0;
	var uLocal_16206 = 0;
	var uLocal_16207 = 0;
	var uLocal_16208 = 0;
	var uLocal_16209 = 1065353216;
	var uLocal_16210 = 0;
	var uLocal_16211 = 0;
	var uLocal_16212 = 1065353216;
	var uLocal_16213 = 1;
	var uLocal_16214 = 0;
	var uLocal_16215 = -1;
	var uLocal_16216 = 0;
	var uLocal_16217 = 1;
	var uLocal_16218 = 0;
	var uLocal_16219 = 0;
	var uLocal_16220 = 0;
	var uLocal_16221 = 0;
	var uLocal_16222 = 0;
	var uLocal_16223 = 0;
	var uLocal_16224 = 0;
	var uLocal_16225 = 0;
	var uLocal_16226 = 0;
	var uLocal_16227 = 1065353216;
	var uLocal_16228 = 0;
	var uLocal_16229 = 0;
	var uLocal_16230 = 1065353216;
	var uLocal_16231 = 1;
	var uLocal_16232 = 0;
	var uLocal_16233 = -1;
	var uLocal_16234 = 0;
	var uLocal_16235 = 1;
	var uLocal_16236 = 0;
	var uLocal_16237 = 0;
	var uLocal_16238 = 0;
	var uLocal_16239 = 0;
	var uLocal_16240 = 0;
	var uLocal_16241 = 0;
	var uLocal_16242 = 0;
	var uLocal_16243 = 0;
	var uLocal_16244 = 0;
	var uLocal_16245 = 1065353216;
	var uLocal_16246 = 0;
	var uLocal_16247 = 0;
	var uLocal_16248 = 1065353216;
	var uLocal_16249 = 1;
	var uLocal_16250 = 0;
	var uLocal_16251 = -1;
	var uLocal_16252 = 0;
	var uLocal_16253 = 1;
	var uLocal_16254 = 0;
	var uLocal_16255 = 0;
	var uLocal_16256 = 0;
	var uLocal_16257 = 0;
	var uLocal_16258 = 0;
	var uLocal_16259 = 0;
	var uLocal_16260 = 0;
	var uLocal_16261 = 0;
	var uLocal_16262 = 0;
	var uLocal_16263 = 1065353216;
	var uLocal_16264 = 0;
	var uLocal_16265 = 0;
	var uLocal_16266 = 1065353216;
	var uLocal_16267 = 1;
	var uLocal_16268 = 0;
	var uLocal_16269 = -1;
	var uLocal_16270 = 0;
	var uLocal_16271 = 1;
	var uLocal_16272 = 0;
	var uLocal_16273 = 0;
	var uLocal_16274 = 0;
	var uLocal_16275 = 0;
	var uLocal_16276 = 0;
	var uLocal_16277 = 0;
	var uLocal_16278 = 0;
	var uLocal_16279 = 0;
	var uLocal_16280 = 0;
	var uLocal_16281 = 1065353216;
	var uLocal_16282 = 0;
	var uLocal_16283 = 0;
	var uLocal_16284 = 1065353216;
	var uLocal_16285 = 1;
	var uLocal_16286 = 0;
	var uLocal_16287 = -1;
	var uLocal_16288 = 0;
	var uLocal_16289 = 1;
	var uLocal_16290 = 0;
	var uLocal_16291 = 0;
	var uLocal_16292 = 0;
	var uLocal_16293 = 0;
	var uLocal_16294 = 0;
	var uLocal_16295 = 0;
	var uLocal_16296 = 0;
	var uLocal_16297 = 0;
	var uLocal_16298 = 0;
	var uLocal_16299 = 1065353216;
	var uLocal_16300 = 0;
	var uLocal_16301 = 0;
	var uLocal_16302 = 1065353216;
	var uLocal_16303 = 1;
	var uLocal_16304 = 0;
	var uLocal_16305 = -1;
	var uLocal_16306 = 0;
	var uLocal_16307 = 1;
	var uLocal_16308 = 0;
	var uLocal_16309 = 0;
	var uLocal_16310 = 0;
	var uLocal_16311 = 0;
	var uLocal_16312 = 0;
	var uLocal_16313 = 0;
	var uLocal_16314 = 0;
	var uLocal_16315 = 0;
	var uLocal_16316 = 0;
	var uLocal_16317 = 1065353216;
	var uLocal_16318 = 0;
	var uLocal_16319 = 0;
	var uLocal_16320 = 1065353216;
	var uLocal_16321 = 1;
	var uLocal_16322 = 0;
	var uLocal_16323 = -1;
	var uLocal_16324 = 0;
	var uLocal_16325 = 1;
	var uLocal_16326 = 0;
	var uLocal_16327 = 0;
	var uLocal_16328 = 0;
	var uLocal_16329 = 0;
	var uLocal_16330 = 0;
	var uLocal_16331 = 0;
	var uLocal_16332 = 0;
	var uLocal_16333 = 0;
	var uLocal_16334 = 0;
	var uLocal_16335 = 1065353216;
	var uLocal_16336 = 0;
	var uLocal_16337 = 0;
	var uLocal_16338 = 1065353216;
	var uLocal_16339 = 1;
	var uLocal_16340 = 0;
	var uLocal_16341 = -1;
	var uLocal_16342 = 0;
	var uLocal_16343 = 1;
	var uLocal_16344 = 0;
	var uLocal_16345 = 0;
	var uLocal_16346 = 0;
	var uLocal_16347 = 0;
	var uLocal_16348 = 0;
	var uLocal_16349 = 0;
	var uLocal_16350 = 0;
	var uLocal_16351 = 0;
	var uLocal_16352 = 0;
	var uLocal_16353 = 1065353216;
	var uLocal_16354 = 0;
	var uLocal_16355 = 0;
	var uLocal_16356 = 1065353216;
	var uLocal_16357 = 1;
	var uLocal_16358 = 0;
	var uLocal_16359 = -1;
	var uLocal_16360 = 0;
	var uLocal_16361 = 1;
	var uLocal_16362 = 0;
	var uLocal_16363 = 0;
	var uLocal_16364 = 0;
	var uLocal_16365 = 0;
	var uLocal_16366 = 0;
	var uLocal_16367 = 0;
	var uLocal_16368 = 0;
	var uLocal_16369 = 0;
	var uLocal_16370 = 0;
	var uLocal_16371 = 1065353216;
	var uLocal_16372 = 0;
	var uLocal_16373 = 0;
	var uLocal_16374 = 1065353216;
	var uLocal_16375 = 1;
	var uLocal_16376 = 0;
	var uLocal_16377 = -1;
	var uLocal_16378 = 0;
	var uLocal_16379 = 1;
	var uLocal_16380 = 0;
	var uLocal_16381 = 0;
	var uLocal_16382 = 0;
	var uLocal_16383 = 0;
	var uLocal_16384 = 0;
	var uLocal_16385 = 0;
	var uLocal_16386 = 0;
	var uLocal_16387 = 0;
	var uLocal_16388 = 0;
	var uLocal_16389 = 1065353216;
	var uLocal_16390 = 0;
	var uLocal_16391 = 0;
	var uLocal_16392 = 1065353216;
	var uLocal_16393 = 1;
	var uLocal_16394 = 0;
	var uLocal_16395 = -1;
	var uLocal_16396 = 0;
	var uLocal_16397 = 1;
	var uLocal_16398 = 0;
	var uLocal_16399 = 0;
	var uLocal_16400 = 0;
	var uLocal_16401 = 0;
	var uLocal_16402 = 0;
	var uLocal_16403 = 0;
	var uLocal_16404 = 0;
	var uLocal_16405 = 0;
	var uLocal_16406 = 0;
	var uLocal_16407 = 1065353216;
	var uLocal_16408 = 0;
	var uLocal_16409 = 0;
	var uLocal_16410 = 1065353216;
	var uLocal_16411 = 1;
	var uLocal_16412 = 0;
	var uLocal_16413 = -1;
	var uLocal_16414 = 0;
	var uLocal_16415 = 1;
	var uLocal_16416 = 0;
	var uLocal_16417 = 0;
	var uLocal_16418 = 0;
	var uLocal_16419 = 0;
	var uLocal_16420 = 0;
	var uLocal_16421 = 0;
	var uLocal_16422 = 0;
	var uLocal_16423 = 0;
	var uLocal_16424 = 0;
	var uLocal_16425 = 1065353216;
	var uLocal_16426 = 0;
	var uLocal_16427 = 0;
	var uLocal_16428 = 1065353216;
	var uLocal_16429 = 1;
	var uLocal_16430 = 0;
	var uLocal_16431 = -1;
	var uLocal_16432 = 0;
	var uLocal_16433 = 1;
	var uLocal_16434 = 0;
	var uLocal_16435 = 0;
	var uLocal_16436 = 0;
	var uLocal_16437 = 0;
	var uLocal_16438 = 0;
	var uLocal_16439 = 0;
	var uLocal_16440 = 0;
	var uLocal_16441 = 0;
	var uLocal_16442 = 0;
	var uLocal_16443 = 1065353216;
	var uLocal_16444 = 0;
	var uLocal_16445 = 0;
	var uLocal_16446 = 1065353216;
	var uLocal_16447 = 1;
	var uLocal_16448 = 0;
	var uLocal_16449 = -1;
	var uLocal_16450 = 0;
	var uLocal_16451 = 1;
	var uLocal_16452 = 0;
	var uLocal_16453 = 0;
	var uLocal_16454 = 0;
	var uLocal_16455 = 0;
	var uLocal_16456 = 0;
	var uLocal_16457 = 0;
	var uLocal_16458 = 0;
	var uLocal_16459 = 0;
	var uLocal_16460 = 0;
	var uLocal_16461 = 1065353216;
	var uLocal_16462 = 0;
	var uLocal_16463 = 0;
	var uLocal_16464 = 1065353216;
	var uLocal_16465 = 1;
	var uLocal_16466 = 0;
	var uLocal_16467 = -1;
	var uLocal_16468 = 0;
	var uLocal_16469 = 1;
	var uLocal_16470 = 0;
	var uLocal_16471 = 0;
	var uLocal_16472 = 0;
	var uLocal_16473 = 0;
	var uLocal_16474 = 0;
	var uLocal_16475 = 0;
	var uLocal_16476 = 0;
	var uLocal_16477 = 0;
	var uLocal_16478 = 0;
	var uLocal_16479 = 1065353216;
	var uLocal_16480 = 0;
	var uLocal_16481 = 0;
	var uLocal_16482 = 1065353216;
	var uLocal_16483 = 1;
	var uLocal_16484 = 0;
	var uLocal_16485 = -1;
	var uLocal_16486 = 0;
	var uLocal_16487 = 1;
	var uLocal_16488 = 0;
	var uLocal_16489 = 0;
	var uLocal_16490 = 0;
	var uLocal_16491 = 0;
	var uLocal_16492 = 0;
	var uLocal_16493 = 0;
	var uLocal_16494 = 0;
	var uLocal_16495 = 0;
	var uLocal_16496 = 0;
	var uLocal_16497 = 1065353216;
	var uLocal_16498 = 0;
	var uLocal_16499 = 0;
	var uLocal_16500 = 1065353216;
	var uLocal_16501 = 1;
	var uLocal_16502 = 0;
	var uLocal_16503 = -1;
	var uLocal_16504 = 0;
	var uLocal_16505 = 1;
	var uLocal_16506 = 0;
	var uLocal_16507 = 0;
	var uLocal_16508 = 0;
	var uLocal_16509 = 0;
	var uLocal_16510 = 0;
	var uLocal_16511 = 0;
	var uLocal_16512 = 0;
	var uLocal_16513 = 0;
	var uLocal_16514 = 0;
	var uLocal_16515 = 1065353216;
	var uLocal_16516 = 0;
	var uLocal_16517 = 0;
	var uLocal_16518 = 1065353216;
	var uLocal_16519 = 1;
	var uLocal_16520 = 0;
	var uLocal_16521 = -1;
	var uLocal_16522 = 0;
	var uLocal_16523 = 1;
	var uLocal_16524 = 0;
	var uLocal_16525 = 0;
	var uLocal_16526 = 0;
	var uLocal_16527 = 0;
	var uLocal_16528 = 0;
	var uLocal_16529 = 0;
	var uLocal_16530 = 0;
	var uLocal_16531 = 0;
	var uLocal_16532 = 0;
	var uLocal_16533 = 1065353216;
	var uLocal_16534 = 0;
	var uLocal_16535 = 0;
	var uLocal_16536 = 1065353216;
	var uLocal_16537 = 1;
	var uLocal_16538 = 0;
	var uLocal_16539 = -1;
	var uLocal_16540 = 0;
	var uLocal_16541 = 1;
	var uLocal_16542 = 0;
	var uLocal_16543 = 0;
	var uLocal_16544 = 0;
	var uLocal_16545 = 0;
	var uLocal_16546 = 0;
	var uLocal_16547 = 0;
	var uLocal_16548 = 0;
	var uLocal_16549 = 0;
	var uLocal_16550 = 0;
	var uLocal_16551 = 1065353216;
	var uLocal_16552 = 0;
	var uLocal_16553 = 0;
	var uLocal_16554 = 1065353216;
	var uLocal_16555 = 1;
	var uLocal_16556 = 0;
	var uLocal_16557 = -1;
	var uLocal_16558 = 0;
	var uLocal_16559 = 1;
	var uLocal_16560 = 0;
	var uLocal_16561 = 0;
	var uLocal_16562 = 0;
	var uLocal_16563 = 0;
	var uLocal_16564 = 0;
	var uLocal_16565 = 0;
	var uLocal_16566 = 0;
	var uLocal_16567 = 0;
	var uLocal_16568 = 0;
	var uLocal_16569 = 1065353216;
	var uLocal_16570 = 0;
	var uLocal_16571 = 0;
	var uLocal_16572 = 1065353216;
	var uLocal_16573 = 1;
	var uLocal_16574 = 0;
	var uLocal_16575 = -1;
	var uLocal_16576 = 0;
	var uLocal_16577 = 1;
	var uLocal_16578 = 0;
	var uLocal_16579 = 0;
	var uLocal_16580 = 0;
	var uLocal_16581 = 0;
	var uLocal_16582 = 0;
	var uLocal_16583 = 0;
	var uLocal_16584 = 0;
	var uLocal_16585 = 0;
	var uLocal_16586 = 0;
	var uLocal_16587 = 1065353216;
	var uLocal_16588 = 0;
	var uLocal_16589 = 0;
	var uLocal_16590 = 1065353216;
	var uLocal_16591 = 1;
	var uLocal_16592 = 0;
	var uLocal_16593 = -1;
	var uLocal_16594 = 0;
	var uLocal_16595 = 1;
	var uLocal_16596 = 0;
	var uLocal_16597 = 0;
	var uLocal_16598 = 0;
	var uLocal_16599 = 0;
	var uLocal_16600 = 0;
	var uLocal_16601 = 0;
	var uLocal_16602 = 0;
	var uLocal_16603 = 0;
	var uLocal_16604 = 0;
	var uLocal_16605 = 1065353216;
	var uLocal_16606 = 0;
	var uLocal_16607 = 0;
	var uLocal_16608 = 1065353216;
	var uLocal_16609 = 1;
	var uLocal_16610 = 0;
	var uLocal_16611 = -1;
	var uLocal_16612 = 0;
	var uLocal_16613 = 1;
	var uLocal_16614 = 0;
	var uLocal_16615 = 0;
	var uLocal_16616 = 0;
	var uLocal_16617 = 0;
	var uLocal_16618 = 0;
	var uLocal_16619 = 0;
	var uLocal_16620 = 0;
	var uLocal_16621 = 0;
	var uLocal_16622 = 0;
	var uLocal_16623 = 1065353216;
	var uLocal_16624 = 0;
	var uLocal_16625 = 0;
	var uLocal_16626 = 1065353216;
	var uLocal_16627 = 1;
	var uLocal_16628 = 0;
	var uLocal_16629 = -1;
	var uLocal_16630 = 0;
	var uLocal_16631 = 1;
	var uLocal_16632 = 0;
	var uLocal_16633 = 0;
	var uLocal_16634 = 0;
	var uLocal_16635 = 0;
	var uLocal_16636 = 0;
	var uLocal_16637 = 0;
	var uLocal_16638 = 0;
	var uLocal_16639 = 0;
	var uLocal_16640 = 0;
	var uLocal_16641 = 1065353216;
	var uLocal_16642 = 0;
	var uLocal_16643 = 0;
	var uLocal_16644 = 1065353216;
	var uLocal_16645 = 1;
	var uLocal_16646 = 0;
	var uLocal_16647 = -1;
	var uLocal_16648 = 0;
	var uLocal_16649 = 1;
	var uLocal_16650 = 0;
	var uLocal_16651 = 0;
	var uLocal_16652 = 0;
	var uLocal_16653 = 0;
	var uLocal_16654 = 0;
	var uLocal_16655 = 0;
	var uLocal_16656 = 0;
	var uLocal_16657 = 0;
	var uLocal_16658 = 0;
	var uLocal_16659 = 1065353216;
	var uLocal_16660 = 0;
	var uLocal_16661 = 0;
	var uLocal_16662 = 1065353216;
	var uLocal_16663 = 1;
	var uLocal_16664 = 0;
	var uLocal_16665 = -1;
	var uLocal_16666 = 0;
	var uLocal_16667 = 1;
	var uLocal_16668 = 0;
	var uLocal_16669 = 0;
	var uLocal_16670 = 0;
	var uLocal_16671 = 0;
	var uLocal_16672 = 0;
	var uLocal_16673 = 0;
	var uLocal_16674 = 0;
	var uLocal_16675 = 0;
	var uLocal_16676 = 0;
	var uLocal_16677 = 1065353216;
	var uLocal_16678 = 0;
	var uLocal_16679 = 0;
	var uLocal_16680 = 1065353216;
	var uLocal_16681 = 1;
	var uLocal_16682 = 0;
	var uLocal_16683 = -1;
	var uLocal_16684 = 0;
	var uLocal_16685 = 1;
	var uLocal_16686 = 0;
	var uLocal_16687 = 0;
	var uLocal_16688 = 0;
	var uLocal_16689 = 0;
	var uLocal_16690 = 0;
	var uLocal_16691 = 0;
	var uLocal_16692 = 0;
	var uLocal_16693 = 0;
	var uLocal_16694 = 0;
	var uLocal_16695 = 1065353216;
	var uLocal_16696 = 0;
	var uLocal_16697 = 0;
	var uLocal_16698 = 1065353216;
	var uLocal_16699 = 1;
	var uLocal_16700 = 0;
	var uLocal_16701 = 8;
	var uLocal_16702 = 0;
	var uLocal_16703 = 0;
	var uLocal_16704 = 0;
	var uLocal_16705 = 0;
	var uLocal_16706 = 0;
	var uLocal_16707 = 0;
	var uLocal_16708 = 0;
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
	var uLocal_16735 = 0;
	var uLocal_16736 = 0;
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
	var uLocal_16764 = 0;
	var uLocal_16765 = 0;
	var uLocal_16766 = 0;
	var uLocal_16767 = 0;
	var uLocal_16768 = 0;
	var uLocal_16769 = 0;
	var uLocal_16770 = 0;
	var uLocal_16771 = 0;
	var uLocal_16772 = 0;
	var uLocal_16773 = 0;
	var uLocal_16774 = 0;
	var uLocal_16775 = 0;
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
	var uLocal_16810 = 0;
	var uLocal_16811 = 0;
	var uLocal_16812 = 0;
	var uLocal_16813 = 0;
	var uLocal_16814 = 0;
	var uLocal_16815 = 0;
	var uLocal_16816 = 0;
	var uLocal_16817 = 0;
	var uLocal_16818 = 0;
	var uLocal_16819 = 0;
	var uLocal_16820 = 0;
	var uLocal_16821 = 0;
	var uLocal_16822 = 0;
	var uLocal_16823 = 0;
	var uLocal_16824 = 0;
	var uLocal_16825 = 0;
	var uLocal_16826 = 0;
	var uLocal_16827 = 0;
	var uLocal_16828 = 0;
	var uLocal_16829 = 0;
	var uLocal_16830 = 0;
	var uLocal_16831 = 0;
	var uLocal_16832 = 0;
	var uLocal_16833 = 0;
	var uLocal_16834 = 0;
	var uLocal_16835 = 0;
	var uLocal_16836 = 0;
	var uLocal_16837 = 0;
	var uLocal_16838 = 0;
	var uLocal_16839 = 0;
	var uLocal_16840 = 0;
	var uLocal_16841 = 0;
	var uLocal_16842 = 0;
	var uLocal_16843 = 0;
	var uLocal_16844 = 0;
	var uLocal_16845 = 0;
	var uLocal_16846 = 0;
	var uLocal_16847 = 0;
	var uLocal_16848 = 0;
	var uLocal_16849 = 0;
	var uLocal_16850 = 0;
	var uLocal_16851 = 0;
	var uLocal_16852 = 0;
	var uLocal_16853 = 0;
	var uLocal_16854 = 0;
	var uLocal_16855 = 0;
	var uLocal_16856 = 0;
	var uLocal_16857 = 0;
	var uLocal_16858 = 0;
	var uLocal_16859 = 0;
	var uLocal_16860 = 0;
	var uLocal_16861 = 0;
	var uLocal_16862 = 0;
	var uLocal_16863 = 0;
	var uLocal_16864 = 0;
	var uLocal_16865 = 0;
	var uLocal_16866 = 0;
	var uLocal_16867 = 0;
	var uLocal_16868 = 0;
	var uLocal_16869 = 0;
	var uLocal_16870 = 0;
	var uLocal_16871 = 0;
	var uLocal_16872 = 0;
	var uLocal_16873 = 0;
	var uLocal_16874 = 0;
	var uLocal_16875 = 0;
	var uLocal_16876 = 0;
	var uLocal_16877 = 0;
	var uLocal_16878 = 0;
	var uLocal_16879 = 0;
	var uLocal_16880 = 0;
	var uLocal_16881 = 0;
	var uLocal_16882 = 0;
	var uLocal_16883 = 0;
	var uLocal_16884 = 0;
	var uLocal_16885 = 0;
	var uLocal_16886 = 0;
	var uLocal_16887 = 0;
	var uLocal_16888 = 0;
	var uLocal_16889 = 0;
	var uLocal_16890 = 0;
	var uLocal_16891 = 0;
	var uLocal_16892 = 0;
	var uLocal_16893 = 0;
	var uLocal_16894 = 0;
	var uLocal_16895 = 0;
	var uLocal_16896 = 0;
	var uLocal_16897 = 0;
	var uLocal_16898 = 0;
	var uLocal_16899 = 0;
	var uLocal_16900 = 0;
	var uLocal_16901 = 0;
	var uLocal_16902 = 0;
	var uLocal_16903 = 0;
	var uLocal_16904 = 0;
	var uLocal_16905 = 0;
	var uLocal_16906 = 0;
	var uLocal_16907 = 0;
	var uLocal_16908 = 0;
	var uLocal_16909 = 0;
	var uLocal_16910 = 0;
	var uLocal_16911 = 0;
	var uLocal_16912 = 0;
	var uLocal_16913 = 0;
	var uLocal_16914 = 0;
	var uLocal_16915 = 0;
	var uLocal_16916 = 0;
	var uLocal_16917 = 0;
	var uLocal_16918 = 0;
	var uLocal_16919 = 0;
	var uLocal_16920 = 0;
	var uLocal_16921 = 0;
	var uLocal_16922 = 0;
	var uLocal_16923 = 0;
	var uLocal_16924 = 0;
	var uLocal_16925 = 0;
	var uLocal_16926 = 0;
	var uLocal_16927 = 0;
	var uLocal_16928 = 0;
	var uLocal_16929 = 0;
	var uLocal_16930 = 0;
	var uLocal_16931 = 0;
	var uLocal_16932 = 0;
	var uLocal_16933 = 0;
	var uLocal_16934 = 0;
	var uLocal_16935 = 0;
	var uLocal_16936 = 0;
	var uLocal_16937 = 0;
	var uLocal_16938 = 0;
	var uLocal_16939 = 0;
	var uLocal_16940 = 0;
	var uLocal_16941 = 0;
	var uLocal_16942 = 0;
	var uLocal_16943 = 0;
	var uLocal_16944 = 0;
	var uLocal_16945 = 0;
	var uLocal_16946 = 0;
	var uLocal_16947 = 0;
	var uLocal_16948 = 0;
	var uLocal_16949 = 0;
	var uLocal_16950 = 0;
	var uLocal_16951 = 0;
	var uLocal_16952 = 0;
	var uLocal_16953 = 0;
	var uLocal_16954 = 0;
	var uLocal_16955 = 0;
	var uLocal_16956 = 0;
	var uLocal_16957 = 0;
	var uLocal_16958 = 0;
	var uLocal_16959 = 0;
	var uLocal_16960 = 0;
	var uLocal_16961 = 0;
	var uLocal_16962 = 0;
	var uLocal_16963 = 0;
	var uLocal_16964 = 0;
	var uLocal_16965 = 0;
	var uLocal_16966 = 0;
	var uLocal_16967 = 0;
	var uLocal_16968 = 0;
	var uLocal_16969 = 0;
	var uLocal_16970 = 0;
	var uLocal_16971 = 0;
	var uLocal_16972 = 0;
	var uLocal_16973 = 0;
	var uLocal_16974 = 0;
	var uLocal_16975 = 0;
	var uLocal_16976 = 0;
	var uLocal_16977 = 0;
	var uLocal_16978 = 0;
	var uLocal_16979 = 0;
	var uLocal_16980 = 0;
	var uLocal_16981 = 0;
	var uLocal_16982 = 0;
	var uLocal_16983 = 0;
	var uLocal_16984 = 0;
	var uLocal_16985 = 0;
	var uLocal_16986 = 0;
	var uLocal_16987 = 0;
	var uLocal_16988 = 0;
	var uLocal_16989 = 0;
	var uLocal_16990 = 0;
	var uLocal_16991 = 0;
	var uLocal_16992 = 0;
	var uLocal_16993 = 0;
	var uLocal_16994 = 0;
	var uLocal_16995 = 0;
	var uLocal_16996 = 0;
	var uLocal_16997 = 0;
	var uLocal_16998 = 0;
	var uLocal_16999 = 0;
	var uLocal_17000 = 0;
	var uLocal_17001 = 0;
	var uLocal_17002 = 0;
	var uLocal_17003 = 0;
	var uLocal_17004 = 0;
	var uLocal_17005 = 0;
	var uLocal_17006 = 0;
	var uLocal_17007 = 0;
	var uLocal_17008 = 0;
	var uLocal_17009 = 0;
	var uLocal_17010 = 0;
	var uLocal_17011 = 0;
	var uLocal_17012 = 0;
	var uLocal_17013 = 0;
	var uLocal_17014 = 0;
	var uLocal_17015 = 0;
	var uLocal_17016 = 0;
	var uLocal_17017 = 0;
	var uLocal_17018 = 0;
	var uLocal_17019 = 0;
	var uLocal_17020 = 0;
	var uLocal_17021 = 0;
	var uLocal_17022 = 0;
	var uLocal_17023 = 0;
	var uLocal_17024 = 0;
	var uLocal_17025 = 0;
	var uLocal_17026 = 0;
	var uLocal_17027 = 0;
	var uLocal_17028 = 0;
	var uLocal_17029 = 0;
	var uLocal_17030 = 8;
	var uLocal_17031 = 0;
	var uLocal_17032 = 0;
	var uLocal_17033 = 0;
	var uLocal_17034 = 0;
	var uLocal_17035 = 0;
	var uLocal_17036 = 0;
	var uLocal_17037 = 0;
	var uLocal_17038 = 0;
	var uLocal_17039 = 0;
	var uLocal_17040 = 0;
	var uLocal_17041 = 0;
	var uLocal_17042 = 0;
	var uLocal_17043 = 0;
	var uLocal_17044 = 0;
	var uLocal_17045 = 0;
	var uLocal_17046 = 0;
	var uLocal_17047 = 0;
	var uLocal_17048 = 0;
	var uLocal_17049 = 0;
	var uLocal_17050 = 0;
	var uLocal_17051 = -1;
	var uLocal_17052 = 0;
	var uLocal_17053 = 0;
	var uLocal_17054 = 0;
	var uLocal_17055 = 0;
	var uLocal_17056 = 0;
	var uLocal_17057 = 0;
	var uLocal_17058 = 0;
	var uLocal_17059 = 0;
	var uLocal_17060 = 0;
	var uLocal_17061 = 0;
	var uLocal_17062 = 0;
	var uLocal_17063 = 0;
	var uLocal_17064 = 0;
	var uLocal_17065 = 0;
	var uLocal_17066 = 0;
	var uLocal_17067 = 0;
	var uLocal_17068 = 0;
	var uLocal_17069 = 0;
	var uLocal_17070 = 0;
	var uLocal_17071 = 0;
	var uLocal_17072 = 0;
	var uLocal_17073 = -1;
	var uLocal_17074 = 0;
	var uLocal_17075 = 0;
	var uLocal_17076 = 0;
	var uLocal_17077 = 0;
	var uLocal_17078 = 0;
	var uLocal_17079 = 0;
	var uLocal_17080 = 0;
	var uLocal_17081 = 0;
	var uLocal_17082 = 0;
	var uLocal_17083 = 0;
	var uLocal_17084 = 0;
	var uLocal_17085 = 0;
	var uLocal_17086 = 0;
	var uLocal_17087 = 0;
	var uLocal_17088 = 0;
	var uLocal_17089 = 0;
	var uLocal_17090 = 0;
	var uLocal_17091 = 0;
	var uLocal_17092 = 0;
	var uLocal_17093 = 0;
	var uLocal_17094 = 0;
	var uLocal_17095 = -1;
	var uLocal_17096 = 0;
	var uLocal_17097 = 0;
	var uLocal_17098 = 0;
	var uLocal_17099 = 0;
	var uLocal_17100 = 0;
	var uLocal_17101 = 0;
	var uLocal_17102 = 0;
	var uLocal_17103 = 0;
	var uLocal_17104 = 0;
	var uLocal_17105 = 0;
	var uLocal_17106 = 0;
	var uLocal_17107 = 0;
	var uLocal_17108 = 0;
	var uLocal_17109 = 0;
	var uLocal_17110 = 0;
	var uLocal_17111 = 0;
	var uLocal_17112 = 0;
	var uLocal_17113 = 0;
	var uLocal_17114 = 0;
	var uLocal_17115 = 0;
	var uLocal_17116 = 0;
	var uLocal_17117 = -1;
	var uLocal_17118 = 0;
	var uLocal_17119 = 0;
	var uLocal_17120 = 0;
	var uLocal_17121 = 0;
	var uLocal_17122 = 0;
	var uLocal_17123 = 0;
	var uLocal_17124 = 0;
	var uLocal_17125 = 0;
	var uLocal_17126 = 0;
	var uLocal_17127 = 0;
	var uLocal_17128 = 0;
	var uLocal_17129 = 0;
	var uLocal_17130 = 0;
	var uLocal_17131 = 0;
	var uLocal_17132 = 0;
	var uLocal_17133 = 0;
	var uLocal_17134 = 0;
	var uLocal_17135 = 0;
	var uLocal_17136 = 0;
	var uLocal_17137 = 0;
	var uLocal_17138 = 0;
	var uLocal_17139 = -1;
	var uLocal_17140 = 0;
	var uLocal_17141 = 0;
	var uLocal_17142 = 0;
	var uLocal_17143 = 0;
	var uLocal_17144 = 0;
	var uLocal_17145 = 0;
	var uLocal_17146 = 0;
	var uLocal_17147 = 0;
	var uLocal_17148 = 0;
	var uLocal_17149 = 0;
	var uLocal_17150 = 0;
	var uLocal_17151 = 0;
	var uLocal_17152 = 0;
	var uLocal_17153 = 0;
	var uLocal_17154 = 0;
	var uLocal_17155 = 0;
	var uLocal_17156 = 0;
	var uLocal_17157 = 0;
	var uLocal_17158 = 0;
	var uLocal_17159 = 0;
	var uLocal_17160 = 0;
	var uLocal_17161 = -1;
	var uLocal_17162 = 0;
	var uLocal_17163 = 0;
	var uLocal_17164 = 0;
	var uLocal_17165 = 0;
	var uLocal_17166 = 0;
	var uLocal_17167 = 0;
	var uLocal_17168 = 0;
	var uLocal_17169 = 0;
	var uLocal_17170 = 0;
	var uLocal_17171 = 0;
	var uLocal_17172 = 0;
	var uLocal_17173 = 0;
	var uLocal_17174 = 0;
	var uLocal_17175 = 0;
	var uLocal_17176 = 0;
	var uLocal_17177 = 0;
	var uLocal_17178 = 0;
	var uLocal_17179 = 0;
	var uLocal_17180 = 0;
	var uLocal_17181 = 0;
	var uLocal_17182 = 0;
	var uLocal_17183 = -1;
	var uLocal_17184 = 0;
	var uLocal_17185 = 0;
	var uLocal_17186 = 0;
	var uLocal_17187 = 0;
	var uLocal_17188 = 0;
	var uLocal_17189 = 0;
	var uLocal_17190 = 0;
	var uLocal_17191 = 0;
	var uLocal_17192 = 0;
	var uLocal_17193 = 0;
	var uLocal_17194 = 0;
	var uLocal_17195 = 0;
	var uLocal_17196 = 0;
	var uLocal_17197 = 0;
	var uLocal_17198 = 0;
	var uLocal_17199 = 0;
	var uLocal_17200 = 0;
	var uLocal_17201 = 0;
	var uLocal_17202 = 0;
	var uLocal_17203 = 0;
	var uLocal_17204 = 0;
	var uLocal_17205 = -1;
	var uLocal_17206 = 0;
	var uLocal_17207 = 11;
	var uLocal_17208 = 0;
	var uLocal_17209 = 0;
	var uLocal_17210 = 0;
	var uLocal_17211 = 0;
	var uLocal_17212 = 0;
	var uLocal_17213 = 0;
	var uLocal_17214 = 0;
	var uLocal_17215 = 0;
	var uLocal_17216 = 0;
	var uLocal_17217 = 0;
	var uLocal_17218 = 0;
	var uLocal_17219 = 0;
	var uLocal_17220 = 0;
	var uLocal_17221 = 0;
	var uLocal_17222 = 0;
	var uLocal_17223 = 0;
	var uLocal_17224 = 0;
	var uLocal_17225 = 0;
	var uLocal_17226 = 0;
	var uLocal_17227 = 0;
	var uLocal_17228 = 0;
	var uLocal_17229 = 0;
	var uLocal_17230 = 0;
	var uLocal_17231 = 0;
	var uLocal_17232 = 0;
	var uLocal_17233 = 0;
	var uLocal_17234 = 0;
	var uLocal_17235 = 0;
	var uLocal_17236 = 0;
	var uLocal_17237 = 0;
	var uLocal_17238 = 0;
	var uLocal_17239 = 0;
	var uLocal_17240 = 0;
	var uLocal_17241 = 0;
	var uLocal_17242 = 0;
	var uLocal_17243 = 0;
	var uLocal_17244 = 0;
	var uLocal_17245 = 0;
	var uLocal_17246 = 0;
	var uLocal_17247 = 0;
	var uLocal_17248 = 0;
	var uLocal_17249 = 0;
	var uLocal_17250 = 0;
	var uLocal_17251 = 0;
	var uLocal_17252 = 0;
	var uLocal_17253 = 0;
	var uLocal_17254 = 0;
	var uLocal_17255 = 0;
	var uLocal_17256 = 0;
	var uLocal_17257 = 0;
	var uLocal_17258 = 0;
	var uLocal_17259 = 0;
	var uLocal_17260 = 0;
	var uLocal_17261 = 0;
	var uLocal_17262 = 0;
	var uLocal_17263 = 0;
	var uLocal_17264 = 0;
	var uLocal_17265 = 0;
	var uLocal_17266 = 0;
	var uLocal_17267 = 0;
	var uLocal_17268 = 0;
	var uLocal_17269 = 0;
	var uLocal_17270 = 0;
	var uLocal_17271 = 0;
	var uLocal_17272 = 0;
	var uLocal_17273 = 0;
	var uLocal_17274 = 0;
	var uLocal_17275 = 0;
	var uLocal_17276 = 0;
	var uLocal_17277 = 0;
	var uLocal_17278 = 0;
	var uLocal_17279 = 0;
	var uLocal_17280 = 0;
	var uLocal_17281 = 0;
	var uLocal_17282 = 0;
	var uLocal_17283 = 0;
	var uLocal_17284 = 0;
	var uLocal_17285 = 0;
	var uLocal_17286 = 0;
	var uLocal_17287 = 0;
	var uLocal_17288 = 0;
	var uLocal_17289 = 0;
	var uLocal_17290 = 0;
	var uLocal_17291 = 0;
	var uLocal_17292 = 0;
	var uLocal_17293 = 0;
	var uLocal_17294 = 0;
	var uLocal_17295 = 0;
	var uLocal_17296 = 0;
	var uLocal_17297 = 0;
	var uLocal_17298 = 0;
	var uLocal_17299 = 0;
	var uLocal_17300 = 0;
	var uLocal_17301 = 0;
	var uLocal_17302 = 0;
	var uLocal_17303 = 0;
	var uLocal_17304 = 0;
	var uLocal_17305 = 0;
	var uLocal_17306 = 0;
	var uLocal_17307 = 0;
	var uLocal_17308 = 0;
	var uLocal_17309 = 0;
	var uLocal_17310 = 0;
	var uLocal_17311 = 0;
	var uLocal_17312 = 0;
	var uLocal_17313 = 0;
	var uLocal_17314 = 0;
	var uLocal_17315 = 0;
	var uLocal_17316 = 0;
	var uLocal_17317 = 0;
	var uLocal_17318 = 2;
	var uLocal_17319 = 0;
	var uLocal_17320 = 0;
	var uLocal_17321 = 0;
	var uLocal_17322 = 0;
	var uLocal_17323 = 0;
	var uLocal_17324 = 0;
	var uLocal_17325 = 0;
	var uLocal_17326 = 0;
	var uLocal_17327 = 0;
	var uLocal_17328 = 0;
	var uLocal_17329 = 0;
	var uLocal_17330 = 0;
	var uLocal_17331 = 0;
	var uLocal_17332 = 0;
	var uLocal_17333 = 0;
	var uLocal_17334 = 0;
	var uLocal_17335 = 0;
	var uLocal_17336 = 0;
	var uLocal_17337 = 0;
	var uLocal_17338 = 0;
	var uLocal_17339 = 0;
	var uLocal_17340 = 0;
	var uLocal_17341 = 0;
	var uLocal_17342 = 0;
	var uLocal_17343 = 0;
	var uLocal_17344 = 0;
	var uLocal_17345 = 0;
	var uLocal_17346 = 0;
	var uLocal_17347 = 0;
	var uLocal_17348 = 0;
	var uLocal_17349 = 0;
	var uLocal_17350 = 0;
	var uLocal_17351 = 0;
	var uLocal_17352 = 0;
	var uLocal_17353 = 2;
	var uLocal_17354 = 0;
	var uLocal_17355 = 0;
	var uLocal_17356 = 0;
	var uLocal_17357 = 0;
	var uLocal_17358 = 0;
	var uLocal_17359 = 0;
	var uLocal_17360 = 0;
	var uLocal_17361 = 0;
	var uLocal_17362 = 0;
	var uLocal_17363 = 0;
	var uLocal_17364 = 0;
	var uLocal_17365 = 0;
	var uLocal_17366 = 0;
	var uLocal_17367 = 0;
	var uLocal_17368 = 0;
	var uLocal_17369 = 0;
	var uLocal_17370 = -1;
	var uLocal_17371 = 0;
	var uLocal_17372 = 0;
	var uLocal_17373 = -1;
	var uLocal_17374 = -1082130432;
	var uLocal_17375 = 0;
	var uLocal_17376 = 0;
	var uLocal_17377 = 0;
	var uLocal_17378 = 0;
	var uLocal_17379 = 0;
	var uLocal_17380 = 0;
	var uLocal_17381 = 0;
	var uLocal_17382 = 0;
	var uLocal_17383 = 0;
	var uLocal_17384 = 0;
	var uLocal_17385 = 0;
	var uLocal_17386 = 0;
	var uLocal_17387 = 0;
	var uLocal_17388 = 0;
	var uLocal_17389 = 0;
	var uLocal_17390 = 0;
	var uLocal_17391 = 0;
	var uLocal_17392 = 0;
	var uLocal_17393 = 0;
	var uLocal_17394 = 0;
	var uLocal_17395 = 0;
	var uLocal_17396 = 0;
	var uLocal_17397 = 0;
	var uLocal_17398 = 0;
	var uLocal_17399 = 0;
	var uLocal_17400 = 0;
	var uLocal_17401 = 0;
	var uLocal_17402 = 0;
	var uLocal_17403 = 0;
	var uLocal_17404 = 0;
	var uLocal_17405 = 0;
	var uLocal_17406 = 0;
	var uLocal_17407 = 0;
	var uLocal_17408 = 0;
	var uLocal_17409 = 0;
	var uLocal_17410 = 0;
	var uLocal_17411 = 0;
	var uLocal_17412 = 0;
	var uLocal_17413 = 0;
	var uLocal_17414 = 0;
	var uLocal_17415 = 0;
	var uLocal_17416 = 0;
	var uLocal_17417 = 0;
	var uLocal_17418 = 0;
	var uLocal_17419 = 0;
	var uLocal_17420 = 0;
	var uLocal_17421 = 0;
	var uLocal_17422 = 0;
	var uLocal_17423 = 0;
	var uLocal_17424 = 0;
	var uLocal_17425 = 0;
	var uLocal_17426 = 0;
	var uLocal_17427 = 0;
	var uLocal_17428 = 0;
	var uLocal_17429 = 0;
	var uLocal_17430 = 0;
	var uLocal_17431 = 0;
	var uLocal_17432 = 0;
	var uLocal_17433 = 0;
	var uLocal_17434 = 0;
	var uLocal_17435 = 0;
	var uLocal_17436 = 0;
	var uLocal_17437 = 0;
	var uLocal_17438 = 0;
	var uLocal_17439 = 0;
	var uLocal_17440 = 0;
	var uLocal_17441 = 0;
	var uLocal_17442 = 0;
	var uLocal_17443 = 0;
	var uLocal_17444 = 0;
	var uLocal_17445 = 0;
	var uLocal_17446 = 0;
	var uLocal_17447 = 0;
	var uLocal_17448 = 0;
	var uLocal_17449 = 0;
	var uLocal_17450 = 0;
	var uLocal_17451 = 0;
	var uLocal_17452 = 0;
	var uLocal_17453 = 0;
	var uLocal_17454 = 0;
	var uLocal_17455 = 0;
	var uLocal_17456 = 24;
	var uLocal_17457 = 0;
	var uLocal_17458 = 0;
	var uLocal_17459 = 0;
	var uLocal_17460 = 0;
	var uLocal_17461 = 0;
	var uLocal_17462 = 0;
	var uLocal_17463 = 0;
	var uLocal_17464 = 0;
	var uLocal_17465 = 0;
	var uLocal_17466 = 0;
	var uLocal_17467 = 0;
	var uLocal_17468 = 0;
	var uLocal_17469 = 0;
	var uLocal_17470 = 0;
	var uLocal_17471 = 0;
	var uLocal_17472 = 0;
	var uLocal_17473 = 0;
	var uLocal_17474 = 0;
	var uLocal_17475 = 0;
	var uLocal_17476 = 0;
	var uLocal_17477 = 0;
	var uLocal_17478 = 0;
	var uLocal_17479 = 0;
	var uLocal_17480 = 0;
	var uLocal_17481 = 0;
	var uLocal_17482 = 0;
	var uLocal_17483 = 0;
	var uLocal_17484 = 0;
	var uLocal_17485 = 0;
	var uLocal_17486 = 0;
	var uLocal_17487 = 0;
	var uLocal_17488 = 0;
	var uLocal_17489 = 0;
	var uLocal_17490 = 0;
	var uLocal_17491 = 0;
	var uLocal_17492 = 0;
	var uLocal_17493 = 0;
	var uLocal_17494 = 0;
	var uLocal_17495 = 0;
	var uLocal_17496 = 0;
	var uLocal_17497 = 0;
	var uLocal_17498 = 0;
	var uLocal_17499 = 0;
	var uLocal_17500 = 0;
	var uLocal_17501 = 0;
	var uLocal_17502 = 0;
	var uLocal_17503 = 0;
	var uLocal_17504 = 0;
	var uLocal_17505 = 0;
	var uLocal_17506 = 0;
	var uLocal_17507 = 0;
	var uLocal_17508 = 0;
	var uLocal_17509 = 0;
	var uLocal_17510 = 0;
	var uLocal_17511 = 0;
	var uLocal_17512 = 0;
	var uLocal_17513 = 0;
	var uLocal_17514 = 0;
	var uLocal_17515 = 0;
	var uLocal_17516 = 0;
	var uLocal_17517 = 0;
	var uLocal_17518 = 0;
	var uLocal_17519 = 0;
	var uLocal_17520 = 0;
	var uLocal_17521 = 0;
	var uLocal_17522 = 0;
	var uLocal_17523 = 0;
	var uLocal_17524 = 0;
	var uLocal_17525 = 0;
	var uLocal_17526 = 0;
	var uLocal_17527 = 0;
	var uLocal_17528 = 0;
	var uLocal_17529 = 0;
	var uLocal_17530 = 0;
	var uLocal_17531 = 0;
	var uLocal_17532 = 0;
	var uLocal_17533 = 0;
	var uLocal_17534 = 0;
	var uLocal_17535 = 0;
	var uLocal_17536 = 0;
	var uLocal_17537 = 0;
	var uLocal_17538 = 0;
	var uLocal_17539 = 0;
	var uLocal_17540 = 0;
	var uLocal_17541 = 0;
	var uLocal_17542 = 0;
	var uLocal_17543 = 0;
	var uLocal_17544 = 0;
	var uLocal_17545 = 0;
	var uLocal_17546 = 0;
	var uLocal_17547 = 0;
	var uLocal_17548 = 0;
	var uLocal_17549 = 0;
	var uLocal_17550 = 0;
	var uLocal_17551 = 0;
	var uLocal_17552 = 0;
	var uLocal_17553 = 0;
	var uLocal_17554 = 0;
	var uLocal_17555 = 0;
	var uLocal_17556 = 0;
	var uLocal_17557 = 0;
	var uLocal_17558 = 0;
	var uLocal_17559 = 0;
	var uLocal_17560 = 0;
	var uLocal_17561 = 0;
	var uLocal_17562 = 0;
	var uLocal_17563 = 0;
	var uLocal_17564 = 0;
	var uLocal_17565 = 0;
	var uLocal_17566 = 0;
	var uLocal_17567 = 0;
	var uLocal_17568 = 0;
	var uLocal_17569 = 0;
	var uLocal_17570 = 0;
	var uLocal_17571 = 0;
	var uLocal_17572 = 0;
	var uLocal_17573 = 0;
	var uLocal_17574 = 0;
	var uLocal_17575 = 0;
	var uLocal_17576 = 0;
	var uLocal_17577 = 0;
	var uLocal_17578 = 0;
	var uLocal_17579 = 0;
	var uLocal_17580 = -1;
	var uLocal_17581 = 0;
	var uLocal_17582 = 0;
	var uLocal_17583 = 0;
	var uLocal_17584 = 0;
	var uLocal_17585 = 0;
	var uLocal_17586 = 0;
	var uLocal_17587 = 0;
	var uLocal_17588 = 0;
	var uLocal_17589 = 0;
	var uLocal_17590 = 0;
	var uLocal_17591 = 0;
	var uLocal_17592 = 0;
	var uLocal_17593 = 0;
	var uLocal_17594 = 0;
	var uLocal_17595 = 0;
	var uLocal_17596 = 0;
	var uLocal_17597 = 0;
	var uLocal_17598 = 0;
	var uLocal_17599 = 0;
	var uLocal_17600 = 0;
	var uLocal_17601 = 0;
	var uLocal_17602 = 0;
	var uLocal_17603 = 0;
	var uLocal_17604 = 0;
	var uLocal_17605 = 0;
	var uLocal_17606 = 0;
	var uLocal_17607 = -1;
	var uLocal_17608 = 20;
	var uLocal_17609 = 0;
	var uLocal_17610 = 0;
	var uLocal_17611 = 0;
	var uLocal_17612 = 0;
	var uLocal_17613 = 0;
	var uLocal_17614 = 0;
	var uLocal_17615 = 0;
	var uLocal_17616 = 0;
	var uLocal_17617 = 0;
	var uLocal_17618 = 0;
	var uLocal_17619 = 0;
	var uLocal_17620 = 0;
	var uLocal_17621 = 0;
	var uLocal_17622 = 0;
	var uLocal_17623 = 0;
	var uLocal_17624 = 0;
	var uLocal_17625 = 0;
	var uLocal_17626 = 0;
	var uLocal_17627 = 0;
	var uLocal_17628 = 0;
	var uLocal_17629 = 0;
	var uLocal_17630 = 0;
	var uLocal_17631 = 0;
	var uLocal_17632 = 0;
	var uLocal_17633 = 0;
	var uLocal_17634 = 0;
	var uLocal_17635 = 0;
	var uLocal_17636 = 1028443341;
	var uLocal_17637 = 1038174126;
	var uLocal_17638 = 1065353216;
	var uLocal_17639 = 1065353216;
	var uLocal_17640 = 1086324736;
	var uLocal_17641 = 1082130432;
	var uLocal_17642 = 1073741824;
	var uLocal_17643 = 1065353216;
	var uLocal_17644 = 1108082688;
	var uLocal_17645 = 1108082688;
	var uLocal_17646 = 3000;
	var uLocal_17647 = 1092616192;
	var uLocal_17648 = 0;
	var uLocal_17649 = 0;
	var uLocal_17650 = 0;
	var uLocal_17651 = 0;
	var uLocal_17652 = 0;
	var uLocal_17653 = 0;
	var uLocal_17654 = 0;
	var uLocal_17655 = 0;
	var uLocal_17656 = 0;
	var uLocal_17657 = 0;
	var uLocal_17658 = 0;
	var uLocal_17659 = 0;
	var uLocal_17660 = 0;
	var uLocal_17661 = 0;
	var uLocal_17662 = 0;
	var uLocal_17663 = 0;
	var uLocal_17664 = 0;
	var uLocal_17665 = 0;
	var uLocal_17666 = 0;
	var uLocal_17667 = 0;
	var uLocal_17668 = 0;
	var uLocal_17669 = 0;
	var uLocal_17670 = 0;
	var uLocal_17671 = 0;
	var uLocal_17672 = 0;
	var uLocal_17673 = 0;
	var uLocal_17674 = 0;
	var uLocal_17675 = 0;
	var uLocal_17676 = 0;
	var uLocal_17677 = 0;
	var uLocal_17678 = 0;
	var uLocal_17679 = 0;
	var uLocal_17680 = 0;
	var uLocal_17681 = 0;
	var uLocal_17682 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = joaat("S_M_M_NBXRIVERBOATGUARDS_01");
	iLocal_15 = joaat("CS_DESMOND");
	iLocal_16 = joaat("U_M_M_NBXRIVERBOATPITBOSS_01");
	iLocal_17 = joaat("CS_BANDPIANIST");
	iLocal_18 = joaat("MSP_INDUSTRY3_MALES_01");
	iLocal_19 = joaat("MSP_INDUSTRY3_FEMALES_01");
	iLocal_20 = joaat("A_M_M_NBXUPPERCLASS_01");
	iLocal_21 = joaat("A_F_M_NBXUPPERCLASS_01");
	iLocal_22 = joaat("S_M_M_NBXRIVERBOATDEALERS_01");
	iLocal_23 = joaat("P_CS_BILLSTACK01X");
	iLocal_24 = joaat("S_POCKETWATCH_REUTLINGE");
	iLocal_25 = joaat("COACH6");
	iLocal_26 = joaat("P_GLASS03X");
	iLocal_27 = joaat("COACH2");
	iLocal_28 = joaat("WAGONWORK01X");
	iLocal_29 = joaat("P_CHAIRPOKERFANCY01X");
	iLocal_30 = joaat("P_BARSTOOL01X");
	iLocal_31 = joaat("P_TABLEPOKER04X");
	iLocal_32 = joaat("P_TABLEPOKER04AX");
	iLocal_33 = joaat("S_SHOTGLASS01X_BROWN");
	iLocal_34 = joaat("S_TUMBLER01X_BROWN");
	iLocal_35 = joaat("P_CIGARETTE_CS01X");
	iLocal_36 = joaat("PROP_CHIP_GREEN_X10");
	iLocal_37 = joaat("P_CRD_2_C01X");
	iLocal_38 = joaat("P_BOTTLEJD01X");
	iLocal_39 = joaat("P_CS_CHARLESBELT01X");
	iLocal_40 = joaat("P_CHAIRCOMFY05X");
	iLocal_41 = joaat("P_DOORRIVERBOAT01X");
	iLocal_43 = 1;
	iLocal_44 = 2;
	iLocal_45 = 3;
	iLocal_46 = 4;
	iLocal_47 = 5;
	iLocal_48 = 6;
	iLocal_49 = 7;
	iLocal_50 = 8;
	iLocal_51 = 9;
	iLocal_52 = 10;
	iLocal_53 = 11;
	iLocal_54 = 12;
	iLocal_55 = 13;
	iLocal_56 = 14;
	iLocal_57 = 25;
	sLocal_58 = "ind3_ambient1";
	sLocal_59 = "ind3_ambient2";
	sLocal_60 = "ind3_to_safe";
	sLocal_61 = "ind3_assisted_to_boat";
	sLocal_62 = "ind3_to_floor_v1";
	sLocal_63 = "ind3_civ_loop";
	sLocal_64 = "ind3_to_barber";
	sLocal_65 = "ind3_swim1";
	sLocal_66 = "ind3_to_coach";
	sLocal_67 = "ind3_coach_leaves";
	sLocal_68 = "ind3_to_docks";
	sLocal_69 = "ind3_CoachRoute";
	sLocal_70 = "ind3_trelawny_escape";
	sLocal_71 = "ind3_strauss_escape";
	sLocal_72 = "ind3_to_table";
	sLocal_73 = "ind3_assisted_from_poker";
	sLocal_74 = "ind3_searching";
	sLocal_75 = "ind3_safe_assist";
	sLocal_76 = "ind3_mcs5_assist";
	iLocal_1765 = -1;
	sLocal_4411 = "AI_DAMAGE@DEAD@BASE";
	fLocal_4418 = 1f;
	iLocal_4420 = 310380286;
	fLocal_4452 = -1f;
	iLocal_4453 = 16;
	iLocal_4454 = joaat("CLOTHING_HEIST_OUTFIT");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_6__::func_860(&uLocal_4503, 1073741824 /* Float: 2f */);
		func_2(&uLocal_4503, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_4503);
	func_5(&uLocal_4503);
	while (!__LIB_6__::func_861(&uLocal_4503, -2147483648))
	{
		func_7(&uLocal_4503);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_4503, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_6__::func_862(cParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(cParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_748(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(cParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_797(1);
		__LIB_0__::func_722(1, 0);
		__LIB_8__::func_703(cParam0, 1);
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
		if (!__LIB_6__::func_861(cParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_6__::func_863(cParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_6__::func_863(cParam0) == 1 || __LIB_6__::func_863(cParam0) == 2)
					{
						if (__LIB_4__::func_505(&(cParam0->f_8269)) && __LIB_4__::func_506(&(cParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_0__::func_75(&(cParam0->f_13118)))
					{
						__LIB_1__::func_283(&(cParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_6__::func_860(cParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_6__::func_861(cParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_9__::func_39(cParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_6__::func_861(cParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_8__::func_722(cParam0);
							}
							return false;
						}
						if (__LIB_6__::func_861(cParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_6__::func_863(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(cParam0))
								{
									cParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((cParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > cParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_6__::func_863(cParam0) == 1)
						{
							if (__LIB_9__::func_39(cParam0, bVar1))
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
			else if (__LIB_6__::func_861(cParam0, 2))
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
			if (!__LIB_4__::func_678() && __LIB_6__::func_863(cParam0) != 0)
			{
				__LIB_8__::func_725(cParam0, func_34(__LIB_6__::func_864(cParam0)), func_34(__LIB_9__::func_40(cParam0)), __LIB_6__::func_864(cParam0), __LIB_9__::func_40(cParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(cParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_7375.f_804);
		}
	}
	__LIB_6__::func_860(cParam0, 1048576);
	if (!__LIB_6__::func_861(cParam0, 2097152))
	{
		if (!func_9(cParam0))
		{
			return false;
		}
		__LIB_6__::func_860(cParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(cParam0->f_8269));
	if (__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		__LIB_4__::func_507(&(cParam0->f_8269));
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
	if (!__LIB_6__::func_861(cParam0, 8))
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
	__LIB_6__::func_865(cParam0);
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
	if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(cParam0->f_10792));
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
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_8__::func_704(cParam0);
	}
	__LIB_9__::func_357(cParam0, 0, !bVar2, bVar2);
	__LIB_9__::func_70(cParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_6__::func_866(cParam0));
	__LIB_5__::func_330(__LIB_6__::func_866(cParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_6__::func_863(cParam0));
	__LIB_8__::func_658(cParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_6__::func_863(cParam0) != 1)
	{
		__LIB_5__::func_101(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[cParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_6__::func_863(cParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_6__::func_861(cParam0, 4)) && !__LIB_6__::func_861(cParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(cParam0);
				__LIB_11__::func_104(cParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(cParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(cParam0->f_607), !__LIB_6__::func_861(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(__LIB_3__::func_918(cParam0->f_607), bVar3);
				}
				__LIB_8__::func_703(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_9__::func_41(cParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_6__::func_833();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_6__::func_861(cParam0, 2))
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
				__LIB_1__::func_645(__LIB_3__::func_918(cParam0->f_607));
				__LIB_0__::func_11();
				if (__LIB_6__::func_863(cParam0) == 2)
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
				__LIB_0__::func_11();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(cParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(cParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_6__::func_863(cParam0) != 0)
		{
			Var6 = { __LIB_6__::func_867(cParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(cParam0->f_607), __LIB_6__::func_863(cParam0), &Var6, 0, 0, __LIB_6__::func_861(cParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_6__::func_868(cParam0, 4096);
	return true;
}

void func_4(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	cParam1->f_608 = uParam0->f_1;
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
	__LIB_9__::func_248(cParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_5__::func_23(cParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < cParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(cParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(cParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(cParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
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
		__LIB_6__::func_869(cParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_6__::func_869(cParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_6__::func_869(cParam1, 4);
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
		__LIB_6__::func_870(cParam1, __LIB_4__::func_513());
	}
	func_108(cParam1, uParam0);
	func_109(cParam1);
	if (cParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((cParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(char[4] cParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(cParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (cParam0->f_607 != 77)
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
	__LIB_0__::func_267(__LIB_6__::func_871(cParam0));
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
	__LIB_4__::func_514(cParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_6__::func_872(cParam0, 16384) && (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2) || __LIB_5__::func_371()))
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
				if (!__LIB_5__::func_371() && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
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
		func_123(cParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_6__::func_873(cParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_6__::func_864(cParam0)) };
			if (__LIB_6__::func_864(cParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(cParam0->f_607) };
			}
			if (!func_126(Var2))
			{
				__LIB_6__::func_869(cParam0, 1048576);
			}
			__LIB_6__::func_870(cParam0, 0);
			if (__LIB_6__::func_875(cParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_9__::func_59(cParam0, __LIB_1__::func_469(cParam0->f_607), 0);
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
			__LIB_6__::func_870(cParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[cParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_6__::func_864(cParam0)), __LIB_5__::func_371());
	}
	__LIB_9__::func_187(cParam0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_60(cParam0, 0);
	if (!__LIB_8__::func_659(cParam0, __LIB_6__::func_864(cParam0)))
	{
		__LIB_6__::func_870(cParam0, 0);
	}
	__LIB_8__::func_706(cParam0);
	__LIB_0__::func_11(cParam0);
	func_138(cParam0);
	__LIB_6__::func_869(cParam0, 2097152);
	__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_6__::func_860(cParam0, 4);
	}
	func_140(cParam0);
	__LIB_8__::func_718(cParam0, __LIB_6__::func_864(cParam0));
	__LIB_5__::func_105(__LIB_6__::func_866(cParam0));
	if (!__LIB_6__::func_872(cParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_6__::func_866(cParam0));
	}
	__LIB_9__::func_42(cParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_8__::func_660(cParam0);
	__LIB_9__::func_61(cParam0);
	__LIB_0__::func_11(cParam0);
	__LIB_8__::func_661(cParam0, 30f);
	__LIB_8__::func_662(cParam0, 40f);
	__LIB_9__::func_154(cParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(cParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(char[4] cParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_6__::func_862(cParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_6__::func_862(cParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_6__::func_877(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_6__::func_866(cParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_6__::func_869(cParam0, 64);
			}
			func_155(cParam0, 0);
			__LIB_14__::func_416(cParam0);
			if (func_157(cParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_878(cParam0)) && __LIB_6__::func_875(cParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_6__::func_878(cParam0), false);
				}
				__LIB_6__::func_879(cParam0, 1);
			}
			if (__LIB_6__::func_861(cParam0, -2147483648))
			{
				__LIB_6__::func_879(cParam0, 2);
			}
			break;
		case 1:
			if (func_160(cParam0))
			{
				__LIB_6__::func_860(cParam0, -2147483648);
				__LIB_6__::func_879(cParam0, 2);
			}
			func_155(cParam0, __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) > 4);
			break;
		case 2:
			if (func_2(cParam0, 0))
			{
				__LIB_6__::func_860(cParam0, -2147483648);
				__LIB_6__::func_879(cParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_6__::func_877(cParam0) < 2)
	{
	}
}

bool func_9(char[4] cParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_6__::func_861(cParam0, 1073741824 /* Float: 2f */))
	{
		bVar0 = true;
	}
	if (!func_162(bVar0) && !bVar0)
	{
		return false;
	}
	__LIB_11__::func_521(47);
	if (__LIB_10__::func_715(2))
	{
		__LIB_5__::func_234("poker_sp", 523);
	}
	func_166(28, 1);
	__LIB_1__::func_941(-1683351620);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[1 /*10*/], false);
	PED::SET_PED_CONFIG_FLAG(Local_1571[0 /*10*/], 167, false);
	__LIB_0__::func_60(Global_35);
	__LIB_0__::func_60(Local_1571[0 /*10*/]);
	__LIB_0__::func_60(Local_1571[1 /*10*/]);
	__LIB_0__::func_60(Local_1571[2 /*10*/]);
	__LIB_1__::func_748(&(iLocal_1602[0]), 1, 1);
	__LIB_1__::func_748(&(iLocal_1602[2]), 1, 1);
	__LIB_1__::func_748(&(iLocal_1602[1]), 1, 1);
	if (__LIB_0__::func_27(iLocal_1716, 1))
	{
		func_170();
	}
	__LIB_8__::func_944(Global_35, 0, 0);
	HUD::_DISPLAY_HUD_COMPONENT(-2106452847);
	__LIB_9__::func_254(cParam0, Local_1571[1 /*10*/], 1);
	__LIB_9__::func_254(cParam0, Local_1571[0 /*10*/], 1);
	if (__LIB_9__::func_950(47))
	{
		__LIB_14__::func_133(47, 0);
	}
	if (__LIB_9__::func_950(37))
	{
		__LIB_14__::func_133(37, 0);
	}
	func_175(cParam0, Local_1571[1 /*10*/], 2, 0);
	func_175(cParam0, Local_1571[2 /*10*/], 18, 0);
	func_175(cParam0, Local_1571[0 /*10*/], 23, 0);
	iVar1 = 0;
	while (iVar1 < iLocal_1527)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1527[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1527[iVar1]));
		}
		iVar1++;
	}
	CLOCK::PAUSE_CLOCK(false, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_176(&iLocal_77, 0);
	if (__LIB_2__::func_763(201, 1))
	{
		PED::_0x2B4CE170DE09F346(Local_370[1 /*10*/], joaat("IND3_BARBER_CHAT"));
		__LIB_2__::func_753(201, 0, 1, 0, 0);
	}
	if (__LIB_2__::func_763(142, 1))
	{
		__LIB_2__::func_753(142, 0, 1, 0, 0);
	}
	Local_370[1 /*10*/] = 0;
	Local_370[0 /*10*/] = 0;
	func_179(&Local_79);
	func_179(&Local_370);
	func_180(0);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	func_181(&(Local_1695[0 /*2*/].f_1), &(Local_1695[0 /*2*/]), 3273.164f, -1358.74f, 34.9994f, 3314.233f, -1275.878f, 59.1227f, 0, 0);
	func_181(&(Local_1695[1 /*2*/].f_1), &(Local_1695[1 /*2*/]), 2655.227f, -1179.318f, 51.6995f, 2658.785f, -1176.586f, 54.2987f, 0, 0);
	func_181(&(Local_1695[2 /*2*/].f_1), &(Local_1695[2 /*2*/]), 2658.503f, -1192.394f, 50.6251f, 2668.075f, -1170.966f, 55.4079f, 0, 0);
	func_181(&(Local_1695[4 /*2*/].f_1), &(Local_1695[4 /*2*/]), 2864.56f, -1371.028f, 46.4828f, 2845.764f, -1354.985f, 49.7442f, 0, 0);
	func_181(&(Local_1695[5 /*2*/].f_1), &(Local_1695[5 /*2*/]), 2564.818f, -1205.757f, 52.5332f, 2567.592f, -1200.831f, 54.4739f, 0, 0);
	func_181(&(Local_1695[6 /*2*/].f_1), &(Local_1695[6 /*2*/]), 2824.01f, -1409.14f, 43.8016f, 2828.346f, -1405.113f, 45.9026f, 0, 0);
	func_181(&(Local_1695[7 /*2*/].f_1), &(Local_1695[7 /*2*/]), 2636.357f, -1186.12f, 51.8853f, 2650.126f, -1171.367f, 56.0623f, 0, 0);
	ENTITY::REMOVE_MODEL_HIDE(3288.603f, -1305.979f, 50.838f, 1f, joaat("P_CHAIRCOMFY07X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2739.542f, -1152f, 48.691f, 1f, joaat("ANN_JAIL_MAIN_DOOR_01"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2846.526f, -1301.281f, 45.4481f, 2f, joaat("P_MARKETCART01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(3289.502f, -1318.605f, 41.776f, 0.2f, iLocal_29, 0);
	ENTITY::REMOVE_MODEL_HIDE(3288.441f, -1316.773f, 41.776f, 0.2f, iLocal_29, 0);
	ENTITY::REMOVE_MODEL_HIDE(3287.387f, -1318.626f, 41.776f, 0.2f, iLocal_29, 0);
	ENTITY::REMOVE_MODEL_HIDE(3285.33f, -1316.733f, 41.747f, 0.5f, iLocal_40, 0);
	ENTITY::REMOVE_MODEL_HIDE(3291.162f, -1320.61f, 41.738f, 0.5f, iLocal_40, 0);
	ENTITY::REMOVE_MODEL_HIDE(3285.094f, -1321.772f, 41.729f, 0.5f, iLocal_40, 0);
	ENTITY::REMOVE_MODEL_SWAP(3288.448f, -1312.786f, 41.773f, 1f, iLocal_31, iLocal_32, false);
	if (iLocal_1765 != -1 && PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_1765))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&iLocal_1765);
	}
	func_181(&(Local_1695[3 /*2*/].f_1), &(Local_1695[3 /*2*/]), 2625.746f, -1171.832f, 50.5646f, 2548.113f, -1183.719f, 56.0693f, 0, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2912.382f, -1493.104f, 40.5809f, 2595.452f, -1108.519f, 66.7033f, 0, 1);
	__LIB_1__::func_408(-1706438978, 0, 0);
	__LIB_0__::func_172(iLocal_1798);
	VEHICLE::SET_RANDOM_TRAINS(true);
	if (__LIB_6__::func_863(cParam0) != 0)
	{
		func_184(joaat("CLOTHING_HEIST_OUTFIT"), 1, 0, -142743235, 0);
		func_184(1902428294 /* GXTEntry: "The Wittemore" */, 1, 0, -142743235, 0);
		__LIB_9__::func_955(16, 1, 1);
		__LIB_9__::func_955(17, 1, 1);
		if (__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
		{
			func_184(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 1, -142743235, 0);
		}
	}
	AUDIO::_0x531A78D6BF27014B("MGBLK_Sounds");
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4380[iVar1]))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_4380[iVar1]);
		}
		iVar1++;
	}
	__LIB_0__::func_804(723021499);
	__LIB_0__::func_803(-789397228);
	__LIB_0__::func_804(-2022369555);
	__LIB_0__::func_804(1358491857);
	__LIB_5__::func_440("grand_korr_poker");
	ENTITY::_0x7A49D40DE437BC8D(Global_35, 1);
	__LIB_0__::func_172(iLocal_1799);
	PED::_0xE4EF4382E22C780C(Global_35);
	PED::_0x8D9DB115FBA8E23D(Global_35);
	__LIB_14__::func_420(285);
	__LIB_14__::func_420(286);
	__LIB_14__::func_420(936);
	__LIB_14__::func_420(937);
	__LIB_14__::func_420(945);
	__LIB_14__::func_420(946);
	__LIB_14__::func_420(947);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 5, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 8, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 0);
	__LIB_9__::func_433();
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1695[9 /*2*/].f_1))
	{
		__LIB_0__::func_484(&(Local_1695[9 /*2*/]), Local_1695[9 /*2*/].f_1, 0);
		__LIB_0__::func_172(Local_1695[9 /*2*/].f_1);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_4421);
	}
	__LIB_0__::func_804(-270094635);
	__LIB_9__::func_951(47, 0, 1);
	__LIB_9__::func_951(37, 0, 1);
	__LIB_3__::func_820(47, 0);
	__LIB_3__::func_820(37, 0);
	__LIB_11__::func_10(7, 0, 0);
	__LIB_4__::func_932(38, 1);
	__LIB_4__::func_932(42, 1);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1806))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1806);
		__LIB_0__::func_172(iLocal_1806);
	}
	__LIB_0__::func_8(&Global_1935630, 262144);
	func_197();
	PED::SET_PED_CONFIG_FLAG(Global_35, 411, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
	__LIB_0__::func_172(iLocal_1807);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("SERENDIPITY")))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SERENDIPITY"), false);
	}
	HUD::_DISPLAY_HUD_COMPONENT(372886907);
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	AICOVERPOINT::_0x7A1FDCF35EAA140F("grand_korr_poker_table_flipped");
	if (CAM::_0xAA235E2F2C09E952("script@Story@IND3@pullout"))
	{
		CAM::_0x2412216FCC7B4E3E("script@Story@IND3@pullout");
	}
	__LIB_8__::func_807(0, 1103626240 /* Float: 25f */);
	__LIB_1__::func_727(Global_35, 1);
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("KIT_BANDANA"));
	SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (iLocal_4486[iVar2])
		{
			__LIB_8__::func_820(iVar2);
		}
		iVar2++;
	}
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	__LIB_4__::func_954(&Var0, func_238(iParam0));
	return Var0;
}

void func_74(char[4] cParam0)
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
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_8__::func_663(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_8__::func_587(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_6__::func_863(cParam0) == 0)
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
		func_296(cParam0);
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
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_333(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_333(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_333(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_333(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_333(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_333(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_333(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_333(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_333(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_333(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_333(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_333(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_333(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_335();
						func_336(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_333(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_333(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_333(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
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
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
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
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
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
		func_373();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_333(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				Jump @6186; //curOff = 5968
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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
void func_84(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar0);
		if (__LIB_0__::func_13(32768))
		{
			iVar1 = __LIB_0__::func_700(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = __LIB_1__::func_753();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (__LIB_0__::func_702(iParam0))
	{
		__LIB_1__::func_559(iParam0, 0, 2);
	}
	else if (__LIB_1__::func_44(iParam0))
	{
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam1)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514.f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514.f_12 = 1;
					break;
				case 9:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
	}
}

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_397(cParam0);
	cParam0->f_634[0] = 65219;
	cParam0->f_634[1] = 65219;
	cParam0->f_637 = 0;
	__LIB_6__::func_883(cParam0, *uParam1);
	func_400(cParam0);
}

void func_109(char[4] cParam0)
{
	if (__LIB_0__::func_871())
	{
		iLocal_4453 = 17;
		iLocal_4454 = 1902428294; /* GXTEntry: "The Wittemore" */
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_42)
	{
		__LIB_1__::func_572(2549.555f, -1181.013f, 53.281f, 100f, 0, 0, 1, 1, 0);
		__LIB_0__::func_568(Global_36, 25f, 0);
	}
	__LIB_5__::func_521(0f);
	__LIB_9__::func_11(cParam0, 70);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SERENDIPITY"), true);
	func_405();
}

void func_123(char[4] cParam0)
{
	if (__LIB_0__::func_91())
	{
		func_407(&(cParam0->f_7375));
	}
}

bool func_126(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_409(Param0, Param0.f_3);
}

void func_138(char[4] cParam0)
{
	__LIB_9__::func_43(cParam0, iLocal_14, 32760);
	__LIB_9__::func_43(cParam0, iLocal_15, 8160);
	__LIB_9__::func_43(cParam0, iLocal_16, 32736);
	__LIB_9__::func_43(cParam0, iLocal_17, 16352);
	__LIB_9__::func_43(cParam0, iLocal_20, 16352);
	__LIB_9__::func_43(cParam0, iLocal_18, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_19, 8160);
	__LIB_9__::func_43(cParam0, iLocal_21, 8160);
	__LIB_9__::func_43(cParam0, iLocal_22, 8160);
	__LIB_9__::func_43(cParam0, iLocal_25, 31);
	__LIB_9__::func_43(cParam0, joaat("S_SAFE01X"), 1536);
	__LIB_9__::func_43(cParam0, iLocal_26, 448);
	__LIB_9__::func_43(cParam0, iLocal_27, 8);
	__LIB_9__::func_43(cParam0, iLocal_28, 8);
	__LIB_9__::func_43(cParam0, iLocal_29, 12544);
	__LIB_9__::func_43(cParam0, iLocal_30, 12288);
	__LIB_9__::func_43(cParam0, iLocal_31, 15360);
	__LIB_9__::func_43(cParam0, iLocal_32, 15360);
	__LIB_9__::func_43(cParam0, iLocal_33, 6144);
	__LIB_9__::func_43(cParam0, iLocal_34, 6144);
	__LIB_9__::func_43(cParam0, iLocal_35, 16);
	__LIB_9__::func_43(cParam0, iLocal_36, 32);
	__LIB_9__::func_43(cParam0, iLocal_37, 32);
	__LIB_9__::func_43(cParam0, iLocal_38, 4096);
	__LIB_9__::func_43(cParam0, iLocal_39, 8);
	__LIB_9__::func_43(cParam0, iLocal_24, 1024);
	__LIB_9__::func_43(cParam0, iLocal_23, 1024);
	__LIB_9__::func_43(cParam0, iLocal_40, 16352);
	__LIB_9__::func_43(cParam0, iLocal_41, 32);
	__LIB_8__::func_709(cParam0, sLocal_60, 512, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_62, 2048, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_63, 4064, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_64, 3, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_65, 24576, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_66, 8, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_58, 8, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_59, 8, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_69, 8, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_70, 8192, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_71, 24576, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_67, 16, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_68, 16, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_74, 2048, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_72, 32, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_73, 512, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_75, 1536, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_76, 2048, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_61, 48, 2, -1);
	__LIB_8__::func_708(cParam0, "script_story@ind3@ig@ig_9_open_safe", 3072);
	__LIB_8__::func_708(cParam0, sLocal_4411, 30720);
	func_429(cParam0, "script@story@ind3@leadout@int@leadout", &(iLocal_1720[30]), 1, 0, "pbl_Badsuit", 50f, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_1_wait_in_tailors@ig_1_wait_in_tailors", &(iLocal_1720[0]), 3, 0, "pbl_Loop", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_2_walk_to_barbers@ig_2_walk_to_barbers", &(iLocal_1720[1]), 3, 0, "pbl_IND3_IG2_WALK_TO_BARBERS_P1", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_2_walk_to_barbers@ig_2_walk_to_barbers", &(iLocal_1720[2]), 2, 0, "pbl_IND3_IG2_WALK_TO_BARBERS_P2", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_3_wait_in_barbers@ig_3_wait_in_barbers", &(iLocal_1720[3]), 15, 0, "pbl_Enter", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_6_javier_guard@ig_6_javier_guard", &(iLocal_1720[4]), 64, 0, "pbl_IND3_IG6_GUARD_LEAVES", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_6_javier_guard@ig_6_javier_guard", &(iLocal_1720[5]), 384, 0, "pbl_IND3_IG6_JAVIER_RETURNS", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_6_javier_guard@ig_6_javier_guard", &(iLocal_1720[6]), 256, 0, "pbl_IND3_IG6_JAVIER_MOVES", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_8_walk_to_safe@ig_8_walk_to_safe", &(iLocal_1720[7]), 512, 0, "pbl_IND3_IG8_WALK_TO_SAFE", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_8_walk_to_safe@ig_8_walk_to_safe", &(iLocal_1720[8]), 512, 0, "pbl_IND3_IG8__HERE_WE_ARE", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_9_guard_loop@ig_9_guard_loop", &(iLocal_1720[9]), 1536, 0, "pbl_IND3_IG9_GUARD_LOOP", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_9_open_safe@ig_9_open_safe_javier", &(iLocal_1720[11]), 1536, 0, "pbl_Enter", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_9_open_safe@ig_9_open_safe_pitboss", &(iLocal_1720[12]), 1536, 0, "pbl_floor_loop", 0, 0);
	func_429(cParam0, "script@story@ind3@ig@ig_10_loot_safe@ig_10_loot_safe_bills", &(iLocal_1720[13]), 1024, 0, "pbl_IND3_IG10_LOOT_SAFE_BILLS", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_11_walk_to_bar@ig_11_walk_to_bar", &(iLocal_1720[15]), 2048, 0, "pbl_IND3_IG11_WALK_TO_BAR", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_11_walk_to_bar@ig_11_walk_to_bar", &(iLocal_1720[16]), 2048, 0, "pbl_IND3_IG11_HOPE_YOU_HAD_FUN", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_12_poker_player_cower@ig_12_poker_player_cower", &(iLocal_1720[17]), 12288, 0, "pbl_Flinching", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_strauss_poker@ig_strauss_poker", &(iLocal_1720[27]), 448, 0, "PBL_GLANCE_IDLE", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_strauss_poker@ig_strauss_poker", &(iLocal_1720[28]), 448, 0, "PBL_IDLE", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_strauss_poker@ig_strauss_poker", &(iLocal_1720[29]), 448, 0, "PBL_IDLE", 0, 1);
	func_429(cParam0, "script@story@ind3@leadin@mcs5@base_dialogue_base", &(iLocal_1720[36]), 6144, 0, "pl_leadin_baseDialogue", 0, 1);
	func_429(cParam0, "script@story@IND3@IG@ig_docks_meeting@ig_docks_meeting", &(iLocal_1720[31]), 56, 0, "pbl_IND3_IG_DOCKS_MEETING", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_docks_meeting@ig_docks_meeting_p2_javier_strauss", &(iLocal_1720[32]), 48, 0, "pbl_base01", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_docks_meeting@ig_docks_meeting_p2_trelawny_guard", &(iLocal_1720[33]), 48, 0, "pbl_Idle_A", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_13_guard_downstairs_01@ig_13_guard_downstairs_01", &(iLocal_1720[18]), 12288, 0, "pbl_Guard_01", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_13_guard_downstairs_01@ig_13_guard_downstairs_02", &(iLocal_1720[19]), 12288, 0, "pbl_Guard_02", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_13_guard_downstairs_01@ig_13_guard_downstairs_03", &(iLocal_1720[20]), 12288, 0, "pbl_Guard_03", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_14_coach_chat@ig_14_coach_chat", &(iLocal_1720[21]), 8, 0, "pbl_Coach_Chat", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_15_leave_coach@ig_15_leave_coach", &(iLocal_1720[22]), 24, 2, "pbl_Leave_Coach", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_18_desmond_dealer_idle@ig_18_desmond_dealer_idle", &(iLocal_1720[23]), 0, 0, "pbl_Loop", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_19_guards_investigate@ig_19_guards_investigate", &(iLocal_1720[24]), 2048, 0, "pbl_Guards_Investigate", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig20_strauss_bottle@ig20_strauss_bottle", &(iLocal_1720[25]), 12288, 0, "pbl_action", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig20_strauss_bottle@ig20_javier", &(iLocal_1720[26]), 12288, 0, "pbl_action", 0, 1);
	func_429(cParam0, "cutscene@ind3_mcs8", &(iLocal_1720[39]), 384, 258, "MultiStart", 0, 1);
	func_429(cParam0, "script@story@ind3@ig@ig_18_desmond_dealer_idle@ig_18_desmond_dealer_idle", &(iLocal_1720[23]), 1536, 0, "pbl_Loop", 0, 1);
	__LIB_9__::func_238(cParam0, iLocal_1720[23], "pbl_Dialogue", 1536);
	func_429(cParam0, "script@story@ind3@ig@ig_10_loot_safe@ig_10_loot_safe", &(iLocal_1720[14]), 1024, 0, "pbl_IND3_IG10_LOOT_SAFE", 0, 1);
	func_429(cParam0, "script@story@ind3@leadout@MCS4@leadout", &(iLocal_1720[35]), 512, 2, "pbl_IND3_MCS4_Leadout", 0, 1);
	func_429(cParam0, "lightrig@mission@industry3_shootout", &(iLocal_1720[41]), 14336, 0, 0, 0, 1);
	func_429(cParam0, "script@story@ind3@leadin@mcs1@base", &(iLocal_1720[34]), 24, 1, 0, 0, 1);
	__LIB_9__::func_238(cParam0, iLocal_1720[0], "pbl_IG1_Walk_Exit", 3);
	__LIB_9__::func_238(cParam0, iLocal_1720[0], "pbl_IG1_Cower", 1);
	__LIB_9__::func_238(cParam0, iLocal_1720[0], "pbl_IND3_IG1_WAIT_IN_TAILORS", 1);
	__LIB_9__::func_238(cParam0, iLocal_1720[32], "pbl_Exit", 48);
	__LIB_9__::func_238(cParam0, iLocal_1720[33], "pbl_Exit", 48);
	__LIB_9__::func_238(cParam0, iLocal_1720[12], "pbl_PitBoss_Attack", 1536);
	__LIB_9__::func_238(cParam0, iLocal_1720[25], "pbl_Breakout01", 4096);
	__LIB_9__::func_238(cParam0, iLocal_1720[25], "pbl_Breakout02", 4096);
	__LIB_9__::func_238(cParam0, iLocal_1720[30], "pbl_Scruffy", 1);
	__LIB_9__::func_238(cParam0, iLocal_1720[3], "pbl_Exit", 12);
	__LIB_9__::func_238(cParam0, iLocal_1720[23], "pbl_Dialogue", 1536);
	__LIB_9__::func_44(cParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1536, -1, 0);
	__LIB_9__::func_44(cParam0, joaat("WEAPON_REVOLVER_SCHOFIELD"), 5632, -1, 0);
	__LIB_9__::func_44(cParam0, joaat("WEAPON_REPEATER_WINCHESTER"), 4096, -1, 0);
}

void func_140(char[4] cParam0)
{
	__LIB_6__::func_869(cParam0, 1);
	__LIB_14__::func_419(285);
	__LIB_14__::func_419(286);
	__LIB_14__::func_419(936);
	__LIB_14__::func_419(937);
	__LIB_14__::func_419(945);
	__LIB_14__::func_419(946);
	__LIB_14__::func_419(947);
	__LIB_8__::func_922(5);
	__LIB_8__::func_923(5);
	if (__LIB_6__::func_864(cParam0) >= iLocal_48 || (__LIB_6__::func_864(cParam0) == iLocal_47 && __LIB_6__::func_872(cParam0, 4)))
	{
		func_180(1);
		__LIB_0__::func_804(-789397228);
		__LIB_0__::func_804(1358491857);
		__LIB_0__::func_401(-614421509);
		__LIB_0__::func_401(604920544);
		__LIB_0__::func_401(joaat("SER_01_GRANDKOR3"));
		func_437(0);
	}
	else
	{
		__LIB_0__::func_803(-789397228);
		__LIB_0__::func_803(1358491857);
		__LIB_0__::func_401(1056170594);
		__LIB_0__::func_401(-873881483);
		__LIB_0__::func_401(1157695860);
		__LIB_0__::func_401(146172383);
	}
	__LIB_8__::func_781();
}

void func_155(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 134217728))
	{
		func_138(cParam0);
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 134217728);
	}
	if (bParam1 && !__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 536870912))
	{
		if (__LIB_9__::func_65(cParam0, __LIB_9__::func_40(cParam0), 0))
		{
			__LIB_8__::func_707(cParam0, __LIB_9__::func_40(cParam0), 536870912);
		}
	}
	if (__LIB_6__::func_862(cParam0, 8192))
	{
		if (!__LIB_6__::func_862(cParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(cParam0->f_1126), __LIB_6__::func_864(cParam0)))
			{
				__LIB_6__::func_868(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_9__::func_65(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_6__::func_868(cParam0, 8192);
	}
}

bool func_157(char[4] cParam0)
{
	if (__LIB_6__::func_884(cParam0) < 1)
	{
		func_448(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0);
		func_449(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_6__::func_872(cParam0, 4) && !__LIB_5__::func_371()) && !__LIB_6__::func_875(cParam0, 3))
	{
		if (!__LIB_6__::func_872(cParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_6__::func_869(cParam0, 32);
			}
			else
			{
				func_450(cParam0);
			}
		}
		if (__LIB_6__::func_872(cParam0, 32))
		{
			func_451(cParam0);
		}
	}
	switch (__LIB_6__::func_884(cParam0))
	{
		case -1:
		case 0:
			__LIB_6__::func_885(cParam0, 1);
			break;
		case 1:
			if (func_453(cParam0))
			{
				if (__LIB_6__::func_872(cParam0, 4096))
				{
					__LIB_6__::func_885(cParam0, 2);
				}
				else
				{
					__LIB_6__::func_885(cParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_66(cParam0))
			{
				__LIB_6__::func_885(cParam0, 3);
			}
			break;
		case 3:
			if (func_455(cParam0))
			{
				__LIB_6__::func_885(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_160(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_864(cParam0) == 26)
	{
		__LIB_6__::func_886(cParam0, 0);
		return true;
	}
	if (func_457(cParam0))
	{
		iVar0 = __LIB_6__::func_864(cParam0);
		__LIB_6__::func_870(cParam0, __LIB_9__::func_40(cParam0));
		if (__LIB_6__::func_864(cParam0) == 26)
		{
			__LIB_6__::func_886(cParam0, 0);
			return true;
		}
		else if (__LIB_8__::func_705(cParam0, iVar0, 128))
		{
			func_457(cParam0);
		}
	}
	return false;
}

bool func_162(bool bParam0)
{
	if (!__LIB_0__::func_27(iLocal_1718, 8192))
	{
		__LIB_19__::func_586(&(Local_1821[0 /*1279*/]), 0, 1);
		__LIB_0__::func_37(&(Local_1821[0 /*1279*/].f_1273));
		Local_1821[0 /*1279*/].f_1276 = 0;
		Local_1821[0 /*1279*/].f_1277 = 9;
		__LIB_1__::func_683(&iLocal_1718, 8192);
		if (!bParam0)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_27(iLocal_1718, 16384))
	{
		__LIB_19__::func_586(&(Local_1821[1 /*1279*/]), 1, 1);
		__LIB_0__::func_37(&(Local_1821[1 /*1279*/].f_1273));
		Local_1821[1 /*1279*/].f_1276 = 0;
		Local_1821[1 /*1279*/].f_1277 = 9;
		__LIB_1__::func_683(&iLocal_1718, 16384);
		if (!bParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_166(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	__LIB_6__::func_656(iParam0, 1);
	__LIB_1__::func_830(iVar0);
	if (bParam1)
	{
		__LIB_10__::func_688(&Global_1899778, iVar0);
	}
	__LIB_6__::func_581(iVar0);
	return true;
}

void func_170()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_1571)
	{
		if (__LIB_0__::func_272(Local_1571[iVar0 /*10*/], 0))
		{
			__LIB_11__::func_173(Local_1571[iVar0 /*10*/], &(Local_969[iVar0 /*164*/]), 1);
		}
		iVar0++;
	}
	__LIB_1__::func_681(&iLocal_1716, 1);
}

void func_175(char[4] cParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (bParam3)
	{
		__LIB_9__::func_147(cParam0, iParam1, 128);
	}
	else
	{
		__LIB_9__::func_141(cParam0, iParam1, 128);
		__LIB_9__::func_254(cParam0, iParam1, 1);
	}
}

void func_176(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_493(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_179(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*10*/]))
		{
			if (!__LIB_0__::func_27((iParam0[iVar0 /*10*/])->f_1, 16))
			{
				__LIB_0__::func_490(iParam0[iVar0 /*10*/], 0);
			}
			else if (__LIB_4__::func_274((*iParam0)[iVar0 /*10*/], 1))
			{
				__LIB_8__::func_936((*iParam0)[iVar0 /*10*/], 1);
			}
			(*iParam0)[iVar0 /*10*/] = 0;
		}
		func_176(&((iParam0[iVar0 /*10*/])->f_8), 0);
		(iParam0[iVar0 /*10*/])->f_1 = 0;
		(iParam0[iVar0 /*10*/])->f_2 = 0;
		iVar0++;
	}
}

void func_180(bool bParam0)
{
	if (iLocal_4406 == 0)
	{
		iLocal_4406 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(3289.768f, -1309.406f, 41.792f, joaat("SER_GRANDKOR_L1_INT"));
	}
	if (iLocal_4407 == 0)
	{
		iLocal_4407 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(3288.151f, -1300.511f, 50.9101f, joaat("SER_GRANDKOR_L2_INT"));
	}
	if (bParam0)
	{
		TASK::_0x6C269F673C47031E(iLocal_4420);
	}
	else
	{
		TASK::_0x9667CCE29BFA0780(iLocal_4420);
	}
	if (iLocal_4406 != 0 && iLocal_4407 != 0)
	{
		if (bParam0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(iLocal_4406))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4406);
			}
			if (!INTERIOR::IS_INTERIOR_READY(iLocal_4407))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4407);
			}
		}
		else
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_4406);
			INTERIOR::UNPIN_INTERIOR(iLocal_4407);
		}
	}
}

void func_181(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, int iParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { __LIB_2__::func_66(vParam2, vParam5, iParam8) };
	vVar3 = { __LIB_2__::func_67(vParam2, vParam5, iParam8) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0xA1CFB35069D23C23(*uParam0);
		POPULATION::_0x74C2B3DC0B294102(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, bParam9);
	}
}

int func_184(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_184(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

void func_197()
{
	__LIB_1__::func_948(2145058250, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(64259291, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(398241243, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(90310950, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(178754137, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(441201058, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-331983497, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-7373783, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-81267534, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(685297339, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-1035861617, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-721377524, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-1514256248, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(1381081784, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-1907171172, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(1603339033, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-1217326873, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-382798750, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(1624230601, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(1473624189, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(104193638, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-221005918, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(34778421, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-263452248, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-1194059083, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(638645553, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(612230150, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-215219869, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-1120193049, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-2022127005, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-1715573010, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(1754631325, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(119948423, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(351789098, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(-2113194495, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(1962482653, 0, 0f, 0, 1, 0f, 1, 0);
}

struct<4> func_238(int iParam0)
{
	struct<4> Var0;
	if (iParam0 == iLocal_42)
	{
		Var0 = { 2547.467f, -1180.519f, 52.3152f };
		Var0.f_3 = 317.2244f;
	}
	else if (iParam0 == iLocal_43)
	{
		Var0 = { 2550.584f, -1176.632f, 52.3111f };
		Var0.f_3 = 237.7765f;
	}
	else if (iParam0 == iLocal_44)
	{
		Var0 = { 2648.514f, -1178.48f, 52.208f };
		Var0.f_3 = 265.3373f;
	}
	else if (iParam0 == iLocal_45)
	{
		Var0 = { 2661.471f, -1183.814f, 52.2533f };
		Var0.f_3 = 296.563f;
	}
	else if (iParam0 == iLocal_46)
	{
		Var0 = { 2820.031f, -1346.295f, 45.1522f };
		Var0.f_3 = 226.7918f;
	}
	else if (iParam0 == iLocal_47)
	{
		Var0 = { 3285.378f, -1325.993f, 42.724f };
		Var0.f_3 = -88.97f;
	}
	else if ((iParam0 == iLocal_48 || iParam0 == iLocal_49) || iParam0 == iLocal_50)
	{
		Var0 = { 3290.185f, -1317.589f, 41.7601f };
		Var0.f_3 = 122.1251f;
	}
	else if (iParam0 == iLocal_51)
	{
		Var0 = { 3290.809f, -1316.858f, 41.7564f };
		Var0.f_3 = 53.8067f;
	}
	else if (iParam0 == iLocal_52)
	{
		Var0 = { 3283.93f, -1296.49f, 50.9888f };
		Var0.f_3 = 171.62f;
	}
	else if (iParam0 == iLocal_53)
	{
		Var0 = { 3286.869f, -1304.827f, 50.8247f };
		Var0.f_3 = 354.3643f;
	}
	else if (iParam0 == iLocal_54)
	{
		Var0 = { 3288.454f, -1303.566f, 41.916f };
		Var0.f_3 = 151.9723f;
	}
	else if (iParam0 == iLocal_55)
	{
		Var0 = { 3288.454f, -1303.566f, 41.916f };
		Var0.f_3 = 151.9723f;
	}
	else if (iParam0 == iLocal_56)
	{
		Var0 = { 3277.93f, -1346.695f, 42.2997f };
		Var0.f_3 = 115.5149f;
	}
	else if (iParam0 == iLocal_57)
	{
		Var0 = { 2949.225f, -1129.097f, 42.4428f };
		Var0.f_3 = 130.5491f;
	}
	return Var0;
}

void func_296(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
	{
		if (__LIB_6__::func_872(cParam0, 16))
		{
			__LIB_9__::func_70(cParam0, 0);
		}
		if (func_449(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_333(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
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
			__LIB_1__::func_757(iVar5);
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
				func_333(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_11__::func_838(28);
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
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
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
			__LIB_4__::func_129(iParam0);
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
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_4__::func_130(iParam0, 0, 0, 0);
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
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_333(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_333(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_333(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_333(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_333(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_333(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_333(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_11__::func_838(24);
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
					func_333(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_333(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_17__::func_907(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_18__::func_161(iParam0);
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
				func_333(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_335()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_722();
	func_723();
	func_724();
	func_725();
	func_726();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_184(iParam0, 1, 1, -142743235, 1);
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

void func_373()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_768(&uVar4, &iVar1, &iVar2, &iVar3)))
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
		__LIB_1__::func_103(iVar3, 0, 0);
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

void func_397(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_807(cParam0, iVar0);
		iVar0++;
	}
}

void func_400(char[4] cParam0)
{
	__LIB_9__::func_45(cParam0, iLocal_42, iLocal_43, 124800, 125021, 125070, 125121, 125533, "IND3_INT", 16386, -1);
	__LIB_9__::func_45(cParam0, iLocal_43, iLocal_44, 125850, 126029, 126047, 126412, 127202, "", 16384, -1);
	__LIB_9__::func_45(cParam0, iLocal_44, iLocal_45, 127284, 127548, 127557, 127770, 128154, "", 16384, -1);
	__LIB_9__::func_45(cParam0, iLocal_45, iLocal_46, 128174, 128418, 128468, 128810, 130978, "", 16384, -1);
	__LIB_9__::func_45(cParam0, iLocal_46, iLocal_47, 131199, 131428, 131548, 131651, 132746, "", 16384, -1);
	__LIB_9__::func_45(cParam0, iLocal_47, iLocal_48, 132940, 133413, 133628, 134361, 135075, "IND3_MCS1", 66, -1);
	__LIB_9__::func_45(cParam0, iLocal_48, iLocal_49, 135274, 135782, 135918, 136131, 136297, "IND3_MCS7", 2114, -1);
	__LIB_9__::func_45(cParam0, iLocal_49, iLocal_50, 136346, 136872, 137014, 137298, 137475, "IND3_MCS2", 2114, -1);
	__LIB_9__::func_45(cParam0, iLocal_50, iLocal_51, 137528, 138139, 138199, 138429, 138674, "IND3_MCS3", 2114, -1);
	__LIB_9__::func_45(cParam0, iLocal_51, iLocal_52, 138739, 139258, 139320, 139829, 141695, "IND3_MCS4", 66, -1);
	__LIB_9__::func_45(cParam0, iLocal_52, iLocal_53, 141744, 142435, 142444, 142655, 145861, "", 64, -1);
	__LIB_9__::func_45(cParam0, iLocal_53, iLocal_54, 145908, 146514, 146523, 147403, 147961, "", 64, -1);
	__LIB_9__::func_45(cParam0, iLocal_54, iLocal_55, 148095, 148971, 149431, 150150, 150823, "IND3_MCS5", 66, -1);
	__LIB_9__::func_45(cParam0, iLocal_55, iLocal_56, 150893, 151784, 151803, 151916, 152382, "", 64, -1);
	__LIB_9__::func_45(cParam0, iLocal_56, iLocal_57, 152568, 152920, 152943, 153123, 153646, "", 64, -1);
	__LIB_9__::func_45(cParam0, iLocal_57, 26, 153730, 153739, 154104, 154229, 154829, "IND3_EXT", 18, -1);
}

void func_405()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = __LIB_0__::func_398(iVar0);
		iVar3 = 0;
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1)) && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, __LIB_0__::func_559(5), true, 0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			func_893(iVar1, func_891(iVar2), func_892(iVar2), 2, 1073741824 /* Float: 2f */);
			iVar3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_891(iVar2), joaat("PROP_HITCHINGPOST"), 2f, 0, false);
			__LIB_8__::func_810(iVar0);
			iLocal_4486[iVar0] = 1;
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3))
			{
				TASK::_TASK_USE_SCENARIO_POINT(iVar1, iVar3, "", -1, false, true, 0, false, -1f, false);
			}
			else
			{
				TASK::TASK_STAND_STILL(iVar1, -1);
			}
			iVar2++;
		}
		iVar0++;
	}
}

void func_407(var uParam0)
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
		func_899(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_901(uParam0);
		func_902(uParam0);
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

int func_409(vector3 vParam0, var uParam3)
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
		iVar0 = func_910(0, 0);
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

void func_429(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, float fParam6, bool bParam7)
{
	int iVar0;
	if (!__LIB_5__::func_459(iParam3, __LIB_6__::func_864(cParam0)) && !__LIB_5__::func_459(iParam3, __LIB_9__::func_40(cParam0)))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return;
	}
	iVar0 = __LIB_4__::func_968(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_460(&(cParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		*uParam2 = ANIMSCENE::_CREATE_ANIM_SCENE(cParam1, iParam4, sParam5, false, true);
	}
	cParam0->f_1126[iVar0 /*67*/].f_1 = *uParam2;
	cParam0->f_1126[iVar0 /*67*/] = cParam1;
	cParam0->f_1126[iVar0 /*67*/].f_3 = (cParam0->f_1126[iVar0 /*67*/].f_3 || iParam3);
	cParam0->f_1126[iVar0 /*67*/].f_65 = fParam6;
	cParam0->f_1126[iVar0 /*67*/].f_66 = bParam7;
	if (!bParam7)
	{
		__LIB_0__::func_7(&(cParam0->f_1126[iVar0 /*67*/].f_2), 4);
	}
}

bool func_437(int iParam0)
{
	int iVar0;
	__LIB_1__::func_408(-1706438978, 1, 0);
	__LIB_4__::func_495(142);
	__LIB_4__::func_524(141);
	__LIB_10__::func_36(3285.792f, -1325.603f, 43.08399f, "korrigan_props_default", 141, joaat("SER_GRANDKOR_L1_INT"), 1, 0, 0);
	__LIB_10__::func_36(3285.792f, -1325.603f, 43.08399f, "korrigan_props_poker", 142, joaat("SER_GRANDKOR_L1_INT"), 1, 0, 0);
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(3288.815f, -1309.385f, 41.7978f, joaat("SER_GRANDKOR_L1_INT"));
	INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "korrigan_props_poker", 0);
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "korrigan_props_default", true);
	__LIB_5__::func_441("grand_korr_poker");
	return (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "korrigan_props_poker") && !INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "korrigan_props_default"));
}

bool func_448(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_6__::func_872(cParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_6__::func_866(cParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(cParam0->f_607) };
	}
	if (func_979(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_449(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5411))
	{
		if (!__LIB_6__::func_872(cParam0, 16777216))
		{
			if (!__LIB_8__::func_667(cParam0))
			{
				__LIB_6__::func_869(cParam0, 16777216);
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
					__LIB_6__::func_869(cParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							__LIB_6__::func_869(cParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_6__::func_872(cParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(cParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_6__::func_874(cParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_6__::func_874(cParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_6__::func_874(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			__LIB_6__::func_869(cParam0, 1);
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
		if (__LIB_6__::func_872(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_6__::func_872(cParam0, 32768))
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
			if (!__LIB_6__::func_872(cParam0, 16))
			{
				__LIB_6__::func_869(cParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		__LIB_8__::func_598(cParam0, bParam1);
		if (!__LIB_6__::func_872(cParam0, 256))
		{
			if (!__LIB_6__::func_872(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_893(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(cParam0);
			Call_Loc(cParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_450(char[4] cParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_6__::func_872(cParam0, 32) && __LIB_6__::func_875(cParam0, 3))
	{
		if (__LIB_4__::func_544(cParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_6__::func_869(cParam0, 32);
		}
	}
	if (!__LIB_6__::func_872(cParam0, 32))
	{
		if (func_989(&(cParam0->f_609), cParam0->f_607))
		{
			__LIB_6__::func_869(cParam0, 32);
		}
	}
}

void func_451(char[4] cParam0)
{
	struct<4> Var0;
	if (!__LIB_6__::func_872(cParam0, 128))
	{
		if (__LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_8__::func_668(cParam0);
			if (func_991(cParam0))
			{
				__LIB_5__::func_326(&(cParam0->f_10792));
				__LIB_6__::func_887(cParam0, 2097152);
				__LIB_6__::func_881(cParam0, 16384);
				__LIB_6__::func_869(cParam0, 128);
			}
			return;
		}
		if (__LIB_6__::func_875(cParam0, 1))
		{
			return;
		}
		if (__LIB_6__::func_872(cParam0, 64))
		{
			__LIB_8__::func_668(cParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_6__::func_866(cParam0))}, 4);
			if (func_993(cParam0, Var0))
			{
				if (__LIB_6__::func_884(cParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_6__::func_869(cParam0, 128);
			}
		}
		else
		{
			if (__LIB_6__::func_884(cParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_6__::func_869(cParam0, 128);
		}
	}
}

bool func_453(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_155(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_448(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_449(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_6__::func_872(cParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(cParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_6__::func_875(cParam0, 1))
	{
		if (!__LIB_0__::func_75(&(cParam0->f_13115)))
		{
			__LIB_1__::func_283(&(cParam0->f_13115), 0);
		}
		if (__LIB_0__::func_265(&(cParam0->f_13115)) < 30f)
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

bool func_455(char[4] cParam0)
{
	int iVar0;
	if ((__LIB_6__::func_864(cParam0) == iLocal_47 && !__LIB_6__::func_872(cParam0, 4)) && !__LIB_0__::func_266(Global_35, 2858.862f, -1370.054f, 43.5571f, 10f, 1, 1))
	{
		func_893(Global_35, 2858.862f, -1370.054f, 43.5571f, 47.2094f, 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_46)
	{
		iVar0 = -433615745;
		if (__LIB_6__::func_864(cParam0) >= iLocal_51)
		{
			iVar0 = -193269670;
		}
		if (!func_979(cParam0, 2, &(Local_1571[1 /*10*/]), 0, 0, 0, 0, 0, 1, iVar0, 1, 0, 1, 0))
		{
			return false;
		}
		if (!func_979(cParam0, 18, &(Local_1571[2 /*10*/]), 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
		{
			return false;
		}
	}
	if (!func_979(cParam0, 23, &(Local_1571[0 /*10*/]), 0, 0, 0, 0, 0, 1, 1018353621, 1, 0, 1, 0))
	{
		return false;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(Local_1571[0 /*10*/]);
	if (!func_1000(cParam0))
	{
		return false;
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_48 || (__LIB_6__::func_864(cParam0) == iLocal_47 && __LIB_6__::func_872(cParam0, 4)))
	{
		__LIB_0__::func_804(-789397228);
		__LIB_0__::func_804(1358491857);
		__LIB_0__::func_401(-614421509);
		__LIB_0__::func_401(604920544);
		__LIB_0__::func_401(joaat("SER_01_GRANDKOR3"));
		if ((!STREAMING::_IS_IMAP_ACTIVE(-614421509) || !STREAMING::_IS_IMAP_ACTIVE(604920544)) || !STREAMING::_IS_IMAP_ACTIVE(joaat("SER_01_GRANDKOR3")))
		{
			return false;
		}
		func_180(1);
		if (__LIB_6__::func_864(cParam0) <= iLocal_56)
		{
			if (!INTERIOR::IS_INTERIOR_READY(iLocal_4406) || !INTERIOR::IS_INTERIOR_READY(iLocal_4407))
			{
				return false;
			}
		}
		if (__LIB_6__::func_864(cParam0) != iLocal_57)
		{
			if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("SERENDIPITY")))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SERENDIPITY"), true);
			}
		}
		if (__LIB_6__::func_864(cParam0) != iLocal_57 && !TASK::_0xF97F462779B31786(iLocal_4420))
		{
			return false;
		}
	}
	else
	{
		__LIB_0__::func_803(-789397228);
		__LIB_0__::func_803(1358491857);
		__LIB_0__::func_401(1056170594);
		__LIB_0__::func_401(-873881483);
		__LIB_0__::func_401(1157695860);
		__LIB_0__::func_401(146172383);
		if (((!STREAMING::_IS_IMAP_ACTIVE(1056170594) || !STREAMING::_IS_IMAP_ACTIVE(-873881483)) || !STREAMING::_IS_IMAP_ACTIVE(1157695860)) || !STREAMING::_IS_IMAP_ACTIVE(146172383))
		{
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_43)
	{
		__LIB_9__::func_469(-1035468800 /* Float: -50f */);
		__LIB_9__::func_437();
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_48 || (__LIB_6__::func_864(cParam0) == iLocal_47 && __LIB_6__::func_872(cParam0, 4)))
	{
		if (!func_437(0))
		{
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_47 && __LIB_6__::func_864(cParam0) <= iLocal_53)
	{
		if (!AUDIO::_0xD9130842D7226045("MGBLK_Sounds", 1))
		{
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_42)
	{
		__LIB_0__::func_121(142, 32);
		__LIB_5__::func_458(142);
		if (func_1003(cParam0, 0, 1))
		{
			__LIB_9__::func_62(cParam0, Local_370[0 /*10*/], "U_M_M_NBXTAILOR_01", 0, 0, 0, 0);
		}
		else
		{
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_48 && __LIB_6__::func_864(cParam0) <= iLocal_53)
	{
		__LIB_1__::func_948(-1035861617, 1, 1f, 0, 0, 0f, 1, 0);
		__LIB_1__::func_948(-721377524, 1, -1f, 0, 0, 0f, 1, 0);
	}
	__LIB_8__::func_926(5);
	__LIB_8__::func_784(5);
	__LIB_14__::func_419(285);
	__LIB_14__::func_419(286);
	__LIB_14__::func_419(936);
	__LIB_14__::func_419(937);
	__LIB_14__::func_419(945);
	__LIB_14__::func_419(946);
	__LIB_14__::func_419(947);
	if (__LIB_6__::func_864(cParam0) >= iLocal_47 && __LIB_6__::func_864(cParam0) <= iLocal_54)
	{
		func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_43)
	{
		__LIB_4__::func_239(Global_35);
		PED::CLEAR_PED_ENV_DIRT(Global_35);
		if (!__LIB_1__::func_707(iLocal_4454, 1, 0))
		{
			func_333(iLocal_4454, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		__LIB_1__::func_697(iLocal_4453, 1, 1);
	}
	func_1009(1);
	if (__LIB_6__::func_864(cParam0) == iLocal_42)
	{
		func_184(joaat("CLOTHING_HEIST_OUTFIT"), 1, 0, -142743235, 0);
		func_184(1902428294 /* GXTEntry: "The Wittemore" */, 1, 0, -142743235, 0);
	}
	func_1010(cParam0);
	__LIB_9__::func_42(cParam0, Global_35, "ARTHUR", 0);
	__LIB_9__::func_42(cParam0, Local_1571[0 /*10*/], "TRELAWNY", 0);
	__LIB_9__::func_42(cParam0, Local_1571[1 /*10*/], "JAVIER", 0);
	__LIB_9__::func_42(cParam0, Local_1571[2 /*10*/], "STRAUSS", 0);
	if (__LIB_6__::func_864(cParam0) >= iLocal_46)
	{
	}
	else if (__LIB_6__::func_864(cParam0) > iLocal_42)
	{
		__LIB_1__::func_971(0);
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_47)
	{
		fLocal_4452 = 0f;
		__LIB_5__::func_521(fLocal_4452);
		if (__LIB_6__::func_864(cParam0) <= iLocal_53)
		{
			func_1012();
		}
	}
	else
	{
		fLocal_4452 = 1f;
		__LIB_5__::func_521(fLocal_4452);
	}
	__LIB_9__::func_14(cParam0, 172157);
	__LIB_9__::func_15(cParam0, 173052);
	__LIB_9__::func_16(cParam0, 178720);
	__LIB_11__::func_219(cParam0, 179741);
	PED::_0x9851DE7AEC10B4E1(3288.421f, -1303.296f, 50.8632f, 75f, 1, 0);
	Local_1695[0 /*2*/] = __LIB_14__::func_421(&(Local_1695[0 /*2*/].f_1), 3273.164f, -1358.74f, 34.9994f, 3314.233f, -1275.878f, 59.1227f, 3288.42f, -1315.973f, 41.78476f, 50.5f, 0, 0, 0);
	Local_1695[4 /*2*/] = __LIB_14__::func_421(&(Local_1695[4 /*2*/].f_1), 2839.372f, -1382.943f, 40.3917f, 2863.699f, -1361.325f, 46.0555f, Vector(40.3917f, -1382.943f, 2839.372f) + Vector(46.0555f, -1361.325f, 2863.699f) / Vector(2f, 2f, 2f), 20f, 0, 0, 0);
	Local_1695[6 /*2*/] = __LIB_14__::func_421(&(Local_1695[6 /*2*/].f_1), 2824.01f, -1409.14f, 43.8016f, 2828.346f, -1405.113f, 45.9026f, 2825.724f, -1407.227f, 44.3944f, 2f, 0, 0, 0);
	ENTITY::CREATE_MODEL_HIDE(3288.603f, -1305.979f, 50.838f, 1f, joaat("P_CHAIRCOMFY07X"), false);
	ENTITY::CREATE_MODEL_HIDE(2739.542f, -1152f, 48.691f, 1f, joaat("ANN_JAIL_MAIN_DOOR_01"), false);
	HUD::_TEXT_DATABASE_REQUEST("MGDUL");
	PATHFIND::SET_ROADS_IN_AREA(2912.382f, -1493.104f, 40.5809f, 2595.452f, -1108.519f, 66.7033f, 0, 1, 0);
	__LIB_1__::func_408(-1706438978, 1, 0);
	if (func_166(28, 1))
	{
	}
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::_0x4C05B42A8D937796();
	VEHICLE::SET_RANDOM_TRAINS(false);
	if (__LIB_6__::func_864(cParam0) >= iLocal_46)
	{
		__LIB_8__::func_941(joaat("MPC_HIDE_ACTION_EQUIPMENT"), Global_35, 0, 1);
		HUD::_HIDE_HUD_COMPONENT(-2106452847);
	}
	else if (__LIB_6__::func_864(cParam0) >= iLocal_43)
	{
		__LIB_8__::func_941(-1991991829, Global_35, 0, 1);
		HUD::_HIDE_HUD_COMPONENT(-2106452847);
	}
	__LIB_0__::func_804(723021499);
	__LIB_1__::func_948(1962482653, 1, 0f, 0, 0, 0, 1, 0);
	if (__LIB_6__::func_864(cParam0) <= iLocal_51)
	{
		__LIB_1__::func_948(-2113194495, 1, 0f, 0, 0, 0, 1, 0);
	}
	else
	{
		__LIB_1__::func_948(-2113194495, 0, 0f, 0, 0, 0, 1, 0);
	}
	if (__LIB_6__::func_864(cParam0) <= iLocal_45)
	{
		__LIB_1__::func_948(29962690, 0, 1f, 1, 0, 0, 1, 0);
		__LIB_1__::func_948(527035651, 0, -1f, 1, 0, 0, 1, 0);
	}
	iLocal_1720[37] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@ind3@ig@ind3_mcs5_table@ind3_mcs5_table", 1, 0, false, true);
	if (__LIB_6__::func_864(cParam0) >= iLocal_54)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[37]);
	}
	iLocal_1720[38] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@ind3@leadin@mcs7@leadin_prompttosit", 2, "pl_base", false, true);
	if (__LIB_6__::func_864(cParam0) >= iLocal_53)
	{
		ENTITY::CREATE_MODEL_SWAP(3288.448f, -1312.786f, 41.773f, 1f, iLocal_31, iLocal_32, true);
	}
	iLocal_1720[10] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@ind3@ig@ig_9_open_safe@ig_9_open_safe", 0, "pbl_IND3_IG9_OPEN_SAFE", false, true);
	if (__LIB_6__::func_864(cParam0) <= iLocal_52)
	{
		iLocal_4421 = __LIB_2__::func_488(joaat("WORLD_HUMAN_LEAN_BAR_READ_NEWSPAPER"), 3285.94f, -1304.35f, 41.89f, -70.834f, 0, -1f, 1);
	}
	__LIB_9__::func_951(47, 1, 1);
	__LIB_9__::func_951(37, 1, 1);
	__LIB_3__::func_820(47, 1);
	__LIB_3__::func_820(37, 1);
	func_1024(47, joaat("CLOTHING_STYLE_OUTFIT_HEIST_001"));
	__LIB_4__::func_932(38, 0);
	__LIB_4__::func_932(42, 0);
	__LIB_0__::func_803(-270094635);
	iLocal_1808 = VOLUME::_CREATE_VOLUME_BOX(3288.707f, -1310.369f, 36.08206f, 0f, 0f, 0f, 55.6605f, 111.7076f, 10.24367f);
	if (__LIB_6__::func_864(cParam0) <= iLocal_46)
	{
		__LIB_0__::func_401(-1968130469);
	}
	func_1025(cParam0);
	if (__LIB_6__::func_864(cParam0) >= iLocal_48)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	AICOVERPOINT::_0x64340DC208D671D5("grand_korr_poker_table_flipped");
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("KIT_BANDANA"), 0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DESMOND_BLYTHE"));
	return true;
}

bool func_457(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_1026(cParam0);
	__LIB_14__::func_424(cParam0);
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_9__::func_40(cParam0);
	iVar2 = __LIB_8__::func_663(cParam0, iVar0);
	if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_991(cParam0);
		}
	}
	__LIB_9__::func_140(cParam0);
	__LIB_9__::func_197(cParam0);
	__LIB_9__::func_47(cParam0);
	__LIB_9__::func_48(cParam0);
	__LIB_9__::func_49(cParam0);
	__LIB_0__::func_11(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_9__::func_63(cParam0);
	}
	if ((__LIB_6__::func_864(cParam0) == 0 && iVar2 < 3) && __LIB_8__::func_587(cParam0) == 0)
	{
		func_451(cParam0);
	}
	if (__LIB_8__::func_705(cParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(cParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_9__::func_50(cParam0, iVar0, 0))
			{
				if (__LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_8__::func_665(cParam0, 524288);
				}
				if (__LIB_6__::func_872(cParam0, 4))
				{
					if (!__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_0__::func_16(cParam0, iVar0);
						__LIB_6__::func_868(cParam0, 4);
					}
					__LIB_9__::func_51(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 1);
				}
				else
				{
					__LIB_8__::func_670(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_9__::func_155(cParam0))
			{
				if (__LIB_9__::func_485(cParam0))
				{
					if (__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_6__::func_887(cParam0, 4);
					}
					__LIB_8__::func_670(cParam0, iVar0, 2);
				}
			}
			else if (__LIB_9__::func_31(cParam0) >= cParam0->f_13144)
			{
				if (__LIB_6__::func_862(cParam0, 4))
				{
					__LIB_6__::func_887(cParam0, 4);
				}
				__LIB_8__::func_670(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_9__::func_50(cParam0, iVar0, 2))
			{
				if (!__LIB_9__::func_18(cParam0))
				{
					__LIB_8__::func_670(cParam0, iVar0, 4);
					if (func_1043(cParam0, iVar0, iVar1))
					{
						__LIB_8__::func_670(cParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_9__::func_189(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 3);
					if (func_1045(cParam0, iVar0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 4);
						if (func_1043(cParam0, iVar0, iVar1))
						{
							__LIB_8__::func_670(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_8__::func_671(cParam0))
			{
				func_1045(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_1045(cParam0, iVar0))
			{
				__LIB_8__::func_670(cParam0, iVar0, 4);
				if (func_1043(cParam0, iVar0, iVar1))
				{
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_1043(cParam0, iVar0, iVar1))
			{
				__LIB_8__::func_670(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_9__::func_909(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_9__::func_477(cParam0);
				if (__LIB_8__::func_705(cParam0, iVar1, 2))
				{
					if (__LIB_9__::func_52(cParam0, iVar1))
					{
						__LIB_9__::func_353(cParam0, iVar1);
					}
				}
			}
			if (__LIB_9__::func_50(cParam0, iVar0, 5))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 7))
				{
					if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
					{
						__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
					}
					__LIB_9__::func_150(cParam0, iVar1);
					__LIB_14__::func_424(cParam0);
					return true;
				}
				else
				{
					__LIB_8__::func_670(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_1__::func_164(0);
					}
					__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 4194304);
				}
				if ((__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_6__::func_872(cParam0, 8192)) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 6);
					}
				}
				if (__LIB_6__::func_862(cParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_8__::func_725(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_6__::func_887(cParam0, 268435456);
					}
				}
				if (__LIB_6__::func_872(cParam0, 1048576))
				{
					if (func_126(func_34(0)))
					{
						__LIB_6__::func_881(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_9__::func_909(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_9__::func_477(cParam0);
				if (__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 2))
				{
					if (__LIB_9__::func_52(cParam0, __LIB_9__::func_40(cParam0)))
					{
						__LIB_9__::func_353(cParam0, __LIB_9__::func_40(cParam0));
					}
				}
			}
			if ((!__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_6__::func_872(cParam0, 8192)) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_9__::func_50(cParam0, iVar0, 5);
				__LIB_0__::func_16(cParam0);
			}
			break;
		case 7:
			if (__LIB_9__::func_50(cParam0, iVar0, 7))
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
				{
					__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
				}
				__LIB_9__::func_150(cParam0, iVar1);
				__LIB_14__::func_424(cParam0);
				return true;
			}
			break;
		default:
			__LIB_8__::func_670(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_493(int* iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
				{
					PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
					func_893(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

void func_722()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1298(0);
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
	func_1298(1);
}

void func_723()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_333(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_724()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1301(0);
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
	func_1301(1);
}

void func_725()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1301(0);
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
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1301(1);
}

void func_726()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_333(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_333(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_184(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_184(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_768(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1342(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_333(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_807(char[4] cParam0, int iParam1)
{
	func_1368(cParam0, iParam1);
	__LIB_8__::func_679(cParam0, iParam1, 26);
}

int func_808(char[4] cParam0)
{
	struct<4> Var0;
	if (!__LIB_18__::func_341(7))
	{
		__LIB_1__::func_922(7);
		return 0;
	}
	if (__LIB_6__::func_875(cParam0, 1))
	{
		if (!__LIB_6__::func_872(cParam0, 4))
		{
			if (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("FANCY_UPPER")))
			{
				__LIB_4__::func_568(&(cParam0->f_7375), "MultiStart_ALT_2");
			}
			else
			{
				__LIB_4__::func_568(&(cParam0->f_7375), "MultiStart_ALT_1");
			}
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[30], "JosiahTrelawny", &Var0, false, 0, 2);
			func_893(Local_1571[0 /*10*/], Var0, Var0.f_3.f_2, 2, 1073741824 /* Float: 2f */);
		}
	}
	__LIB_4__::func_389(-548537711, 1, 0);
	__LIB_1__::func_948(-548537711, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_4__::func_389(-843327635, 1, 0);
	__LIB_1__::func_948(-843327635, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_18__::func_342(47, joaat("CLOTHING_HEIST_OUTFIT"));
	__LIB_18__::func_342(47, 1902428294 /* GXTEntry: "The Wittemore" */);
	return 1;
}

int func_809(char[4] cParam0)
{
	__LIB_0__::func_68(-1683351620, 0, 0);
	__LIB_9__::func_142(cParam0, "IND3_OBJ_TAILOR", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_11__::func_79(cParam0, 32);
	return 1;
}

int func_810(char[4] cParam0)
{
	if (!func_1003(cParam0, 0, 1))
	{
		return 0;
	}
	__LIB_9__::func_947(Global_35, iLocal_4453);
	__LIB_9__::func_959(0);
	__LIB_1__::func_683(&iLocal_1718, 4096);
	return 1;
}

int func_811(char[4] cParam0)
{
	func_1378(cParam0);
	func_1379();
	if (__LIB_8__::func_618(cParam0) > 3 && !__LIB_9__::func_950(47))
	{
		__LIB_14__::func_133(47, 1);
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 8, 0, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 8, 0, 0);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_11__::func_523())
			{
				if (__LIB_11__::func_524() == 7)
				{
					AUDIO::_0x36559148B78853B3(1, 1, 0);
					__LIB_6__::func_876(cParam0, 1);
				}
			}
			break;
		case 1:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[0], "pbl_IND3_IG1_WAIT_IN_TAILORS", true);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_1718, 8) && (__LIB_8__::func_837(16) || __LIB_8__::func_837(17)))
			{
				__LIB_1__::func_971(0);
				__LIB_8__::func_941(-1991991829, Global_35, 0, 1);
				HUD::_HIDE_HUD_COMPONENT(-2106452847);
				__LIB_1__::func_683(&iLocal_1718, 8);
			}
			if ((((__LIB_8__::func_837(16) || __LIB_8__::func_837(17)) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && !__LIB_0__::func_27(iLocal_1718, 67108864)) && __LIB_8__::func_711(cParam0, "IND3_TAILRIGHT", 0))
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_1__::func_683(&iLocal_1718, 67108864);
			}
			if (!__LIB_11__::func_523() && (__LIB_8__::func_837(16) || __LIB_8__::func_837(17)))
			{
				__LIB_14__::func_133(47, 0);
				PED::CLEAR_PED_ENV_DIRT(Global_35);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[0], "pbl_IG1_Walk_Exit", true);
				return 1;
			}
			break;
	}
	return 0;
}

int func_812(char[4] cParam0)
{
	__LIB_14__::func_133(47, 0);
	__LIB_9__::func_254(cParam0, Local_1571[0 /*10*/], 1);
	func_1386();
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
	{
		Local_1695[3 /*2*/].f_1 = VOLUME::_CREATE_VOLUME_BOX(2586.929f, -1177.776f, 53.31695f, 0f, 0f, 0f, 105.673f, 11.88672f, 5.5047f);
		Local_1695[3 /*2*/] = __LIB_14__::func_421(&(Local_1695[3 /*2*/].f_1), 2625.746f, -1171.832f, 50.5646f, 2548.113f, -1183.719f, 56.0693f, 2573.748f, -1181.415f, 57.1553f, 20.5f, 0, 0, 0);
		__LIB_3__::func_730(Local_1695[3 /*2*/].f_1, 0, 0, 1, 1, 0);
	}
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 8, 0, 0);
	return 1;
}

int func_814(char[4] cParam0)
{
	if (func_1003(cParam0, 0, 1))
	{
	}
	else
	{
		return 0;
	}
	func_893(Local_1571[0 /*10*/], 2552.833f, -1178.821f, 52.3113f, 244.6019f, 2, 1073741824 /* Float: 2f */);
	Local_1695[3 /*2*/].f_1 = VOLUME::_CREATE_VOLUME_BOX(2586.929f, -1177.776f, 53.31695f, 0f, 0f, 0f, 105.673f, 11.88672f, 5.5047f);
	Local_1695[3 /*2*/] = __LIB_14__::func_421(&(Local_1695[3 /*2*/].f_1), 2625.746f, -1171.832f, 50.5646f, 2548.113f, -1183.719f, 56.0693f, 2573.748f, -1181.415f, 57.1553f, 20.5f, 0, 0, 0);
	return 1;
}

int func_815(char[4] cParam0)
{
	func_1003(cParam0, 1, 0);
	return 1;
}

int func_816(char[4] cParam0)
{
	func_1003(cParam0, 1, 0);
	Local_1695[1 /*2*/].f_1 = VOLUME::_CREATE_VOLUME_BOX(2657.006f, -1177.764f, 52.9991f, 0f, 0f, 0f, 3.557861f, 1.672567f, 2.599197f);
	Local_1695[1 /*2*/] = __LIB_1__::func_391(Local_1695[1 /*2*/].f_1, 0, 0, 0);
	Local_1695[2 /*2*/] = __LIB_14__::func_421(&(Local_1695[2 /*2*/].f_1), 2658.503f, -1192.394f, 50.6251f, 2668.075f, -1170.966f, 55.4079f, 2668.075f, -1170.966f, 55.4079f, 12f, 0, 0, 0);
	Local_1695[7 /*2*/] = __LIB_14__::func_421(&(Local_1695[7 /*2*/].f_1), 2636.357f, -1186.12f, 51.8853f, 2650.126f, -1171.367f, 56.0623f, 2643.066f, -1177.919f, 52.30386f, 8f, 0, 0, 0);
	__LIB_11__::func_10(7, 1, 0);
	iLocal_1810[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2571.016f, -1181.451f, 53.33699f, 0f, 0f, 0f, 5.397557f, 1f, 2.298882f);
	iLocal_1810[1] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2638.334f, -1185.729f, 53.02575f, 0f, 0f, 0f, 1.880846f, 1f, 1.952961f);
	iLocal_1810[2] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2646.156f, -1185.729f, 53.02575f, 0f, 0f, 0f, 1.880846f, 1f, 1.952961f);
	return 1;
}

int func_817(char[4] cParam0)
{
	vector3 vVar0;
	func_1393(cParam0);
	if (!__LIB_0__::func_27(iLocal_1717, 16))
	{
		if (func_1003(cParam0, 1, 0))
		{
			__LIB_9__::func_42(cParam0, Local_370[1 /*10*/], "IND3_BARBER", 0);
			__LIB_1__::func_683(&iLocal_1717, 16);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1717, 32) && (__LIB_8__::func_837(16) || __LIB_8__::func_837(17)))
	{
		__LIB_4__::func_239(Global_35);
		__LIB_1__::func_683(&iLocal_1717, 32);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[0], false) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[0], "CS_JosiahTrelawny"))
			{
				if (__LIB_6__::func_862(cParam0, 8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[1], "player_zero", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[1], "CS_JosiahTrelawny", Local_1571[0 /*10*/], 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1720[1]);
				}
				if (!__LIB_0__::func_27(iLocal_1716, 8))
				{
					func_1394();
					Local_4437.f_3 = 1;
					__LIB_13__::func_566(Global_35, Local_1571[0 /*10*/], &Local_4437, -1, 0, 0);
					__LIB_1__::func_731(&uLocal_1781);
				}
				__LIB_2__::func_753(142, 0, 1, 0, 0);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if ((((__LIB_6__::func_862(cParam0, 8) && !__LIB_0__::func_27(iLocal_1718, 268435456)) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[1], false)) && __LIB_8__::func_711(cParam0, "IND3_TAILLEAVE", 0))
			{
				__LIB_1__::func_683(&iLocal_1718, 268435456);
			}
			func_1397(cParam0);
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
			{
				__LIB_2__::func_966(Local_1571[0 /*10*/], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_2__::func_966(Global_35, Local_1571[0 /*10*/], 1, 1, 1, 1, 1, 1, 0, 1, 1);
				__LIB_9__::func_397(&uLocal_1781, Local_1571[0 /*10*/]);
			}
			func_1401();
			if (!__LIB_0__::func_27(iLocal_1718, 4194304))
			{
				if ((!__LIB_6__::func_862(cParam0, 8) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[1], false)) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[1], "player_zero"))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_1571[0 /*10*/]) == 0)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[2], "player_zero", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[2], "CS_JosiahTrelawny", Local_1571[0 /*10*/], 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_1720[2]);
						__LIB_1__::func_683(&iLocal_1718, 4194304);
					}
				}
			}
			ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[3], "Josiah", &vVar0, false, 0, 2);
			if (__LIB_0__::func_266(Local_1571[0 /*10*/], vVar0, 0.5f, 1, 1) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2654.089f, -1178.93f, 51.52854f, 2635.631f, -1177.758f, 55.37877f, 13.75f, false, true, 0))
			{
				__LIB_9__::func_254(cParam0, Local_1571[0 /*10*/], 1);
				__LIB_1__::func_726(Local_1571[0 /*10*/], 1);
				__LIB_1__::func_727(Global_35, 1);
				__LIB_5__::func_438(&uLocal_1781);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				return 1;
			}
			break;
	}
	return 0;
}

int func_818(var uParam0)
{
	__LIB_9__::func_920(&iLocal_1810);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	func_1386();
	func_181(&(Local_1695[7 /*2*/].f_1), &(Local_1695[7 /*2*/]), 2636.357f, -1186.12f, 51.8853f, 2650.126f, -1171.367f, 56.0623f, 0, 0);
	return 1;
}

int func_819(char[4] cParam0)
{
	struct<4> Var0;
	if (!__LIB_18__::func_341(8))
	{
		__LIB_1__::func_922(8);
		return 0;
	}
	if (func_1003(cParam0, 1, 0))
	{
		__LIB_9__::func_42(cParam0, Local_370[1 /*10*/], "IND3_BARBER", 0);
	}
	else
	{
		return 0;
	}
	if (!func_1397(cParam0))
	{
		return 0;
	}
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[3], "JOSIAH", &Var0, false, 0, 2);
	func_893(Local_1571[0 /*10*/], Var0, Var0.f_3.f_2, 2, 1073741824 /* Float: 2f */);
	Local_1695[1 /*2*/].f_1 = VOLUME::_CREATE_VOLUME_BOX(2657.006f, -1177.764f, 52.9991f, 0f, 0f, 0f, 3.557861f, 1.672567f, 2.599197f);
	Local_1695[1 /*2*/] = __LIB_1__::func_391(Local_1695[1 /*2*/].f_1, 0, 0, 0);
	Local_1695[2 /*2*/] = __LIB_14__::func_421(&(Local_1695[2 /*2*/].f_1), 2658.503f, -1192.394f, 50.6251f, 2668.075f, -1170.966f, 55.4079f, 2668.075f, -1170.966f, 55.4079f, 12f, 0, 0, 0);
	return 1;
}

int func_821(var uParam0)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[1], false))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1720[1]);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[2], false))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1720[2]);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[3], "JOSIAH", Local_1571[0 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[3], "BARBER", Local_370[1 /*10*/], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[3]);
	__LIB_0__::func_37(&(Local_1571[0 /*10*/].f_4));
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
	iLocal_4408 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2654.253f, -1179.118f, 52.2785f, joaat("NEW_BARBER_INT"));
	func_1405(0);
	func_1406(0);
	func_1407();
	if (__LIB_0__::func_492(1) < 100)
	{
		__LIB_9__::func_952(joaat("SCENARIOS_TAKE_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0);
	}
	return 1;
}

int func_822(char[4] cParam0)
{
	func_1410(cParam0);
	func_1411();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2650.64f, -1178.947f, 52.27854f, 2645.29f, -1178.95f, 55.05394f, 6f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (!__LIB_9__::func_950(37))
			{
				__LIB_14__::func_133(37, 1);
			}
			if (__LIB_11__::func_523())
			{
				if (__LIB_11__::func_524() == 8)
				{
					__LIB_1__::func_683(&iLocal_1718, 33554432);
					__LIB_6__::func_876(cParam0, 1);
				}
			}
			break;
		case 1:
			if (((((__LIB_12__::func_562(0) != iLocal_4496 || __LIB_12__::func_562(2) != iLocal_4497) || __LIB_12__::func_562(1) != iLocal_4498) || __LIB_4__::func_665() != iLocal_4499) || __LIB_7__::func_790()) || (((__LIB_4__::func_665() == 0 && __LIB_12__::func_562(0) <= 1) && __LIB_12__::func_562(2) <= 1) && __LIB_12__::func_562(1) <= 1))
			{
				__LIB_6__::func_876(cParam0, 2);
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 2:
			if (!__LIB_11__::func_523())
			{
				__LIB_14__::func_133(37, 0);
				Local_1571[0 /*10*/].f_2 = -1;
				__LIB_9__::func_60(cParam0, 4);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			if (__LIB_8__::func_618(cParam0) == 51 && !AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[3], "pbl_Exit", true);
				return 1;
			}
			break;
	}
	return 0;
}

int func_823(var uParam0)
{
	__LIB_4__::func_239(Global_35);
	func_1386();
	return 1;
}

int func_824(char[4] cParam0)
{
	if (func_1003(cParam0, 1, 1))
	{
		__LIB_9__::func_42(cParam0, Local_370[1 /*10*/], "IND3_BARBER", 0);
	}
	else
	{
		return 0;
	}
	if (!func_1397(cParam0) || !__LIB_4__::func_475(&iLocal_77))
	{
		return 0;
	}
	func_893(Local_1571[0 /*10*/], 2662.096f, -1178.626f, 52.0428f, 166.0236f, 2, 1073741824 /* Float: 2f */);
	Local_1695[1 /*2*/].f_1 = VOLUME::_CREATE_VOLUME_BOX(2657.006f, -1177.764f, 52.9991f, 0f, 0f, 0f, 3.557861f, 1.672567f, 2.599197f);
	Local_1695[1 /*2*/] = __LIB_1__::func_391(Local_1695[1 /*2*/].f_1, 0, 0, 0);
	Local_1695[2 /*2*/] = __LIB_14__::func_421(&(Local_1695[2 /*2*/].f_1), 2658.503f, -1192.394f, 50.6251f, 2668.075f, -1170.966f, 55.4079f, 2668.075f, -1170.966f, 55.4079f, 12f, 0, 0, 0);
	return 1;
}

int func_825(var uParam0)
{
	iLocal_1806 = VOLUME::_CREATE_VOLUME_BOX(2659.678f, -1181.908f, 53.14472f, 0f, 0f, 0f, 1f, 1f, 1.954709f);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_1806, 7);
	return 1;
}

int func_826(var uParam0)
{
	func_1416();
	MISC::_0x2FCD528A397E5C88(Local_1695[8 /*2*/].f_1, 56);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_66, 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	iLocal_1814 = VOLUME::_CREATE_VOLUME_BOX(2662.817f, -1183.362f, 53.29037f, 0f, 0f, -2.511165f, 1.781537f, 4.214457f, 2.42587f);
	iLocal_1602[3] = __LIB_9__::func_953("IND3_COACH", joaat("INPUT_ENTER"), iLocal_1814, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	__LIB_2__::func_369(iLocal_1602[3], iLocal_77, 0, 1, -1);
	__LIB_2__::func_450(iLocal_1602[3], 3f, 1);
	PED::_0xB06F5F1DEF417216(Local_1571[0 /*10*/], 1, 1, 1);
	PED::_0xFC23348F0F4E245F(Local_1571[0 /*10*/], 1, 1, 1);
	PED::_0x16802C32B2FCA06B(Local_1571[0 /*10*/], 0f, 1, 1);
	PED::_0x75A082563B4452E5(Local_1571[0 /*10*/], 0f, 1, 1);
	PED::_0xB06F5F1DEF417216(Global_35, 1, 1, 1);
	PED::_0xFC23348F0F4E245F(Global_35, 1, 1, 1);
	PED::_0x16802C32B2FCA06B(Global_35, 0f, 1, 1);
	PED::_0x75A082563B4452E5(Global_35, 0f, 1, 1);
	CAM::_0x1B3C2D961F5FC0E1("script@Story@IND3@wagon_ride");
	UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 1);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 5, 0, 1);
	iLocal_1805 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2664.577f, -1182.968f, 53.1034f, 0f, 0f, 0f, 1.809818f, 1.662117f, 1.963951f);
	func_1420();
	return 1;
}

int func_827(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	func_1421(cParam0);
	func_1422(cParam0);
	func_1423(cParam0);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!__LIB_0__::func_27(iLocal_1717, 2))
	{
		__LIB_1__::func_683(&iLocal_1717, 2);
	}
	if (!__LIB_0__::func_27(iLocal_1718, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_77, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2662.742f, -1174.694f, 51.83156f, 2668.836f, -1174.852f, 55.31702f, 1.25f, false, true, 0))
		{
			__LIB_1__::func_683(&iLocal_1718, 1);
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[22], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[22]) >= 0.2311475f)
	{
		__LIB_1__::func_681(&iLocal_1718, 1);
	}
	if ((!__LIB_0__::func_27(iLocal_1718, 2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[21], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[21]) >= 0.3870968f)
	{
		STREAMING::PREFETCH_SRL("script@cme@IND3_CME_SHOT5");
		STREAMING::_0xAE00387E53B1E9FC();
		STREAMING::_0xEF1A8A484118735E();
		__LIB_1__::func_683(&iLocal_1718, 2);
	}
	if ((!__LIB_0__::func_27(iLocal_1718, 131072) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[21], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[21]) >= 0.7650854f)
	{
		STREAMING::END_SRL();
		STREAMING::PREFETCH_SRL("script@cme@IND3_CME_SHOT9");
		STREAMING::_0xAE00387E53B1E9FC();
		STREAMING::_0xEF1A8A484118735E();
		__LIB_1__::func_683(&iLocal_1718, 131072);
	}
	if (__LIB_0__::func_139(iLocal_1602[3]))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1814, true, 0))
		{
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_77, 100f, 2, 1, 0, "IND3_COACH_ILO", 0);
		}
		if (__LIB_1__::func_732(iLocal_1602[3], 1))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			if (__LIB_0__::func_27(iLocal_1717, 1024))
			{
				__LIB_8__::func_711(cParam0, "IND3_DAWD", 0);
				__LIB_1__::func_681(&iLocal_1717, 1024);
			}
			__LIB_1__::func_748(&(iLocal_1602[3]), 1, 1);
			TASK::TASK_ENTER_VEHICLE(Global_35, iLocal_77, 20000, 1, 1f, 131072, 0);
			__LIB_0__::func_172(iLocal_1805);
		}
	}
	if ((((!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_77, true) && !AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_77, 0)) && !__LIB_0__::func_491(Global_35, -1794415470)) && !__LIB_0__::func_139(iLocal_1602[3])) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[22], false))
	{
		iLocal_1602[3] = __LIB_9__::func_953("IND3_COACH", joaat("INPUT_ENTER"), iLocal_1814, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_2__::func_369(iLocal_1602[3], iLocal_77, 0, 1, -1);
		__LIB_2__::func_450(iLocal_1602[3], 3f, 1);
	}
	if ((__LIB_6__::func_889(cParam0) <= 3 && !ENTITY::IS_ENTITY_DEAD(iLocal_77)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_77, 0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[21], false))
		{
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_69, ENTITY::GET_ENTITY_COORDS(iLocal_77, true, false), &iVar0);
			fVar1 = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sLocal_69, iVar0);
			fVar1 = (fVar1 * 1.05f);
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_77, fVar1);
		}
		else
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_77);
		}
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_77, true))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if ((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[3], false) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[3], "JOSIAH")) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[3], false))
			{
				TASK::TASK_ENTER_VEHICLE(Local_1571[0 /*10*/], iLocal_77, -1, 2, 1f, 262144, 0);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(Local_1571[0 /*10*/], iLocal_77, false))
			{
				if (!__LIB_0__::func_491(Local_1571[0 /*10*/], -1794415470))
				{
					TASK::TASK_ENTER_VEHICLE(Local_1571[0 /*10*/], iLocal_77, 20000, 2, 1f, 262144, 0);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_77, false))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 30, 1);
				if (MAP::DOES_BLIP_EXIST(iLocal_78))
				{
					__LIB_0__::func_325(&iLocal_78);
					__LIB_9__::func_142(cParam0, "", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				if (((!AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_77, 0) && PED::IS_PED_IN_VEHICLE(Local_1571[0 /*10*/], iLocal_77, false)) && !AITRANSPORT::_0x619E63980BFC0096(Local_1571[0 /*10*/], iLocal_77, 0)) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_1571[0 /*10*/]);
					TASK::TASK_CLEAR_LOOK_AT(Local_370[4 /*10*/]);
					func_1426();
					TASK::TASK_PAUSE(0, 4470);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_77, sLocal_69, 524295, 0, 0, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					func_1427(Local_370[4 /*10*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[21], "CS_JosiahTrelawny", Local_1571[0 /*10*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[21], "player_zero", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[21], "CS_GEORGE", Local_370[4 /*10*/], 0);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_1720[21], iLocal_77, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1720[21]);
					__LIB_9__::func_60(cParam0, 4);
					ENTITY::CREATE_MODEL_HIDE(2846.526f, -1301.281f, 45.4481f, 2f, joaat("P_MARKETCART01X"), true);
					__LIB_6__::func_876(cParam0, 2);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
					__LIB_9__::func_142(cParam0, "IND3_OBJ_RIDE", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			else
			{
				func_1428(Local_370[4 /*10*/], Global_35);
				if (PED::IS_PED_IN_VEHICLE(Local_1571[0 /*10*/], iLocal_77, false))
				{
					func_1428(Local_1571[0 /*10*/], Global_35);
				}
			}
			break;
		case 2:
			if (func_1429(cParam0, 0, 3, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[34], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[0 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[34], "S_M_M_NBXRIVERBOATGUARDS_01^1", Local_79[1 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[34], "S_M_M_NBXRIVERBOATGUARDS_01^2", Local_79[2 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[34]);
				Local_1571[1 /*10*/].f_2++;
				Local_1571[2 /*10*/].f_2++;
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 30, 1);
			if (__LIB_0__::func_266(iLocal_77, __LIB_9__::func_921(sLocal_69), 12.5f, 1, 1))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_77);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[22], "CS_JosiahTrelawny", Local_1571[0 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[22], "player_zero", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[22], "CS_GEORGE", Local_370[4 /*10*/], 0);
				__LIB_10__::func_950(0, 1);
				WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar2, true, 2, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar2, true, 0, false, false);
				iLocal_1820 = WEAPON::_0xC6A6789BB405D11C(Global_35, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1820))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[22], "Gun", iLocal_1820, 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1820, iLocal_77, false);
				}
				iLocal_1819 = OBJECT::CREATE_OBJECT(iLocal_39, 2831.491f, -1319.742f, 45.6785f, true, true, false, false, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_1819, iLocal_77, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[22], "P_CS_CHARLESBELT01X", iLocal_1819, 0);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_1720[22], iLocal_77, 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[22]);
				AUDIO::_0x36559148B78853B3(1, 0, 0);
				__LIB_9__::func_60(cParam0, 51);
				__LIB_6__::func_876(cParam0, 4);
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BELT")))
			{
				func_1432(0, 1);
			}
			if (!__LIB_0__::func_27(iLocal_1716, 131072) && (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[22], "CS_JosiahTrelawny") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[22], "CS_JosiahTrelawny")))
			{
				__LIB_1__::func_683(&iLocal_1716, 131072);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1571[0 /*10*/], sLocal_68, 0, 12, -1, 0, 0, -1);
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[22], "player_zero"))
			{
				__LIB_9__::func_142(cParam0, "IND3_OBJ_DOCKS", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			if (((ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[22], "CS_JosiahTrelawny") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[22], "CS_JosiahTrelawny")) && (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[22], "player_zero") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[22], "player_zero"))) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[22], "s_Belt", 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_828(char[4] cParam0)
{
	func_1386();
	func_175(cParam0, Local_1571[1 /*10*/], 2, 0);
	func_175(cParam0, Local_1571[2 /*10*/], 18, 0);
	__LIB_9__::func_254(cParam0, Local_1571[0 /*10*/], 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1571[1 /*10*/], false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1571[2 /*10*/], false);
	PED::_0xB06F5F1DEF417216(Local_1571[0 /*10*/], 0, 1, 1);
	PED::_0xFC23348F0F4E245F(Local_1571[0 /*10*/], 0, 1, 1);
	PED::_0x16802C32B2FCA06B(Local_1571[0 /*10*/], 1f, 1, 1);
	PED::_0x75A082563B4452E5(Local_1571[0 /*10*/], 1f, 1, 1);
	PED::_0xB06F5F1DEF417216(Global_35, 0, 1, 1);
	PED::_0xFC23348F0F4E245F(Global_35, 0, 1, 1);
	PED::_0x16802C32B2FCA06B(Global_35, 1f, 1, 1);
	PED::_0x75A082563B4452E5(Global_35, 1f, 1, 1);
	CAM::_0x2412216FCC7B4E3E("script@Story@IND3@wagon_ride");
	PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1806);
	__LIB_0__::func_172(iLocal_1806);
	PED::_0x2B4CE170DE09F346(Local_370[1 /*10*/], joaat("IND3_BARBER_CHAT"));
	__LIB_2__::func_753(201, 0, 1, 0, 0);
	STREAMING::END_SRL();
	return 1;
}

int func_829(char[4] cParam0)
{
	struct<4> Var0;
	if (!func_1429(cParam0, 0, 3, 1))
	{
		return 0;
	}
	if (!func_1397(cParam0))
	{
		return 0;
	}
	func_893(iLocal_77, 2815.191f, -1348.968f, 45.2811f, 140.7832f, 2, 1073741824 /* Float: 2f */);
	func_893(Local_1571[0 /*10*/], 2821.483f, -1348.771f, 45.1975f, 232.8535f, 2, 1073741824 /* Float: 2f */);
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_JavierEscuella", &Var0, false, 0, 2);
	func_893(Local_1571[1 /*10*/], Var0, Var0.f_3.f_2, 2, 1073741824 /* Float: 2f */);
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_LeoStrauss", &Var0, false, 0, 2);
	func_893(Local_1571[2 /*10*/], Var0, Var0.f_3.f_2, 2, 1073741824 /* Float: 2f */);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 1);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 5, 0, 1);
	func_1420();
	return 1;
}

int func_830(char[4] cParam0)
{
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		if (!__LIB_0__::func_491(Local_1571[1 /*10*/], 993674639) || !__LIB_0__::func_491(Local_1571[2 /*10*/], 993674639))
		{
			__LIB_1__::func_473(Local_1571[1 /*10*/], joaat("WORLD_HUMAN_LEAN_RAILING_DYNAMIC"), -1, 0, joaat("WORLD_HUMAN_LEAN_RAILING_MALE_C"), -1082130432 /* Float: -1f */);
			__LIB_1__::func_473(Local_1571[2 /*10*/], joaat("WORLD_HUMAN_LEAN_RAILING_DYNAMIC"), -1, 0, joaat("WORLD_HUMAN_LEAN_RAILING_MALE_D"), -1082130432 /* Float: -1f */);
			return 0;
		}
	}
	return 1;
}

int func_831(var uParam0)
{
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_61, 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 1);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 1);
	iLocal_1816 = VOLUME::_CREATE_VOLUME_BOX(2856.05f, -1372.923f, 44.25948f, 0f, 0f, 50.19176f, 2.702748f, 3.279384f, 1.617559f);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_1816, 16);
	return 1;
}

int func_832(char[4] cParam0)
{
	vector3 vVar0;
	struct<27> Var12;
	func_1434(cParam0);
	func_1435(cParam0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	__LIB_1__::func_694(Global_35, 2856.448f, -1372.481f, 43.557f, 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 20f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2834.763f, -1373.188f, 43.55743f, 2900.52f, -1428.558f, 51.02845f, 43.25f, false, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			Var12.f_4 = 1065353216;
			Var12.f_5 = 1065353216;
			Var12.f_9 = 1065353216;
			Var12.f_10 = 1065353216;
			Var12.f_14 = 1065353216;
			Var12.f_15 = 1065353216;
			Var12.f_17 = 1040187392;
			Var12.f_18 = 1040187392;
			Var12.f_19 = -1;
			Var12.f_26 = -1082130432;
			__LIB_9__::func_175(Local_1571[0 /*10*/], Global_35, &Var12, 0f, 0f, 0f, sLocal_68, 12, 1, 5f, 3f, 1073069561, 0.8f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			Local_4444.f_3 = 1;
			__LIB_13__::func_566(Global_35, Local_1571[0 /*10*/], &Local_4444, -1, 0, 0);
			__LIB_1__::func_731(&uLocal_1781);
			__LIB_6__::func_876(cParam0, 1);
			break;
		case 1:
			ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_JosiahTrelawny", &vVar0, false, 0, 2);
			if (__LIB_0__::func_266(Local_1571[0 /*10*/], vVar0, 5f, 1, 1))
			{
				if (__LIB_8__::func_711(cParam0, "IND3_MEETING", 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[31], "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[31], "CS_JosiahTrelawny", Local_1571[0 /*10*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[31], "CS_LeoStrauss", Local_1571[2 /*10*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[31], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[31], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[3 /*10*/], 0);
					iLocal_1779 = OBJECT::CREATE_OBJECT(iLocal_35, 2846.423f, -1367.4f, 44.548f, true, true, false, false, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[31], "P_CIGARETTE_CS01X", iLocal_1779, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1720[31]);
					__LIB_1__::func_683(&iLocal_1718, -2147483648);
					__LIB_1__::func_726(Local_1571[0 /*10*/], 1);
					__LIB_1__::func_727(Global_35, 1);
					__LIB_5__::func_438(&uLocal_1781);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1571[0 /*10*/], sLocal_68, 0, 8, -1, 0, 0, -1);
					iLocal_1800[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2846.451f, -1366.294f, 44.29462f, 0f, 0f, 50.47982f, 3.901808f, 1.525754f, 1.665599f);
					__LIB_6__::func_876(cParam0, 2);
				}
			}
			else
			{
				if (!__LIB_0__::func_27(iLocal_1717, 2048) && __LIB_0__::func_266(Local_1571[0 /*10*/], vVar0, 7f, 1, 1))
				{
					__LIB_1__::func_683(&iLocal_1717, 2048);
					__LIB_8__::func_711(cParam0, "IND3_SPOTSTRJAV", 0);
				}
				__LIB_2__::func_966(Local_1571[0 /*10*/], Global_35, 1, 1, 1, 0, 1, 1, 1, 1, 1);
				__LIB_2__::func_966(Global_35, Local_1571[0 /*10*/], 1, 1, 1, 0, 1, 1, 0, 1, 1);
				__LIB_9__::func_397(&uLocal_1781, Local_1571[0 /*10*/]);
			}
			break;
		case 2:
			func_1438();
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1800[0]))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Local_1571[1 /*10*/], iLocal_1800[0], true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Local_1571[1 /*10*/], iLocal_1800[0], true, 0))
				{
					__LIB_0__::func_172(iLocal_1800[0]);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[32], false) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[33], false))
			{
				__LIB_9__::func_60(cParam0, 3);
				Local_1571[0 /*10*/].f_2 = 2;
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			func_1439(cParam0);
			break;
	}
	func_1440(cParam0, 1);
	if (func_1441(cParam0, 0))
	{
		__LIB_1__::func_683(&iLocal_1717, 268435456);
		func_1442(cParam0, 0);
		__LIB_0__::func_400(-873881483);
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1816);
		__LIB_0__::func_172(iLocal_1816);
		return 1;
	}
	return 0;
}

int func_833(char[4] cParam0)
{
	__LIB_0__::func_325(&iLocal_78);
	__LIB_0__::func_490(&(Local_370[4 /*10*/]), 0);
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[22], false))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1720[22]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1819))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1819);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1820))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1820);
	}
	func_176(&iLocal_77, 0);
	__LIB_9__::func_254(cParam0, Local_1571[0 /*10*/], 1);
	__LIB_0__::func_172(iLocal_1800[0]);
	__LIB_0__::func_172(iLocal_1800[1]);
	__LIB_0__::func_172(iLocal_1800[2]);
	func_1438();
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 5, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 0);
	__LIB_0__::func_400(-873881483);
	return 1;
}

int func_834(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 4))
	{
		if ((!STREAMING::_IS_IMAP_ACTIVE(-614421509) || !STREAMING::_IS_IMAP_ACTIVE(604920544)) || !STREAMING::_IS_IMAP_ACTIVE(joaat("SER_01_GRANDKOR3")))
		{
			return 0;
		}
		if (!func_1444(cParam0, 5, 9, 1))
		{
			return 0;
		}
		if (!func_1444(cParam0, 10, -1, 1))
		{
			return 0;
		}
		if (!func_1445(cParam0, 4, 1))
		{
			return 0;
		}
		if (!func_1429(cParam0, 5, 11, 1))
		{
			return 0;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[38], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_1720[38], true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[38]);
			}
			return 0;
		}
		if (Local_1821[0 /*1279*/].f_1277 < 6 || Local_1821[1 /*1279*/].f_1277 < 6)
		{
			return 0;
		}
	}
	else if (!func_1429(cParam0, 0, 3, 1))
	{
		return 0;
	}
	if (__LIB_6__::func_875(cParam0, 1) && !__LIB_6__::func_872(cParam0, 4))
	{
		func_893(Global_35, 2858.862f, -1370.054f, 43.5571f, 47.2094f, 2, 1073741824 /* Float: 2f */);
		func_893(Local_1571[0 /*10*/], 2858.694f, -1368.209f, 43.5571f, 5.2618f, 2, 1073741824 /* Float: 2f */);
		func_893(Local_1571[1 /*10*/], 2859.842f, -1367.955f, 43.5571f, 262.459f, 2, 1073741824 /* Float: 2f */);
		func_893(Local_1571[2 /*10*/], 2862.453f, -1368.83f, 43.5571f, 250.2887f, 2, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
		func_893(Local_1571[0 /*10*/], 3283.738f, -1328.174f, 41.6973f, 356.7121f, 2, 1073741824 /* Float: 2f */);
	}
	func_1446();
	return 1;
}

int func_835(char[4] cParam0)
{
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		__LIB_0__::func_400(-276259505);
		__LIB_0__::func_401(-1716205818);
		__LIB_0__::func_803(-2022369555);
		__LIB_0__::func_400(-873881483);
		__LIB_0__::func_804(-789397228);
		__LIB_0__::func_401(-614421509);
		__LIB_0__::func_401(604920544);
		__LIB_0__::func_401(joaat("SER_01_GRANDKOR3"));
		__LIB_1__::func_948(-1035861617, 1, 1f, 0, 0, 0f, 1, 0);
		__LIB_1__::func_948(-721377524, 1, -1f, 0, 0, 0f, 1, 0);
	}
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_72, 1, 1065353216 /* Float: 1f */, 0.25f, 1);
	__LIB_9__::func_142(cParam0, "IND3_OBJ_PLAY_GAME", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	if (__LIB_6__::func_862(cParam0, 8))
	{
		func_1438();
		func_1439(cParam0);
	}
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_LEAN_BAR_READ_NEWSPAPER"), 15, 0, 0);
	fLocal_4452 = 0f;
	__LIB_5__::func_521(fLocal_4452);
	CLOCK::PAUSE_CLOCK(true, 0);
	return 1;
}

int func_836(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	if (__LIB_0__::func_27(iLocal_1717, 128))
	{
		if (Local_1821[0 /*1279*/].f_1277 < 6 || Local_1821[1 /*1279*/].f_1277 < 6)
		{
			return 0;
		}
		CAM::DO_SCREEN_FADE_IN(1000);
		__LIB_1__::func_681(&iLocal_1717, 128);
	}
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_61, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	__LIB_0__::func_400(-1716205818);
	__LIB_0__::func_401(-276259505);
	__LIB_0__::func_804(-2022369555);
	if (!__LIB_0__::func_27(iLocal_1716, 2048))
	{
		func_1012();
		__LIB_1__::func_683(&iLocal_1716, 2048);
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		Local_370[iVar0 /*10*/].f_2 = 0;
		iVar0++;
	}
	__LIB_9__::func_232(cParam0, Local_79[0 /*10*/]);
	__LIB_9__::func_232(cParam0, Local_79[1 /*10*/]);
	__LIB_9__::func_232(cParam0, Local_79[2 /*10*/]);
	__LIB_0__::func_490(&(Local_79[0 /*10*/]), 0);
	__LIB_0__::func_490(&(Local_79[1 /*10*/]), 0);
	__LIB_0__::func_490(&(Local_79[2 /*10*/]), 0);
	__LIB_0__::func_490(&(Local_79[3 /*10*/]), 0);
	__LIB_0__::func_804(1358491857);
	func_1386();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1779))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1779);
	}
	iVar1 = 54;
	while (iVar1 <= 56)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_370[iVar1 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_370[iVar1 /*10*/])) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_370[iVar1 /*10*/], 0))
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_370[iVar1 /*10*/], sLocal_63, 0, 1038, -1, 1, 0, -1);
		}
		iVar1++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 297, true);
		PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 178, true);
		PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 130, false);
		PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 330, true);
		PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 331, true);
	}
	iVar2 = 0;
	while (iVar2 < 29)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79[iVar2 /*10*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_79[iVar2 /*10*/], 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_79[iVar2 /*10*/], 178, true);
			PED::SET_PED_CONFIG_FLAG(Local_79[iVar2 /*10*/], 130, false);
			PED::SET_PED_CONFIG_FLAG(Local_79[iVar2 /*10*/], 330, true);
			PED::SET_PED_CONFIG_FLAG(Local_79[iVar2 /*10*/], 331, true);
		}
		iVar2++;
	}
	__LIB_1__::func_681(&iLocal_1717, 128);
	__LIB_9__::func_243(cParam0, "multistart");
	iVar1 = 0;
	while (iVar1 < 57)
	{
		if (__LIB_0__::func_272(Local_370[iVar1 /*10*/], 0))
		{
			sVar3 = func_1449(iVar1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
			{
				__LIB_9__::func_154(cParam0, Local_370[iVar1 /*10*/], sVar3, 0, 0, 0, 0);
			}
		}
		iVar1++;
	}
	if (!__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_0__::func_45("IND3_HLP_CUT", 10000, 0, 0, 0, 1);
	}
	iVar4 = 5;
	while (iVar4 <= 8)
	{
		if (vLocal_941[iVar4 /*3*/] != 0 && ENTITY::_0x1FF441D7954F8709(vLocal_941[iVar4 /*3*/]))
		{
			ENTITY::_0xD2B9C78537ED5759(vLocal_941[iVar4 /*3*/]);
		}
		iVar4++;
	}
	return 1;
}

int func_837(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar14;
	float fVar26;
	float fVar27;
	func_1450(cParam0);
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79[iVar0 /*10*/]))
		{
			PED::SET_PED_RESET_FLAG(Local_79[iVar0 /*10*/], 49, true);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 57)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_370[iVar1 /*10*/]))
		{
			PED::SET_PED_RESET_FLAG(Local_370[iVar1 /*10*/], 49, true);
		}
		iVar1++;
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			__LIB_6__::func_895(iLocal_1720[38], "pl_leadin_chairleft");
			__LIB_6__::func_895(iLocal_1720[38], "pl_leadin_chairright");
			if (__LIB_0__::func_139(iLocal_1602[1]))
			{
				if (__LIB_0__::func_572(iLocal_1602[1], 0))
				{
					if ((CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) && !CAM::IS_SPHERE_VISIBLE(3288.528f, -1318.009f, 42.57344f, 0.7f))
					{
						__LIB_1__::func_382(iLocal_1602[1], 0, 1);
						__LIB_1__::func_221(iLocal_1602[1], 0, 1);
					}
				}
				else if (!(CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::IS_SPHERE_VISIBLE(3288.528f, -1318.009f, 42.57344f, 0.7f))
				{
					__LIB_1__::func_382(iLocal_1602[1], 1, 1);
					__LIB_1__::func_221(iLocal_1602[1], 1, 1);
				}
			}
			if (__LIB_0__::func_567(iLocal_1602[1], 1))
			{
				__LIB_0__::func_325(&iLocal_78);
				__LIB_1__::func_748(&(iLocal_1602[1]), 1, 1);
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[38], "ARTHUR", &vVar2, true, "pl_leadin_chairleft", 2);
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[38], "ARTHUR", &vVar14, true, "pl_leadin_chairright", 2);
				fVar26 = __LIB_0__::func_94(Global_35, vVar2, 1);
				fVar27 = __LIB_0__::func_94(Global_35, vVar14, 1);
				if (fVar26 < fVar27)
				{
					sLocal_4412 = "pl_leadin_chairleft";
				}
				else
				{
					sLocal_4412 = "pl_leadin_chairright";
				}
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_1720[38], "ARTHUR", sLocal_4412, 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
				__LIB_6__::func_876(cParam0, 1);
				__LIB_9__::func_60(cParam0, 51);
			}
			else if ((__LIB_0__::func_486(iLocal_1602[1], 1) == 0f && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && __LIB_0__::func_264(&(vLocal_1607[20 /*3*/])) >= 15f)
			{
				__LIB_9__::func_46(cParam0, "multistart");
				__LIB_1__::func_683(&iLocal_1718, 65536);
				return 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_491(Global_35, 1369124074))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[38], sLocal_4412, true);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[38], "ARTHUR") || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[38]) >= 0.98f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_838(var uParam0)
{
	int iVar0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_72, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	if (!__LIB_0__::func_27(iLocal_1718, 65536))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 297, false);
		PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 178, false);
		PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 130, true);
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79[iVar0 /*10*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_79[iVar0 /*10*/], 297, false);
			PED::SET_PED_CONFIG_FLAG(Local_79[iVar0 /*10*/], 178, false);
			PED::SET_PED_CONFIG_FLAG(Local_79[iVar0 /*10*/], 130, true);
		}
		iVar0++;
	}
	func_1386();
	return 1;
}

int func_839(char[4] cParam0)
{
	var uVar0[6];
	struct<9> Var7;
	if (!func_1444(cParam0, 5, 9, 1))
	{
		return 0;
	}
	if (!func_1444(cParam0, 10, -1, 1))
	{
		return 0;
	}
	if (!func_1445(cParam0, 4, 1))
	{
		return 0;
	}
	if (!func_1429(cParam0, 5, 11, 1))
	{
		return 0;
	}
	if (Local_1821[0 /*1279*/].f_1277 < 6 || Local_1821[1 /*1279*/].f_1277 < 6)
	{
		return 0;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		if (!__LIB_1__::func_243(28))
		{
			uVar0[0] = Local_370[6 /*10*/];
			uVar0[1] = Local_370[7 /*10*/];
			uVar0[2] = Global_35;
			uVar0[3] = Local_370[8 /*10*/];
			uVar0[4] = Local_370[9 /*10*/];
			uVar0[5] = Local_370[5 /*10*/];
			Var7 = -1;
			Var7.f_1 = -1;
			Var7.f_2 = -1;
			__LIB_1__::func_65(28, &Var7, 1);
			if (func_1462(28, 8, Var7.f_5, Var7.f_8, 0, &uVar0, 1, 4, 0))
			{
				__LIB_1__::func_212(2, 64);
				__LIB_1__::func_211(2, 512);
				__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
			}
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		func_893(Local_1571[1 /*10*/], 3279.975f, -1308.797f, 41.7526f, 0f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		func_893(Local_1571[2 /*10*/], 3286.575f, -1321.7f, 41.7476f, 0f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		func_893(Local_1571[0 /*10*/], 3286.009f, -1304.629f, 41.8794f, 273.7176f, 2, 1073741824 /* Float: 2f */);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_1571[0 /*10*/], iLocal_4421, 0, 0, false, true, 0, false, -1f, false);
		}
	}
	func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_1446();
	return 1;
}

int func_840(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 4) && !__LIB_1__::func_77(2, 8388608))
	{
		return 0;
	}
	__LIB_11__::func_79(cParam0, 1);
	if (!__LIB_0__::func_27(iLocal_1718, 65536))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_370[iVar0 /*10*/]) && iVar0 >= 13) && iVar0 <= 24)
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_370[iVar0 /*10*/]);
		}
		iVar0++;
	}
	return 1;
}

int func_841(char[4] cParam0)
{
	var uVar0[6];
	struct<9> Var7;
	__LIB_9__::func_53(cParam0);
	if (!__LIB_1__::func_243(28))
	{
		uVar0[0] = Local_370[6 /*10*/];
		uVar0[1] = Local_370[7 /*10*/];
		uVar0[2] = Global_35;
		uVar0[3] = Local_370[8 /*10*/];
		uVar0[4] = Local_370[9 /*10*/];
		uVar0[5] = Local_370[5 /*10*/];
		Var7 = -1;
		Var7.f_1 = -1;
		Var7.f_2 = -1;
		__LIB_1__::func_65(28, &Var7, 1);
		if (func_1462(28, 8, Var7.f_5, Var7.f_8, 0, &uVar0, 1, 4, 0))
		{
			__LIB_1__::func_212(2, 64);
			__LIB_1__::func_211(2, 512);
			__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	__LIB_1__::func_683(&iLocal_1718, 16);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	return 0;
}

int func_842(char[4] cParam0)
{
	func_1468(cParam0);
	func_1469();
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			__LIB_1__::func_148(&(vLocal_1607[6 /*3*/]));
			__LIB_1__::func_148(&(vLocal_1607[9 /*3*/]));
			__LIB_6__::func_876(cParam0, 1);
			break;
		case 1:
			func_1470(cParam0);
			if (__LIB_0__::func_27(iLocal_1717, 1073741824 /* Float: 2f */))
			{
				if (!AUDIO::_0xFE5C6177064BD390(1) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					__LIB_3__::func_20(2, cParam0->f_7375.f_804);
					__LIB_1__::func_211(2, 8192);
					__LIB_1__::func_681(&iLocal_1717, 1073741824 /* Float: 2f */);
				}
			}
			if (__LIB_1__::func_77(2, 16384))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_843(var uParam0)
{
	iLocal_1797 = 0;
	__LIB_1__::func_681(&iLocal_1716, 33554432);
	__LIB_1__::func_681(&iLocal_1718, 32);
	__LIB_1__::func_681(&iLocal_1718, 128);
	__LIB_0__::func_325(&iLocal_78);
	return 1;
}

int func_844(char[4] cParam0)
{
	var uVar0[6];
	struct<9> Var7;
	if (!func_1444(cParam0, 5, 9, 1))
	{
		return 0;
	}
	if (!func_1444(cParam0, 10, -1, 1))
	{
		return 0;
	}
	if (!func_1445(cParam0, 4, 1))
	{
		return 0;
	}
	if (!func_1429(cParam0, 5, 11, 1))
	{
		return 0;
	}
	if (Local_1821[0 /*1279*/].f_1277 < 6 || Local_1821[1 /*1279*/].f_1277 < 6)
	{
		return 0;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		if (!__LIB_1__::func_243(28))
		{
			uVar0[2] = Global_35;
			uVar0[4] = Local_370[9 /*10*/];
			uVar0[5] = Local_370[5 /*10*/];
			Var7 = -1;
			Var7.f_1 = -1;
			Var7.f_2 = -1;
			__LIB_1__::func_65(28, &Var7, 1);
			if (func_1462(28, 8, Var7.f_5, Var7.f_8, 0, &uVar0, 1, 4, 0))
			{
				__LIB_1__::func_212(2, 64);
				__LIB_1__::func_211(2, 1024);
				__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
			}
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		func_893(Local_1571[1 /*10*/], 3280.653f, -1309.491f, 41.7525f, 93.9013f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_79[4 /*10*/]))
	{
		func_893(Local_79[4 /*10*/], 3279.858f, -1310.045f, 41.7525f, 169.1529f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		func_893(Local_1571[2 /*10*/], 3286.575f, -1321.7f, 41.7476f, 0f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		func_893(Local_1571[0 /*10*/], 3286.009f, -1304.629f, 41.8794f, 273.7176f, 2, 1073741824 /* Float: 2f */);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_1571[0 /*10*/], iLocal_4421, 0, 0, false, true, 0, false, -1f, false);
		}
	}
	func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_1446();
	return 1;
}

bool func_845(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 4) && !__LIB_1__::func_77(2, 8388608))
	{
		return false;
	}
	__LIB_3__::func_319(iLocal_1720[27]);
	__LIB_4__::func_7(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 30, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
	__LIB_11__::func_79(cParam0, 1);
	func_1474(0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_846(char[4] cParam0)
{
	var uVar0[6];
	struct<9> Var7;
	int iVar17;
	if (!__LIB_1__::func_243(28))
	{
		uVar0[2] = Global_35;
		uVar0[4] = Local_370[9 /*10*/];
		uVar0[5] = Local_370[5 /*10*/];
		Var7 = -1;
		Var7.f_1 = -1;
		Var7.f_2 = -1;
		__LIB_1__::func_65(28, &Var7, 1);
		if (func_1462(28, 8, Var7.f_5, Var7.f_8, 0, &uVar0, 1, 4, 0))
		{
			__LIB_1__::func_212(2, 64);
			__LIB_1__::func_211(2, 1024);
			__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
		}
		return 0;
	}
	iVar17 = 6;
	while (iVar17 <= 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_370[iVar17 /*10*/]))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[iVar17 /*10*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[iVar17 /*10*/], true, true);
			}
			PED::DELETE_PED(&(Local_370[iVar17 /*10*/]));
		}
		iVar17++;
	}
	__LIB_1__::func_212(2, 512);
	__LIB_1__::func_211(2, 32768);
	__LIB_1__::func_211(2, 1024);
	__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
	func_1470(cParam0);
	__LIB_1__::func_683(&iLocal_1718, 16);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	return 1;
}

int func_847(char[4] cParam0)
{
	func_1475(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			func_1470(cParam0);
			if (__LIB_1__::func_77(2, 16384))
			{
				return 1;
			}
			else if ((MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 1) || MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 0)) || !__LIB_1__::func_243(28))
			{
				func_1476();
				__LIB_6__::func_876(cParam0, 18);
			}
			break;
		case 18:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[39]) >= 0.8f)
			{
				__LIB_9__::func_156(cParam0, "IND3_FAIL_POKE", "", 1, 0);
			}
			break;
	}
	return 0;
}

bool func_848(var uParam0)
{
	iLocal_1797 = 0;
	__LIB_1__::func_681(&iLocal_1716, 33554432);
	__LIB_1__::func_681(&iLocal_1718, 32);
	__LIB_1__::func_681(&iLocal_1718, 128);
	return uParam0->f_607 == uParam0->f_607;
}

int func_849(char[4] cParam0)
{
	var uVar0[6];
	struct<9> Var7;
	if (!func_1478(cParam0, 5, 1) || !func_1478(cParam0, 9, 1))
	{
		return 0;
	}
	if (!func_1444(cParam0, 10, -1, 1))
	{
		return 0;
	}
	if (!func_1429(cParam0, 5, 11, 1))
	{
		return 0;
	}
	if (!func_1445(cParam0, 4, 1))
	{
		return 0;
	}
	if (Local_1821[0 /*1279*/].f_1277 < 6 || Local_1821[1 /*1279*/].f_1277 < 6)
	{
		return 0;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		if (!__LIB_1__::func_243(28))
		{
			uVar0[2] = Global_35;
			uVar0[4] = Local_370[9 /*10*/];
			uVar0[5] = Local_370[5 /*10*/];
			Var7 = -1;
			Var7.f_1 = -1;
			Var7.f_2 = -1;
			__LIB_1__::func_65(28, &Var7, 1);
			if (func_1462(28, 8, Var7.f_5, Var7.f_8, 0, &uVar0, 1, 4, 0))
			{
				__LIB_1__::func_212(2, 64);
				__LIB_1__::func_211(2, 2048);
				__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
			}
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		func_893(Local_1571[1 /*10*/], 3280.653f, -1309.491f, 41.7525f, 93.9013f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_79[4 /*10*/]))
	{
		func_893(Local_79[4 /*10*/], 3279.858f, -1310.045f, 41.7525f, 169.1529f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		func_893(Local_1571[2 /*10*/], 3286.575f, -1321.7f, 41.7476f, 0f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		func_893(Local_1571[0 /*10*/], 3286.009f, -1304.629f, 41.8794f, 273.7176f, 2, 1073741824 /* Float: 2f */);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_1571[0 /*10*/], iLocal_4421, 0, 0, false, true, 0, false, -1f, false);
		}
	}
	func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_1446();
	__LIB_4__::func_7(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 30, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
	return 1;
}

bool func_850(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 4) && !__LIB_1__::func_77(2, 8388608))
	{
		return false;
	}
	__LIB_11__::func_79(cParam0, 1);
	func_1474(0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_851(char[4] cParam0)
{
	var uVar0[6];
	struct<9> Var7;
	if (!__LIB_1__::func_243(28))
	{
		uVar0[2] = Global_35;
		uVar0[4] = Local_370[9 /*10*/];
		uVar0[5] = Local_370[5 /*10*/];
		Var7 = -1;
		Var7.f_1 = -1;
		Var7.f_2 = -1;
		__LIB_1__::func_65(28, &Var7, 1);
		if (func_1462(28, 8, Var7.f_5, Var7.f_8, 0, &uVar0, 1, 4, 0))
		{
			__LIB_1__::func_212(2, 64);
			__LIB_1__::func_211(2, 2048);
			__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
		}
		return false;
	}
	__LIB_1__::func_212(2, 1024);
	__LIB_1__::func_211(2, 32768);
	__LIB_1__::func_211(2, 2048);
	__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	__LIB_9__::func_53(cParam0);
	func_1470(cParam0);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[10]);
	return cParam0->f_607 == cParam0->f_607;
}

int func_852(char[4] cParam0)
{
	func_1479(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			func_1470(cParam0);
			if (__LIB_0__::func_27(iLocal_1717, 1073741824 /* Float: 2f */))
			{
				if (!AUDIO::_0xFE5C6177064BD390(1) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					__LIB_3__::func_20(2, cParam0->f_7375.f_804);
					__LIB_1__::func_211(2, 8192);
					__LIB_1__::func_681(&iLocal_1717, 1073741824 /* Float: 2f */);
				}
			}
			if (__LIB_1__::func_77(2, 16384))
			{
				return 1;
			}
			else if ((MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 1) || MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 0)) || !__LIB_1__::func_243(28))
			{
				func_1476();
				__LIB_6__::func_876(cParam0, 18);
			}
			break;
		case 18:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[39]) >= 0.8f)
			{
				__LIB_9__::func_156(cParam0, "IND3_FAIL_POKE", "", 1, 0);
			}
			break;
	}
	return 0;
}

bool func_853(var uParam0)
{
	iLocal_1797 = 0;
	__LIB_1__::func_681(&iLocal_1716, 33554432);
	if (!__LIB_0__::func_27(iLocal_1718, 2097152))
	{
		__LIB_9__::func_101(uParam0, joaat("IND3_POKERNOHELP"));
	}
	func_1386();
	return uParam0->f_607 == uParam0->f_607;
}

int func_854(char[4] cParam0)
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_1718, 536870912))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
			{
				TASK::_TASK_USE_SCENARIO_POINT(Local_1571[0 /*10*/], iLocal_4421, "WORLD_HUMAN_LEAN_BAR_READ_NEWSPAPER_MALE_D", 0, false, true, 0, false, 0f, false);
				PED::_0x2208438012482A1A(Local_1571[0 /*10*/], false, false);
				__LIB_1__::func_683(&iLocal_1718, 536870912);
			}
		}
	}
	if (!func_1478(cParam0, 9, 1) || !func_1478(cParam0, 5, 1))
	{
		return 0;
	}
	if (!func_1444(cParam0, 10, -1, 1))
	{
		return 0;
	}
	if (!func_1429(cParam0, 5, 11, 1))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[10], true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_1720[10], true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[10]);
		}
		return 0;
	}
	if (Local_1821[0 /*1279*/].f_1277 < 6 || Local_1821[1 /*1279*/].f_1277 < 6)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		func_893(Local_1571[1 /*10*/], 3283.736f, -1311.319f, 41.751f, 266.4791f, 2, 1073741824 /* Float: 2f */);
		__LIB_4__::func_7(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 30, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(3285.108f, -1321.799f, 41.7283f, joaat("PROP_HUMAN_SEAT_CHAIR"), 2f, 0, false);
		func_893(Local_1571[2 /*10*/], 3285.108f, -1321.799f, 41.7283f, 75.1777f, 2, 1073741824 /* Float: 2f */);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_1571[2 /*10*/], iVar0, 0, 0, false, true, 0, false, -1f, false);
		}
	}
	func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_1446();
	return 1;
}

int func_855(char[4] cParam0)
{
	__LIB_14__::func_236(2);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_73, 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	__LIB_9__::func_142(cParam0, "IND3_OBJ_FOLLOW", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_0__::func_490(&(Local_79[4 /*10*/]), 0);
	return 1;
}

int func_856(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_862(cParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
		{
			__LIB_3__::func_319(iLocal_1720[27]);
			__LIB_3__::func_319(iLocal_1720[28]);
			__LIB_3__::func_319(iLocal_1720[29]);
			OBJECT::DELETE_OBJECT(&iLocal_1766);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_370[5 /*10*/]))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[5 /*10*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[5 /*10*/], true, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_370[5 /*10*/], true);
		}
		if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[9 /*10*/]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[9 /*10*/], true, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_370[9 /*10*/], true);
	}
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(3285.108f, -1321.799f, 41.7283f, joaat("PROP_HUMAN_SEAT_CHAIR"), 2f, 0, false);
	func_893(Local_1571[2 /*10*/], 3285.108f, -1321.799f, 41.7283f, 75.1777f, 2, 1073741824 /* Float: 2f */);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		TASK::_TASK_USE_SCENARIO_POINT(Local_1571[2 /*10*/], iVar0, 0, 0, false, true, 0, false, -1f, false);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[9], "s_m_m_nbxriverboatguards_01", Local_79[5 /*10*/], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[9]);
	__LIB_1__::func_948(-7373783, 1, 1f, 1, 1, 0, 1, 0);
	__LIB_1__::func_948(-331983497, 1, -1f, 1, 1, 0, 1, 0);
	iLocal_1804 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 3283.359f, -1309.822f, 42.6229f, 0f, 0f, 0f, 1.746368f, 2.447201f, 2.385454f);
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1720[12]) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_1720[12], true)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[12], true, false))
	{
		__LIB_9__::func_948(cParam0, iLocal_1720[12]);
	}
	__LIB_1__::func_948(119948423, 1, -1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(351789098, 1, 1f, 0, 0, 0f, 1, 0);
	iLocal_1817 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 3288.76f, -1307.749f, 51.62063f, 0f, 0f, 0f, 2.151137f, 1f, 2.016306f);
	return 1;
}

int func_857(char[4] cParam0)
{
	struct<27> Var0;
	vector3 vVar38;
	vector3 vVar41;
	func_1483(cParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1798))
	{
		VOLUME::_SET_VOLUME_COORDS(iLocal_1798, ENTITY::GET_ENTITY_COORDS(Local_370[11 /*10*/], true, false));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1804) && ENTITY::IS_ENTITY_IN_VOLUME(Local_370[11 /*10*/], iLocal_1804, true, 0))
	{
		__LIB_0__::func_172(iLocal_1804);
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	if (((__LIB_0__::func_27(iLocal_1716, 134217728) && __LIB_0__::func_27(iLocal_1716, 268435456)) && !__LIB_0__::func_27(iLocal_1717, 1)) && __LIB_0__::func_665(Global_35, Local_370[5 /*10*/], 1, 1) <= 5f)
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[23], "pbl_Dialogue", true);
		__LIB_1__::func_683(&iLocal_1717, 1);
	}
	func_1484(cParam0, Local_370[11 /*10*/], sLocal_60, "IND3_PB", "IND3_PB_FAIL", 13f, 18f, 0, 0, 0, 15f, joaat("BLIP_STYLE_COMPANION"), 0);
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 352, true) && __LIB_0__::func_264(&(vLocal_1607[28 /*3*/])) >= 5f)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
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
			if (!__LIB_0__::func_27(iLocal_1716, 134217728))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[35], "JavierEscuella") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[35], "JavierEscuella"))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
					{
						__LIB_9__::func_175(Local_1571[1 /*10*/], Local_370[11 /*10*/], &Var0, 0f, 0f, 0f, sLocal_60, 8, 1, 4.5f, 3f, 1073069561, 1.05f, 1092616192 /* Float: 10f */, -1, 1, 1, 0, 0, 1);
					}
					__LIB_1__::func_683(&iLocal_1716, 134217728);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1716, 268435456))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[35], "U_M_M_NBXRIVERBOATPITBOSS_01") || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[35], "U_M_M_NBXRIVERBOATPITBOSS_01"))
				{
					__LIB_1__::func_683(&iLocal_1716, 268435456);
					if (!ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
					{
						__LIB_9__::func_175(Local_370[11 /*10*/], Global_35, &Var0, 0f, 0f, 0f, sLocal_60, 0, 1, 4.5f, 3f, 1073069561, 1.05f, 1092616192 /* Float: 10f */, -1, 1, 1, 0, 0, 1);
						iLocal_1798 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(Local_370[11 /*10*/], true, false), 0f, 0f, 0f, 0.1f, 0.1f, 1f);
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_1716, 134217728) && __LIB_0__::func_27(iLocal_1716, 268435456))
			{
				__LIB_1__::func_948(441201058, 1, -1f, 1, 1, 0, 1, 0);
				__LIB_1__::func_948(178754137, 1, 1f, 1, 1, 0, 1, 0);
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_60, 1, 1065353216 /* Float: 1f */, 1f, 0);
				Local_4430.f_3 = 1;
				Local_4430 = 1;
				__LIB_13__::func_566(Global_35, Local_370[11 /*10*/], &Local_4430, -1, 1, 0);
				__LIB_1__::func_731(&uLocal_1781);
				__LIB_1__::func_148(&(vLocal_1607[1 /*3*/]));
				__LIB_6__::func_876(cParam0, 1);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_1718, 262144))
			{
				vVar38 = { ENTITY::GET_ENTITY_COORDS(Local_1571[1 /*10*/], true, false) };
				if (vVar38.z >= 43.3f)
				{
					TASK::_0xDE0C8B145EA466FF(Local_1571[1 /*10*/], 2f, 1f, -1f, -1082130432 /* Float: -1f */, -1f);
					__LIB_1__::func_683(&iLocal_1718, 262144);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1718, 524288))
			{
				vVar38 = { ENTITY::GET_ENTITY_COORDS(Local_370[11 /*10*/], true, false) };
				if (vVar38.z >= 43.3f)
				{
					TASK::_0xDE0C8B145EA466FF(Local_370[11 /*10*/], 2f, 1f, -1f, -1082130432 /* Float: -1f */, -1f);
					__LIB_1__::func_683(&iLocal_1718, 524288);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1718, 1048576) && Global_36.f_2 >= 46f)
			{
				TASK::_0xDE0C8B145EA466FF(Local_370[11 /*10*/], 4.5f, 3f, -1f, -1082130432 /* Float: -1f */, -1f);
				TASK::_0xDE0C8B145EA466FF(Local_1571[1 /*10*/], 4.5f, 3f, -1f, -1082130432 /* Float: -1f */, -1f);
				__LIB_1__::func_683(&iLocal_1718, 1048576);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
			{
				__LIB_2__::func_966(Local_370[11 /*10*/], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[8], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[8], false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_370[11 /*10*/], 3289.756f, -1290.383f, 50.85712f, 3287.127f, -1290.392f, 53.10712f, 1.5f, false, true, 0))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[8], "U_M_M_NBXRIVERBOATPITBOSS_01", Local_370[11 /*10*/], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[8], "ARTHUR", Global_35, 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_1720[8]);
					}
				}
			}
			if (((((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[7], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[7], false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[8], false)) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[8], false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[11], false)) && __LIB_0__::func_48(Global_35, Local_370[11 /*10*/], 5f, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[7], "U_M_M_NBXRIVERBOATPITBOSS_01", Local_370[11 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[7], "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[7]);
			}
			__LIB_2__::func_966(Global_35, Local_370[11 /*10*/], 1, 1, 1, 0, 1, 1, 0, 1, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 342, true);
			__LIB_9__::func_397(&uLocal_1781, Local_370[11 /*10*/]);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
			{
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[11], "CS_JavierEscuella", &vVar41, false, 0, 2);
				if (__LIB_0__::func_266(Local_1571[1 /*10*/], vVar41, 0.5f, 1, 1) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[11], false))
				{
					__LIB_1__::func_726(Local_1571[1 /*10*/], 1);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[11], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[11], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[5 /*10*/], 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1720[11]);
				}
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[10], "U_M_M_NBXRIVERBOATPITBOSS_01", &vVar41, false, 0, 2);
				if (__LIB_0__::func_266(Local_370[11 /*10*/], vVar41, 0.5f, 1, 1))
				{
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_60, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1720[8]);
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1720[7]);
					__LIB_1__::func_727(Global_35, 1);
					__LIB_1__::func_726(Local_370[11 /*10*/], 1);
					__LIB_5__::func_438(&uLocal_1781);
					__LIB_0__::func_172(iLocal_1798);
					func_1485();
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[11], false))
					{
						__LIB_1__::func_726(Local_1571[1 /*10*/], 1);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[11], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[11], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[5 /*10*/], 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_1720[11]);
					}
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_858(var uParam0)
{
	func_1386();
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_73, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_75, 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	return 1;
}

int func_859(char[4] cParam0)
{
	struct<4> Var0;
	int iVar12;
	if (!func_1478(cParam0, 9, 1) || !func_1478(cParam0, 5, 1))
	{
		return 0;
	}
	if (!func_1444(cParam0, 10, -1, 1))
	{
		return 0;
	}
	if (!func_1429(cParam0, 5, 11, 1))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[10], true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_1720[10], true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[10]);
		}
		return 0;
	}
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[10], "U_M_M_NBXRIVERBOATPITBOSS_01", &Var0, false, 0, 2);
	if (!ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
	{
		func_893(Local_370[11 /*10*/], 3284.302f, -1299.233f, 51.947f, -178.9f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[11], "CS_JavierEscuella", &Var0, false, 0, 2);
		func_893(Local_1571[1 /*10*/], Var0, Var0.f_3.f_2, 2, 1073741824 /* Float: 2f */);
		__LIB_4__::func_7(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 30, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		iVar12 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(3285.108f, -1321.799f, 41.7283f, joaat("PROP_HUMAN_SEAT_CHAIR"), 2f, 0, false);
		func_893(Local_1571[2 /*10*/], 3285.108f, -1321.799f, 41.7283f, 75.1777f, 2, 1073741824 /* Float: 2f */);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar12))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_1571[2 /*10*/], iVar12, 0, 0, false, true, 0, false, -1f, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		func_893(Local_1571[0 /*10*/], 3286.009f, -1304.629f, 41.8794f, 273.7176f, 2, 1073741824 /* Float: 2f */);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_1571[0 /*10*/], iLocal_4421, 0, 0, false, true, 0, false, -1f, false);
		}
	}
	__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[23], "CS_DESMOND", Local_370[5 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[23], "S_M_M_NBXRIVERBOATDEALERS_01", Local_370[9 /*10*/], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[23]);
	func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_1446();
	__LIB_9__::func_948(cParam0, iLocal_1720[12]);
	iLocal_1817 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 3288.76f, -1307.749f, 51.62063f, 0f, 0f, 0f, 2.151137f, 1f, 2.016306f);
	return 1;
}

int func_861(char[4] cParam0)
{
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[11], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[11], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[5 /*10*/], 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_1720[11]);
		func_1485();
	}
	iLocal_1809 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(Local_370[11 /*10*/], true, false), 0f, 0f, 0f, 0.9f, 0.9f, 1f);
	PED::_0x7C00CFC48A782DC0(iLocal_1809, Local_370[11 /*10*/], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	func_1487();
	PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 96, true);
	PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 250, true);
	PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 143, true);
	ENTITY::CREATE_MODEL_SWAP(3288.448f, -1312.786f, 41.773f, 1f, iLocal_31, iLocal_32, true);
	return 1;
}

int func_862(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;
	func_1488(cParam0);
	func_1489();
	func_1490();
	func_1491();
	if (__LIB_0__::func_27(iLocal_1718, 4))
	{
		if (__LIB_9__::func_962(cParam0, 2, 10f, 15f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_78))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_78, -1186550032);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_78))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_78, -1186550032);
			}
			if (__LIB_8__::func_618(cParam0) != 51)
			{
				__LIB_9__::func_254(cParam0, Local_1571[1 /*10*/], 1);
			}
		}
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[10], "s_IND3_IG9_HANDS_UP", 1))
			{
				if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == 1888485371)
				{
					PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 297, true);
					PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 130, true);
					PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 315, true);
					MISC::_0xE98D55C5983F2509(Local_370[11 /*10*/]);
					__LIB_5__::func_437(Local_370[11 /*10*/], "IND3_PITBOSS", 1);
					MISC::_0x870708A6E147A9AD(Local_370[11 /*10*/], "IND3_PITBOSS", 2f, 0, 0, 0, 0, 0, 0, -1);
					__LIB_9__::func_60(cParam0, 1);
					__LIB_0__::func_172(iLocal_1809);
					__LIB_0__::func_172(iLocal_1817);
					__LIB_6__::func_876(cParam0, 1);
				}
			}
			else
			{
				if ((!__LIB_0__::func_27(iLocal_1718, 4) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[10], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[10], "s_IND3_OPEN_SAFE_P2", 1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1720[11]);
					__LIB_1__::func_683(&iLocal_1718, 4);
				}
				if (!__LIB_0__::func_27(iLocal_1716, 1024))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[10], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[10]) >= 0.2359175f)
					{
						__LIB_9__::func_60(cParam0, 10);
						__LIB_1__::func_683(&iLocal_1716, 1024);
					}
				}
			}
			break;
		case 1:
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, 0, 0) && __LIB_0__::func_48(Global_35, Local_370[11 /*10*/], 2f, 1))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Local_370[11 /*10*/])
				{
					if (!__LIB_0__::func_139(iLocal_1602[2]))
					{
						iLocal_1602[2] = __LIB_4__::func_450("IND3_UC_DIS", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_2__::func_369(iLocal_1602[2], Local_370[11 /*10*/], 0, 1, -1);
					}
				}
				else if (__LIB_0__::func_139(iLocal_1602[2]))
				{
					__LIB_1__::func_748(&(iLocal_1602[2]), 1, 1);
				}
			}
			else if (__LIB_0__::func_139(iLocal_1602[2]))
			{
				__LIB_1__::func_748(&(iLocal_1602[2]), 1, 1);
			}
			if (__LIB_1__::func_732(iLocal_1602[2], 1))
			{
				__LIB_1__::func_748(&(iLocal_1602[2]), 1, 1);
				MISC::_0xE98D55C5983F2509(Local_370[11 /*10*/]);
				__LIB_0__::func_325(&iLocal_78);
				__LIB_9__::func_142(cParam0, "", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_748(&(iLocal_1602[2]), 1, 1);
				PED::_0x3088634CF8C819CF(Local_370[11 /*10*/]);
				PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 297, false);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_1720[10], "player_zero", "pbl_IND3_IG9_OPEN_SAFE", 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
				__LIB_9__::func_60(cParam0, -1);
				MAP::DISPLAY_RADAR(false);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_491(Global_35, 1369124074))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1720[10], "internal_loop", true, false);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			CAM::_0x0FF7125F07DEB84F(Local_370[11 /*10*/], 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[10], "player_zero"))
			{
				__LIB_8__::func_711(cParam0, "IND3_DISARM", 0);
				MAP::DISPLAY_RADAR(true);
				__LIB_6__::func_876(cParam0, 4);
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[10], false) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[10], "U_M_M_NBXRIVERBOATPITBOSS_01"))
			{
				func_1495(cParam0);
				__LIB_9__::func_60(cParam0, 5);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_6__::func_876(cParam0, 5);
			}
			break;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
			if (__LIB_0__::func_139(iLocal_1602[0]))
			{
				if (__LIB_0__::func_266(Global_35, __LIB_2__::func_395(iLocal_1602[0]), __LIB_2__::func_389(iLocal_1602[0], 1), 1, 1))
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_1570, __LIB_2__::func_389(iLocal_1602[0], 1), 2, 1, 0, "IND3_SAFE", 0);
				}
				if (__LIB_1__::func_732(iLocal_1602[0], 1))
				{
					__LIB_9__::func_142(cParam0, "", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_325(&iLocal_78);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_1__::func_748(&(iLocal_1602[0]), 1, 1);
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_1720[12], "player_zero", "pbl_PitBoss_Attack", 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_6__::func_876(cParam0, 6);
					__LIB_9__::func_60(cParam0, -1);
					MAP::DISPLAY_RADAR(false);
				}
			}
			break;
		case 6:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
			if (!__LIB_0__::func_491(Global_35, 1369124074))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[12], "pbl_PitBoss_Attack", true);
				__LIB_6__::func_876(cParam0, 7);
			}
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
			if (!__LIB_0__::func_27(iLocal_1716, 8192))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_370[11 /*10*/], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1720[12], "internal_loop", false, false);
				__LIB_1__::func_683(&iLocal_1716, 8192);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[12], "player_zero"))
			{
				__LIB_6__::func_876(cParam0, 8);
				__LIB_2__::func_279(Local_370[11 /*10*/], 1);
				__LIB_2__::func_279(Global_35, 1);
				__LIB_0__::func_188(1);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1720[12], "internal_loop", false, false);
				WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Global_35, true);
				WEAPON::_0x183CE355115B6E75(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"));
				PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
				__LIB_1__::func_148(&(vLocal_1607[15 /*3*/]));
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_370[11 /*10*/], true, 5000000f);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, Local_370[11 /*10*/], 37873, false);
				__LIB_1__::func_683(&iLocal_1716, 8388608);
				__LIB_9__::func_949(1, 0);
				__LIB_1__::func_683(&iLocal_1717, -2147483648);
				__LIB_1__::func_683(&iLocal_1716, 4);
			}
			break;
		case 8:
			if (ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
			{
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_370[11 /*10*/], false, 0f);
				__LIB_6__::func_876(cParam0, 9);
				__LIB_1__::func_681(&iLocal_1716, 4);
				__LIB_9__::func_60(cParam0, 4);
				MAP::DISPLAY_RADAR(true);
				__LIB_2__::func_279(Global_35, 0);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
				WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Global_35, false);
				__LIB_9__::func_949(0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_1__::func_148(&(vLocal_1607[26 /*3*/]));
				iLocal_4495 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 3286.365f, -1305.592f, 52.021f, 0.1323f, 0f, -114.2812f, 27f, true, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				MISC::SET_TIME_SCALE(0.12f);
				__LIB_1__::func_148(&(vLocal_1607[27 /*3*/]));
			}
			else
			{
				if (__LIB_0__::func_27(iLocal_1716, 8388608))
				{
					if ((((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_LR")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_UD"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_DOWN_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_LEFT_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_RIGHT_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_UP_ONLY"))) || __LIB_0__::func_265(&(vLocal_1607[15 /*3*/])) >= 0.1f)
					{
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, Local_370[11 /*10*/], 37873, false);
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, 0, -1, false);
						__LIB_1__::func_681(&iLocal_1716, 8388608);
					}
				}
				__LIB_9__::func_949(1, 0);
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_DOWN_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LEFT_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_RIGHT_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UP_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), true);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
				{
					fVar1 = 0.6f;
				}
				else
				{
					fVar1 = 0.5f;
				}
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_1720[12], "internal_loop") && __LIB_0__::func_265(&(vLocal_1607[15 /*3*/])) >= fVar1)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1720[12], "internal_loop", true, false);
					__LIB_9__::func_949(0, 0);
					__LIB_6__::func_876(cParam0, 19);
				}
			}
			break;
		case 9:
			if (CAM::IS_CAM_RENDERING(iLocal_4495) || CAM::IS_CAM_ACTIVE(iLocal_4495))
			{
				CAM::_0x6519238858AF5479(0.05f);
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				if (__LIB_0__::func_264(&(vLocal_1607[27 /*3*/])) >= 0.4f)
				{
					MISC::SET_TIME_SCALE(1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_4495, false);
				}
			}
			if (__LIB_0__::func_139(iLocal_1602[0]))
			{
				if (__LIB_0__::func_266(Global_35, __LIB_2__::func_395(iLocal_1602[0]), __LIB_2__::func_389(iLocal_1602[0], 1), 1, 1))
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_1570, __LIB_2__::func_389(iLocal_1602[0], 1), 2, 1, 0, "IND3_SAFE", 0);
				}
			}
			else if (__LIB_0__::func_264(&(vLocal_1607[26 /*3*/])) >= 3.2f)
			{
				func_1495(cParam0);
			}
			if (__LIB_1__::func_732(iLocal_1602[0], 1))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
				__LIB_6__::func_900("IND3_DEADEYE", 1, 1);
				__LIB_6__::func_900("IND3_LOOTNOW", 1, 1);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_1720[14], "player_zero", "pbl_IND3_IG10_LOOT_SAFE", 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
				__LIB_1__::func_748(&(iLocal_1602[0]), 1, 1);
				__LIB_0__::func_325(&iLocal_78);
				__LIB_9__::func_60(cParam0, -1);
				__LIB_6__::func_876(cParam0, 10);
			}
			break;
		case 10:
			if ((!__LIB_0__::func_491(Global_35, 1369124074) && !__LIB_6__::func_903("IND3_DEADEYE")) && !__LIB_6__::func_903("IND3_LOOTNOW"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1720[14], "Internal_Loop_Start", true, false);
				__LIB_6__::func_876(cParam0, 11);
			}
			break;
		case 11:
			iVar2 = 0;
			while (iVar2 < iLocal_1565)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1565[iVar2]))
				{
					switch (iVar2)
					{
						case 0:
							sVar3 = "p_cs_billstack01x";
							break;
						case 1:
							sVar3 = "p_cs_billstack01x^1";
							break;
						case 2:
							sVar3 = "p_cs_billstack01x^2";
							break;
						case 3:
							sVar3 = "p_cs_billstack01x^3";
							break;
					}
					if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[14], sVar3))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_1565[iVar2]));
					}
				}
				iVar2++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1570) && ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[14], "S_POCKETWATCH_REUTLINGE"))
			{
				OBJECT::DELETE_OBJECT(&iLocal_1570);
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[14], "player_zero"))
			{
				if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
				{
					func_333(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				__LIB_9__::func_60(cParam0, 11);
			}
			if ((!__LIB_0__::func_27(iLocal_1718, 512) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[14], "s_IND3_IG10_JAVIER_LOOP_END", 1)) && __LIB_8__::func_711(cParam0, "IND3_IG10_SURE", 0))
			{
				__LIB_1__::func_683(&iLocal_1718, 512);
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[14], "s_IND3_IG10_JAVIER_LOOP_END", 1) && __LIB_0__::func_665(Local_1571[1 /*10*/], Global_35, 1, 1) <= 4.5f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1720[14], "Internal_Loops_End", true, false);
				__LIB_6__::func_876(cParam0, 12);
			}
			break;
		case 12:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[14], false))
			{
				return 1;
			}
			break;
		case 18:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				if (!__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				}
				else if (__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 0.5f)
				{
					__LIB_9__::func_156(cParam0, "IND3_FAIL_PB", "", 1, 0);
				}
			}
			break;
		case 19:
			if (ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
			{
				__LIB_6__::func_876(cParam0, 8);
			}
			break;
	}
	return 0;
}

int func_863(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_75, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	__LIB_0__::func_325(&iLocal_78);
	func_1386();
	return 1;
}

int func_864(char[4] cParam0)
{
	int iVar0;
	if (!func_1478(cParam0, 9, 1) || !func_1478(cParam0, 5, 1))
	{
		return 0;
	}
	if (!func_1444(cParam0, 10, -1, 1))
	{
		return 0;
	}
	if (!func_1429(cParam0, 5, 11, 1))
	{
		return 0;
	}
	if (!func_1503(cParam0, 1))
	{
		return 0;
	}
	func_893(Local_370[11 /*10*/], 3290.964f, -1306.589f, 50.763f, 118.1342f, 2, 1073741824 /* Float: 2f */);
	func_1504(Local_370[11 /*10*/]);
	func_893(Local_79[5 /*10*/], 3286.534f, -1306.968f, 50.7543f, 175.4046f, 2, 1073741824 /* Float: 2f */);
	func_1504(Local_79[5 /*10*/]);
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		func_893(Local_1571[1 /*10*/], 3285.473f, -1300.688f, 50.9259f, 90.9751f, 2, 1073741824 /* Float: 2f */);
		__LIB_4__::func_7(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 30, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(3285.108f, -1321.799f, 41.7283f, joaat("PROP_HUMAN_SEAT_CHAIR"), 2f, 0, false);
		func_893(Local_1571[2 /*10*/], 3285.108f, -1321.799f, 41.7283f, 75.1777f, 2, 1073741824 /* Float: 2f */);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_1571[2 /*10*/], iVar0, 0, 0, false, true, 0, false, -1f, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		func_893(Local_1571[0 /*10*/], 3286.009f, -1304.629f, 41.8794f, 273.7176f, 2, 1073741824 /* Float: 2f */);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_1571[0 /*10*/], iLocal_4421, 0, 0, false, true, 0, false, -1f, false);
		}
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	ENTITY::PLAY_ENTITY_ANIM(vLocal_941[1 /*3*/].f_1, "pitboss_attack_safe", "script_story@ind3@ig@ig_9_open_safe", 1000f, false, true, false, 1f, 0);
	func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_1446();
	return 1;
}

int func_866(char[4] cParam0)
{
	struct<27> Var0;
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[15], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[15], "player_zero", Global_35, 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[15]);
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
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		__LIB_9__::func_175(Local_1571[1 /*10*/], Global_35, &Var0, 0f, 0f, 0f, sLocal_62, 0, 1, 4f, 2.5f, 1073069561, 1.1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
		iLocal_1798 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(Local_1571[1 /*10*/], true, false), 0f, 0f, 0f, 0.15f, 0.15f, 1f);
	}
	Local_4423.f_3 = 1;
	Local_4423 = 1;
	__LIB_13__::func_566(Global_35, Local_1571[1 /*10*/], &Local_4423, -1, 0, 0);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
	PED::_SET_PED_BLACKBOARD_FLOAT(Local_1571[1 /*10*/], "Cautious", 1f, -1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_76, 1, 1065353216 /* Float: 1f */, 1f, 0);
	__LIB_1__::func_148(&(vLocal_1607[1 /*3*/]));
	TASK::TASK_LOOK_AT_ENTITY(Local_370[10 /*10*/], Local_1571[0 /*10*/], -1, 2096, 51, 0);
	__LIB_1__::func_148(&(vLocal_1607[2 /*3*/]));
	func_893(Local_1571[2 /*10*/], 3286.009f, -1304.629f, 41.8794f, 273.7176f, 2, 1073741824 /* Float: 2f */);
	if (!ENTITY::IS_ENTITY_DEAD(Local_370[5 /*10*/]))
	{
		func_893(Local_370[5 /*10*/], 3288.71f, -1306.908f, 41.8402f, 60.3231f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		func_893(Local_1571[0 /*10*/], 3287.752f, -1306.34f, 41.8484f, 239.8794f, 2, 1073741824 /* Float: 2f */);
	}
	if (!__LIB_0__::func_27(iLocal_1716, 16384))
	{
		func_1505(cParam0);
	}
	func_1506(cParam0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[36], "JosiahTrelawny", Local_1571[0 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[36], "LeoStrauss", Local_1571[2 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[36], "CS_DESMOND", Local_370[5 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[36], "S_SHOTGLASS01X_BROWN", iLocal_1561[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[36], "S_TUMBLER01X_BROWN", iLocal_1561[1], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[36]);
	__LIB_0__::func_490(&(Local_370[9 /*10*/]), 0);
	iLocal_1799 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 3281.938f, -1308.288f, 51.96515f, 0f, 0f, 0f, 1.825222f, 1.429643f, 2.276447f);
	__LIB_1__::func_473(Local_79[6 /*10*/], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 0, 0, -1082130432 /* Float: -1f */);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[37]);
	__LIB_9__::func_56(cParam0, 256);
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_941[2 /*3*/].f_1) && ENTITY::_IS_ENTITY_FROZEN(vLocal_941[2 /*3*/].f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(vLocal_941[2 /*3*/].f_1, false);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_4421);
	}
	__LIB_1__::func_948(178754137, 0, 0f, 0, 1, 0f, 1, 0);
	__LIB_1__::func_948(441201058, 0, 0f, 0, 1, 0f, 1, 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[41]);
	return 1;
}

int func_867(char[4] cParam0)
{
	func_1508(cParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1798))
	{
		VOLUME::_SET_VOLUME_COORDS(iLocal_1798, ENTITY::GET_ENTITY_COORDS(Local_1571[1 /*10*/], true, false));
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			__LIB_2__::func_966(Local_1571[1 /*10*/], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			__LIB_2__::func_966(Global_35, Local_1571[1 /*10*/], 1, 1, 1, 0, 1, 1, 0, 1, 1);
			__LIB_9__::func_910(cParam0, Local_1571[1 /*10*/], "JAVIER_RETURN", "JAVIER_ABANDON", 9f, 15f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"), 1);
			func_1510(cParam0);
			if (((!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[16], false)) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[16], false)) && !AUDIO::_0x1ECC76792F661CF5("IND3_HOWLEAVE"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1571[1 /*10*/], 3288.343f, -1329.181f, 41.74649f, 3288.357f, -1324.996f, 44.24896f, 7.75f, false, true, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[16], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[16], "player_zero", Global_35, 0);
					__LIB_9__::func_60(cParam0, 3);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1720[16]);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[16], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[16], false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]) && __LIB_0__::func_665(Global_35, Local_1571[0 /*10*/], 1, 1) <= 13.25f)
				{
					__LIB_1__::func_727(Global_35, 1);
					__LIB_1__::func_726(Local_1571[1 /*10*/], 1);
					__LIB_0__::func_172(iLocal_1798);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1571[1 /*10*/], 3285.605f, -1307.444f, 42.796f, 1f, 20000, 0.25f, 4194304, -86.32f);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_1720[36], "Loop_1", true, false);
					__LIB_6__::func_876(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1441(cParam0, 0))
			{
				if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
				{
					func_162(1);
				}
				func_1442(cParam0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_868(char[4] cParam0)
{
	if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0) && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!func_162(0))
		{
			return 0;
		}
	}
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_76, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	__LIB_0__::func_325(&iLocal_78);
	__LIB_0__::func_490(&(Local_79[24 /*10*/]), 0);
	__LIB_0__::func_490(&(Local_79[25 /*10*/]), 0);
	__LIB_9__::func_254(cParam0, Local_1571[1 /*10*/], 1);
	__LIB_9__::func_254(cParam0, Local_1571[0 /*10*/], 1);
	func_1386();
	__LIB_0__::func_172(iLocal_1799);
	AUDIO::_0x531A78D6BF27014B("MGBLK_Sounds");
	return 1;
}

int func_869(char[4] cParam0)
{
	vector3 vVar0;
	AICOVERPOINT::_0x140B3CB1D424A945(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"));
	AICOVERPOINT::_0x140B3CB1D424A945(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"));
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[37], true, false))
	{
		return 0;
	}
	if (!func_1478(cParam0, 5, 1))
	{
		return 0;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		if ((!func_1478(cParam0, 12, 1) || !func_1478(cParam0, 19, 1)) || !func_1478(cParam0, 27, 1))
		{
			return 0;
		}
	}
	else if (!func_1444(cParam0, 10, 29, 1))
	{
		return 0;
	}
	if (!func_1429(cParam0, 6, 11, 1))
	{
		return 0;
	}
	if (__LIB_6__::func_872(cParam0, 4) && !func_1511(cParam0))
	{
		return 0;
	}
	if (!AICOVERPOINT::_0x8CBE916CFC64AD5C(Global_35) || !AICOVERPOINT::_0x8CBE916CFC64AD5C(Local_1571[1 /*10*/]))
	{
		return 0;
	}
	func_893(Local_370[11 /*10*/], 3290.964f, -1306.589f, 50.763f, 118.1342f, 2, 1073741824 /* Float: 2f */);
	func_1504(Local_370[11 /*10*/]);
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		func_893(Local_1571[1 /*10*/], 3288.415f, -1310.838f, 41.7924f, 180.743f, 2, 1073741824 /* Float: 2f */);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 50, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		func_893(Local_1571[2 /*10*/], 3285.133f, -1302.958f, 41.9201f, 163.2784f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		func_893(Local_1571[0 /*10*/], 3291.885f, -1302.784f, 41.9239f, 177.2213f, 2, 1073741824 /* Float: 2f */);
	}
	func_1512();
	PED::DELETE_PED(&(Local_370[9 /*10*/]));
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	if (__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_4__::func_7(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"), 50, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
	func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_1446();
	if (__LIB_6__::func_872(cParam0, 4))
	{
		func_1504(Local_79[6 /*10*/]);
		ANIMSCENE::START_ANIM_SCENE(iLocal_1720[37]);
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		func_1513();
		vVar0 = { TASK::_0xE116F6F2DA2D777E(iLocal_1768[5]) };
		func_893(Local_1571[0 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[5]), vVar0.z, 2, 1073741824 /* Float: 2f */);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_1571[0 /*10*/], true, 0, true);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1571[0 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[5]), -1, 0, 0, 1, 0, iLocal_1768[5], 0, 1, 0);
		vVar0 = { TASK::_0xE116F6F2DA2D777E(iLocal_1768[1]) };
		func_893(Local_1571[2 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[1]), vVar0.z, 2, 1073741824 /* Float: 2f */);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1571[2 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[1]), -1, 0, 0, 1, 1, iLocal_1768[1], 0, 1, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[41]);
	return 1;
}

int func_870(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_7(&Global_1935630, 262144);
	iLocal_1768[0] = TASK::ADD_COVER_POINT(3288.078f, -1303.892f, 41.90336f, 177.8885f, 2, 0, 1, true);
	func_1513();
	if (!ENTITY::IS_ENTITY_DEAD(Local_370[9 /*10*/]))
	{
		PED::DELETE_PED(&(Local_370[9 /*10*/]));
	}
	iVar0 = 13;
	while (iVar0 <= 24)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[iVar0 /*10*/]))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[iVar0 /*10*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[iVar0 /*10*/], true, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_370[iVar0 /*10*/], true);
		}
		iVar0++;
	}
	if (!__LIB_0__::func_27(iLocal_1716, 16384))
	{
		func_1505(cParam0);
	}
	ENTITY::CREATE_MODEL_HIDE(3289.502f, -1318.605f, 41.776f, 0.2f, iLocal_29, false);
	ENTITY::CREATE_MODEL_HIDE(3288.441f, -1316.773f, 41.776f, 0.2f, iLocal_29, false);
	ENTITY::CREATE_MODEL_HIDE(3287.387f, -1318.626f, 41.776f, 0.2f, iLocal_29, false);
	ENTITY::CREATE_MODEL_HIDE(3285.33f, -1316.733f, 41.747f, 0.5f, iLocal_40, false);
	ENTITY::CREATE_MODEL_HIDE(3291.162f, -1320.61f, 41.738f, 0.5f, iLocal_40, false);
	ENTITY::CREATE_MODEL_HIDE(3285.094f, -1321.772f, 41.729f, 0.5f, iLocal_40, false);
	ENTITY::CREATE_MODEL_HIDE(3287.387f, -1312.183f, 41.7756f, 0.2f, iLocal_29, false);
	ENTITY::CREATE_MODEL_HIDE(3289.503f, -1312.166f, 41.7758f, 0.2f, iLocal_29, false);
	iVar1 = 12;
	while (iVar1 <= 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79[iVar1 /*10*/]))
		{
			PED::DELETE_PED(&(Local_79[iVar1 /*10*/]));
		}
		iVar1++;
	}
	__LIB_11__::func_566(cParam0, 131072);
	__LIB_11__::func_566(cParam0, 65536);
	return 1;
}

int func_871(char[4] cParam0)
{
	int iVar0;
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_370[12 /*10*/], false, true);
	func_893(Local_370[12 /*10*/], 3279.979f, -1317.686f, 42.0758f, 355.8334f, 2, 1073741824 /* Float: 2f */);
	TASK::TASK_COWER(Local_370[12 /*10*/], -1, 0, 0);
	__LIB_1__::func_572(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 300f, 0, 0, 1, 1, 0);
	if (!ENTITY::IS_ENTITY_DEAD(Local_370[10 /*10*/]))
	{
		func_1426();
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3296.704f, -1290.539f, 42.2427f, 2f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_COWER(0, -1, 0, 0);
		func_1427(Local_370[10 /*10*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1571[1 /*10*/], 3288.208f, -1312.156f, 41.7934f, 2f, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[2 /*10*/], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[0 /*10*/], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[1 /*10*/], true);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD(Local_370[iVar0 /*10*/]) && iVar0 != 12) && iVar0 != 19) && iVar0 != 27) && !__LIB_0__::func_27(Local_370[iVar0 /*10*/].f_1, 16))
		{
			PED::DELETE_PED(&(Local_370[iVar0 /*10*/]));
		}
		iVar0++;
	}
	PED::SET_PED_CONFIG_FLAG(Local_1571[1 /*10*/], 246, true);
	__LIB_2__::func_279(Local_370[9 /*10*/], 1);
	iLocal_1765 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3294.644f, -1309.88f, 46.61287f, 0.5f, 1.25f, 1f, 0f, false, 7);
	func_1515();
	func_175(cParam0, Local_1571[1 /*10*/], 2, 0);
	func_175(cParam0, Local_1571[2 /*10*/], 18, 0);
	func_175(cParam0, Local_1571[0 /*10*/], 23, 0);
	iLocal_4380[0] = __LIB_2__::func_488(joaat("ROLL_DOWN_STAIRS"), 3287.472f, -1331.767f, 43.1519f, 3.1348f, 1.5f, 0, 0);
	iLocal_4380[1] = __LIB_2__::func_488(joaat("ROLL_DOWN_STAIRS"), 3289.122f, -1333.155f, 44.1483f, 3.1348f, 1.5f, 0, 0);
	iLocal_4380[2] = __LIB_2__::func_488(joaat("FALL_OVER_WALL"), 3285.04f, -1324.58f, 46.69f, 267.3063f, 1.5f, 0, 0);
	iLocal_4380[3] = __LIB_2__::func_488(joaat("FALL_OVER_WALL"), 3290.42f, -1334.1f, 46.08f, 0f, 1.5f, 0, 0);
	iLocal_4380[4] = __LIB_2__::func_488(joaat("FALL_OVER_WALL"), 3285.54f, -1334.21f, 46.56f, 0f, 1.5f, 0, 0);
	func_1516();
	ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[1 /*10*/], true);
	__LIB_9__::func_142(cParam0, "IND3_OBJ_KILL", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_9__::func_53(cParam0);
	func_1517();
	AICOVERPOINT::_0x1A7A802B2301EDC0(Global_35);
	AICOVERPOINT::_0x1A7A802B2301EDC0(Local_1571[1 /*10*/]);
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	return 1;
}

int func_872(char[4] cParam0)
{
	func_1518(cParam0);
	func_1519(cParam0);
	func_1520();
	if (!__LIB_0__::func_27(iLocal_1717, 64))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) != 1344959368)
		{
			if (!__LIB_0__::func_75(&(vLocal_1607[14 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_1607[14 /*3*/]));
			}
			if (__LIB_0__::func_265(&(vLocal_1607[14 /*3*/])) >= 3f)
			{
				func_1521(1);
			}
		}
		else if (__LIB_0__::func_75(&(vLocal_1607[14 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_1607[14 /*3*/]));
		}
	}
	else
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == 1344959368 && __LIB_0__::func_75(&(vLocal_1607[14 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_1607[14 /*3*/]));
			func_1521(0);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3298.443f, -1339.619f, 41.97385f, 3296.934f, -1349.647f, 45.04764f, 4.5f, false, true, 0) && !ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
		{
			__LIB_1__::func_864(Local_1571[1 /*10*/], 0, 0);
		}
	}
	if (__LIB_6__::func_889(cParam0) <= 5)
	{
		if (__LIB_5__::func_484(&(vLocal_1607[19 /*3*/]), 40f))
		{
			__LIB_9__::func_190(cParam0, Local_1571[1 /*10*/], 1, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[1 /*10*/], false);
		}
		else
		{
			__LIB_9__::func_190(cParam0, Local_1571[1 /*10*/], 0, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[1 /*10*/], true);
		}
	}
	__LIB_0__::func_7(&Global_1935630, 262144);
	PED::SET_PED_RESET_FLAG(Global_35, 174, true);
	func_1525();
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1526() <= 4)
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (func_1429(cParam0, 12, 14, 1))
			{
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (func_1526() <= 4)
			{
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			if (func_1445(cParam0, 15, 1))
			{
				__LIB_6__::func_876(cParam0, 4);
			}
			break;
		case 4:
			if ((func_1526() <= 2 && ENTITY::IS_ENTITY_DEAD(Local_79[8 /*10*/])) && ENTITY::IS_ENTITY_DEAD(Local_79[9 /*10*/]))
			{
				__LIB_9__::func_60(cParam0, -1);
				__LIB_6__::func_876(cParam0, 5);
			}
			break;
		case 5:
			if (func_1429(cParam0, 18, 20, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[2 /*10*/], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[0 /*10*/], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[1 /*10*/], false);
				if (!ENTITY::IS_ENTITY_DEAD(Local_79[11 /*10*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_79[11 /*10*/], 3291.934f, -1327.734f, 41.7099f, 0.75f, 1, 0, 0);
				}
				__LIB_9__::func_190(cParam0, Local_1571[1 /*10*/], 0, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[1 /*10*/], true);
				return 1;
			}
			break;
	}
	return 0;
}

int func_873(var uParam0)
{
	ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[1 /*10*/], false);
	__LIB_0__::func_325(&iLocal_78);
	func_1386();
	PED::SET_PED_CONFIG_FLAG(Local_1571[1 /*10*/], 246, false);
	PED::REMOVE_PED_DEFENSIVE_AREA(Local_1571[0 /*10*/], false);
	PED::REMOVE_PED_DEFENSIVE_AREA(Local_1571[2 /*10*/], false);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	return 1;
}

int func_874(char[4] cParam0)
{
	vector3 vVar0;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[37], true, false))
	{
		return 0;
	}
	if (!func_1478(cParam0, 11, 1) || !func_1478(cParam0, 12, 1))
	{
		return 0;
	}
	if (!func_1429(cParam0, 6, 11, 1) || !func_1429(cParam0, 18, 20, 1))
	{
		return 0;
	}
	if (!func_1511(cParam0))
	{
		return 0;
	}
	func_1513();
	func_893(Local_370[11 /*10*/], 3290.964f, -1306.589f, 50.763f, 118.1342f, 2, 1073741824 /* Float: 2f */);
	func_1504(Local_370[11 /*10*/]);
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		vVar0 = { TASK::_0xE116F6F2DA2D777E(iLocal_1768[4]) };
		func_893(Local_1571[1 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[4]), vVar0.z, 2, 1073741824 /* Float: 2f */);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 50, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		vVar0 = { TASK::_0xE116F6F2DA2D777E(iLocal_1768[3]) };
		func_893(Local_1571[2 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[3]), vVar0.z, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		vVar0 = { TASK::_0xE116F6F2DA2D777E(iLocal_1768[7]) };
		func_893(Local_1571[0 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[7]), vVar0.z, 2, 1073741824 /* Float: 2f */);
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"), 50, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	func_1006(Global_35, func_238(__LIB_6__::func_864(cParam0)), 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_1446();
	iLocal_1768[0] = TASK::ADD_COVER_POINT(3288.077f, -1303.924f, 42.9448f, 177.8885f, 2, 0, 1, true);
	ENTITY::CREATE_MODEL_HIDE(3289.502f, -1318.605f, 41.776f, 0.2f, iLocal_29, false);
	ENTITY::CREATE_MODEL_HIDE(3288.441f, -1316.773f, 41.776f, 0.2f, iLocal_29, false);
	ENTITY::CREATE_MODEL_HIDE(3287.387f, -1318.626f, 41.776f, 0.2f, iLocal_29, false);
	ENTITY::CREATE_MODEL_HIDE(3285.33f, -1316.733f, 41.747f, 0.5f, iLocal_40, false);
	ENTITY::CREATE_MODEL_HIDE(3291.162f, -1320.61f, 41.738f, 0.5f, iLocal_40, false);
	ENTITY::CREATE_MODEL_HIDE(3285.094f, -1321.772f, 41.729f, 0.5f, iLocal_40, false);
	ENTITY::CREATE_MODEL_HIDE(3287.387f, -1312.183f, 41.7756f, 0.2f, iLocal_29, false);
	ENTITY::CREATE_MODEL_HIDE(3289.503f, -1312.166f, 41.7758f, 0.2f, iLocal_29, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_370[12 /*10*/], false, true);
	func_893(Local_370[12 /*10*/], 3279.979f, -1317.686f, 42.0758f, 355.8334f, 2, 1073741824 /* Float: 2f */);
	TASK::TASK_COWER(Local_370[12 /*10*/], -1, 0, 0);
	func_1515();
	func_1517();
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[37]);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[41]);
	return 1;
}

bool func_876(var uParam0)
{
	iLocal_1768[9] = TASK::ADD_COVER_POINT(3283.773f, -1326.772f, 41.704f, 175.3227f, 1, 2, 2, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 411, true);
	CAM::_0x1B3C2D961F5FC0E1("script@Story@IND3@pullout");
	iLocal_1815 = VOLUME::_CREATE_VOLUME_CYLINDER(3276.956f, -1350.991f, 41.15511f, 0f, 0f, 0f, 9.063385f, 9.599677f, 3.916222f);
	return uParam0->f_607 == uParam0->f_607;
}

int func_877(char[4] cParam0)
{
	func_1527(cParam0);
	func_1528();
	func_1520();
	__LIB_0__::func_7(&Global_1935630, 262144);
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_LR")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_UD"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_DOWN_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_LEFT_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_RIGHT_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_UP_ONLY")))
	{
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 174, true);
	func_1525();
	func_1529(cParam0);
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1815, true, 0) && ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)))
	{
		CAM::_0x8370D34BD2E60B73();
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 3237.384f, -1343.284f, 40.1572f, 2f, -1, 0.25f, 5242884, 40000f);
				__LIB_0__::func_325(&iLocal_78);
				if (AUDIO::_0x1ECC76792F661CF5("IND3_LEAVE"))
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION("IND3_LEAVE", false, false);
				}
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
				return 1;
			}
			else
			{
				if (Global_36.f_2 >= 49.45f || !__LIB_0__::func_48(Global_35, Local_1571[0 /*10*/], 50f, 1))
				{
					__LIB_9__::func_156(cParam0, "GANG_FAIL", "", 1, 0);
				}
				if (func_1526() == 0 || __LIB_0__::func_27(iLocal_1716, 4096))
				{
					__LIB_1__::func_683(&iLocal_1716, 4096);
					if (!__LIB_0__::func_75(&(vLocal_1607[24 /*3*/])))
					{
						__LIB_1__::func_148(&(vLocal_1607[24 /*3*/]));
					}
					func_1429(cParam0, 26, 28, 1);
				}
			}
			break;
	}
	return 0;
}

bool func_878(var uParam0)
{
	func_1386();
	PED::_0x411189E51B8020BA(Local_1571[0 /*10*/], "Cautious");
	PED::SET_PED_USING_ACTION_MODE(Local_1571[0 /*10*/], false, -1, 0);
	PED::_0x411189E51B8020BA(Local_1571[0 /*10*/], "Cautious");
	PED::SET_PED_USING_ACTION_MODE(Local_1571[0 /*10*/], false, -1, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[1 /*10*/], true);
	PED::_0xFD6943B6DF77E449(Local_1571[1 /*10*/], true);
	PED::SET_PED_CONFIG_FLAG(Local_1571[1 /*10*/], 246, false);
	PED::SET_PED_CONFIG_FLAG(Local_1571[1 /*10*/], 252, false);
	if (PLAYER::_0x2E78D822208E740A(PLAYER::PLAYER_ID()) != 1f)
	{
		PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	}
	CAM::_0x8370D34BD2E60B73();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1767) && ENTITY::IS_ENTITY_ATTACHED(iLocal_1767))
	{
		ENTITY::DETACH_ENTITY(iLocal_1767, true, true);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_879(var uParam0)
{
	var uVar0;
	vector3 vVar1;
	if (!CAM::_0xAA235E2F2C09E952("script@Story@IND3@pullout"))
	{
		if (!CAM::_0x595550376B7EA230("script@Story@IND3@pullout"))
		{
			CAM::_0x1B3C2D961F5FC0E1("script@Story@IND3@pullout");
		}
		return 0;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 411, true);
	vVar1 = { 3276.802f, -1347.156f, 40.2f };
	if (WATER::GET_WATER_HEIGHT(vVar1, &uVar0))
	{
		vVar1.f_2 = uVar0;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Global_35, vVar1, 106.3852f, false, true);
	PED::_0x2208438012482A1A(Global_35, false, false);
	__LIB_0__::func_489(0, 0);
	func_893(Local_1571[0 /*10*/], 3263.887f, -1346.646f, 40.0813f, 46.4006f, 128, 1073741824 /* Float: 2f */);
	func_893(Local_1571[1 /*10*/], 3271.096f, -1350.611f, 40.0815f, 64.2795f, 128, 1073741824 /* Float: 2f */);
	func_893(Local_1571[2 /*10*/], 3265.086f, -1353.55f, 40.0829f, 88.6942f, 128, 1073741824 /* Float: 2f */);
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"), 50, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	iLocal_1815 = VOLUME::_CREATE_VOLUME_CYLINDER(3276.956f, -1350.991f, 41.15511f, 0f, 0f, 0f, 9.063385f, 9.599677f, 3.916222f);
	return 1;
}

int func_880(var uParam0)
{
	func_179(&Local_79);
	CAM::_0x8370D34BD2E60B73();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	return 1;
}

int func_881(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1571[iVar0 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1571[iVar0 /*10*/]))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[iVar0 /*10*/], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[iVar0 /*10*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_1571[iVar0 /*10*/], 265, false);
			PED::SET_PED_CONFIG_FLAG(Local_1571[iVar0 /*10*/], 411, true);
		}
		iVar0++;
	}
	__LIB_9__::func_53(cParam0);
	if (!__LIB_0__::func_491(Global_35, 713668775))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 3237.384f, -1343.284f, 40.1572f, 2f, -1, 0.25f, 5242884, 40000f);
	}
	CAM::_0x8370D34BD2E60B73();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	return 1;
}

int func_882(char[4] cParam0)
{
	func_1530(cParam0);
	func_1531(cParam0);
	func_1532(cParam0);
	CAM::_0x8370D34BD2E60B73();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	PED::_0xEA8763E505AFD49A(Global_35, 0f, 0f);
	PED::_0xD61FCF9FCFD515B7(Global_35, 0f, 0f);
	if (__LIB_0__::func_27(iLocal_1719, 1))
	{
		CAM::_0x702B75DC9D3EDE56(true);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1815, true, 0))
			{
				CAM::_0xBC016635D6A73B31("script@Story@IND3@pullout", "PullOut", 5);
			}
			else
			{
				CAM::_0xBC016635D6A73B31("script@Story@IND3@pullout", "PullOut2", 5);
				__LIB_1__::func_683(&iLocal_1719, 1);
			}
			__LIB_1__::func_148(&(vLocal_1607[0 /*3*/]));
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			__LIB_6__::func_876(cParam0, 1);
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(Global_35, 151, true);
			if (__LIB_0__::func_265(&(vLocal_1607[0 /*3*/])) >= 10f)
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				__LIB_6__::func_876(cParam0, 2);
				__LIB_9__::func_60(cParam0, 51);
				__LIB_1__::func_683(&iLocal_1718, 32768);
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_893(Local_1571[1 /*10*/], 2921.016f, -1258.945f, 40.552f, 244.2772f, 2, 1073741824 /* Float: 2f */);
				func_893(Local_1571[2 /*10*/], 2920.487f, -1260.085f, 40.5219f, 273.1751f, 2, 1073741824 /* Float: 2f */);
				func_893(Local_1571[0 /*10*/], 2921.271f, -1261.299f, 40.5477f, 319.8254f, 2, 1073741824 /* Float: 2f */);
				func_893(Global_35, 2949.225f, -1129.097f, 42.4428f, 130.549f, 2, 1073741824 /* Float: 2f */);
				__LIB_1__::func_148(&(vLocal_1607[0 /*3*/]));
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			if (STREAMING::_0x513F8AA5BF2F17CF(2916.88f, -1274.036f, 41.0848f, 15f, 0))
			{
				__LIB_6__::func_876(cParam0, 4);
			}
			break;
		case 4:
			if (STREAMING::_0x0909F71B5C070797() && __LIB_0__::func_265(&(vLocal_1607[0 /*3*/])) >= 2f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_883(var uParam0)
{
	CAM::_0x8370D34BD2E60B73();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	__LIB_0__::func_401(-276259505);
	__LIB_0__::func_400(-1716205818);
	__LIB_0__::func_804(-2022369555);
	CAM::_0x2412216FCC7B4E3E("script@Story@IND3@pullout");
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_0__::func_325(&iLocal_78);
	func_1386();
	return 1;
}

int func_885(var uParam0)
{
	func_893(Global_35, 2921.811f, -1259.295f, 40.5463f, 120.1091f, 2, 1073741824 /* Float: 2f */);
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		func_893(Local_1571[1 /*10*/], 2921.016f, -1258.945f, 40.552f, 244.2772f, 2, 1073741824 /* Float: 2f */);
		__LIB_4__::func_239(Local_1571[1 /*10*/]);
		__LIB_5__::func_602(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[2 /*10*/]))
	{
		func_893(Local_1571[2 /*10*/], 2920.487f, -1260.085f, 40.5219f, 273.1751f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		func_893(Local_1571[0 /*10*/], 2921.271f, -1261.299f, 40.5477f, 319.8254f, 2, 1073741824 /* Float: 2f */);
		__LIB_4__::func_239(Local_1571[0 /*10*/]);
	}
	__LIB_5__::func_602(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"));
	func_179(&Local_79);
	__LIB_8__::func_665(uParam0, 16384);
	__LIB_8__::func_665(uParam0, 524288);
	PED::SET_PED_WETNESS_HEIGHT(Global_35, 1f);
	PED::SET_PED_WETNESS_HEIGHT(Local_1571[0 /*10*/], 1f);
	PED::SET_PED_WETNESS_HEIGHT(Local_1571[1 /*10*/], 1f);
	PED::SET_PED_WETNESS_HEIGHT(Local_1571[2 /*10*/], 1f);
	PED::_0xF9CFF5BB70E8A2CB(Global_35, 1f);
	PED::_0xF9CFF5BB70E8A2CB(Local_1571[0 /*10*/], 1f);
	PED::_0xF9CFF5BB70E8A2CB(Local_1571[1 /*10*/], 1f);
	PED::_0xF9CFF5BB70E8A2CB(Local_1571[2 /*10*/], 1f);
	CAM::_0x8370D34BD2E60B73();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	return 1;
}

int func_886(var uParam0)
{
	__LIB_9__::func_139(uParam0, Local_1571[0 /*10*/]);
	__LIB_9__::func_139(uParam0, Local_1571[1 /*10*/]);
	__LIB_9__::func_139(uParam0, Local_1571[2 /*10*/]);
	__LIB_9__::func_252(uParam0, 23, Local_1571[0 /*10*/], 0, 1, 1, 0);
	__LIB_9__::func_252(uParam0, 2, Local_1571[1 /*10*/], 0, 1, 1, 0);
	__LIB_9__::func_252(uParam0, 18, Local_1571[2 /*10*/], 0, 1, 1, 0);
	__LIB_9__::func_99(uParam0, -1, 1);
	__LIB_7__::func_448(Global_1835011[34 /*74*/].f_1, 0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}

int func_887(char[4] cParam0)
{
	bool bVar0;
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_0__::func_13(32768))
				{
					return 1;
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				PED::_0x2208438012482A1A(Global_35, false, false);
				func_893(Global_35, 2629.088f, -1276.92f, 51.2712f, 244.1751f, 2, 1073741824 /* Float: 2f */);
				iLocal_1720[40] = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@ind3_timelapse", 0, "PBL_1", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[40]);
				__LIB_9__::func_445(0);
				__LIB_1__::func_148(&(vLocal_1607[0 /*3*/]));
				__LIB_9__::func_143(1);
				if ((Global_1905942 != 16 && Global_1905942 != 17) && Global_1905942 != -1)
				{
					__LIB_9__::func_960(Global_35, 1);
				}
				else
				{
					__LIB_9__::func_2(Global_35, 9, 1, 0, 0);
				}
				__LIB_8__::func_944(Global_35, joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), 0);
				__LIB_8__::func_944(Global_35, joaat("MPC_HIDE_ACTION_EQUIPMENT"), 0);
				__LIB_8__::func_944(Global_35, -1991991829, 0);
				HUD::_DISPLAY_HUD_COMPONENT(-2106452847);
				__LIB_1__::func_683(&iLocal_1716, 2097152);
				__LIB_6__::func_876(cParam0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				func_405();
			}
			else
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			}
			break;
		case 1:
			if (!__LIB_0__::func_266(Global_35, 2629.088f, -1276.92f, 51.2712f, 10f, 1, 1))
			{
				func_893(Global_35, 2629.088f, -1276.92f, 51.2712f, 244.1751f, 2, 1073741824 /* Float: 2f */);
			}
			else
			{
				bVar0 = true;
				if (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1) != 1 && !__LIB_0__::func_13(32768))
				{
					bVar0 = false;
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[40], true, false))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[40], "ARTHUR", Global_35, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1720[40]);
					__LIB_6__::func_876(cParam0, 2);
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[40], false))
			{
				__LIB_1__::func_971(0);
				CAM::DO_SCREEN_FADE_IN(1000);
				__LIB_3__::func_152(94);
				__LIB_8__::func_958(94, 1, 2592.7f, -1207.5f, 52.5f, -1, 0, 1);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[40], "ARTHUR"))
			{
				__LIB_7__::func_448(Global_1835011[34 /*74*/].f_1, 2);
				return 1;
			}
			break;
	}
	return 0;
}

int func_888(var uParam0)
{
	__LIB_0__::func_325(&iLocal_78);
	return 1;
}

Vector3 func_891(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { 2670.404f, -1266.454f, 50.97f };
			break;
		case 1:
			vVar0 = { 2645.42f, -1278.098f, 51.139f };
			break;
		case 2:
			vVar0 = { 2641.038f, -1280.134f, 51.1213f };
			break;
		case 3:
			vVar0 = { 2685.318f, -1259.46f, 50.3012f };
			break;
		case 4:
			vVar0 = { 2638.257f, -1311.7f, 50.2307f };
			break;
	}
	return vVar0;
}

float func_892(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 205.8207f;
			break;
		case 1:
			fVar0 = 206.3834f;
			break;
		case 2:
			fVar0 = 206.3834f;
			break;
		case 3:
			fVar0 = 203.7511f;
			break;
		case 4:
			fVar0 = 302.0279f;
			break;
	}
	return fVar0;
}

void func_893(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_893(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_893(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_899(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1552();
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

void func_901(var uParam0)
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
			func_893(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_893(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_902(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_893(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_910(int iParam0, int iParam1)
{
	var uVar0;
	return func_1576(&uVar0, iParam0, iParam1);
}

bool func_979(char[4] cParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1611(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1612(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

bool func_989(var uParam0, int iParam1)
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
			func_899(&iVar0, 0, 2, 0, 0, 0, 0);
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

bool func_991(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (func_1644(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 262144);
		if (__LIB_4__::func_562(&(cParam0->f_10792), 524288))
		{
			__LIB_8__::func_665(cParam0, 67108864);
			__LIB_4__::func_563(&(cParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

bool func_993(char[4] cParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_6__::func_862(cParam0, 16777216))
	{
		__LIB_8__::func_712(cParam0);
		__LIB_8__::func_689(cParam0);
		return true;
	}
	if (func_1650(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (__LIB_6__::func_877(cParam0) == 0)
	{
		__LIB_14__::func_424(cParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_6__::func_862(cParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(cParam0->f_10792));
			__LIB_4__::func_974(cParam0);
			__LIB_6__::func_887(cParam0, 524288);
			__LIB_8__::func_713(cParam0);
			__LIB_8__::func_661(cParam0, 30f);
			__LIB_8__::func_662(cParam0, 40f);
			__LIB_6__::func_868(cParam0, 262144);
		}
		if (!__LIB_6__::func_862(cParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(cParam0->f_7375.f_804))
		{
			__LIB_6__::func_868(cParam0, 524288);
		}
	}
	return false;
}

bool func_1000(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -433615745;
	iVar1 = 1;
	if (__LIB_6__::func_864(cParam0) >= iLocal_49)
	{
		iVar0 = -193269670;
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_43)
	{
		iVar1 = 0;
	}
	if (((func_1658(23, Local_1571[0 /*10*/], 1018353621) && func_1658(2, Local_1571[1 /*10*/], iVar0)) && func_1658(18, Local_1571[2 /*10*/], 1018353621)) && (iVar1 || func_1659(cParam0, iLocal_4453)))
	{
		return true;
	}
	return false;
}

bool func_1003(char[4] cParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (iParam1 == 1)
	{
		iVar0 = 37;
	}
	else if (iParam1 == 0)
	{
		iVar0 = 47;
	}
	else
	{
		return false;
	}
	func_1478(cParam0, iParam1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_370[iParam1 /*10*/]))
	{
		return false;
	}
	__LIB_9__::func_963(iVar0);
	if (bParam2)
	{
		__LIB_4__::func_845(0, 8);
	}
	if (iParam1 == 1)
	{
		PED::_0x1E017404784AA6A3(Local_370[iParam1 /*10*/], joaat("IND3_BARBER_CHAT"));
	}
	return true;
}

void func_1006(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_893(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1009(int iParam0)
{
	Global_40.f_7731.f_16 = (Global_40.f_7731.f_16 || iParam0);
}

void func_1010(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_1571)
	{
		if (__LIB_0__::func_272(Local_1571[iVar0 /*10*/], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[iVar0 /*10*/], true);
			__LIB_9__::func_154(cParam0, Local_1571[iVar0 /*10*/], 0, 0, 0, 0, 0);
			PED::CLEAR_PED_ENV_DIRT(Local_1571[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

void func_1012()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_1571)
	{
		if (__LIB_0__::func_272(Local_1571[iVar0 /*10*/], 0))
		{
			__LIB_11__::func_172(Local_1571[iVar0 /*10*/], &(Local_969[iVar0 /*164*/]));
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_1571[iVar0 /*10*/], true, true);
		}
		iVar0++;
	}
	__LIB_1__::func_683(&iLocal_1716, 1);
}

int func_1013(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_681(&iLocal_1718, 64);
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 == 5 || __LIB_8__::func_615(&(cParam0->f_7375), "IND3_MCS1"))
	{
		if (__LIB_6__::func_862(cParam0, 8) || !__LIB_0__::func_898(-2022369555))
		{
			__LIB_0__::func_400(-276259505);
			__LIB_0__::func_401(-1716205818);
			__LIB_0__::func_803(-2022369555);
			__LIB_0__::func_400(-873881483);
			__LIB_0__::func_804(-789397228);
			__LIB_0__::func_401(-614421509);
			__LIB_0__::func_401(604920544);
			__LIB_0__::func_401(joaat("SER_01_GRANDKOR3"));
			__LIB_1__::func_948(-1035861617, 1, 1f, 0, 0, 0f, 1, 0);
			__LIB_1__::func_948(-721377524, 1, -1f, 0, 0, 0f, 1, 0);
		}
	}
	else if (iVar0 == 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_79[11 /*10*/]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_79[11 /*10*/], false);
		}
		__LIB_9__::func_62(cParam0, Local_370[6 /*10*/], "A_M_M_NBXUPPERCLASS_01", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_370[8 /*10*/], "A_M_M_NBXUPPERCLASS_01^1", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_370[7 /*10*/], "A_M_M_NBXUPPERCLASS_01^2", 0, 0, 0, 0);
	}
	else if (iVar0 == 7)
	{
		__LIB_9__::func_62(cParam0, Local_370[6 /*10*/], "A_M_M_NBXUPPERCLASS_01", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_370[8 /*10*/], "A_M_M_NBXUPPERCLASS_01^1", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_370[7 /*10*/], "A_M_M_NBXUPPERCLASS_01^2", 0, 0, 0, 0);
	}
	else if (iVar0 == 9)
	{
		__LIB_3__::func_319(iLocal_1720[29]);
	}
	else if (iVar0 == 12 || __LIB_8__::func_615(&(cParam0->f_7375), "IND3_MCS5"))
	{
		iVar1 = 6;
		while (iVar1 <= 8)
		{
			__LIB_0__::func_490(&(Local_370[iVar1 /*10*/]), 0);
			iVar1++;
		}
		iVar1 = 30;
		while (iVar1 <= 56)
		{
			__LIB_0__::func_490(&(Local_370[iVar1 /*10*/]), 0);
			iVar1++;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Local_79[8 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_79[10 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_79[6 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_79[7 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_79[9 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_79[11 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
		iLocal_4416 = WEAPON::_0xC6A6789BB405D11C(Local_1571[1 /*10*/], 1);
		iLocal_4417 = WEAPON::_0xC6A6789BB405D11C(Local_79[6 /*10*/], 1);
		__LIB_9__::func_62(cParam0, WEAPON::_0xC6A6789BB405D11C(Local_79[8 /*10*/], 1), "w_revolver_schofield01", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, WEAPON::_0xC6A6789BB405D11C(Local_79[10 /*10*/], 1), "w_revolver_schofield01^1", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_4417, "W_REPEATER_WINCHESTER01", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, WEAPON::_0xC6A6789BB405D11C(Local_79[7 /*10*/], 1), "W_REPEATER_WINCHESTER01^1", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, WEAPON::_0xC6A6789BB405D11C(Local_79[9 /*10*/], 1), "W_REPEATER_WINCHESTER01^3", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, WEAPON::_0xC6A6789BB405D11C(Local_79[11 /*10*/], 1), "W_REPEATER_WINCHESTER01^5", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_4416, "W_REPEATER_WINCHESTER01^6", 0, 0, 0, 0);
		AICOVERPOINT::_0x140B3CB1D424A945(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"));
		AICOVERPOINT::_0x140B3CB1D424A945(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"));
		func_1506(cParam0);
	}
	else if (iVar0 == 25)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_1571[1 /*10*/], joaat("WEAPON_UNARMED"), true, 0, false, false);
		__LIB_8__::func_638(cParam0, 2);
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
	}
	return 1;
}

int func_1015(char[4] cParam0)
{
	int iVar0;
	var uVar1[6];
	int iVar8;
	struct<9> Var9;
	struct<7> Var19;
	int iVar31;
	int iVar32;
	Var9 = -1;
	Var9.f_1 = -1;
	Var9.f_2 = -1;
	if (__LIB_0__::func_27(iLocal_1716, 67108864))
	{
		__LIB_1__::func_681(&iLocal_1716, 67108864);
	}
	if (__LIB_12__::func_424(15))
	{
		__LIB_12__::func_435(15);
	}
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_1719, 2))
			{
				__LIB_9__::func_437();
				__LIB_9__::func_469(-1035468800 /* Float: -50f */);
				__LIB_1__::func_683(&iLocal_1719, 2);
			}
			if ((__LIB_9__::func_408(cParam0, Global_35, "ARTHUR", 0, 1, 1) || ANIMSCENE::_0x005E6F28DD7ED58D(cParam0->f_7375.f_804, "ARTHUR")) && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[0 /*10*/], "JosiahTrelawny", 0, 1, 1) && !ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
			{
				__LIB_1__::func_948(-1683351620, 0, 0f, 0, 1, 0, 0, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[30], "JosiahTrelawny", Local_1571[0 /*10*/], 0);
				if (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("FANCY_UPPER")))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[30], "pbl_Badsuit", true);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[30], "pbl_Scruffy", true);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[30]);
			}
			break;
		case 5:
			AUDIO::_0xD9130842D7226045("MGBLK_Sounds", 1);
			__LIB_0__::func_400(-1968130469);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1720[31]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[31], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1720[31]);
			}
			if (__LIB_8__::func_671(cParam0))
			{
				func_1503(cParam0, 5);
				func_1503(cParam0, 6);
				func_1503(cParam0, 7);
				func_1503(cParam0, 8);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 744376431))
			{
				MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("OVERCAST"), joaat("MISTY"), 0.55f, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1993727237))
			{
				MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("OVERCAST"), joaat("MISTY"), 0.55f, 1);
			}
			if ((!__LIB_0__::func_27(iLocal_1718, 1024) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_4406) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == 1344959368)
			{
				__LIB_1__::func_683(&iLocal_1718, 1024);
				iVar31 = 54;
				while (iVar31 <= 56)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Local_370[iVar31 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_370[iVar31 /*10*/])) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_370[iVar31 /*10*/], 0))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_370[iVar31 /*10*/], sLocal_63, 0, 1038, -1, 1, 0, -1);
					}
					iVar31++;
				}
			}
			if ((STREAMING::_IS_IMAP_ACTIVE(-614421509) && STREAMING::_IS_IMAP_ACTIVE(604920544)) && STREAMING::_IS_IMAP_ACTIVE(joaat("SER_01_GRANDKOR3")))
			{
				func_180(1);
				func_437(0);
				OBJECT::SET_FORCE_OBJECT_THIS_FRAME(3288.383f, -1323.279f, 41.75024f, 3f);
				OBJECT::SET_FORCE_OBJECT_THIS_FRAME(3288.376f, -1317.873f, 41.76574f, 3f);
				OBJECT::SET_FORCE_OBJECT_THIS_FRAME(3288.431f, -1312.82f, 41.78199f, 3f);
				func_1444(cParam0, 5, 9, 1);
				if (TASK::_0xF97F462779B31786(iLocal_4420) && func_1444(cParam0, 10, -1, 1))
				{
					func_1673();
				}
				func_1445(cParam0, 4, 1);
				func_1429(cParam0, 5, 11, 1);
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[38], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_1720[38], true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[38]);
				}
			}
			if (((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[38], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[38], false)) && func_437(0)) && func_1444(cParam0, 5, 9, 1))
			{
				func_1674();
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "A_M_M_NBXUPPERCLASS_01", Local_370[6 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "A_M_M_NBXUPPERCLASS_01^1", Local_370[8 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "A_M_M_NBXUPPERCLASS_01^2", Local_370[7 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "S_M_M_NBXRIVERBOATDEALERS_01", Local_370[9 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "CS_DESMOND", Local_370[5 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[38]);
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[1 /*10*/], 0, 0, 1, 1))
			{
				__LIB_1__::func_948(-1035861617, 1, 1f, 0, 0, 0f, 1, 0);
				__LIB_1__::func_948(-721377524, 1, -1f, 0, 0, 0f, 1, 0);
				func_893(Local_1571[1 /*10*/], 3277.184f, -1315.271f, 41.6534f, 1.1085f, 2, 1073741824 /* Float: 2f */);
				__LIB_1__::func_473(Local_1571[1 /*10*/], joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"), -1, 0, 0, -1082130432 /* Float: -1f */);
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[2 /*10*/], 0, 0, 1, 1))
			{
				func_893(Local_1571[2 /*10*/], 3277.428f, -1343.173f, 42.0902f, 107.8719f, 2, 1073741824 /* Float: 2f */);
				__LIB_1__::func_473(Local_1571[2 /*10*/], joaat("WORLD_HUMAN_LEAN_RAILING"), -1, 0, 0, -1082130432 /* Float: -1f */);
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[0 /*10*/], 0, 0, 1, 1))
			{
				func_1426();
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4421))
				{
					TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_4421, 0, -1, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3286.009f, -1304.629f, 41.8794f, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(0, 3286.009f, -1304.629f, 41.8794f, 1f, -1, true, false, true, false);
				}
				func_1427(Local_1571[0 /*10*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			if (!__LIB_0__::func_27(iLocal_1716, 2048))
			{
				__LIB_0__::func_400(-873881483);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -291636720))
				{
					func_1012();
					__LIB_1__::func_683(&iLocal_1716, 2048);
					__LIB_0__::func_804(1358491857);
					__LIB_0__::func_400(1056170594);
					__LIB_0__::func_400(-873881483);
					__LIB_0__::func_400(joaat("NEW_BOATS_01_GRANDKOR3"));
					__LIB_0__::func_400(1157695860);
					__LIB_0__::func_400(146172383);
				}
			}
			break;
		case 6:
			iVar32 = 0;
			while (iVar32 < 17)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1543[iVar32]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_1543[iVar32]));
				}
				iVar32++;
			}
			if (!__LIB_1__::func_243(28))
			{
				uVar1[0] = Local_370[6 /*10*/];
				uVar1[1] = Local_370[7 /*10*/];
				uVar1[2] = Global_35;
				uVar1[3] = Local_370[8 /*10*/];
				uVar1[4] = Local_370[9 /*10*/];
				uVar1[5] = Local_370[5 /*10*/];
				__LIB_1__::func_65(28, &Var9, 1);
				if (func_1462(28, 8, Var9.f_5, Var9.f_8, 0, &uVar1, 1, 4, 0))
				{
					__LIB_1__::func_211(2, 512);
					__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
					__LIB_1__::func_211(2, 64);
					__LIB_3__::func_20(2, cParam0->f_7375.f_804);
				}
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[2 /*10*/], 0, 0, 1, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_79[11 /*10*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_79[11 /*10*/], true);
				}
				func_1675();
			}
			if (__LIB_9__::func_408(cParam0, Global_35, "ARTHUR", 0, 1, 1))
			{
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[4], "CS_JavierEscuella", &Var19, false, 0, 2);
				func_893(Local_1571[1 /*10*/], Var19, Var19.f_6.f_2, 2, 1073741824 /* Float: 2f */);
				PED::_0x2208438012482A1A(Local_1571[1 /*10*/], false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[4], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[4], "s_m_m_nbxriverboatguards_01", Local_79[4 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[4]);
			}
			break;
		case 7:
			PAD::ENABLE_CONTROL_ACTION(2, joaat("INPUT_SKIP_CUTSCENE"), true);
			if (!__LIB_0__::func_27(iLocal_1718, 64) && __LIB_8__::func_671(cParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1766))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1766);
				}
				__LIB_1__::func_683(&iLocal_1718, 64);
			}
			if (!__LIB_1__::func_243(28))
			{
				uVar1[2] = Global_35;
				uVar1[4] = Local_370[9 /*10*/];
				uVar1[5] = Local_370[5 /*10*/];
				__LIB_1__::func_65(28, &Var9, 1);
				if (func_1462(28, 8, Var9.f_5, Var9.f_8, 0, &uVar1, 1, 4, 0))
				{
					__LIB_1__::func_211(2, 1024);
					__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
					__LIB_1__::func_211(2, 64);
					__LIB_3__::func_20(2, cParam0->f_7375.f_804);
				}
			}
			if (__LIB_9__::func_408(cParam0, Local_370[6 /*10*/], "A_M_M_NBXUPPERCLASS_01", 0, 1, 0))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[6 /*10*/]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[6 /*10*/], true, true);
				}
				PED::DELETE_PED(&(Local_370[6 /*10*/]));
			}
			if (__LIB_9__::func_408(cParam0, Local_370[8 /*10*/], "A_M_M_NBXUPPERCLASS_01^1", 0, 1, 0))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[8 /*10*/]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[8 /*10*/], true, true);
				}
				PED::DELETE_PED(&(Local_370[8 /*10*/]));
			}
			if (__LIB_9__::func_408(cParam0, Local_370[7 /*10*/], "A_M_M_NBXUPPERCLASS_01^2", 0, 1, 0))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[7 /*10*/]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[7 /*10*/], true, true);
				}
				PED::DELETE_PED(&(Local_370[7 /*10*/]));
			}
			if (__LIB_9__::func_408(cParam0, Global_35, "ARTHUR", 0, 1, 1))
			{
				__LIB_1__::func_212(2, 512);
				__LIB_1__::func_211(2, 32768);
				__LIB_1__::func_211(2, 1024);
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[5], "CS_JavierEscuella", &Var19, false, 0, 2);
				func_893(Local_1571[1 /*10*/], Var19, Var19.f_6.f_2, 2, 1073741824 /* Float: 2f */);
				PED::_0x2208438012482A1A(Local_1571[1 /*10*/], false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[5], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[5], "s_m_m_nbxriverboatguards_01", Local_79[4 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[5]);
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[2 /*10*/], 0, 0, 1, 1))
			{
				func_1470(cParam0);
			}
			break;
		case 8:
			PAD::ENABLE_CONTROL_ACTION(2, joaat("INPUT_SKIP_CUTSCENE"), true);
			if (!__LIB_0__::func_27(iLocal_1718, 64) && __LIB_8__::func_671(cParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1766))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1766);
				}
				__LIB_1__::func_683(&iLocal_1718, 64);
			}
			if (!__LIB_1__::func_243(28))
			{
				uVar1[2] = Global_35;
				uVar1[4] = Local_370[9 /*10*/];
				uVar1[5] = Local_370[5 /*10*/];
				__LIB_1__::func_65(28, &Var9, 1);
				if (func_1462(28, 8, Var9.f_5, Var9.f_8, 0, &uVar1, 1, 4, 0))
				{
					__LIB_1__::func_211(2, 2048);
					__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
					__LIB_1__::func_211(2, 64);
					__LIB_3__::func_20(2, cParam0->f_7375.f_804);
				}
			}
			if (__LIB_9__::func_408(cParam0, Global_35, "ARTHUR", 0, 1, 1))
			{
				__LIB_1__::func_212(2, 1024);
				__LIB_1__::func_211(2, 32768);
				__LIB_1__::func_211(2, 2048);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[6], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[6], "s_m_m_nbxriverboatguards_01", Local_79[4 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[6]);
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[2 /*10*/], 0, 0, 1, 1))
			{
				func_1470(cParam0);
			}
			if (__LIB_9__::func_408(cParam0, Local_370[11 /*10*/], "U_M_M_NBXRIVERBOATPITBOSS_01", 0, 1, 1))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_370[11 /*10*/], false, true);
				func_893(Local_370[11 /*10*/], 3289.646f, -1320.513f, 41.7487f, 198.4436f, 2, 1073741824 /* Float: 2f */);
				PED::FORCE_PED_MOTION_STATE(Local_370[11 /*10*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
				iVar8 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(3291.231f, -1328.306f, 41.7186f, joaat("WORLD_HUMAN_LEAN_BACK_WALL"), 1f, 0, false);
				func_1426();
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3291.231f, -1328.306f, 41.7186f, 1f, 20000, 0.25f, 1, 40000f);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar8))
				{
					TASK::_TASK_USE_SCENARIO_POINT(0, iVar8, "WORLD_HUMAN_LEAN_WALL_DRINKING_MALE_A", -1, true, false, 0, false, -1f, false);
				}
				func_1427(Local_370[11 /*10*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			break;
		case 9:
			PAD::ENABLE_CONTROL_ACTION(2, joaat("INPUT_SKIP_CUTSCENE"), true);
			if (!__LIB_0__::func_27(iLocal_1718, 64) && __LIB_8__::func_671(cParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1766))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1766);
				}
				__LIB_1__::func_683(&iLocal_1718, 64);
			}
			if (__LIB_9__::func_408(cParam0, Global_35, "ARTHUR", 0, 1, 1) && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!__LIB_6__::func_872(cParam0, 4))
				{
					__LIB_8__::func_711(cParam0, "IND3_CASH", 0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3500, 0f, true, false);
				if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
				{
					PED::SET_PED_CONFIG_FLAG(Global_35, 352, true);
					__LIB_1__::func_148(&(vLocal_1607[28 /*3*/]));
				}
			}
			if (__LIB_9__::func_408(cParam0, Local_370[5 /*10*/], "CS_DESMOND", 0, 1, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_370[5 /*10*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_370[5 /*10*/], false, true);
					if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[5 /*10*/]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[5 /*10*/], true, true);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_370[5 /*10*/], true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_370[9 /*10*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_370[9 /*10*/], false, true);
					if (!ENTITY::_0x88AD6CC10D8D35B2(Local_370[9 /*10*/]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_370[9 /*10*/], true, true);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_370[9 /*10*/], true);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[23], "CS_DESMOND", Local_370[5 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[23], "S_M_M_NBXRIVERBOATDEALERS_01", Local_370[9 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[23]);
			}
			if (__LIB_9__::func_408(cParam0, Local_370[11 /*10*/], "U_M_M_NBXRIVERBOATPITBOSS_01", 0, 1, 1) && !ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
			{
				__LIB_1__::func_766(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[35], "JavierEscuella", Local_1571[1 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[35], "s_m_m_nbxriverboatguards_01", Local_79[6 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[35], "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[35], "U_M_M_NBXRIVERBOATPITBOSS_01", Local_370[11 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[35]);
			}
			break;
		case 12:
			if (!__LIB_0__::func_27(iLocal_1718, 8388608))
			{
				MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("OVERCAST"), joaat("FOG"), 0.55f, 1);
				__LIB_1__::func_683(&iLocal_1718, 8388608);
			}
			if (__LIB_9__::func_408(cParam0, Global_35, "ARTHUR", 0, 1, 1) && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"), false, 0, false, false);
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"), 75, 752097756);
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"), 75, 752097756);
				func_333(joaat("AMMO_REVOLVER"), 50, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_333(joaat("AMMO_RIFLE"), 50, 1, 0, 0, 752097756, 0, 0, 0, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[0]), -1, 1, 0f, 1, 0, iLocal_1768[0], 0, 0, 0);
				PED::_0x2208438012482A1A(Global_35, false, false);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[37]);
				__LIB_8__::func_895(ENTITY::GET_ENTITY_COORDS(Local_1571[1 /*10*/], true, false), 0);
				if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_1768[8]))
				{
					iLocal_1768[8] = TASK::ADD_COVER_POINT(3287.949f, -1312.3f, 41.782f, 188.2704f, 0, 0, 8, false);
				}
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[1 /*10*/], 0, 0, 1, 1) && !ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 0, false))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), false, 0, false, false);
				}
				if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_1768[8]))
				{
					iLocal_1768[8] = TASK::ADD_COVER_POINT(3287.949f, -1312.3f, 41.782f, -177.92f, 0, 0, 8, false);
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1571[1 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[8]), -1, 1, 0f, 1, 0, iLocal_1768[8], 0, 0, 0);
				PED::_0x2208438012482A1A(Local_1571[1 /*10*/], false, false);
				__LIB_9__::func_232(cParam0, iVar0);
			}
			if (__LIB_9__::func_408(cParam0, Local_79[7 /*10*/], "s_m_m_nbxriverboatguards_01^1", 0, 1, 1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(Local_79[7 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 0, false))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_79[7 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Local_79[7 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[7 /*10*/], 200f, 33554432, 0);
				PED::_0x2208438012482A1A(Local_79[7 /*10*/], false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[7 /*10*/], true);
				if (!MAP::DOES_BLIP_EXIST(Local_79[7 /*10*/].f_3))
				{
					Local_79[7 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[7 /*10*/]);
					MAP::_BLIP_SET_MODIFIER(Local_79[7 /*10*/].f_3, -1034486097);
				}
			}
			if (__LIB_9__::func_408(cParam0, Local_79[11 /*10*/], "s_m_m_nbxriverboatguards_01^5", 0, 1, 1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(Local_79[11 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 0, false))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_79[11 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Local_79[11 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[11 /*10*/], 200f, 33554432, 0);
				PED::_0x2208438012482A1A(Local_79[11 /*10*/], false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[11 /*10*/], true);
				if (!MAP::DOES_BLIP_EXIST(Local_79[11 /*10*/].f_3))
				{
					Local_79[11 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[11 /*10*/]);
					MAP::_BLIP_SET_MODIFIER(Local_79[11 /*10*/].f_3, -1034486097);
				}
			}
			if (__LIB_9__::func_408(cParam0, Local_79[9 /*10*/], "s_m_m_nbxriverboatguards_01^3", 0, 1, 1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(Local_79[9 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 0, false))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_79[9 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Local_79[9 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[9 /*10*/], 200f, 33554432, 0);
				PED::_0x2208438012482A1A(Local_79[9 /*10*/], false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[9 /*10*/], true);
				if (!MAP::DOES_BLIP_EXIST(Local_79[9 /*10*/].f_3))
				{
					Local_79[9 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[9 /*10*/]);
					MAP::_BLIP_SET_MODIFIER(Local_79[9 /*10*/].f_3, -1034486097);
				}
			}
			if (__LIB_9__::func_408(cParam0, Local_79[10 /*10*/], "s_m_m_nbxriverboatguards_01^4", 0, 1, 1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(Local_79[10 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, false))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_79[10 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 100, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Local_79[10 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), true, 0, false, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[10 /*10*/], 200f, 33554432, 0);
				PED::_0x2208438012482A1A(Local_79[10 /*10*/], false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[10 /*10*/], true);
				if (!MAP::DOES_BLIP_EXIST(Local_79[10 /*10*/].f_3))
				{
					Local_79[10 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[10 /*10*/]);
					MAP::_BLIP_SET_MODIFIER(Local_79[10 /*10*/].f_3, -1034486097);
				}
			}
			if (__LIB_9__::func_408(cParam0, Local_79[8 /*10*/], "s_m_m_nbxriverboatguards_01^2", 0, 1, 1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(Local_79[8 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, false))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_79[8 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 100, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Local_79[8 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), true, 0, false, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[8 /*10*/], 200f, 33554432, 0);
				PED::_0x2208438012482A1A(Local_79[8 /*10*/], false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[8 /*10*/], true);
				if (!MAP::DOES_BLIP_EXIST(Local_79[8 /*10*/].f_3))
				{
					Local_79[8 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[8 /*10*/]);
					MAP::_BLIP_SET_MODIFIER(Local_79[8 /*10*/].f_3, -1034486097);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_370[19 /*10*/]) && __LIB_9__::func_408(cParam0, Local_370[19 /*10*/], "Table3_Dealer", 0, 1, 1))
			{
				__LIB_2__::func_279(Local_370[19 /*10*/], 1);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[17], "Poker_Player", Local_370[19 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[17]);
				PED::_0x2208438012482A1A(Local_370[19 /*10*/], false, false);
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[2 /*10*/], 0, 0, 1, 1) && !__LIB_6__::func_872(cParam0, 4))
			{
				Local_1462[2 /*21*/].f_3 = iLocal_1768[1];
				Local_1462[2 /*21*/].f_7 = 1;
				Local_1462[2 /*21*/].f_4 = 1;
				Local_1462[2 /*21*/].f_10 = 2f;
				Local_1462[2 /*21*/] = Local_1571[2 /*10*/];
				Local_1462[2 /*21*/].f_5 = -1;
				Local_1462[2 /*21*/].f_14 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[1]) };
				AICOVERPOINT::TASK_ENTER_COVER(&(Local_1462[2 /*21*/]));
			}
			if (__LIB_9__::func_408(cParam0, Local_1571[0 /*10*/], 0, 0, 1, 1) && !__LIB_6__::func_872(cParam0, 4))
			{
				Local_1462[0 /*21*/].f_3 = iLocal_1768[5];
				Local_1462[0 /*21*/].f_7 = 1;
				Local_1462[0 /*21*/].f_4 = 2;
				Local_1462[0 /*21*/].f_10 = 2f;
				Local_1462[0 /*21*/] = Local_1571[0 /*10*/];
				Local_1462[0 /*21*/].f_5 = -1;
				Local_1462[0 /*21*/].f_14 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[5]) };
				PED::_SET_PED_CROUCH_MOVEMENT(Local_1571[0 /*10*/], true, 0, true);
				AICOVERPOINT::TASK_ENTER_COVER(&(Local_1462[0 /*21*/]));
			}
			if (__LIB_9__::func_408(cParam0, Local_370[27 /*10*/], "Booth_Male", 0, 1, 1))
			{
				if (__LIB_6__::func_872(cParam0, 4))
				{
					func_893(Local_370[27 /*10*/], 3294.527f, -1317.949f, 41.7258f, 4.6077f, 2, 1073741824 /* Float: 2f */);
				}
				__LIB_2__::func_279(Local_370[27 /*10*/], 1);
				TASK::TASK_COWER(Local_370[27 /*10*/], -1, Global_35, 0);
			}
			if (!__LIB_6__::func_872(cParam0, 4) && __LIB_9__::func_408(cParam0, Local_370[5 /*10*/], "CS_DESMOND", 0, 1, 1))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_370[5 /*10*/], 3298.174f, -1310.191f, 41.7525f, 2f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
			}
			break;
		case 25:
			if (__LIB_9__::func_408(cParam0, Global_35, "ARTHUR", 0, 1, 1))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	}
	return 1;
}

int func_1017(char[4] cParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	struct<4> Var8;
	if (__LIB_0__::func_27(iLocal_1716, 67108864))
	{
		__LIB_1__::func_681(&iLocal_1716, 67108864);
	}
	if (__LIB_12__::func_424(15))
	{
		__LIB_12__::func_435(15);
	}
	switch (__LIB_6__::func_864(cParam0))
	{
		case 5:
			__LIB_1__::func_683(&iLocal_1717, 128);
			bVar1 = true;
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(3288.383f, -1323.279f, 41.75024f, 3f);
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(3288.376f, -1317.873f, 41.76574f, 3f);
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(3288.431f, -1312.82f, 41.78199f, 3f);
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(3285.421f, -1289.453f, 46.1753f, 3f);
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(3291.622f, -1289.192f, 46.2134f, 3f);
			func_180(1);
			if ((!STREAMING::_IS_IMAP_ACTIVE(-614421509) || !STREAMING::_IS_IMAP_ACTIVE(604920544)) || !STREAMING::_IS_IMAP_ACTIVE(joaat("SER_01_GRANDKOR3")))
			{
				return 0;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[38], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_1720[38], true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1720[38]);
				bVar1 = false;
			}
			if (!func_437(0))
			{
				return 0;
			}
			if (!func_1444(cParam0, 5, 9, 1))
			{
				return 0;
			}
			if (!func_1444(cParam0, 10, -1, 1))
			{
				return 0;
			}
			if (!func_1429(cParam0, 5, 11, 1))
			{
				return 0;
			}
			if (!func_1673())
			{
				bVar1 = false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1720[38], true, false))
			{
				ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iLocal_1720[38], &vVar2, &uVar5, 2);
				if (!__LIB_0__::func_266(Global_35, vVar2, 25f, 1, 1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					func_893(Global_35, 3285.382f, -1326.076f, 42.7427f, 276.0701f, 2, 1073741824 /* Float: 2f */);
					__LIB_0__::func_489(0, 0);
				}
				bVar1 = false;
			}
			if (!AUDIO::_0xD9130842D7226045("MGBLK_Sounds", 1))
			{
				bVar1 = false;
			}
			if (Local_1821[0 /*1279*/].f_1277 < 6 || Local_1821[1 /*1279*/].f_1277 < 6)
			{
				bVar1 = false;
			}
			if (!bVar1)
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_370[28 /*10*/]) && !PED::IS_PED_USING_ANY_SCENARIO(Local_370[28 /*10*/]))
			{
				iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(3291.41f, -1315.96f, 42.18f, joaat("PROP_HUMAN_SEAT_CHAIR"), 0.5f, 0, false);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_370[28 /*10*/], iVar0, 0, -1, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_370[28 /*10*/], 3291.41f, -1315.96f, 42.18f, 0.5f, -1, true, false, true, false);
				}
			}
			CLOCK::SET_CLOCK_TIME(3, 45, 0);
			MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("OVERCAST"), joaat("MISTY"), 0.55f, 1);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[38], false))
			{
				func_1674();
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "A_M_M_NBXUPPERCLASS_01", Local_370[6 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "A_M_M_NBXUPPERCLASS_01^1", Local_370[8 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "A_M_M_NBXUPPERCLASS_01^2", Local_370[7 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "S_M_M_NBXRIVERBOATDEALERS_01", Local_370[9 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], "CS_DESMOND", Local_370[5 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[38]);
			}
			break;
		case 9:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_370[11 /*10*/], false, true);
			ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[35], "U_M_M_NBXRIVERBOATPITBOSS_01", &Var8, false, 0, 2);
			func_893(Local_370[11 /*10*/], Var8, Var8.f_3.f_2, 2, 1073741824 /* Float: 2f */);
			break;
		case 12:
			if (!AICOVERPOINT::_0x8CBE916CFC64AD5C(Global_35) || !AICOVERPOINT::_0x8CBE916CFC64AD5C(Local_1571[1 /*10*/]))
			{
				AICOVERPOINT::_0x140B3CB1D424A945(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"));
				AICOVERPOINT::_0x140B3CB1D424A945(Local_1571[1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"));
				return 0;
			}
			break;
	}
	return 1;
}

void func_1024(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_921(iParam0);
	Global_1914319.f_3[iVar0 /*446*/].f_414 = iParam1;
}

void func_1025(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 == iLocal_42 && !__LIB_6__::func_872(cParam0, 4))
	{
		MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 45f, false);
	}
	else if (iVar0 <= iLocal_46)
	{
		MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	}
	else if (iVar0 <= iLocal_53 && (iVar0 != iLocal_47 || __LIB_6__::func_872(cParam0, 4)))
	{
		CLOCK::SET_CLOCK_TIME(3, 45, 0);
		MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("OVERCAST"), joaat("MISTY"), 0.55f, 1);
	}
	else if (iVar0 >= iLocal_54)
	{
		CLOCK::SET_CLOCK_TIME(3, 45, 0);
		MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("OVERCAST"), joaat("FOG"), 0.55f, 1);
	}
}

void func_1026(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (((__LIB_6__::func_864(cParam0) == iLocal_47 && __LIB_6__::func_862(cParam0, 8)) && __LIB_8__::func_663(cParam0, iLocal_47) < 5) && !__LIB_8__::func_671(cParam0))
	{
		func_1438();
		func_1439(cParam0);
		if ((__LIB_0__::func_898(-789397228) && __LIB_0__::func_272(Local_79[0 /*10*/], 0)) && ENTITY::HAS_ANIM_EVENT_FIRED(Local_79[0 /*10*/], 1836510296))
		{
			__LIB_0__::func_400(-276259505);
			__LIB_0__::func_401(-1716205818);
			__LIB_0__::func_803(-2022369555);
			__LIB_0__::func_400(-873881483);
			__LIB_0__::func_804(-789397228);
			__LIB_0__::func_401(-614421509);
			__LIB_0__::func_401(604920544);
			__LIB_0__::func_401(joaat("SER_01_GRANDKOR3"));
			__LIB_1__::func_948(-1035861617, 1, 1f, 0, 0, 0f, 1, 0);
			__LIB_1__::func_948(-721377524, 1, -1f, 0, 0, 0f, 1, 0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	if ((__LIB_0__::func_27(iLocal_1717, 128) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	if ((((!__LIB_0__::func_27(iLocal_1717, 4) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1720[12])) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iLocal_1720[12], false)) && !ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/])) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_1720[12], "U_M_M_NBXRIVERBOATPITBOSS_01", false)))
	{
		iVar0 = __LIB_5__::func_433(&(cParam0->f_1126), iLocal_1720[12]);
		if (__LIB_5__::func_459(cParam0->f_1126[iVar0 /*67*/].f_3, __LIB_6__::func_864(cParam0)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[12], "U_M_M_NBXRIVERBOATPITBOSS_01", Local_370[11 /*10*/], 0);
			__LIB_9__::func_948(cParam0, iLocal_1720[12]);
			__LIB_1__::func_683(&iLocal_1717, 4);
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_48 && __LIB_6__::func_864(cParam0) <= iLocal_53)
	{
		if (__LIB_4__::func_195(-1035861617) != 1f)
		{
			__LIB_1__::func_948(-1035861617, 1, 1f, 0, 0, 0f, 1, 0);
		}
		if (__LIB_4__::func_195(-721377524) != -1f)
		{
			__LIB_1__::func_948(-721377524, 1, -1f, 0, 0, 0f, 1, 0);
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_51 && __LIB_6__::func_864(cParam0) <= iLocal_53)
	{
		if (__LIB_4__::func_195(-2113194495) != 1f)
		{
			__LIB_1__::func_948(-2113194495, 1, 1f, 0, 0, 0f, 1, 0);
		}
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_53)
	{
		if (__LIB_4__::func_195(1624230601) != -1f)
		{
			__LIB_1__::func_948(1624230601, 1, -1f, 0, 0, 0f, 1, 0);
		}
		if (__LIB_4__::func_195(1473624189) != 1f)
		{
			__LIB_1__::func_948(1473624189, 1, 1f, 0, 0, 0f, 1, 0);
		}
	}
	if ((__LIB_6__::func_864(cParam0) >= iLocal_54 && __LIB_6__::func_864(cParam0) <= iLocal_55) && !__LIB_8__::func_671(cParam0))
	{
		if (__LIB_4__::func_195(-1035861617) != 1f)
		{
			__LIB_1__::func_948(-1035861617, 1, 1f, 0, 0, 0f, 1, 0);
		}
		if (__LIB_4__::func_195(-721377524) != -1f)
		{
			__LIB_1__::func_948(-721377524, 1, -1f, 0, 0, 0f, 1, 0);
		}
		if (__LIB_4__::func_195(1381081784) != -1f)
		{
			__LIB_1__::func_948(1381081784, 1, -1f, 0, 0, 0f, 1, 0);
		}
		if (__LIB_4__::func_195(-1514256248) != -1f)
		{
			__LIB_1__::func_948(-1514256248, 1, -1f, 0, 0, 0f, 1, 0);
		}
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_43 || __LIB_6__::func_864(cParam0) == iLocal_44)
	{
		if (__LIB_4__::func_195(29962690) != 1f)
		{
			__LIB_1__::func_948(29962690, 1, 1f, 0, 0, 0f, 1, 0);
		}
		if (__LIB_4__::func_195(527035651) != -1f)
		{
			__LIB_1__::func_948(527035651, 1, -1f, 0, 0, 0f, 1, 0);
		}
	}
	bLocal_1818 = false;
	func_1681(cParam0);
	__LIB_1__::func_538(0);
	if (__LIB_6__::func_864(cParam0) >= iLocal_47 && __LIB_6__::func_864(cParam0) <= iLocal_56)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_0xAB0D553FE20A6E25(0f);
		if (__LIB_6__::func_864(cParam0) <= iLocal_50)
		{
			func_1503(cParam0, 2);
		}
		if (__LIB_6__::func_864(cParam0) <= iLocal_53)
		{
			func_1503(cParam0, 0);
		}
	}
	iVar1 = 0;
	while (iVar1 < 57)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_370[iVar1 /*10*/]))
		{
			PED::SET_PED_RESET_FLAG(Local_370[iVar1 /*10*/], 185, true);
		}
		iVar1++;
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_47)
	{
		if (__LIB_6__::func_864(cParam0) <= iLocal_53)
		{
			if (__LIB_6__::func_864(cParam0) < iLocal_48 || __LIB_6__::func_864(cParam0) > iLocal_50)
			{
				if (!__LIB_0__::func_27(iLocal_1716, -2147483648) && PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_OPEN_WHEEL_MENU")))
				{
					__LIB_1__::func_683(&iLocal_1716, -2147483648);
					__LIB_0__::func_45("IND3_HLP_GUNS", 10000, 0, 0, 0, 1);
				}
			}
			func_1683(cParam0);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_47 && __LIB_6__::func_864(cParam0) <= iLocal_53)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_4406) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_4406)
		{
			if (Local_1821[0 /*1279*/].f_1277 >= 5)
			{
				__LIB_19__::func_587(&(Local_1821[0 /*1279*/]), 1);
			}
			if (Local_1821[1 /*1279*/].f_1277 >= 5)
			{
				__LIB_19__::func_587(&(Local_1821[1 /*1279*/]), 1);
			}
			if (bLocal_4451)
			{
				func_1685(cParam0, 1);
			}
			else
			{
				func_1685(cParam0, 0);
			}
			bLocal_4451 = !bLocal_4451;
		}
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_48 && __LIB_6__::func_864(cParam0) <= iLocal_50)
	{
		if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 5)
		{
			func_1686();
		}
	}
	if (((__LIB_6__::func_864(cParam0) <= iLocal_53 && __LIB_6__::func_864(cParam0) != iLocal_48) && __LIB_6__::func_864(cParam0) != iLocal_49) && __LIB_6__::func_864(cParam0) != iLocal_50)
	{
		func_1687();
		func_1688();
	}
	if (__LIB_6__::func_864(cParam0) <= iLocal_46 && CLOCK::GET_CLOCK_HOURS() >= 18)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_42)
	{
		__LIB_3__::func_65(4);
		__LIB_3__::func_65(8);
	}
	LAW::_0xE94B5E938619712E();
	if (__LIB_6__::func_864(cParam0) >= iLocal_48)
	{
		__LIB_5__::func_441("grand_korr_poker");
	}
	if (__LIB_0__::func_27(iLocal_1716, 67108864) || __LIB_12__::func_424(15))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (__LIB_6__::func_864(cParam0) >= iLocal_43)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	}
	if ((((((__LIB_6__::func_864(cParam0) >= iLocal_47 && __LIB_6__::func_864(cParam0) <= iLocal_53) && !__LIB_0__::func_27(iLocal_1716, 262144)) && ENTITY::DOES_ENTITY_EXIST(Local_370[12 /*10*/])) && !ENTITY::IS_ENTITY_DEAD(Local_370[12 /*10*/])) && PED::_IS_PED_USING_SCENARIO_HASH(Local_370[12 /*10*/], joaat("PROP_HUMAN_PIANO_RIVERBOAT"))) && AUDIO::_0xBE28DB99556FF8D9(Local_370[12 /*10*/]) != 0)
	{
		AUDIO::_0x9EB779765E68C52E(Local_370[12 /*10*/], 1);
		__LIB_1__::func_683(&iLocal_1716, 262144);
	}
	if ((__LIB_6__::func_864(cParam0) <= iLocal_43 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == -1884638879)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	}
}

bool func_1043(char[4] cParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_6__::func_862(cParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_9__::func_50(cParam0, iParam1, 4))
	{
		if (__LIB_6__::func_864(cParam0) != 25 && __LIB_6__::func_864(cParam0) != 26)
		{
			if (!__LIB_6__::func_862(cParam0, 512) && !__LIB_6__::func_872(cParam0, 4))
			{
				__LIB_8__::func_725(cParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1699(cParam0);
		if (__LIB_8__::func_616(cParam0))
		{
			__LIB_9__::func_33(cParam0);
		}
		if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 33554432) && __LIB_6__::func_862(cParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_6__::func_887(cParam0, 524288);
		__LIB_4__::func_977(&(cParam0->f_7375), 4);
		if (__LIB_9__::func_145(cParam0))
		{
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_1045(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_872(cParam0, 16384))
	{
		if (func_991(cParam0))
		{
			__LIB_5__::func_326(&(cParam0->f_10792));
			__LIB_6__::func_887(cParam0, 2097152);
			__LIB_6__::func_881(cParam0, 16384);
			__LIB_6__::func_869(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_6__::func_862(cParam0, 4))
	{
		__LIB_0__::func_16(cParam0, iParam1);
		__LIB_6__::func_868(cParam0, 4);
	}
	Var0 = { __LIB_8__::func_688(cParam0, iParam1) };
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		if (__LIB_6__::func_862(cParam0, 2097152))
		{
			if (func_991(cParam0))
			{
				__LIB_6__::func_887(cParam0, 2097152);
				func_993(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_993(cParam0, Var0);
		}
	}
	else if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (func_991(cParam0))
		{
			__LIB_6__::func_887(cParam0, 2097152);
			__LIB_8__::func_689(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		return func_993(cParam0, Var0);
	}
	return true;
}

void func_1298(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_333(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1864(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_336(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_184(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1869(Var0);
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

void func_1301(bool bParam0)
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
		func_333(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_333(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_184(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_184(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_184(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1342(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1342(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1342(iVar63, -915411861, 1, 0, 0));
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

void func_1368(char[4] cParam0, int iParam1)
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
		cParam0->f_1[iVar0 /*22*/][iVar1] = 65219;
		MISC::CLEAR_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

void func_1378(char[4] cParam0)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2552.205f, -1170.773f, 52.6838f, joaat("NEW_TAILOR01_INT_MAIN"));
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
	if (__LIB_8__::func_618(cParam0) == 3 || __LIB_8__::func_618(cParam0) == 4)
	{
		if ((((__LIB_0__::func_75(&(vLocal_1607[10 /*3*/])) && __LIB_0__::func_265(&(vLocal_1607[10 /*3*/])) >= 6f) && !__LIB_11__::func_523()) && !__LIB_8__::func_837(16)) && !__LIB_8__::func_837(17))
		{
			__LIB_0__::func_37(&(vLocal_1607[10 /*3*/]));
			__LIB_9__::func_208(cParam0, "IND3_OBJ_SUIT", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
	}
	if (__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
	{
		if (AUDIO::_0xA2CAC9DEF0195E6F(1))
		{
			__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
		}
	}
	else if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "IND3_OBJ_TAILOR", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_253(cParam0, Local_1571[0 /*10*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			__LIB_9__::func_60(cParam0, 2);
			break;
		case 2:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iVar0)
			{
				__LIB_8__::func_711(cParam0, "IND3_TAILENTER", 0);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_9__::func_254(cParam0, Local_1571[0 /*10*/], 1);
				__LIB_9__::func_208(cParam0, "IND3_OBJ_SUIT", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_14__::func_133(47, 1);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_1__::func_148(&(vLocal_1607[10 /*3*/]));
				__LIB_9__::func_60(cParam0, 3);
			}
			else if (__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])) && __LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 10f)
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_208(cParam0, "IND3_OBJ_TAILOR", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			break;
		case 3:
			if ((__LIB_9__::func_344() && !__LIB_8__::func_837(16)) && !__LIB_8__::func_837(17))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iVar0 && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == -662975882)
				{
					if (!__LIB_5__::func_59(Local_370[0 /*10*/], 0, 0, 0) && ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_370[0 /*10*/], false)) || PED::IS_PED_JUMPING(Global_35)))
					{
						__LIB_0__::func_268(&(vLocal_1607[5 /*3*/]), 9f);
						__LIB_9__::func_60(cParam0, 5);
					}
					else if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f)
					{
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
						if (!__LIB_0__::func_27(iLocal_1718, 134217728))
						{
							__LIB_8__::func_711(cParam0, "IND3_TAILDAWDLE", 0);
							__LIB_1__::func_683(&iLocal_1718, 134217728);
						}
						else
						{
							__LIB_8__::func_711(cParam0, "IND3_SUITWAIT", 0);
						}
					}
				}
				else
				{
					__LIB_0__::func_268(&(vLocal_1607[5 /*3*/]), 9f);
					__LIB_9__::func_60(cParam0, 4);
				}
			}
			break;
		case 4:
			if ((__LIB_9__::func_344() && !__LIB_8__::func_837(16)) && !__LIB_8__::func_837(17))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iVar0 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) != -662975882)
				{
					if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f)
					{
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
						__LIB_8__::func_711(cParam0, "IND3_SUITOUT", 0);
					}
				}
				else
				{
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					__LIB_9__::func_60(cParam0, 3);
				}
			}
			break;
		case 5:
			if ((__LIB_9__::func_344() && !__LIB_8__::func_837(16)) && !__LIB_8__::func_837(17))
			{
				if (!__LIB_5__::func_59(Local_370[0 /*10*/], 0, 0, 0) && ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_370[0 /*10*/], false)) || PED::IS_PED_JUMPING(Global_35)))
				{
					if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f)
					{
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
						__LIB_8__::func_711(cParam0, "IND3_SUITMESS", 0);
					}
				}
				else
				{
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					__LIB_9__::func_60(cParam0, 3);
				}
			}
			break;
	}
}

void func_1379()
{
	vector3 vVar0;
	if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[30], false) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[30], "JosiahTrelawny")) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[30], "JosiahTrelawny"))
	{
		ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[0], "CS_JosiahTrelawny", &vVar0, false, 0, 2);
		if (__LIB_0__::func_266(Local_1571[0 /*10*/], vVar0, 0.75f, 1, 1))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[0], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[0], "CS_JosiahTrelawny", Local_1571[0 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[0]);
			}
		}
		else if (!__LIB_0__::func_491(Local_1571[0 /*10*/], 2106541073))
		{
			__LIB_1__::func_948(-1683351620, 0, 1f, 1, 1, 0, 1, 0);
			TASK::TASK_GO_STRAIGHT_TO_COORD(Local_1571[0 /*10*/], vVar0, 1f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
		}
	}
}

void func_1386()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1571[iVar0 /*10*/].f_2 = 0;
		iVar0++;
	}
}

void func_1393(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "IND3_OBJ_BARBER", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_253(cParam0, Local_1571[0 /*10*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (PED::IS_PED_STOPPED(Global_35))
			{
				if (!__LIB_0__::func_75(&(vLocal_1607[11 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1607[11 /*3*/]));
				}
			}
			else if (__LIB_0__::func_75(&(vLocal_1607[11 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_1607[11 /*3*/]));
			}
			if (__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 7f && (__LIB_0__::func_665(Global_35, Local_1571[0 /*10*/], 1, 1) >= 7f || __LIB_0__::func_264(&(vLocal_1607[11 /*3*/])) >= 4f))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[1], false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[2], false))
				{
					if (__LIB_0__::func_665(Global_35, Local_1571[0 /*10*/], 1, 1) >= 7f)
					{
						__LIB_8__::func_711(cParam0, "IND3_WRONG", 0);
					}
					else
					{
						__LIB_8__::func_711(cParam0, "IND3_STOPWALK", 0);
					}
				}
				__LIB_9__::func_208(cParam0, "IND3_OBJ_BARBER", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			}
			break;
	}
}

void func_1394()
{
	struct<27> Var0;
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
	__LIB_9__::func_175(Local_1571[0 /*10*/], Global_35, &Var0, 0f, 0f, 0f, sLocal_64, 0, 1, 4f, 1.3f, 1073069561, 0.55f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
}

bool func_1397(char[4] cParam0)
{
	if (!func_1478(cParam0, 4, 1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_77))
	{
		iLocal_77 = VEHICLE::CREATE_VEHICLE(iLocal_25, 2664.546f, -1182.521f, 52.0858f, 358.4831f, true, true, false, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_77, false);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_77, false);
		PED::SET_PED_INTO_VEHICLE(Local_370[4 /*10*/], iLocal_77, -1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_370[4 /*10*/], joaat("REL_PLAYER_ALLY"));
		return false;
	}
	return true;
}

void func_1401()
{
	int iVar0;
	int iVar1;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_64, ENTITY::GET_ENTITY_COORDS(Local_1571[0 /*10*/], true, false), &iVar0);
	if (!__LIB_0__::func_27(iLocal_1716, 16))
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2552.205f, -1170.773f, 52.6838f, joaat("NEW_TAILOR01_INT_MAIN"));
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_1571[0 /*10*/]) != iVar1 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iVar1)
		{
			Local_4437.f_3 = 1;
			__LIB_13__::func_566(Global_35, Local_1571[0 /*10*/], &Local_4437, -1, 1, 0);
			TASK::_0xDE0C8B145EA466FF(Local_1571[0 /*10*/], -1f, -1f, 1.91986f, -1082130432 /* Float: -1f */, 1f);
			__LIB_1__::func_683(&iLocal_1716, 16);
		}
	}
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_64, Global_36, &iVar0);
	if (iVar0 >= 55 && iVar0 <= 63)
	{
		if (!__LIB_0__::func_27(iLocal_1716, 256))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_64, 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
			__LIB_1__::func_683(&iLocal_1716, 256);
		}
	}
	else if (__LIB_0__::func_27(iLocal_1716, 256))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_64, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
		__LIB_1__::func_681(&iLocal_1716, 256);
	}
}

void func_1405(bool bParam0)
{
	func_1935(2, bParam0);
}

void func_1406(bool bParam0)
{
	func_1936(1, bParam0);
}

void func_1407()
{
	iLocal_4496 = __LIB_12__::func_562(0);
	iLocal_4497 = __LIB_12__::func_562(2);
	iLocal_4498 = __LIB_12__::func_562(1);
	iLocal_4499 = __LIB_4__::func_665();
}

void func_1410(char[4] cParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2654.533f, -1178.978f, 52.2785f, joaat("NEW_BARBER_INT"));
	if ((__LIB_8__::func_618(cParam0) > 0 && !__LIB_5__::func_491(cParam0, "IND3_OBJ_SHAVE")) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iVar0)
	{
		__LIB_9__::func_208(cParam0, "IND3_OBJ_SHAVE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "IND3_OBJ_SHAVE", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_14__::func_133(37, 1);
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if ((__LIB_9__::func_344() && !__LIB_11__::func_523()) && ((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[3], "s_base_end", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[3], "pbl_Idle_1")) || ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[3], "pbl_Idle_2")))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iVar0)
				{
					if (!__LIB_5__::func_59(Local_370[1 /*10*/], 0, 0, 0) && ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_370[1 /*10*/], false)) || PED::IS_PED_JUMPING(Global_35)))
					{
						__LIB_0__::func_268(&(vLocal_1607[5 /*3*/]), 9f);
						__LIB_9__::func_60(cParam0, 3);
					}
					else if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f && Local_1571[0 /*10*/].f_2 > 1)
					{
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
						__LIB_8__::func_711(cParam0, "IND3_SHAVEWAIT", 0);
						if (__LIB_0__::func_27(iLocal_1718, 33554432))
						{
							bVar1 = true;
							__LIB_1__::func_681(&iLocal_1718, 33554432);
						}
						else
						{
							bVar1 = false;
						}
						__LIB_9__::func_208(cParam0, "IND3_OBJ_SHAVE", 0, 7500, bVar1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				else
				{
					__LIB_0__::func_268(&(vLocal_1607[5 /*3*/]), 9f);
					__LIB_9__::func_60(cParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_11__::func_523() && ((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[3], "s_base_end", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[3], "pbl_Idle_1")) || ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[3], "pbl_Idle_2")))
			{
				if (__LIB_9__::func_344())
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iVar0)
					{
						if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f)
						{
							__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
							__LIB_8__::func_711(cParam0, "IND3_SHAVEOUT", 0);
						}
					}
					else
					{
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
						__LIB_9__::func_60(cParam0, 1);
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 3:
			if (!__LIB_11__::func_523() && ((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[3], "s_base_end", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[3], "pbl_Idle_1")) || ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[3], "pbl_Idle_2")))
			{
				if (__LIB_9__::func_344())
				{
					if (!__LIB_5__::func_59(Local_370[1 /*10*/], 0, 0, 0) && ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_370[1 /*10*/], false)) || PED::IS_PED_JUMPING(Global_35)))
					{
						if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f)
						{
							__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
							__LIB_8__::func_711(cParam0, "IND3_SHAVEMESS", 0);
						}
					}
					else
					{
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
						__LIB_9__::func_60(cParam0, 1);
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 4:
			if (__LIB_8__::func_711(cParam0, "IND3_BARBDONE", 0))
			{
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
	}
}

void func_1411()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[0 /*10*/]))
	{
		switch (Local_1571[0 /*10*/].f_2)
		{
			case 0:
				if (((__LIB_6__::func_895(iLocal_1720[3], "pbl_Line_A_Unlikely_Fellow") && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_4408) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[3], "s_base_end", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[3], "pbl_Line_A_Unlikely_Fellow", true);
					Local_1571[0 /*10*/].f_2++;
				}
				break;
			case 1:
				if (__LIB_6__::func_895(iLocal_1720[3], "pbl_Talk_to_Barber") && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[3], "s_base_end", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[3], "pbl_Talk_to_Barber", true);
					Local_1571[0 /*10*/].f_2++;
				}
				break;
			case 2:
				if (__LIB_11__::func_523() && __LIB_11__::func_524() == 8)
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[3], "s_base_end", 1))
					{
						__LIB_1__::func_148(&(vLocal_1607[22 /*3*/]));
						Local_1571[0 /*10*/].f_2++;
					}
				}
				else
				{
					func_1939();
				}
				break;
			case 3:
				if (((__LIB_6__::func_895(iLocal_1720[3], "pbl_Line_B_Like_a_Prince") && __LIB_0__::func_265(&(vLocal_1607[22 /*3*/])) >= 4f) && __LIB_11__::func_523()) && __LIB_11__::func_524() == 8)
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[3], "s_base_end", 1))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[3], "pbl_Line_B_Like_a_Prince", true);
						Local_1571[0 /*10*/].f_2++;
					}
				}
				else
				{
					func_1939();
				}
				break;
			case 4:
				func_1939();
				break;
		}
	}
	__LIB_6__::func_895(iLocal_1720[3], "pbl_Line_A_Unlikely_Fellow");
	__LIB_6__::func_895(iLocal_1720[3], "pbl_Talk_to_Barber");
	__LIB_6__::func_895(iLocal_1720[3], "pbl_Idle_1");
	__LIB_6__::func_895(iLocal_1720[3], "pbl_Idle_2");
	__LIB_6__::func_895(iLocal_1720[3], "pbl_Line_B_Like_a_Prince");
}

void func_1416()
{
	Local_1695[8 /*2*/].f_1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2665.772f, -1183.479f, 53f, 0f, 0f, 0f, 5.402795f, 146.4014f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2656.74f, -1139.5f, 50.3513f, 0f, 0f, 0f, 113.5997f, 15.4735f, 13f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2761.563f, -1163.876f, 46.62843f, 0f, 0f, 59.90317f, 8.154113f, 90.94064f, 10.94019f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2807.62f, -1205.602f, 47.05564f, 0f, 0f, 4.101529f, 8.5632f, 50.45542f, 2.581911f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2784.302f, -1265.792f, 45.45821f, 0f, 0f, 54.80414f, 86.69183f, 8.107698f, 5.953646f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2792.48f, -1262.97f, 47.04673f, 0f, 0f, 55.61243f, 7.760934f, 97.38819f, 4.703363f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2843.614f, -1294.564f, 46.19917f, 0f, 0f, 48.37751f, 8.056334f, 34.20607f, 3.328174f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2802.305f, -1316.879f, 46.15713f, 0f, 0f, 48.88066f, 76.39081f, 11.21019f, 8.079693f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2841.054f, -1277.044f, 45.52078f, 0f, 0f, 50.46616f, 31.93329f, 6.940309f, 5.363973f);
	VOLUME::_0x5B7D7BF36D2DE18B(Local_1695[8 /*2*/].f_1, 2716.919f, -1139.884f, 46.61312f, 0f, 0f, 0f, 8.808687f, 6.366648f, 9.490097f);
	VOLUME::_0x39816F6F94F385AD(Local_1695[8 /*2*/].f_1, 2818.729f, -1343.738f, 45.26247f, 0f, 0f, 49.30177f, 116.0678f, 4.499557f, 5.051873f);
	Local_1695[8 /*2*/] = __LIB_1__::func_391(Local_1695[8 /*2*/].f_1, 0, 0, 0);
}

void func_1420()
{
	Local_1695[9 /*2*/].f_1 = VOLUME::_CREATE_VOLUME_BOX(2835.781f, -1354.951f, 44.96617f, 0f, 0f, 51.68687f, 11.06774f, 33.38785f, 6.152005f);
	Local_1695[9 /*2*/] = __LIB_1__::func_391(Local_1695[9 /*2*/].f_1, 0, 0, 0);
}

void func_1421(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (__LIB_9__::func_344() && __LIB_8__::func_711(cParam0, "IND3_ARRCOACH", 0))
			{
				iLocal_78 = __LIB_8__::func_778(408396114, iLocal_77, 1);
				MAP::SET_BLIP_SPRITE(iLocal_78, joaat("BLIP_AMBIENT_WAGON"), true);
				__LIB_9__::func_208(cParam0, "IND3_OBJ_COACH", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			if (__LIB_9__::func_344() && __LIB_8__::func_711(cParam0, "IND3_BARBLEAVE", 0))
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_9__::func_344())
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if ((!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_77, false) && !AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_77, 0)) && __LIB_0__::func_139(iLocal_1602[3]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_1571[0 /*10*/], iLocal_77, false))
				{
					if (!__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
					{
						__LIB_0__::func_268(&(vLocal_1607[5 /*3*/]), 4f);
					}
					if (!AUDIO::_0xA2CAC9DEF0195E6F(1) && __LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 4f)
					{
						if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_370[0 /*10*/], false)) || PED::IS_PED_JUMPING(Global_35)) || PED::IS_PED_SHOOTING(Global_35)) || (TASK::IS_PED_RUNNING(Global_35) && __LIB_0__::func_665(Global_35, iLocal_77, 1, 1) >= 5f))
						{
							__LIB_8__::func_711(cParam0, "IND3_COACHRUN", 0);
							__LIB_1__::func_683(&iLocal_1717, 1024);
							__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
						}
					}
					if (__LIB_0__::func_665(Global_35, iLocal_77, 1, 1) <= 2f)
					{
						if (!__LIB_0__::func_75(&(vLocal_1607[25 /*3*/])))
						{
							__LIB_1__::func_148(&(vLocal_1607[25 /*3*/]));
						}
					}
					else if (__LIB_0__::func_75(&(vLocal_1607[25 /*3*/])))
					{
						__LIB_0__::func_37(&(vLocal_1607[25 /*3*/]));
					}
					if (__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 7f && (__LIB_0__::func_665(Global_35, iLocal_77, 1, 1) >= 2f || __LIB_0__::func_264(&(vLocal_1607[25 /*3*/])) >= 5f))
					{
						__LIB_9__::func_208(cParam0, "IND3_OBJ_COACH", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_8__::func_711(cParam0, "IND3_COACHWAIT", 0);
						__LIB_1__::func_683(&iLocal_1717, 1024);
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
						__LIB_1__::func_148(&(vLocal_1607[25 /*3*/]));
					}
				}
				else if (__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
				{
					__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
				}
			}
			break;
		case 4:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[21], false) && __LIB_8__::func_711(cParam0, "IND3_COACHEND", 0))
			{
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
	}
}

void func_1422(char[4] cParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 1:
				switch (Local_1571[iVar0 /*10*/].f_2)
				{
					case 0:
						break;
					case 1:
						if (func_979(cParam0, 2, &(Local_1571[iVar0 /*10*/]), 0, 2845.166f, -1368.471f, 43.5346f, 0, 1, -433615745, 1, 0, 1, 0) && func_1658(2, Local_1571[iVar0 /*10*/], -433615745))
						{
							ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_JavierEscuella", &vVar1, false, 0, 2);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_1571[iVar0 /*10*/], vVar1, vVar1.f_3.f_2, false, true);
							__LIB_9__::func_42(cParam0, Local_1571[iVar0 /*10*/], "JAVIER", 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[iVar0 /*10*/], true);
							__LIB_9__::func_154(cParam0, Local_1571[iVar0 /*10*/], 0, 0, 0, 0, 0);
							func_175(cParam0, Local_1571[1 /*10*/], 2, 1);
							Local_1571[iVar0 /*10*/].f_2++;
						}
						break;
					case 2:
						ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_JavierEscuella", &vVar1, false, 0, 2);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_1571[iVar0 /*10*/], vVar1, vVar1.f_3.f_2, false, true);
						__LIB_1__::func_473(Local_1571[iVar0 /*10*/], joaat("WORLD_HUMAN_LEAN_RAILING_DYNAMIC"), -1, 0, joaat("WORLD_HUMAN_LEAN_RAILING_MALE_C"), -1082130432 /* Float: -1f */);
						Local_1571[iVar0 /*10*/].f_2++;
						break;
					case 3:
						ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_JavierEscuella", &vVar1, false, 0, 2);
						if (!__LIB_0__::func_266(Local_1571[iVar0 /*10*/], vVar1, 0.5f, 1, 1) || !__LIB_0__::func_491(Local_1571[iVar0 /*10*/], 993674639))
						{
							Local_1571[iVar0 /*10*/].f_2 = (Local_1571[iVar0 /*10*/].f_2 - 1);
						}
						break;
				}
				break;
			case 2:
				switch (Local_1571[iVar0 /*10*/].f_2)
				{
					case 0:
						break;
					case 1:
						if (func_979(cParam0, 18, &(Local_1571[iVar0 /*10*/]), 0, 2845.166f, -1368.471f, 43.5346f, 0, 1, 1018353621, 1, 0, 1, 0) && func_1658(18, Local_1571[iVar0 /*10*/], 1018353621))
						{
							ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_LeoStrauss", &vVar1, false, 0, 2);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_1571[iVar0 /*10*/], vVar1, vVar1.f_3.f_2, false, true);
							__LIB_9__::func_42(cParam0, Local_1571[iVar0 /*10*/], "STRAUSS", 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1571[iVar0 /*10*/], true);
							__LIB_9__::func_154(cParam0, Local_1571[iVar0 /*10*/], 0, 0, 0, 0, 0);
							func_175(cParam0, Local_1571[2 /*10*/], 18, 1);
							Local_1571[iVar0 /*10*/].f_2++;
						}
						break;
					case 2:
						ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_LeoStrauss", &vVar1, false, 0, 2);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_1571[iVar0 /*10*/], vVar1, vVar1.f_3.f_2, false, true);
						__LIB_1__::func_473(Local_1571[iVar0 /*10*/], joaat("WORLD_HUMAN_LEAN_RAILING_DYNAMIC"), -1, 0, joaat("WORLD_HUMAN_LEAN_RAILING_MALE_D"), -1082130432 /* Float: -1f */);
						Local_1571[iVar0 /*10*/].f_2++;
						break;
					case 3:
						ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[31], "CS_LeoStrauss", &vVar1, false, 0, 2);
						if (!__LIB_0__::func_266(Local_1571[iVar0 /*10*/], vVar1, 0.5f, 1, 1) || !__LIB_0__::func_491(Local_1571[iVar0 /*10*/], 993674639))
						{
							Local_1571[iVar0 /*10*/].f_2 = (Local_1571[iVar0 /*10*/].f_2 - 1);
						}
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_1423(char[4] cParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		bVar1 = false;
		bVar2 = false;
		if ((iVar0 == 2 && __LIB_0__::func_27(iLocal_1716, 64)) || (iVar0 == 3 && __LIB_0__::func_27(iLocal_1716, 128)))
		{
			bVar1 = true;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_370[iVar0 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_370[iVar0 /*10*/].f_8))
		{
			if ((((iVar0 == 2 && !__LIB_0__::func_27(iLocal_1716, 64)) && !ENTITY::IS_ENTITY_DEAD(iLocal_77)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_77, 0)) || ((iVar0 == 3 && !__LIB_0__::func_27(iLocal_1716, 128)) && __LIB_0__::func_48(iLocal_77, Local_370[iVar0 /*10*/].f_8, 60f, 1)))
			{
				bVar2 = true;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_370[iVar0 /*10*/].f_8) && !bVar1)
		{
			if (iVar0 == 2)
			{
				Local_370[iVar0 /*10*/].f_8 = VEHICLE::CREATE_VEHICLE(iLocal_27, 2647.042f, -1144.614f, 50.2264f, 269.839f, true, true, false, false);
			}
			else if (iVar0 == 3)
			{
				Local_370[iVar0 /*10*/].f_8 = VEHICLE::CREATE_VEHICLE(iLocal_28, 2808.808f, -1271.156f, 46.2478f, 53.5532f, true, true, false, false);
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_370[iVar0 /*10*/]) && !bVar1)
		{
			if (iVar0 == 2)
			{
				func_1478(cParam0, iVar0, 1);
			}
			else if (iVar0 == 3)
			{
				func_1478(cParam0, iVar0, 1);
			}
			__LIB_2__::func_597(&(Local_370[iVar0 /*10*/]), &(Local_370[iVar0 /*10*/].f_8), -1, 1);
			return;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_370[iVar0 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_370[iVar0 /*10*/].f_8))
		{
			if (!bVar1)
			{
				if (bVar2)
				{
					if (iVar0 == 2)
					{
						__LIB_1__::func_683(&iLocal_1716, 64);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_370[iVar0 /*10*/], Local_370[iVar0 /*10*/].f_8, sLocal_58, 524295, 0, 0, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					}
					else if (iVar0 == 3)
					{
						__LIB_1__::func_683(&iLocal_1716, 128);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_370[iVar0 /*10*/], Local_370[iVar0 /*10*/].f_8, sLocal_59, 524295, 0, 0, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					}
				}
			}
			else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_370[iVar0 /*10*/].f_8, 0))
			{
				__LIB_0__::func_490(&(Local_370[iVar0 /*10*/]), 0);
				func_176(&(Local_370[iVar0 /*10*/].f_8), 0);
			}
		}
		iVar0++;
	}
}

void func_1426()
{
	if (!__LIB_0__::func_27(iLocal_1716, 2))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1526);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1526);
		__LIB_1__::func_683(&iLocal_1716, 2);
	}
}

void func_1427(int iParam0, float fParam1, float fParam2)
{
	if (__LIB_0__::func_27(iLocal_1716, 2))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1526);
		__LIB_1__::func_681(&iLocal_1716, 2);
	}
	if (fParam1 == -1f || fParam2 == -1f)
	{
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1526);
	}
	else
	{
		TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iLocal_1526, fParam1, fParam2);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1526);
}

void func_1428(int iParam0, int iParam1)
{
	struct<23> Var0;
	if (!TASK::_0x508F5053E3F6F0C4(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 20f))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 0, 41, 0);
		Var0.f_4 = -1;
		Var0.f_8 = 2;
		Var0.f_9 = 1;
		Var0.f_10 = 1;
		Var0.f_11 = 1;
		Var0.f_13 = 1;
		Var0.f_14 = 2;
		Var0.f_15 = 2;
		Var0.f_16 = 3;
		Var0.f_19 = 3;
		Var0.f_20 = 1;
		Var0.f_21 = 3;
		Var0.f_22 = 3;
		Var0.f_3 = iParam1;
		Var0.f_4 = 14283;
		Var0.f_14 = 3;
		Var0.f_15 = 3;
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
	}
}

bool func_1429(char[4] cParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (iParam1 == -1)
	{
		iParam1 = 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = 28;
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_79[iVar0 /*10*/]) || !PED::_0xA0BC8FAED8CFEB3C(Local_79[iVar0 /*10*/]))
		{
			if (!bLocal_1818 || !bParam3)
			{
				func_1445(cParam0, iVar0, bParam3);
			}
			if (bParam3)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1432(bool bParam0, bool bParam1)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (bParam0 && !__LIB_8__::func_761())
	{
		__LIB_10__::func_950(1, 1);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(Global_35, true, true);
	__LIB_1__::func_683(&iLocal_1716, 1);
	if (bParam1)
	{
		__LIB_8__::func_941(joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), Global_35, 0, 1);
		__LIB_8__::func_941(joaat("MPC_HIDE_ACTION_EQUIPMENT"), Global_35, 0, 1);
		HUD::_HIDE_HUD_COMPONENT(-2106452847);
	}
}

void func_1434(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_0__::func_325(&iLocal_78);
			__LIB_9__::func_253(cParam0, Local_1571[0 /*10*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_9__::func_142(cParam0, "IND3_OBJ_DOCKS", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
			}
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_77, false))
			{
				__LIB_8__::func_711(cParam0, "IND3_WALK2BOAT", 0);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (TASK::IS_PED_STILL(Global_35) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2847.914f, -1363.077f, 42.80704f, 2842.724f, -1369.6f, 46.05751f, 4.75f, false, true, 0))
			{
				if (!__LIB_0__::func_75(&(vLocal_1607[11 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1607[11 /*3*/]));
				}
			}
			else if (__LIB_0__::func_75(&(vLocal_1607[11 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_1607[11 /*3*/]));
			}
			if (((__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 7f && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[31], false)) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && (__LIB_0__::func_665(Global_35, Local_1571[0 /*10*/], 1, 1) >= 7f || __LIB_0__::func_264(&(vLocal_1607[11 /*3*/])) >= 5f))
			{
				__LIB_9__::func_208(cParam0, "IND3_OBJ_DOCKS", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_8__::func_711(cParam0, "IND3_BOATDAWDLE", 0);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			}
			break;
		case 3:
			if (__LIB_9__::func_344())
			{
				__LIB_0__::func_325(&iLocal_78);
				__LIB_9__::func_254(cParam0, Local_1571[0 /*10*/], 1);
				iLocal_78 = __LIB_4__::func_983(408396114, 2851.814f, -1376.698f, 44.2285f, 1);
				__LIB_9__::func_208(cParam0, "IND3_OBJ_GO_TAXI", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
	}
}

void func_1435(char[4] cParam0)
{
	if (!__LIB_0__::func_27(iLocal_1716, 524288))
	{
		if ((((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1720[22]) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[22], false)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[22], false)) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[22], "CS_GEORGE")) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_1720[22], "CS_GEORGE"))
		{
			func_1426();
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_77, sLocal_67, 524419, 0, 0, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_77, 3f, 524419);
			func_1427(Local_370[4 /*10*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			__LIB_1__::func_683(&iLocal_1716, 524288);
		}
	}
}

void func_1438()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1720[31]) && ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[31], "CS_JavierEscuella"))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[32], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[32], "CS_LeoStrauss", Local_1571[2 /*10*/], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[32], "p_cigarette_cs01x", iLocal_1779, 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_1720[32]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1720[31]) && (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[31], "CS_JosiahTrelawny") || ENTITY::HAS_ANIM_EVENT_FIRED(Local_1571[0 /*10*/], joaat("SWITCH"))))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[33], false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[33], "CS_JosiahTrelawny", Local_1571[0 /*10*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[33], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[3 /*10*/], 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_1720[33]);
		}
	}
}

void func_1439(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Local_1571[iVar0 /*10*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			switch (iVar0)
			{
				case 0:
					switch (Local_1571[iVar0 /*10*/].f_2)
					{
						case 0:
							__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							switch (iVar2)
							{
								case 0:
									sLocal_4415 = "pbl_Idle_A";
									break;
								case 1:
									sLocal_4415 = "pbl_Idle_B";
									break;
								case 2:
									sLocal_4415 = "pbl_Idle_C";
									break;
							}
							Local_1571[iVar0 /*10*/].f_2++;
							break;
						case 1:
							if (__LIB_0__::func_27(iLocal_1717, 268435456))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[33], "pbl_Exit", true);
								Local_1571[iVar0 /*10*/].f_2 = 99;
							}
							else if (__LIB_6__::func_895(iLocal_1720[33], sLocal_4415) && __LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 4f)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[33], sLocal_4415, true);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 2:
							if (__LIB_6__::func_895(iLocal_1720[33], "pbl_base") && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[33], "s_base", 1))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[33], "pbl_base", true);
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
								switch (iVar2)
								{
									case 0:
										sLocal_4415 = "pbl_Callover_A";
										break;
									case 1:
										sLocal_4415 = "pbl_Callover_B";
										break;
									case 2:
										sLocal_4415 = "pbl_Callover_C";
										break;
								}
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 3:
							if (__LIB_0__::func_27(iLocal_1717, 268435456))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[33], "pbl_Exit", true);
								Local_1571[iVar0 /*10*/].f_2 = 99;
							}
							else if ((__LIB_6__::func_895(iLocal_1720[33], sLocal_4415) && __LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 4f) && __LIB_8__::func_711(cParam0, "IND3_BOARDWAIT", 0))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[33], sLocal_4415, true);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 4:
							if (__LIB_6__::func_895(iLocal_1720[33], "pbl_base") && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[33], "s_base", 1))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[33], "pbl_base", true);
								Local_1571[iVar0 /*10*/].f_2 = 0;
							}
							break;
					}
					break;
				case 1:
					switch (Local_1571[iVar0 /*10*/].f_2)
					{
						case 0:
							__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
							Local_1571[iVar0 /*10*/].f_2++;
							break;
						case 1:
							if ((__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 7.5f && !__LIB_0__::func_48(Global_35, iVar1, 4f, 1)) && __LIB_6__::func_895(iLocal_1720[32], "pbl_Enter02"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[32], "pbl_Enter02", true);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 2:
							if (__LIB_6__::func_895(iLocal_1720[32], "pbl_base02") && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[32], "s_base02", 1))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[32], "pbl_base02", true);
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 3:
							if (__LIB_0__::func_27(iLocal_1717, 268435456))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[32], "pbl_Exit", true);
								Local_1571[iVar0 /*10*/].f_2 = 99;
							}
							else if (__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 12f)
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
								switch (iVar2)
								{
									case 0:
										sLocal_4414 = "pbl_Idle_A";
										break;
									case 1:
										sLocal_4414 = "pbl_Idle_B";
										break;
									case 2:
										sLocal_4414 = "pbl_Idle_C";
										break;
								}
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 4:
							if (__LIB_6__::func_895(iLocal_1720[32], sLocal_4414))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[32], sLocal_4414, true);
								Local_1571[iVar0 /*10*/].f_2 = 2;
							}
							break;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1440(char[4] cParam0, int iParam1)
{
	__LIB_0__::func_19(&(cParam0->f_10792), iParam1);
}

bool func_1441(char[4] cParam0, bool bParam1)
{
	func_991(cParam0);
	if (((bParam1 && __LIB_4__::func_576(&(cParam0->f_10792)) != 11) && !__LIB_4__::func_562(&(cParam0->f_10792), 131072)) && !__LIB_4__::func_562(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return __LIB_4__::func_581(&(cParam0->f_10792));
}

void func_1442(char[4] cParam0, int iParam1)
{
	struct<8> Var0;
	Var0 = { __LIB_5__::func_65(&(cParam0->f_7375)) };
	if ((((__LIB_4__::func_562(&(cParam0->f_10792), 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false)) && ANIMSCENE::_0xA9016536015DE29D(cParam0->f_7375.f_804, &Var0)) && ANIMSCENE::_0x23E33CB9F4A3F547(cParam0->f_7375.f_804, &Var0))
	{
		__LIB_9__::func_46(cParam0, &Var0);
		func_1955(cParam0);
	}
	else
	{
		if (iParam1 == 1 && __LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_4__::func_618(&(cParam0->f_10792), Global_43805);
			__LIB_4__::func_532(&(cParam0->f_10792), 8);
		}
		__LIB_0__::func_19(&(cParam0->f_10792), iParam1);
		func_991(cParam0);
		__LIB_6__::func_868(cParam0, 2097152);
	}
}

bool func_1444(char[4] cParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (iParam1 == -1)
	{
		iParam1 = 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = 56;
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_370[iVar0 /*10*/]) || !PED::_0xA0BC8FAED8CFEB3C(Local_370[iVar0 /*10*/]))
		{
			if (!bLocal_1818 || !bParam3)
			{
				func_1478(cParam0, iVar0, bParam3);
			}
			if (bParam3)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1445(char[4] cParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	float fVar17;
	vector3 vVar18;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	char* sVar30;
	bool bVar31;
	bool bVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_79[iParam1 /*10*/]))
	{
		if (bParam2 && bLocal_1818)
		{
			return false;
		}
		iVar0 = iLocal_14;
		iVar5 = 1;
		bVar6 = true;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
		bVar11 = false;
		bVar12 = false;
		bVar13 = false;
		bVar14 = true;
		bVar15 = false;
		iVar16 = 1;
		fVar17 = 1.2f;
		iVar21 = joaat("REL_PLAYER_ENEMY");
		iVar22 = joaat("META_OUTFIT_DEFAULT");
		iVar23 = -1;
		bVar24 = false;
		bVar25 = false;
		bVar26 = false;
		iVar27 = 0;
		bVar28 = false;
		bVar29 = false;
		bVar31 = false;
		switch (iParam1)
		{
			case 0:
				vVar1 = { 2851.142f, -1378.849f, 44.6482f };
				fVar4 = 34.05f;
				iVar22 = 954292079;
				break;
			case 1:
				vVar1 = { 2851.46f, -1376.493f, 44.7282f };
				fVar4 = -123.07f;
				iVar22 = 1116367553;
				break;
			case 2:
				vVar1 = { 2847.124f, -1383.949f, 44.6286f };
				fVar4 = -15.12f;
				iVar22 = 293767346;
				break;
			case 3:
				vVar1 = { 2857.606f, -1372.177f, 44.548f };
				fVar4 = 50.22f;
				bVar29 = true;
				bVar26 = true;
				break;
			case 4:
				if (__LIB_6__::func_864(cParam0) >= iLocal_54)
				{
					vVar1 = { 3292.699f, -1298.157f, 42.0687f };
					fVar4 = 180.1874f;
					iVar22 = -2036265354;
					bVar15 = true;
					bVar28 = true;
				}
				else
				{
					vVar1 = { 3284.053f, -1318.833f, 41.7279f };
					fVar4 = 264.3868f;
					iVar22 = -207467036;
					bVar26 = true;
				}
				break;
			case 5:
				vVar1 = { 3285.782f, -1306.579f, 50.7806f };
				fVar4 = 342.0573f;
				vVar18 = { func_1957(iParam1) };
				iVar5 = 0;
				bVar6 = false;
				bVar7 = false;
				bVar26 = true;
				break;
			case 6:
				vVar1 = { 3283.537f, -1308.344f, 42.78f };
				fVar4 = -86.88f;
				vVar18 = { func_1957(iParam1) };
				bVar26 = true;
				bVar6 = false;
				if (__LIB_6__::func_864(cParam0) == iLocal_55)
				{
					bVar31 = true;
				}
				break;
			case 7:
				vVar1 = { 3293.302f, -1319.856f, 41.7194f };
				fVar4 = 88.5672f;
				vVar18 = { func_1957(iParam1) };
				if (__LIB_6__::func_864(cParam0) < iLocal_54)
				{
					bVar7 = true;
					iVar27 = joaat("WORLD_HUMAN_STAND_WAITING_MALE_A");
				}
				else
				{
					bVar26 = true;
				}
				if (__LIB_6__::func_864(cParam0) == iLocal_55)
				{
					bVar31 = true;
				}
				break;
			case 8:
				vVar1 = { 3288.412f, -1348.419f, 42.4508f };
				fVar4 = 179.7318f;
				vVar18 = { func_1957(iParam1) };
				if (__LIB_6__::func_864(cParam0) < iLocal_54)
				{
					iVar27 = joaat("WORLD_HUMAN_STAND_WAITING_MALE_B");
					bVar7 = true;
				}
				else
				{
					bVar26 = true;
				}
				if (__LIB_6__::func_864(cParam0) == iLocal_55)
				{
					bVar31 = true;
				}
				break;
			case 9:
				vVar1 = { 3299.371f, -1340.005f, 41.9969f };
				fVar4 = 176.8656f;
				vVar18 = { func_1957(iParam1) };
				if (__LIB_6__::func_864(cParam0) < iLocal_54)
				{
					iVar27 = joaat("WORLD_HUMAN_STAND_WAITING_MALE_A");
					bVar7 = true;
				}
				else
				{
					bVar25 = true;
				}
				if (__LIB_6__::func_864(cParam0) == iLocal_55)
				{
					bVar31 = true;
				}
				bVar14 = false;
				break;
			case 10:
				vVar1 = { 3291.342f, -1324.215f, 41.7241f };
				fVar4 = 86.2292f;
				vVar18 = { func_1957(iParam1) };
				if (__LIB_6__::func_864(cParam0) < iLocal_54)
				{
					bVar7 = true;
					iVar27 = joaat("WORLD_HUMAN_STAND_WAITING_MALE_B");
				}
				else
				{
					bVar25 = true;
				}
				if (__LIB_6__::func_864(cParam0) == iLocal_55)
				{
					bVar31 = true;
				}
				bVar14 = false;
				break;
			case 11:
				vVar1 = { 3285.549f, -1324.205f, 41.7241f };
				fVar4 = 269.5241f;
				vVar18 = { func_1957(iParam1) };
				if (__LIB_6__::func_864(cParam0) < iLocal_54)
				{
					bVar7 = true;
					iVar27 = joaat("WORLD_HUMAN_STAND_WAITING_MALE_A");
				}
				else
				{
					bVar26 = true;
				}
				if (__LIB_6__::func_864(cParam0) == iLocal_55)
				{
					bVar31 = true;
				}
				break;
			case 12:
				vVar1 = { 3281.309f, -1335.318f, 45.6094f };
				fVar4 = 332.3098f;
				bVar25 = true;
				vVar18 = { func_1957(iParam1) };
				fVar17 = 1.25f;
				iVar16 = 0;
				bVar11 = true;
				break;
			case 13:
				vVar1 = { 3295.963f, -1335.966f, 45.6318f };
				fVar4 = 84.0278f;
				bVar25 = true;
				vVar18 = { func_1957(iParam1) };
				fVar17 = 1.2f;
				bVar11 = true;
				break;
			case 14:
				vVar1 = { 3295.832f, -1331.058f, 41.772f };
				fVar4 = 354.3098f;
				bVar25 = true;
				vVar18 = { func_1957(iParam1) };
				bVar11 = true;
				bVar10 = true;
				break;
			case 15:
				vVar1 = { 3280.538f, -1334.845f, 45.6401f };
				fVar4 = 262.5558f;
				bVar26 = true;
				vVar18 = { func_1957(iParam1) };
				fVar17 = 1.5f;
				bVar11 = true;
				break;
			case 16:
				vVar1 = { 3281.385f, -1309.208f, 41.7526f };
				fVar4 = 175.6751f;
				bVar25 = true;
				vVar18 = { func_1957(iParam1) };
				bVar12 = true;
				bVar7 = false;
				iVar21 = joaat("REL_CIVMALE");
				break;
			case 17:
				vVar1 = { 3295.964f, -1309.664f, 41.7525f };
				fVar4 = 98.4321f;
				bVar26 = true;
				vVar18 = { func_1957(iParam1) };
				fVar17 = 1.5f;
				bVar11 = true;
				bVar10 = true;
				bVar25 = true;
				break;
			case 18:
				if (!__LIB_0__::func_27(Local_79[iParam1 /*10*/].f_1, 64) || __LIB_1__::func_985())
				{
					vVar1 = { 3296.465f, -1335.074f, 45.6445f };
					fVar4 = 94.4198f;
				}
				else
				{
					vVar1 = { 3296.243f, -1309.883f, 41.7525f };
					fVar4 = 90.0156f;
				}
				if (!__LIB_0__::func_27(Local_79[iParam1 /*10*/].f_1, 64))
				{
					vVar18 = { func_1957(iParam1) };
				}
				bVar25 = true;
				bVar9 = true;
				bVar10 = true;
				bVar13 = true;
				bVar14 = false;
				fVar17 = 0.75f;
				bVar11 = true;
				break;
			case 19:
				if (!__LIB_0__::func_27(Local_79[iParam1 /*10*/].f_1, 64) || __LIB_1__::func_985())
				{
					vVar1 = { 3290.677f, -1337.098f, 45.6266f };
					fVar4 = 264.1793f;
				}
				else
				{
					vVar1 = { 3292.811f, -1296.624f, 42.1253f };
					fVar4 = 176.0481f;
				}
				if (!__LIB_0__::func_27(Local_79[iParam1 /*10*/].f_1, 64))
				{
					vVar18 = { func_1957(iParam1) };
				}
				bVar26 = true;
				bVar9 = true;
				bVar10 = true;
				bVar13 = true;
				bVar14 = false;
				fVar17 = 0.75f;
				bVar11 = true;
				break;
			case 20:
				if (!__LIB_0__::func_27(Local_79[iParam1 /*10*/].f_1, 64) || __LIB_1__::func_985())
				{
					vVar1 = { 3297.346f, -1334.316f, 45.6507f };
					fVar4 = 63.2622f;
				}
				else
				{
					vVar1 = { 3284.213f, -1294.858f, 42.2109f };
					fVar4 = 180.5794f;
				}
				if (!__LIB_0__::func_27(Local_79[iParam1 /*10*/].f_1, 64))
				{
					vVar18 = { func_1957(iParam1) };
				}
				bVar26 = true;
				bVar9 = true;
				bVar10 = true;
				bVar13 = true;
				bVar14 = false;
				bVar11 = true;
				break;
			case 21:
				vVar1 = { 3280.335f, -1334.119f, 41.8477f };
				fVar4 = 162.9191f;
				bVar26 = true;
				vVar18 = { 3277.62f, -1345.851f, 42.2406f };
				bVar9 = true;
				bVar10 = false;
				bVar14 = false;
				sVar30 = "IND3_SWIMGUARD1";
				bVar11 = true;
				break;
			case 22:
				vVar1 = { 3281.147f, -1332.263f, 48.7791f };
				fVar4 = 112.4182f;
				bVar26 = true;
				vVar18 = { 3277.18f, -1334.533f, 48.8245f };
				bVar9 = true;
				bVar10 = false;
				bVar14 = false;
				sVar30 = "IND3_SWIMGUARD2";
				bVar11 = true;
				break;
			case 23:
				vVar1 = { 3282.297f, -1340.064f, 45.7182f };
				fVar4 = 127.5541f;
				bVar26 = true;
				vVar18 = { 3277.427f, -1343.561f, 45.8443f };
				bVar9 = true;
				bVar10 = false;
				bVar14 = false;
				sVar30 = "IND3_SWIMGUARD3";
				bVar11 = true;
				break;
			case 24:
				vVar1 = { 3285.654f, -1340.213f, 49.9657f };
				fVar4 = 65.83f;
				bVar26 = true;
				bVar10 = false;
				break;
			case 25:
				vVar1 = { 3287.051f, -1340.331f, 49.9676f };
				fVar4 = 85.68f;
				bVar25 = true;
				bVar10 = false;
				break;
			case 26:
				vVar1 = { 3283.996f, -1297.437f, 42.0978f };
				fVar4 = 168.5777f;
				vVar18 = { func_1957(iParam1) };
				bVar26 = true;
				bVar9 = true;
				bVar10 = true;
				bVar13 = true;
				bVar14 = false;
				bVar11 = true;
				break;
			case 27:
				vVar1 = { 3292.824f, -1298.167f, 42.0685f };
				fVar4 = 173.9237f;
				vVar18 = { func_1957(iParam1) };
				bVar26 = true;
				bVar9 = true;
				bVar10 = true;
				bVar13 = true;
				bVar14 = false;
				bVar11 = true;
				break;
			case 28:
				vVar1 = { 3295.034f, -1309.671f, 45.6126f };
				fVar4 = 90.8771f;
				vVar18 = { func_1957(iParam1) };
				bVar26 = true;
				bVar9 = true;
				bVar10 = true;
				bVar13 = true;
				bVar14 = false;
				bVar11 = true;
				break;
		}
		if (bVar13 && __LIB_0__::func_266(Global_35, vVar1, 5f, 1, 1))
		{
			return false;
		}
		bVar32 = true;
		if (iVar22 != joaat("META_OUTFIT_DEFAULT"))
		{
			bVar32 = false;
		}
		if (bVar31 && !__LIB_0__::func_86(vVar18))
		{
			vVar1 = { vVar18 };
		}
		if (iVar23 == -1)
		{
			Local_79[iParam1 /*10*/] = func_1959(iVar0, vVar1, fVar4, 1, 1, 0, 1, 1, bVar32, 1, !bVar32);
		}
		else if (__LIB_3__::func_397(iVar23, 1))
		{
			Local_79[iParam1 /*10*/] = __LIB_2__::func_965(iVar23, 1, 0, 1, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_79[iParam1 /*10*/]))
		{
			if (iVar23 != -1)
			{
				func_893(Local_79[iParam1 /*10*/], vVar1, fVar4, 2, 1073741824 /* Float: 2f */);
				__LIB_1__::func_683(&(Local_79[iParam1 /*10*/].f_1), 16);
			}
			if (iVar22 != joaat("META_OUTFIT_DEFAULT"))
			{
				PED::_SET_PED_BODY_COMPONENT(Local_79[iParam1 /*10*/], iVar22);
				PED::_UPDATE_PED_VARIATION(Local_79[iParam1 /*10*/], false, true, true, true, false);
			}
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_79[iParam1 /*10*/], true, true);
			if (!bVar31)
			{
				if (!bVar28)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_79[iParam1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_79[iParam1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), 50, false, true, 9, false, 0.5f, 1f, 752097756, true, 0f, false);
				}
				if (bVar25)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_79[iParam1 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), true, 0, false, false);
				}
				else if (bVar26)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_79[iParam1 /*10*/], joaat("WEAPON_REPEATER_WINCHESTER"), true, 0, false, false);
				}
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[iParam1 /*10*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_79[iParam1 /*10*/], 249, true);
			PED::SET_PED_CONFIG_FLAG(Local_79[iParam1 /*10*/], 186, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_79[iParam1 /*10*/], bVar6);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_79[iParam1 /*10*/], iVar21);
			__LIB_2__::func_930(Local_79[iParam1 /*10*/], iVar5);
			ENTITY::_0x18FF3110CF47115D(Local_79[iParam1 /*10*/], 7, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_79[iParam1 /*10*/], 0, bVar14);
			PED::SET_PED_COMBAT_MOVEMENT(Local_79[iParam1 /*10*/], iVar16);
			PED::SET_PED_CONFIG_FLAG(Local_79[iParam1 /*10*/], 143, true);
			if (!__LIB_0__::func_138(vVar18, 0f, 0f, 0f))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_79[iParam1 /*10*/], vVar18, fVar17, 1, 0, 0);
			}
			if (bVar7 && !bVar31)
			{
				__LIB_1__::func_473(Local_79[iParam1 /*10*/], joaat("WORLD_HUMAN_STAND_WAITING"), -1, 0, iVar27, -1082130432 /* Float: -1f */);
			}
			if (iParam1 == 9)
			{
				__LIB_9__::func_42(cParam0, Local_79[iParam1 /*10*/], "IND3_GUARD1", 0);
			}
			else if (iParam1 == 6)
			{
				__LIB_9__::func_42(cParam0, Local_79[iParam1 /*10*/], "IND3_GUARD2", 0);
			}
			else if (iParam1 == 8)
			{
				__LIB_9__::func_42(cParam0, Local_79[iParam1 /*10*/], "IND3_GUARD3", 0);
			}
			else if (iParam1 == 13)
			{
				__LIB_9__::func_42(cParam0, Local_79[iParam1 /*10*/], "IND3_GUARD4", 0);
			}
			else if (iParam1 == 15)
			{
				__LIB_9__::func_42(cParam0, Local_79[iParam1 /*10*/], "IND3_GUARD5", 0);
			}
			if (iParam1 == 0)
			{
				__LIB_9__::func_42(cParam0, Local_79[iParam1 /*10*/], "IND3_GUARD1", 0);
				__LIB_9__::func_154(cParam0, Local_79[iParam1 /*10*/], "S_M_M_NBXRIVERBOATGUARDS_01", 0, 0, 0, 0);
			}
			else if (iParam1 == 1)
			{
				__LIB_9__::func_154(cParam0, Local_79[iParam1 /*10*/], "S_M_M_NBXRIVERBOATGUARDS_01^1", 0, 0, 0, 0);
			}
			else if (iParam1 == 2)
			{
				__LIB_9__::func_154(cParam0, Local_79[iParam1 /*10*/], "S_M_M_NBXRIVERBOATGUARDS_01^2", 0, 0, 0, 0);
			}
			if (bVar8)
			{
				__LIB_2__::func_279(Local_79[iParam1 /*10*/], 1);
			}
			if (bVar9)
			{
				PED::SET_PED_COMBAT_RANGE(Local_79[iParam1 /*10*/], 3);
				PED::SET_PED_SEEING_RANGE(Local_79[iParam1 /*10*/], 500f);
			}
			if (bVar10 && !bVar31)
			{
				if (!__LIB_0__::func_86(vVar18))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_79[iParam1 /*10*/], vVar18, 150f, 0, 78);
				}
				else
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[iParam1 /*10*/], 150f, 0, 0);
				}
			}
			if (bVar11)
			{
				Local_79[iParam1 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[iParam1 /*10*/]);
				MAP::_BLIP_SET_MODIFIER(Local_79[iParam1 /*10*/].f_3, -1034486097);
			}
			if (bVar12)
			{
				PED::SET_PED_CONFIG_FLAG(Local_79[iParam1 /*10*/], 277, true);
			}
			if (bVar24 && !bVar31)
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_79[iParam1 /*10*/], false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_79[iParam1 /*10*/], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_79[iParam1 /*10*/], true);
			}
			if (bVar29)
			{
				PED::SET_PED_CAN_BE_TARGETTED(Local_79[iParam1 /*10*/], false);
			}
			if (bVar15)
			{
				PED::APPLY_PED_DAMAGE_PACK(Local_79[iParam1 /*10*/], "PD_Mud2_Javier_Melee4", 1f, 1f);
			}
			if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
			{
				iVar33 = BUILTIN::ROUND((IntToFloat(PED::GET_PED_ACCURACY(Local_79[iParam1 /*10*/])) * fLocal_4418));
				iVar33 = __LIB_0__::func_309(iVar33, 0, 100);
				PED::SET_PED_ACCURACY(Local_79[iParam1 /*10*/], iVar33);
				fVar34 = (PED::_GET_PED_DAMAGE_MODIFIER(Local_79[iParam1 /*10*/]) * fLocal_4418);
				fVar34 = __LIB_0__::func_251(fVar34, 1f, 2f);
				PED::_SET_PED_DAMAGE_MODIFIER(Local_79[iParam1 /*10*/], fVar34);
				iVar35 = BUILTIN::ROUND((IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(Local_79[iParam1 /*10*/], false)) * fLocal_4418));
				iVar35 = __LIB_0__::func_309(iVar35, 0, BUILTIN::ROUND((IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(Local_79[iParam1 /*10*/], false)) * 2f)));
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_79[iParam1 /*10*/], iVar35);
				ENTITY::_SET_ENTITY_HEALTH(Local_79[iParam1 /*10*/], iVar35, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_79[iParam1 /*10*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_79[iParam1 /*10*/], 50, true);
				PED::SET_PED_CONFIG_FLAG(Local_79[iParam1 /*10*/], 112, true);
				fLocal_4418 = (fLocal_4418 + 0.1f);
			}
			if (iParam1 >= 26 && iParam1 <= 28)
			{
				PED::SET_PED_ACCURACY(Local_79[iParam1 /*10*/], 75);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
			{
				__LIB_9__::func_42(cParam0, Local_79[iParam1 /*10*/], sVar30, 0);
			}
			if (bVar31)
			{
				func_893(Local_79[iParam1 /*10*/], vVar1, fVar4, 2, 1073741824 /* Float: 2f */);
				func_1504(Local_79[iParam1 /*10*/]);
			}
			if (__LIB_0__::func_302() <= 2)
			{
				if ((iParam1 == 9 || iParam1 == 10) || iParam1 == 14)
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_79[iParam1 /*10*/], ENTITY::GET_ENTITY_HEALTH(Local_79[iParam1 /*10*/]) + 5, 0);
				}
				else if ((iParam1 == 7 || iParam1 == 11) || iParam1 == 13)
				{
					PED::SET_PED_ACCURACY(Local_79[iParam1 /*10*/], PED::GET_PED_ACCURACY(Local_79[iParam1 /*10*/]) + 5);
				}
			}
			return PED::_0xA0BC8FAED8CFEB3C(Local_79[iParam1 /*10*/]);
		}
		else
		{
			return false;
		}
	}
	return PED::_0xA0BC8FAED8CFEB3C(Local_79[iParam1 /*10*/]);
}

void func_1446()
{
	int iVar0;
	PED::CLEAR_PED_WETNESS(Global_35);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1571[iVar0 /*10*/]))
		{
			PED::CLEAR_PED_WETNESS(Local_1571[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

char* func_1449(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "U_M_M_NBXBARTENDER_02";
		case 11:
			return "U_M_M_NBXRIVERBOATPITBOSS_01";
		case 17:
			return "Table1_Male4";
		case 13:
			return "Table1_Dealer";
		case 18:
			return "Table1_Male5";
		case 14:
			return "Table1_Male1";
		case 15:
			return "Table1_Male2";
		case 16:
			return "Table1_Male3";
		case 19:
			return "Table3_Dealer";
		case 23:
			return "Table3_Male4";
		case 24:
			return "Table3_Male5";
		case 20:
			return "Table3_Male1";
		case 21:
			return "Table3_Male2";
		case 22:
			return "Table3_Male3";
		case 25:
			return "Male_Civ_Bar";
		case 27:
			return "Booth_Male";
		case 26:
			return "Female_Civ_Bar";
		case 28:
			return "Female_Civ_Walking";
		case 29:
			return "Female_Civ_Walking2";
	}
	return "";
}

void func_1450(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (!__LIB_6__::func_862(cParam0, 8) || __LIB_8__::func_711(cParam0, "IND3_MCS1_LO", 0))
			{
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			iLocal_1602[1] = __LIB_1__::func_282("IND3_UC_PLAY", joaat("INPUT_CONTEXT_Y"), 3289.503f, -1317.385f, 41.7758f, 1.6f, 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			iLocal_78 = __LIB_4__::func_983(408396114, 3289.503f, -1317.385f, 41.7758f, 1);
			__LIB_9__::func_208(cParam0, "IND3_OBJ_PLAY_GAME", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			__LIB_9__::func_60(cParam0, 2);
			break;
		case 2:
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			__LIB_9__::func_60(cParam0, 3);
			break;
		case 3:
			if (__LIB_0__::func_75(&(vLocal_1607[20 /*3*/])) && !__LIB_0__::func_266(Global_35, 3288.338f, -1318.019f, 42.57344f, 3.2f, 1, 1))
			{
				__LIB_0__::func_37(&(vLocal_1607[20 /*3*/]));
			}
			if (__LIB_0__::func_266(Global_35, 3288.338f, -1318.019f, 42.57344f, 3.2f, 1, 1))
			{
				if (!__LIB_0__::func_75(&(vLocal_1607[20 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1607[20 /*3*/]));
				}
				else if ((__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 7f && __LIB_0__::func_264(&(vLocal_1607[20 /*3*/])) >= 5f) || !__LIB_0__::func_27(iLocal_1718, 1073741824 /* Float: 2f */))
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_8__::func_711(cParam0, "IND3_NEAR_TABLE", 0);
						__LIB_1__::func_683(&iLocal_1718, 1073741824 /* Float: 2f */);
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					}
				}
			}
			else if (__LIB_0__::func_48(Global_35, Local_1571[2 /*10*/], 4f, 1) && !func_1967(Global_35, Local_1571[2 /*10*/]))
			{
				func_1428(Local_1571[2 /*10*/], Global_35);
				if (!__LIB_0__::func_27(iLocal_1716, 512))
				{
					__LIB_8__::func_711(cParam0, "IND3_PASTSTRAUS", 0);
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					__LIB_1__::func_683(&iLocal_1716, 512);
				}
				else if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 7f)
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_8__::func_711(cParam0, "IND3_TOSTRAUSS", 0);
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					}
				}
			}
			else if (__LIB_0__::func_48(Global_35, Local_1571[0 /*10*/], 4f, 1) && !func_1967(Global_35, Local_1571[0 /*10*/]))
			{
				func_1428(Local_1571[0 /*10*/], Global_35);
				if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 7f)
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_8__::func_711(cParam0, "IND3_PLAYPOKER", 0);
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					}
				}
			}
			else if ((__LIB_0__::func_48(Global_35, Local_1571[1 /*10*/], 5.5f, 1) && !func_1967(Global_35, Local_1571[1 /*10*/])) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
			{
				func_1428(Local_1571[1 /*10*/], Global_35);
				if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 7f)
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_8__::func_711(cParam0, "IND3_TOJAVIER", 0);
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					}
				}
			}
			else if (__LIB_0__::func_48(Global_35, Local_370[11 /*10*/], 4f, 1) && !func_1967(Global_35, Local_370[11 /*10*/]))
			{
				func_1428(Local_370[11 /*10*/], Global_35);
				if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 7f)
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_8__::func_711(cParam0, "IND3_TOPITBOSS", 0);
						__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					}
				}
			}
			else
			{
				func_1968(cParam0);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			}
			break;
	}
}

bool func_1462(int iParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar14;
	struct<32> Var15;
	var uVar49;
	vVar4 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	__LIB_1__::func_65(iParam0, &vVar4, 1);
	vVar4.f_2 = iParam1;
	if (vVar4.y == -1)
	{
		return false;
	}
	iVar14 = __LIB_1__::func_66(vVar4.y, 1);
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar14);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar14))
	{
		if (!__LIB_1__::func_224(vVar4.y))
		{
			__LIB_1__::func_225(vVar4.y);
		}
		iVar1 = __LIB_1__::func_806(&vVar4, 0, iParam10);
		if (iVar1 == -1)
		{
			return false;
		}
		Global_1392915[iVar1 /*12*/].f_2 = iParam1;
		Global_1392915[iVar1 /*12*/].f_6 = { vParam2 };
		Global_1392915[iVar1 /*12*/].f_9 = uParam5;
		Global_1392915[iVar1 /*12*/].f_10 = iParam6;
		iVar0 = Global_1392915[iVar1 /*12*/].f_4;
		if (__LIB_1__::func_241(iVar0) || (!__LIB_0__::func_702(iVar0) && __LIB_0__::func_298(0) != iVar0))
		{
			iVar2 = __LIB_0__::func_80(iVar0);
			if (iVar2 == -1)
			{
				__LIB_1__::func_319(iVar0);
			}
		}
		if (__LIB_0__::func_702(iVar0))
		{
			__LIB_1__::func_297(iVar0);
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar14) > 0)
		{
			if (iParam8 == 1)
			{
				__LIB_1__::func_267(vVar4.y, 0);
			}
			return true;
		}
		Var15 = -1;
		Var15.f_1 = -1;
		Var15.f_2 = -1;
		Var15.f_4 = -1;
		Var15.f_11 = -1;
		Var15.f_12 = -1;
		Var15.f_23 = 6;
		Var15.f_30 = -1;
		Var15.f_31 = 255;
		if (*iParam7 > Var15.f_23)
		{
			return false;
		}
		iVar3 = 0;
		while (iVar3 < Var15.f_23)
		{
			Var15.f_23[iVar3] = 0;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < *iParam7)
		{
			Var15.f_23[iVar3] = (*iParam7)[iVar3];
			iVar3++;
		}
		Var15.f_13 = iParam9;
		if (func_1983(iParam0, &Var15, &uVar49, 0, 1))
		{
			if (iParam8 == 1)
			{
				__LIB_1__::func_267(vVar4.y, 0);
			}
			return true;
		}
	}
	return false;
}

void func_1468(char[4] cParam0)
{
	if (__LIB_8__::func_618(cParam0) < 6)
	{
		func_1985(cParam0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (__LIB_8__::func_711(cParam0, "IND3_CHIPSTALK", 0))
			{
				__LIB_9__::func_208(cParam0, "IND3_OBJ_PKR1", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 1.5f && __LIB_8__::func_711(cParam0, "IND3_HAND1CHAT1", 0))
			{
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 1.5f && __LIB_8__::func_711(cParam0, "IND3_HAND1CHAT2", 0))
			{
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				__LIB_12__::func_435(3);
				__LIB_12__::func_435(4);
				__LIB_12__::func_435(5);
				__LIB_12__::func_435(6);
				__LIB_12__::func_435(7);
				__LIB_12__::func_435(8);
				__LIB_12__::func_435(9);
				__LIB_12__::func_435(10);
				__LIB_12__::func_435(11);
				__LIB_12__::func_435(12);
				__LIB_12__::func_435(13);
				__LIB_9__::func_60(cParam0, 6);
			}
			break;
		case 6:
			func_1986(cParam0);
			break;
	}
}

void func_1469()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		switch (Local_1571[1 /*10*/].f_2)
		{
			case 0:
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[4], false))
				{
					Local_1571[1 /*10*/].f_2++;
				}
				break;
			case 1:
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[4], false))
				{
					iLocal_4456[2] = 0;
					Local_1571[1 /*10*/].f_2++;
				}
				break;
			case 2:
				if (func_1658(2, Local_1571[1 /*10*/], -193269670))
				{
					Local_1571[1 /*10*/].f_2++;
				}
				break;
		}
	}
}

void func_1470(char[4] cParam0)
{
	int iVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 2) && !__LIB_0__::func_27(iLocal_1718, 16))
	{
		__LIB_1__::func_683(&iLocal_1718, 16);
	}
	if (__LIB_0__::func_27(iLocal_1718, 32) && __LIB_0__::func_27(iLocal_1718, 16))
	{
		__LIB_1__::func_681(&iLocal_1718, 32);
	}
	switch (iLocal_4500)
	{
		case 0:
			if (__LIB_6__::func_864(cParam0) == iLocal_48)
			{
				func_1675();
			}
			else if (__LIB_6__::func_864(cParam0) == iLocal_49)
			{
				func_1987();
			}
			else if (__LIB_6__::func_864(cParam0) == iLocal_50)
			{
				func_1988();
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_1718, 256))
			{
				if (__LIB_6__::func_864(cParam0) == iLocal_48)
				{
					iVar0 = 27;
				}
				else if (__LIB_6__::func_864(cParam0) == iLocal_49)
				{
					iVar0 = 28;
				}
				else if (__LIB_6__::func_864(cParam0) == iLocal_50)
				{
					iVar0 = 29;
				}
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Chin_Idle", 1))
				{
					sVar1 = "PBL_CHIN_ANNOYED";
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Glance_Idle", 1))
				{
					sVar1 = "PBL_GLANCE_ANNOYED";
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Idle", 1))
				{
					sVar1 = "PBL_IDLE_ANNOYED";
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && __LIB_6__::func_895(iLocal_1720[iVar0], sVar1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[iVar0], sVar1, true);
					__LIB_0__::func_37(&(vLocal_1607[16 /*3*/]));
					__LIB_0__::func_37(&(vLocal_1607[17 /*3*/]));
					sLocal_4501 = "";
					__LIB_1__::func_681(&iLocal_1718, 256);
				}
			}
			else if ((MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 2) && func_1989(cParam0)) && iLocal_4419 < 2)
			{
				__LIB_0__::func_37(&(vLocal_1607[16 /*3*/]));
				func_1474(2);
			}
			else
			{
				if (!MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 2) && iLocal_4419 != 0)
				{
					iLocal_4419 = 0;
				}
				if (__LIB_0__::func_27(iLocal_1718, 16))
				{
					if (__LIB_6__::func_864(cParam0) == iLocal_48)
					{
						if ((((((func_1989(cParam0) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[27], "Idle", 1)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[27], "PBL_GLANCE_ENTER")) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[27], "PBL_GLANCE_DRINK")) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[27], "PBL_GLANCE_IDLE")) && !ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[27], "Glance_Idle", 1)) && __LIB_6__::func_895(iLocal_1720[27], "PBL_GLANCE_ENTER"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[27], "PBL_GLANCE_ENTER", true);
						}
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[27], "Glance_Idle", 1))
						{
							if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[27], "PBL_GLANCE_IDLE") && __LIB_6__::func_895(iLocal_1720[27], "PBL_GLANCE_IDLE"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[27], "PBL_GLANCE_IDLE", true);
							}
							if (!__LIB_0__::func_75(&(vLocal_1607[16 /*3*/])))
							{
								__LIB_1__::func_148(&(vLocal_1607[16 /*3*/]));
							}
							else if (__LIB_0__::func_265(&(vLocal_1607[16 /*3*/])) >= 10f && __LIB_6__::func_895(iLocal_1720[27], "PBL_GLANCE_DRINK"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[27], "PBL_GLANCE_DRINK", true);
								__LIB_0__::func_37(&(vLocal_1607[16 /*3*/]));
								sLocal_4501 = "";
							}
						}
						else if (__LIB_0__::func_75(&(vLocal_1607[16 /*3*/])))
						{
							__LIB_0__::func_37(&(vLocal_1607[16 /*3*/]));
						}
					}
					else
					{
						if (__LIB_6__::func_864(cParam0) == iLocal_49)
						{
							iVar0 = 28;
						}
						else if (__LIB_6__::func_864(cParam0) == iLocal_50)
						{
							iVar0 = 29;
						}
						if ((((func_1989(cParam0) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Idle", 1)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[iVar0], "PBL_GLANCE_ENTER_CHIN")) && !ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Chin_Idle", 1)) && __LIB_6__::func_895(iLocal_1720[iVar0], "PBL_GLANCE_ENTER_CHIN"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[iVar0], "PBL_GLANCE_ENTER_CHIN", true);
						}
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Chin_Idle", 1))
						{
							if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[iVar0], "PBL_CHIN_IDLE") && __LIB_6__::func_895(iLocal_1720[iVar0], "PBL_CHIN_IDLE"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[iVar0], "PBL_CHIN_IDLE", true);
							}
						}
					}
				}
				else if (__LIB_6__::func_864(cParam0) == iLocal_48)
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[27], "Glance_Idle", 1) && __LIB_6__::func_895(iLocal_1720[27], "PBL_EXIT_GLANCE_IDLE"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[27], "PBL_EXIT_GLANCE_IDLE", true);
					}
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[27], "Idle", 1))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[27], "PBL_IDLE") && __LIB_6__::func_895(iLocal_1720[27], "PBL_IDLE"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[27], "PBL_IDLE", true);
						}
						if (!__LIB_0__::func_75(&(vLocal_1607[17 /*3*/])))
						{
							__LIB_1__::func_148(&(vLocal_1607[17 /*3*/]));
						}
						else
						{
							if (__LIB_0__::func_27(iLocal_1718, 32))
							{
								fVar2 = 7f;
							}
							else
							{
								fVar2 = 4f;
							}
							if (__LIB_0__::func_265(&(vLocal_1607[17 /*3*/])) >= fVar2)
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_4501))
								{
									sLocal_4501 = __LIB_0__::func_196(bLocal_4502, "PBL_IDLE_DRINK", "PBL_IDLE_SCRATCH");
									bLocal_4502 = !bLocal_4502;
								}
								else if (__LIB_6__::func_895(iLocal_1720[27], sLocal_4501))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[27], sLocal_4501, true);
									__LIB_0__::func_37(&(vLocal_1607[17 /*3*/]));
									sLocal_4501 = "";
								}
							}
						}
					}
					else if (__LIB_0__::func_75(&(vLocal_1607[17 /*3*/])))
					{
						__LIB_0__::func_37(&(vLocal_1607[17 /*3*/]));
					}
				}
				else
				{
					if (__LIB_6__::func_864(cParam0) == iLocal_49)
					{
						iVar0 = 28;
					}
					else if (__LIB_6__::func_864(cParam0) == iLocal_50)
					{
						iVar0 = 29;
					}
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Chin_Idle", 1) && __LIB_6__::func_895(iLocal_1720[iVar0], "PBL_CHIN_EXIT_IDLE"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[iVar0], "PBL_CHIN_EXIT_IDLE", true);
					}
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Idle", 1))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_1720[iVar0], "PBL_IDLE") && __LIB_6__::func_895(iLocal_1720[iVar0], "PBL_IDLE"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[iVar0], "PBL_IDLE", true);
						}
						if (!__LIB_0__::func_75(&(vLocal_1607[17 /*3*/])))
						{
							__LIB_1__::func_148(&(vLocal_1607[17 /*3*/]));
						}
						else
						{
							if (__LIB_0__::func_27(iLocal_1718, 32))
							{
								fVar3 = 7f;
							}
							else
							{
								fVar3 = 4f;
							}
							if (__LIB_0__::func_265(&(vLocal_1607[17 /*3*/])) >= fVar3)
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_4501))
								{
									sLocal_4501 = __LIB_0__::func_196(bLocal_4502, "PBL_IDLE_DRINK", "PBL_IDLE_SCRATCH");
									bLocal_4502 = !bLocal_4502;
								}
								else if (__LIB_6__::func_895(iLocal_1720[iVar0], sLocal_4501))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[iVar0], sLocal_4501, true);
									__LIB_0__::func_37(&(vLocal_1607[17 /*3*/]));
									sLocal_4501 = "";
								}
							}
						}
					}
					else if (__LIB_0__::func_75(&(vLocal_1607[17 /*3*/])))
					{
						__LIB_0__::func_37(&(vLocal_1607[17 /*3*/]));
					}
				}
			}
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_1718, 2097152);
			if (__LIB_6__::func_864(cParam0) == iLocal_48)
			{
				if (func_1989(cParam0))
				{
					if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_4501))
					{
						sLocal_4501 = func_1990("pbl_glance_noA", "pbl_glance_noB", "pbl_glance_noC", "pbl_glance_noD");
					}
					else if (__LIB_6__::func_895(iLocal_1720[27], sLocal_4501))
					{
						if (!__LIB_0__::func_27(iLocal_1716, 33554432) && iLocal_1797 >= 1)
						{
							__LIB_0__::func_45("IND3_HLP_FOLD", 10000, 0, 0, 0, 1);
							__LIB_1__::func_683(&iLocal_1716, 33554432);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[27], sLocal_4501, true);
						func_1474(1);
						iLocal_1797++;
						iLocal_4419++;
					}
				}
			}
			else if (__LIB_6__::func_864(cParam0) == iLocal_49)
			{
				if (func_1989(cParam0))
				{
					if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_4501))
					{
						sLocal_4501 = func_1990("pbl_chin_yesA", "pbl_chin_yesB", "pbl_chin_yesC", "pbl_chin_yesD");
					}
					else if (__LIB_6__::func_895(iLocal_1720[28], sLocal_4501))
					{
						if (!__LIB_0__::func_27(iLocal_1716, 33554432) && iLocal_1797 >= 1)
						{
							__LIB_0__::func_45("IND3_HLP_BET", 10000, 0, 0, 0, 1);
							__LIB_1__::func_683(&iLocal_1716, 33554432);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[28], sLocal_4501, true);
						func_1474(1);
						iLocal_1797++;
						iLocal_4419++;
					}
				}
			}
			else if (__LIB_6__::func_864(cParam0) == iLocal_50)
			{
				if (func_1989(cParam0))
				{
					if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_4501))
					{
						sLocal_4501 = func_1990("pbl_chin_yesA", "pbl_chin_yesB", "pbl_chin_yesC", "pbl_chin_yesD");
					}
					else if (__LIB_6__::func_895(iLocal_1720[29], sLocal_4501))
					{
						if (!__LIB_0__::func_27(iLocal_1716, 33554432) && iLocal_1797 >= 1)
						{
							__LIB_0__::func_45("IND3_HLP_ALL", 10000, 0, 0, 0, 1);
							__LIB_1__::func_683(&iLocal_1716, 33554432);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[29], sLocal_4501, true);
						func_1474(1);
						iLocal_1797++;
						iLocal_4419++;
					}
				}
			}
			break;
	}
}

void func_1474(int iParam0)
{
	iLocal_4500 = iParam0;
	__LIB_1__::func_148(&(vLocal_1607[3 /*3*/]));
	__LIB_0__::func_37(&(vLocal_1607[16 /*3*/]));
	__LIB_0__::func_37(&(vLocal_1607[17 /*3*/]));
	sLocal_4501 = "";
}

void func_1475(char[4] cParam0)
{
	if (__LIB_8__::func_618(cParam0) < 4)
	{
		func_1985(cParam0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (__LIB_8__::func_711(cParam0, "IND3_HAND2CHAT1", 0))
			{
				__LIB_9__::func_208(cParam0, "IND3_OBJ_PKR2", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 1.5f && __LIB_8__::func_711(cParam0, "IND3_HAND2CHAT2", 0))
			{
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				__LIB_12__::func_435(3);
				__LIB_12__::func_435(4);
				__LIB_12__::func_435(5);
				__LIB_12__::func_435(6);
				__LIB_12__::func_435(7);
				__LIB_12__::func_435(8);
				__LIB_12__::func_435(9);
				__LIB_12__::func_435(10);
				__LIB_12__::func_435(11);
				__LIB_12__::func_435(12);
				__LIB_12__::func_435(13);
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			func_1986(cParam0);
			break;
	}
}

void func_1476()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[39], "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[39], "LeoStrauss", Local_1571[2 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[39], "S_M_M_NBXRIVERBOATDEALERS_01", Local_370[9 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[39], "CS_DESMOND", Local_370[5 /*10*/], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[39]);
}

bool func_1478(char[4] cParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	vector3 vVar10;
	bool bVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	int iVar28;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_370[iParam1 /*10*/]))
	{
		if (bParam2 && bLocal_1818)
		{
			return false;
		}
		vVar0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		iVar4 = 0;
		bVar5 = true;
		bVar6 = true;
		iVar7 = 1;
		bVar8 = false;
		iVar9 = 0;
		vVar10 = { 0f, 0f, 0f };
		bVar13 = false;
		iVar14 = 0;
		iVar15 = 0;
		sVar16 = func_1449(iParam1);
		iVar18 = joaat("META_OUTFIT_DEFAULT");
		iVar19 = -1;
		sVar20 = "";
		bVar21 = true;
		bVar22 = true;
		bVar23 = true;
		bVar24 = false;
		bVar25 = false;
		bVar26 = false;
		switch (iParam1)
		{
			case 0:
				vVar0 = { 2555.231f, -1166.835f, 53.6835f };
				fVar3 = -179.72f;
				bVar8 = true;
				iVar19 = 142;
				bVar21 = false;
				bVar22 = false;
				sVar20 = "IND3_TAILOR";
				break;
			case 1:
				vVar0 = { 2659.114f, -1180.38f, 52.279f };
				fVar3 = 90.115f;
				iVar9 = joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING");
				iVar19 = 201;
				bVar21 = false;
				bVar22 = false;
				bVar25 = true;
				iVar14 = "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_A";
				break;
			case 2:
				vVar0 = { 2647.042f, -1144.614f, 50.2264f };
				fVar3 = 269.839f;
				iVar4 = iLocal_20;
				break;
			case 3:
				vVar0 = { 2808.808f, -1271.156f, 46.2478f };
				fVar3 = 53.5532f;
				iVar4 = iLocal_20;
				break;
			case 4:
				vVar0 = { 2666.94f, -1185.08f, 52.1316f };
				fVar3 = 83.7206f;
				iVar4 = iLocal_18;
				sVar20 = "IND3_COACH";
				iVar18 = -1311007505;
				break;
			case 10:
				vVar0 = { 3288.632f, -1304.043f, 41.9035f };
				fVar3 = 172.083f;
				iVar4 = iLocal_18;
				iVar18 = 2116903526;
				bVar8 = true;
				break;
			case 11:
				vVar0 = { 3291.231f, -1328.306f, 41.7186f };
				fVar3 = 90.5624f;
				iVar4 = iLocal_16;
				bVar5 = true;
				if (__LIB_6__::func_864(cParam0) < iLocal_51)
				{
					iVar9 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
					iVar14 = "WORLD_HUMAN_LEAN_WALL_DRINKING_MALE_A";
					vVar10 = { 3291.231f, -1328.306f, 41.7186f };
				}
				iVar7 = 0;
				bVar6 = false;
				bVar26 = true;
				break;
			case 12:
				vVar0 = { 3280.842f, -1319.185f, 42f };
				fVar3 = 344.748f;
				iVar4 = iLocal_17;
				bVar8 = true;
				break;
			case 5:
				vVar0 = { 3287.387f, -1318.626f, 41.776f };
				iVar4 = iLocal_15;
				break;
			case 6:
				vVar0 = { 3289.503f, -1318.605f, 41.776f };
				iVar4 = iLocal_18;
				iVar18 = 551780060;
				break;
			case 8:
				vVar0 = { 3287.387f, -1317.402f, 41.776f };
				iVar4 = iLocal_18;
				iVar18 = 236902739;
				break;
			case 7:
				vVar0 = { 3288.441f, -1316.773f, 41.776f };
				iVar4 = iLocal_18;
				iVar18 = -177756187;
				break;
			case 9:
				vVar0 = { 3288.501f, -1319.143f, 41.776f };
				iVar4 = iLocal_18;
				iVar18 = 755804670;
				break;
			case 17:
				vVar0 = { 3288.358f, -1311.575f, 42.385f };
				iVar4 = iLocal_20;
				break;
			case 13:
				vVar0 = { 3289.366f, -1312.235f, 42.3861f };
				iVar4 = iLocal_22;
				break;
			case 18:
				vVar0 = { 3289.496f, -1313.393f, 42.2758f };
				iVar4 = iLocal_20;
				break;
			case 14:
				vVar0 = { 3288.45f, -1314f, 42.2756f };
				iVar4 = iLocal_20;
				break;
			case 16:
				vVar0 = { 3287.41f, -1312.119f, 42.403f };
				iVar4 = iLocal_20;
				break;
			case 15:
				vVar0 = { 3287.393f, -1313.401f, 42.7362f };
				iVar4 = iLocal_20;
				break;
			case 19:
				vVar0 = { 3288.48f, -1321.938f, 42.3707f };
				iVar4 = iLocal_22;
				break;
			case 23:
				vVar0 = { 3289.547f, -1322.612f, 42.2758f };
				iVar4 = iLocal_20;
				break;
			case 24:
				vVar0 = { 3289.537f, -1323.83f, 42.2758f };
				iVar4 = iLocal_20;
				break;
			case 20:
				vVar0 = { 3288.458f, -1324.491f, 42.4012f };
				iVar4 = iLocal_20;
				break;
			case 21:
				vVar0 = { 3287.425f, -1323.836f, 42.2756f };
				iVar4 = iLocal_20;
				break;
			case 22:
				vVar0 = { 3287.434f, -1322.614f, 42.2756f };
				iVar4 = iLocal_20;
				break;
			case 25:
				vVar0 = { 3291.13f, -1304.64f, 41.88f };
				iVar4 = iLocal_18;
				iVar18 = -6942546;
				bVar8 = true;
				break;
			case 27:
				vVar0 = { 3295.134f, -1323.709f, 42.0736f };
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 26:
				vVar0 = { 3290.488f, -1305.387f, 41.8622f };
				fVar3 = 60.55f;
				iVar4 = iLocal_19;
				iVar18 = 37708101;
				iVar9 = joaat("WORLD_HUMAN_DRINKING");
				break;
			case 28:
				vVar0 = { 3291.008f, -1317.061f, 41.7494f };
				iVar4 = iLocal_21;
				iVar9 = joaat("PROP_HUMAN_SEAT_CHAIR");
				vVar10 = { 3291.14f, -1315.96f, 42.22f };
				break;
			case 29:
				vVar0 = { 3283.004f, -1321.355f, 41.7188f };
				fVar3 = 36.1493f;
				iVar9 = joaat("WORLD_HUMAN_STAND_WAITING");
				iVar4 = iLocal_21;
				bVar8 = false;
				vVar10 = { 0f, 0f, 0f };
				break;
			case 30:
				vVar0 = { 3284.805f, -1330.901f, 41.7146f };
				fVar3 = 355.6785f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 31:
				vVar0 = { 3283.904f, -1330.908f, 41.7038f };
				fVar3 = 334.7202f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 32:
				vVar0 = { 3291.169f, -1331.456f, 41.7261f };
				fVar3 = 311.0464f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 33:
				vVar0 = { 3295.313f, -1320.574f, 42.1713f };
				fVar3 = 182.6631f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 34:
				vVar0 = { 3296.958f, -1322f, 42.1713f };
				fVar3 = 94.3114f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 35:
				vVar0 = { 3295.365f, -1315.384f, 42.1713f };
				fVar3 = 0.5666f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 36:
				vVar0 = { 3297.059f, -1313.679f, 42.1713f };
				fVar3 = 94.004f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 37:
				vVar0 = { 3295.469f, -1311.925f, 42.1713f };
				fVar3 = 182.1724f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 38:
				vVar0 = { 3287.201f, -1301.315f, 45.807f };
				fVar3 = 173.9532f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 39:
				vVar0 = { 3292.268f, -1320.99f, 45.5286f };
				fVar3 = 93.7733f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 40:
				vVar0 = { 3292.221f, -1321.785f, 45.5259f };
				fVar3 = 81.9584f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 41:
				vVar0 = { 3278.945f, -1311.24f, 45.6126f };
				fVar3 = 118.9966f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 42:
				vVar0 = { 3283.894f, -1292.33f, 46.0516f };
				fVar3 = 106.5464f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 43:
				vVar0 = { 3284.029f, -1290.62f, 46.1163f };
				fVar3 = 90.1141f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 44:
				vVar0 = { 3292.887f, -1290.413f, 46.1119f };
				fVar3 = 259.2747f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 45:
				vVar0 = { 3292.955f, -1292.543f, 46.0224f };
				fVar3 = 266.7073f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 46:
				vVar0 = { 3284.337f, -1316.078f, 45.5654f };
				fVar3 = 251.9908f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 47:
				vVar0 = { 3284.453f, -1317.115f, 45.5553f };
				fVar3 = 278.1713f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 48:
				vVar0 = { 3280.142f, -1311.751f, 45.6126f };
				fVar3 = 175.3976f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 49:
				vVar0 = { 3286.079f, -1289.174f, 46.1718f };
				fVar3 = 18.3734f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 50:
				vVar0 = { 3292.152f, -1289.477f, 46.1849f };
				fVar3 = 344.0206f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 51:
				vVar0 = { 3293.566f, -1347.733f, 46.0828f };
				fVar3 = 202.6011f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 52:
				vVar0 = { 3292.131f, -1348.465f, 46.1337f };
				fVar3 = 212.8347f;
				iVar4 = iLocal_21;
				bVar8 = true;
				break;
			case 53:
				vVar0 = { 3286.3f, -1301.314f, 45.802f };
				fVar3 = 195.1911f;
				iVar4 = iLocal_20;
				bVar8 = true;
				break;
			case 54:
				vVar0 = { 3295.731f, -1331.463f, 41.7873f };
				fVar3 = 349.924f;
				iVar4 = iLocal_21;
				bVar13 = true;
				break;
			case 55:
				vVar0 = { 3293.008f, -1291.797f, 42.3402f };
				fVar3 = 8.8261f;
				iVar4 = iLocal_21;
				bVar13 = true;
				break;
			case 56:
				vVar0 = { 3292.933f, -1311.777f, 45.6133f };
				fVar3 = 184.7701f;
				iVar4 = iLocal_20;
				bVar13 = true;
				break;
		}
		bVar27 = true;
		if (iVar18 != joaat("META_OUTFIT_DEFAULT") || bVar24)
		{
			bVar27 = false;
		}
		if (iVar19 == -1)
		{
			Local_370[iParam1 /*10*/] = func_1959(iVar4, vVar0, fVar3, 1, 1, 0, 1, 1, bVar27, 1, !bVar27);
		}
		else if (__LIB_3__::func_397(iVar19, 1))
		{
			Local_370[iParam1 /*10*/] = __LIB_2__::func_965(iVar19, 1, 0, 1, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_370[iParam1 /*10*/]))
		{
			if (iParam1 == 11)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1720[12]))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[12], "U_M_M_NBXRIVERBOATPITBOSS_01", Local_370[iParam1 /*10*/], 0);
					__LIB_1__::func_683(&iLocal_1717, 4);
					__LIB_9__::func_948(cParam0, iLocal_1720[12]);
				}
			}
			if (iVar19 != -1)
			{
				if (!__LIB_0__::func_86(vVar0))
				{
					func_893(Local_370[iParam1 /*10*/], vVar0, fVar3, 2, 1073741824 /* Float: 2f */);
				}
				__LIB_1__::func_683(&(Local_370[iParam1 /*10*/].f_1), 16);
			}
			if (iVar18 != joaat("META_OUTFIT_DEFAULT") || bVar24)
			{
				PED::_SET_PED_BODY_COMPONENT(Local_370[iParam1 /*10*/], iVar18);
				PED::_UPDATE_PED_VARIATION(Local_370[iParam1 /*10*/], false, true, true, true, false);
			}
			if (bVar21)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_370[iParam1 /*10*/], true);
			}
			ENTITY::_0x18FF3110CF47115D(Local_370[iParam1 /*10*/], 7, 0);
			if (bVar22)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_370[iParam1 /*10*/], true, true);
			}
			if (bVar8)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_370[iParam1 /*10*/], ENTITY::GET_ENTITY_COORDS(Local_370[iParam1 /*10*/], true, false) - Vector(1f, 0f, 0f), 1f, 0, true, false, true, false);
			}
			else if (iVar9 != 0)
			{
				if (!__LIB_0__::func_86(vVar10))
				{
					iVar17 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar10, iVar9, 0.5f, 0, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar17))
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_370[iParam1 /*10*/], iVar17, iVar14, -1, false, -1f, false);
					}
					else
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_370[iParam1 /*10*/], vVar10, 0.5f, -1, true, false, true, false);
					}
				}
				else if (bVar25)
				{
					vVar10 = { ENTITY::GET_ENTITY_COORDS(Local_370[iParam1 /*10*/], true, false) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar10, &(vVar10.f_2), false);
					iVar28 = __LIB_2__::func_488(iVar9, vVar10, ENTITY::GET_ENTITY_HEADING(Local_370[iParam1 /*10*/]), 0, -1f, 0);
					TASK::_TASK_USE_SCENARIO_POINT(Local_370[iParam1 /*10*/], iVar28, iVar14, -1, false, true, 0, false, -1f, false);
				}
				else
				{
					__LIB_1__::func_473(Local_370[iParam1 /*10*/], iVar9, 0, 0, 0, -1082130432 /* Float: -1f */);
				}
			}
			PED::SET_PED_CAN_BE_TARGETTED(Local_370[iParam1 /*10*/], bVar5);
			PED::SET_PED_CONFIG_FLAG(Local_370[iParam1 /*10*/], 297, bVar6);
			if (bVar6)
			{
				PED::SET_PED_CONFIG_FLAG(Local_370[iParam1 /*10*/], 178, true);
				PED::SET_PED_CONFIG_FLAG(Local_370[iParam1 /*10*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(Local_370[iParam1 /*10*/], 330, true);
				PED::SET_PED_CONFIG_FLAG(Local_370[iParam1 /*10*/], 331, true);
			}
			PED::SET_PED_CONFIG_FLAG(Local_370[iParam1 /*10*/], 186, false);
			__LIB_2__::func_930(Local_370[iParam1 /*10*/], iVar7);
			if (iParam1 == 11)
			{
				PED::_0x923583741DC87BCE(Local_370[iParam1 /*10*/], "DEFAULT");
				__LIB_9__::func_42(cParam0, Local_370[iParam1 /*10*/], "IND3_PITBOSS", 0);
			}
			else if (iParam1 == 10)
			{
				__LIB_9__::func_42(cParam0, Local_370[iParam1 /*10*/], "IND3_BARTENDER", 0);
			}
			if (iParam1 == 5)
			{
				__LIB_9__::func_42(cParam0, Local_370[iParam1 /*10*/], "IND3_TARGET", 0);
				__LIB_9__::func_62(cParam0, Local_370[iParam1 /*10*/], "CS_DESMOND", 0, 0, 0, 0);
			}
			else if (iParam1 == 9)
			{
				__LIB_9__::func_42(cParam0, Local_370[iParam1 /*10*/], "IND3_DEALER", 0);
				__LIB_9__::func_62(cParam0, Local_370[iParam1 /*10*/], "S_M_M_NBXRIVERBOATDEALERS_01", 0, 0, 0, 0);
			}
			else if (iParam1 == 6)
			{
				__LIB_9__::func_42(cParam0, Local_370[iParam1 /*10*/], "IND3_PokerPlayer1", 0);
			}
			else if (iParam1 == 8)
			{
				__LIB_9__::func_42(cParam0, Local_370[iParam1 /*10*/], "IND3_PokerPlayer3", 0);
			}
			else if (iParam1 == 7)
			{
				__LIB_9__::func_42(cParam0, Local_370[iParam1 /*10*/], "IND3_PokerPlayer2", 0);
			}
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_370[iParam1 /*10*/], bVar23);
			if ((__LIB_6__::func_864(cParam0) >= iLocal_48 && __LIB_6__::func_864(cParam0) <= iLocal_53) && bVar13)
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_370[iParam1 /*10*/], sLocal_63, 0, 1038, -1, 1, 0, -1);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar16) && __LIB_6__::func_864(cParam0) >= iLocal_48)
			{
				__LIB_9__::func_154(cParam0, Local_370[iParam1 /*10*/], sVar16, 0, 0, 0, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar20))
			{
				__LIB_9__::func_42(cParam0, Local_370[iParam1 /*10*/], sVar20, 0);
			}
			if (iVar15 != 0)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_370[iParam1 /*10*/], true, true);
				__LIB_4__::func_7(Local_370[iParam1 /*10*/], iVar15, 50, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			if (bVar26)
			{
				__LIB_1__::func_991(Local_370[iParam1 /*10*/], 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_370[iParam1 /*10*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_370[iParam1 /*10*/], 265, false);
			return PED::_0xA0BC8FAED8CFEB3C(Local_370[iParam1 /*10*/]);
		}
		else
		{
			return false;
		}
	}
	return PED::_0xA0BC8FAED8CFEB3C(Local_370[iParam1 /*10*/]);
}

void func_1479(char[4] cParam0)
{
	if (__LIB_8__::func_618(cParam0) < 2)
	{
		func_1985(cParam0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (__LIB_8__::func_711(cParam0, "IND3_HAND3CHAT", 0))
			{
				__LIB_9__::func_208(cParam0, "IND3_OBJ_PKR3", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				__LIB_12__::func_435(3);
				__LIB_12__::func_435(4);
				__LIB_12__::func_435(5);
				__LIB_12__::func_435(6);
				__LIB_12__::func_435(7);
				__LIB_12__::func_435(8);
				__LIB_12__::func_435(9);
				__LIB_12__::func_435(10);
				__LIB_12__::func_435(11);
				__LIB_12__::func_435(12);
				__LIB_12__::func_435(13);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			func_1986(cParam0);
			if (((__LIB_0__::func_27(iLocal_1716, 536870912) && !__LIB_0__::func_27(iLocal_1716, 1073741824 /* Float: 2f */)) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && __LIB_8__::func_711(cParam0, "IND3_DEALER", 0))
			{
				__LIB_1__::func_681(&iLocal_1716, 536870912);
			}
			break;
	}
}

void func_1483(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "IND3_OBJ_FOLLOW", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iLocal_78 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_370[11 /*10*/]);
			MAP::_BLIP_SET_MODIFIER(iLocal_78, -546708623);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78, "IND3_PITBOSS");
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			__LIB_9__::func_60(cParam0, -1);
			break;
		case 1:
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) != 1344959368 && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_370[11 /*10*/]) != 1344959368)
			{
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[7], false))
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 1.5f)
			{
				__LIB_8__::func_711(cParam0, "IND3_SAFEWALK1", 0);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (PED::IS_PED_STOPPED(Global_35))
			{
				if (!__LIB_0__::func_75(&(vLocal_1607[11 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1607[11 /*3*/]));
				}
			}
			else if (__LIB_0__::func_75(&(vLocal_1607[11 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_1607[11 /*3*/]));
			}
			if (((!__LIB_0__::func_27(iLocal_1717, 536870912) && __LIB_9__::func_344()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3289.177f, -1283.048f, 46.43728f, 3281.265f, -1283.577f, 51.66017f, 5f, false, true, 0)) && __LIB_8__::func_711(cParam0, "IND3_SAFEWALK2", 0))
			{
				__LIB_1__::func_683(&iLocal_1717, 536870912);
			}
			if (__LIB_0__::func_265(&(vLocal_1607[5 /*3*/])) >= 7f && (__LIB_0__::func_665(Global_35, Local_370[11 /*10*/], 1, 1) >= 7f || __LIB_0__::func_264(&(vLocal_1607[11 /*3*/])) >= 4f))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iLocal_4407)
				{
					if (__LIB_9__::func_344())
					{
						__LIB_8__::func_711(cParam0, "IND3_BOSS_WAIT", 0);
					}
					__LIB_9__::func_208(cParam0, "IND3_OBJ_FOLLOW", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				}
			}
			break;
	}
}

bool func_1484(char[4] cParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, float fParam8, float fParam9, float fParam10, int iParam11, bool bParam12)
{
	bool bVar0;
	char cVar1[64];
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam2))
	{
		return false;
	}
	StringCopy(&cVar1, sParam3, 64);
	if (__LIB_9__::func_954(iParam1, PLAYER::PLAYER_PED_ID(), sParam2, fParam10))
	{
		StringConCat(&cVar1, "_CATCH_UP", 64);
	}
	else
	{
		StringConCat(&cVar1, "_RETURN", 64);
	}
	bVar0 = __LIB_9__::func_471(cParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), &cVar1, sParam4, 1, sParam5, iParam6, fParam8, fParam9);
	if (__LIB_6__::func_863(cParam0) != 1 && __LIB_6__::func_862(cParam0, 64))
	{
		if (bParam12)
		{
			__LIB_9__::func_411(cParam0, iParam1, iParam11, bVar0, iParam7);
		}
		__LIB_6__::func_887(cParam0, 64);
	}
	return bVar0;
}

void func_1485()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[10], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[10], "U_M_M_NBXRIVERBOATPITBOSS_01", Local_370[11 /*10*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[10], "player_zero", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[10], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[5 /*10*/], 0);
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[9], false))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1720[9]);
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[10]);
}

void func_1487()
{
	iLocal_1565[0] = OBJECT::CREATE_OBJECT(iLocal_23, 3291.204f, -1308.713f, 50.6891f, true, true, false, false, true);
	iLocal_1565[1] = OBJECT::CREATE_OBJECT(iLocal_23, 3291.246f, -1307.822f, 50.7144f, true, true, false, false, true);
	iLocal_1565[2] = OBJECT::CREATE_OBJECT(iLocal_23, 3291.153f, -1307.108f, 50.7511f, true, true, false, false, true);
	iLocal_1565[3] = OBJECT::CREATE_OBJECT(iLocal_23, 3290.821f, -1306.292f, 50.7697f, true, true, false, false, true);
	iLocal_1570 = OBJECT::CREATE_OBJECT(iLocal_24, 3291.012f, -1308.742f, 50.6884f, true, true, false, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[13], "p_cs_billstack01x", iLocal_1565[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[13], "p_cs_billstack01x^1", iLocal_1565[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[13], "p_cs_billstack01x^2", iLocal_1565[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[13], "p_cs_billstack01x^3", iLocal_1565[3], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[13], "S_POCKETWATCH_REUTLINGE", iLocal_1570, 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_1720[13]);
}

void func_1488(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "IND3_OBJ_FOLLOW", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (!MAP::DOES_BLIP_EXIST(iLocal_78))
			{
				iLocal_78 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_370[11 /*10*/]);
				MAP::_BLIP_SET_MODIFIER(iLocal_78, -546708623);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78, "IND3_PITBOSS");
			}
			__LIB_9__::func_60(cParam0, -1);
			break;
		case 1:
			if (__LIB_9__::func_344() && __LIB_8__::func_711(cParam0, "IND3_TAKEGUN", 0))
			{
				__LIB_0__::func_325(&iLocal_78);
				__LIB_9__::func_208(cParam0, "IND3_OBJ_DISARM", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_78 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_370[11 /*10*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78, "IND3_PITBOSS");
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (iLocal_4422 < 3)
			{
				if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f && __LIB_8__::func_711(cParam0, "IND3_DISARMNOW", 0))
				{
					__LIB_9__::func_208(cParam0, "IND3_OBJ_DISARM", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
					iLocal_4422++;
				}
			}
			else if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 12);
			}
			break;
		case 4:
			if (!CAM::_0x1204EB53A5FBC63D() && __LIB_8__::func_711(cParam0, "IND3_DEADEYE", 0))
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[10], false) && __LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f)
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
				{
					__LIB_8__::func_711(cParam0, "IND3_LOOTNOW", 0);
				}
				__LIB_9__::func_208(cParam0, "IND3_OBJ_ROB_SAFE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			}
			break;
		case 10:
			if (((((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[10], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[10]) >= 0.2437256f) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == 1888485371) && ENTITY::IS_ENTITY_ON_SCREEN(Local_370[11 /*10*/])) && __LIB_7__::func_437(Global_35, Local_370[11 /*10*/], 0)) && __LIB_8__::func_711(cParam0, "IND3_DONT", 0))
			{
				__LIB_9__::func_60(cParam0, -1);
			}
			break;
		case 11:
			__LIB_9__::func_253(cParam0, Local_1571[1 /*10*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_9__::func_208(cParam0, "IND3_OBJ_RETURN", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_60(cParam0, 51);
			break;
		case 12:
			if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 9f && __LIB_8__::func_711(cParam0, "IND3_PITYELL", 0))
			{
				if (__LIB_0__::func_139(iLocal_1602[2]))
				{
					__LIB_1__::func_748(&(iLocal_1602[2]), 1, 1);
				}
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, -1);
				__LIB_6__::func_876(cParam0, 18);
			}
			break;
	}
}

void func_1489()
{
	if (!__LIB_0__::func_27(iLocal_1716, 1048576))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[10], false))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[10], "s_IND3_IG9_HANDS_UP", 1))
			{
				ENTITY::PLAY_ENTITY_ANIM(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_1720[10], "s_safe01x", false), "ind3_ig9_opens_safe_p2_safe", "script_story@ind3@ig@ig_9_open_safe", 1000f, false, true, false, 1f, 0);
				__LIB_1__::func_683(&iLocal_1716, 1048576);
			}
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[12], false) && ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[12], "s_safe01x"))
	{
		ENTITY::PLAY_ENTITY_ANIM(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_1720[12], "s_safe01x", false), "pitboss_attack_safe", "script_story@ind3@ig@ig_9_open_safe", 1000f, false, true, false, 1f, 0);
	}
}

void func_1490()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_370[11 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_370[11 /*10*/]))
	{
		switch (Local_370[11 /*10*/].f_2)
		{
			case 0:
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[10], false))
				{
					Local_370[11 /*10*/].f_2++;
				}
				break;
			case 1:
				if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[10], "U_M_M_NBXRIVERBOATPITBOSS_01"))
				{
					if (!__LIB_0__::func_27(iLocal_1717, 4) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_1720[12], "U_M_M_NBXRIVERBOATPITBOSS_01", false)))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[12], "U_M_M_NBXRIVERBOATPITBOSS_01", Local_370[11 /*10*/], 0);
						__LIB_1__::func_683(&iLocal_1717, 4);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[12], "player_zero", Global_35, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1720[12]);
					Local_370[11 /*10*/].f_2++;
				}
				break;
		}
	}
}

void func_1491()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1571[1 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1571[1 /*10*/]))
	{
		switch (Local_1571[1 /*10*/].f_2)
		{
			case 0:
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[10], false))
				{
					Local_1571[1 /*10*/].f_2++;
				}
				break;
			case 1:
				if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[10], "CS_JAVIERESCUELLA"))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[14], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[14], "player_zero", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[14], "p_cs_billstack01x", iLocal_1565[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[14], "p_cs_billstack01x^1", iLocal_1565[1], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[14], "p_cs_billstack01x^2", iLocal_1565[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[14], "p_cs_billstack01x^3", iLocal_1565[3], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[14], "S_POCKETWATCH_REUTLINGE", iLocal_1570, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1720[14]);
					Local_1571[1 /*10*/].f_2++;
				}
				break;
		}
	}
}

void func_1495(char[4] cParam0)
{
	__LIB_9__::func_208(cParam0, "IND3_OBJ_ROB_SAFE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	iLocal_78 = __LIB_4__::func_983(408396114, 3288.467f, -1307.862f, 50.7488f, 1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78, "IND3_SAFE");
	iLocal_1602[0] = __LIB_1__::func_282("IND3_UC_SAFE", joaat("INPUT_LOOT"), 3288.467f, -1307.862f, 50.7488f, 1070386381 /* Float: 1.6f */, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	__LIB_2__::func_369(iLocal_1602[0], iLocal_1570, 0, 1, -1);
}

bool func_1503(char[4] cParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	switch (iParam1)
	{
		case 0:
			vVar1 = { 3291.128f, -1315.97f, 41.753f };
			iVar0 = iLocal_40;
			iVar4 = 5;
			break;
		case 2:
			vVar1 = { 3285.094f, -1321.772f, 41.729f };
			iVar0 = iLocal_40;
			iVar4 = 5;
			break;
		case 3:
			vVar1 = { 3288.058f, -1305.789f, 41.8419f };
			iVar0 = iLocal_30;
			iVar4 = 5;
			break;
		case 4:
			vVar1 = { 3288.441f, -1311.555f, 41.776f };
			iVar0 = iLocal_29;
			iVar4 = 5;
			break;
		case 1:
			vVar1 = { 3288.528f, -1308.745f, 50.766f };
			iVar0 = joaat("S_SAFE01X");
			iVar4 = 5;
			break;
		case 5:
			vVar1 = { 3278.224f, -1339.506f, 41.995f };
			iVar0 = iLocal_41;
			iVar4 = 5;
			break;
		case 6:
			vVar1 = { 3280.418f, -1339.502f, 41.995f };
			iVar0 = iLocal_41;
			iVar4 = 5;
			break;
		case 7:
			vVar1 = { 3282.963f, -1327.262f, 41.715f };
			iVar0 = iLocal_41;
			iVar4 = 5;
			break;
		case 8:
			vVar1 = { 3282.959f, -1325.068f, 41.715f };
			iVar0 = iLocal_41;
			iVar4 = 5;
			break;
	}
	if (vLocal_941[iParam1 /*3*/] == 0)
	{
		vLocal_941[iParam1 /*3*/] = ENTITY::_0x6F3068258A499E52(iVar0, vVar1, iVar4);
		return false;
	}
	else if (!ENTITY::_0x1FF441D7954F8709(vLocal_941[iParam1 /*3*/]))
	{
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(vLocal_941[iParam1 /*3*/].f_1))
	{
		vLocal_941[iParam1 /*3*/].f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(vLocal_941[iParam1 /*3*/]));
		return false;
	}
	else if (!vLocal_941[iParam1 /*3*/].f_2)
	{
		switch (iParam1)
		{
			case 2:
				if (!ENTITY::_IS_ENTITY_FROZEN(vLocal_941[iParam1 /*3*/].f_1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(vLocal_941[iParam1 /*3*/].f_1, true);
				}
				else
				{
					vLocal_941[iParam1 /*3*/].f_2 = 1;
					return true;
				}
				break;
			case 5:
			case 6:
			case 7:
			case 8:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(cParam0->f_7375.f_804, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(cParam0->f_7375.f_804, func_2004(iParam1), vLocal_941[iParam1 /*3*/].f_1, 0);
				}
				vLocal_941[iParam1 /*3*/].f_2 = 1;
				return true;
			default:
				vLocal_941[iParam1 /*3*/].f_2 = 1;
				return true;
		}
		return false;
	}
	return true;
}

void func_1504(int iParam0)
{
	char* sVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		switch (iVar1)
		{
			case 0:
				sVar0 = "dead_a";
				break;
			case 1:
				sVar0 = "dead_b";
				break;
			case 2:
				sVar0 = "dead_c";
				break;
			case 3:
				sVar0 = "dead_d";
				break;
			case 4:
				sVar0 = "dead_e";
				break;
			case 5:
				sVar0 = "dead_f";
				break;
			case 6:
				sVar0 = "dead_g";
				break;
			case 7:
				sVar0 = "dead_h";
				break;
		}
		TASK::TASK_PLAY_ANIM(iParam0, sLocal_4411, sVar0, 1000f, -4f, -1, 139264, 0f, false, 0, false, 0, false);
		PED::_0x2208438012482A1A(iParam0, false, false);
	}
}

void func_1505(char[4] cParam0)
{
	__LIB_9__::func_154(cParam0, Local_79[6 /*10*/], "s_m_m_nbxriverboatguards_01", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_79[7 /*10*/], "s_m_m_nbxriverboatguards_01^1", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_79[8 /*10*/], "s_m_m_nbxriverboatguards_01^2", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_79[9 /*10*/], "s_m_m_nbxriverboatguards_01^3", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_79[10 /*10*/], "s_m_m_nbxriverboatguards_01^4", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_79[11 /*10*/], "s_m_m_nbxriverboatguards_01^5", 0, 0, 0, 0);
	__LIB_1__::func_683(&iLocal_1716, 16384);
}

void func_1506(char[4] cParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1561[0]))
	{
		iLocal_1561[0] = OBJECT::CREATE_OBJECT(iLocal_33, 3286.87f, -1304.76f, 42.93f, true, true, false, false, true);
		__LIB_9__::func_62(cParam0, iLocal_1561[0], "S_SHOTGLASS01X_BROWN", 0, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1561[2]))
	{
		iLocal_1561[2] = OBJECT::CREATE_OBJECT(iLocal_33, 3288.66f, -1304.96f, 42.93f, true, true, false, false, true);
		__LIB_9__::func_62(cParam0, iLocal_1561[2], "S_SHOTGLASS01X_BROWN^1", 0, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1561[1]))
	{
		iLocal_1561[1] = OBJECT::CREATE_OBJECT(iLocal_34, 3288.16f, -1305.05f, 42.93f, true, true, false, false, true);
		__LIB_9__::func_62(cParam0, iLocal_1561[1], "S_TUMBLER01X_BROWN", 0, 0, 0, 0);
	}
}

void func_1508(char[4] cParam0)
{
	if (__LIB_8__::func_618(cParam0) == 1 || __LIB_8__::func_618(cParam0) == 2)
	{
		if (PED::IS_PED_STOPPED(Global_35))
		{
			if (!__LIB_0__::func_75(&(vLocal_1607[11 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_1607[11 /*3*/]));
			}
		}
		else if (__LIB_0__::func_75(&(vLocal_1607[11 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_1607[11 /*3*/]));
		}
		if (__LIB_0__::func_265(&(vLocal_1607[10 /*3*/])) >= 7f && (__LIB_0__::func_665(Global_35, Local_1571[1 /*10*/], 1, 1) >= 7f || __LIB_0__::func_264(&(vLocal_1607[11 /*3*/])) >= 4f))
		{
			if (__LIB_9__::func_344())
			{
				__LIB_8__::func_711(cParam0, "IND3_JAVIERSTOP", 0);
			}
			__LIB_1__::func_148(&(vLocal_1607[10 /*3*/]));
			__LIB_9__::func_208(cParam0, "IND3_OBJ_RETURN", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_253(cParam0, Local_1571[1 /*10*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_1__::func_283(&(vLocal_1607[5 /*3*/]), 1);
			__LIB_9__::func_142(cParam0, "IND3_OBJ_RETURN", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_148(&(vLocal_1607[10 /*3*/]));
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 10f && __LIB_0__::func_266(Local_1571[1 /*10*/], 3283.805f, -1331.507f, 50.7852f, 4f, 1, 1))
			{
				if (!__LIB_5__::func_463() && __LIB_8__::func_711(cParam0, "IND3_HOWLEAVE", 0))
				{
					__LIB_9__::func_60(cParam0, 2);
				}
			}
			break;
		case 2:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_1571[1 /*10*/]) == iLocal_4406)
			{
				PED::_0x411189E51B8020BA(Global_35, "Cautious");
				PED::_0x411189E51B8020BA(Local_1571[1 /*10*/], "Cautious");
				if (__LIB_0__::func_491(Local_1571[1 /*10*/], 985146578))
				{
					TASK::_0xDE0C8B145EA466FF(Local_1571[1 /*10*/], 3.5f, -1f, -1f, -1082130432 /* Float: -1f */, 1f);
				}
				__LIB_9__::func_60(cParam0, -1);
			}
			break;
		case 3:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[16]) >= 0.6853448f)
			{
				if (__LIB_0__::func_491(Local_1571[1 /*10*/], 985146578))
				{
					TASK::_0xDE0C8B145EA466FF(Local_1571[1 /*10*/], 50f, -1f, -1f, -1082130432 /* Float: -1f */, -1f);
				}
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1720[16], false))
			{
				if (__LIB_0__::func_491(Local_1571[1 /*10*/], 985146578))
				{
					TASK::_0xDE0C8B145EA466FF(Local_1571[1 /*10*/], 3.5f, -1f, -1f, -1082130432 /* Float: -1f */, 1f);
				}
				__LIB_9__::func_254(cParam0, Local_1571[1 /*10*/], 1);
				__LIB_9__::func_253(cParam0, Local_1571[0 /*10*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				__LIB_9__::func_142(cParam0, "IND3_OBJ_GO", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
	}
}

void func_1510(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 65550;
	switch (Local_79[24 /*10*/].f_2)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(Local_79[24 /*10*/]))
			{
				func_1429(cParam0, 24, 25, 1);
			}
			else
			{
				Local_79[24 /*10*/].f_2++;
			}
			break;
		case 1:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0 && !__LIB_0__::func_75(&(vLocal_1607[18 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_1607[18 /*3*/]));
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3283.887f, -1303.53f, 50.87707f, 3283.865f, -1305.992f, 52.85058f, 1.75f, false, true, 0) || (__LIB_0__::func_75(&(vLocal_1607[18 /*3*/])) && __LIB_0__::func_265(&(vLocal_1607[18 /*3*/])) >= 5f))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[24], "S_M_M_NBXRIVERBOATGUARDS_01^1", Local_79[24 /*10*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[24], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[25 /*10*/], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1720[24]);
				Local_79[24 /*10*/].f_2++;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_79[24 /*10*/], 3281.736f, -1319.863f, 48.72201f, 3281.732f, -1331.998f, 50.79002f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_79[25 /*10*/], 3281.736f, -1319.863f, 48.72201f, 3281.732f, -1331.998f, 50.79002f, 2f, false, true, 0))
			{
				vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, ENTITY::GET_ENTITY_COORDS(Local_79[24 /*10*/], true, false)) };
				if (vVar2.y > 0f)
				{
					CAM::_0xE28F73212A813E82(Local_79[24 /*10*/], 2, 0, 0);
				}
				else
				{
					vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, ENTITY::GET_ENTITY_COORDS(Local_79[25 /*10*/], true, false)) };
					if (vVar2.y > 0f)
					{
						CAM::_0xE28F73212A813E82(Local_79[25 /*10*/], 2, 0, 0);
					}
				}
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[24], "S_M_M_NBXRIVERBOATGUARDS_01^1"))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_79[24 /*10*/], sLocal_74, 0, iVar0, -1, 0, 0, -1);
				Local_79[24 /*10*/].f_2++;
			}
			break;
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_79[24 /*10*/], 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_79[24 /*10*/], 3281.831f, -1309.039f, 53.06707f, 3281.782f, -1305.879f, 48.67723f, 4.5f, false, true, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_79[24 /*10*/], 1.5f, 0, -1082130432 /* Float: -1f */, 0);
			}
			iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(3286.869f, -1304.827f, 50.7904f, joaat("SER_GRANDKOR_L2_INT"));
			if (iVar1 == INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_79[24 /*10*/]))
			{
				Local_79[24 /*10*/].f_2++;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3282.368f, -1311.796f, 48.86099f, 3276.613f, -1311.755f, 49.86057f, 26.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3283.858f, -1309.685f, 50.81084f, 3283.859f, -1297.856f, 53.2137f, 1.75f, false, true, 0))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_79[24 /*10*/], Global_35, 17))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_79[24 /*10*/], Global_35, -1, false, 1);
					Local_79[24 /*10*/].f_2 = 100;
					sLocal_1764 = "IND3_FAIL_ROOM";
					__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
					iLocal_1763 = 1;
				}
			}
			break;
		case 4:
			iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(3286.869f, -1304.827f, 50.7904f, joaat("SER_GRANDKOR_L2_INT"));
			if (iVar1 == INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_79[24 /*10*/], Global_35, -1, false, 1);
				Local_79[24 /*10*/].f_2++;
				sLocal_1764 = "IND3_FAIL_ROOM";
				__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
				iLocal_1763 = 1;
			}
			break;
	}
	switch (Local_79[25 /*10*/].f_2)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(Local_79[25 /*10*/]))
			{
				func_1429(cParam0, 24, 25, 1);
			}
			else
			{
				Local_79[25 /*10*/].f_2++;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[24], false))
			{
				Local_79[25 /*10*/].f_2++;
			}
			break;
		case 2:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[24], "S_M_M_NBXRIVERBOATGUARDS_01"))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_79[25 /*10*/], sLocal_74, 0, iVar0, -1, 0, 0, -1);
				Local_79[25 /*10*/].f_2++;
			}
			break;
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_79[25 /*10*/], 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_79[25 /*10*/], 3281.831f, -1309.039f, 53.06707f, 3281.782f, -1305.879f, 48.67723f, 4.5f, false, true, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_79[25 /*10*/], 1.5f, 0, -1082130432 /* Float: -1f */, 0);
			}
			iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(3286.869f, -1304.827f, 50.7904f, joaat("SER_GRANDKOR_L2_INT"));
			if (iVar1 == INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_79[25 /*10*/]))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_79[25 /*10*/], 3289.42f, -1306.266f, 50.756f, 1.5f, 20000, 0.25f, 0, 40000f);
				Local_79[25 /*10*/].f_2++;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3282.368f, -1311.796f, 48.86099f, 3276.613f, -1311.755f, 49.86057f, 26.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3283.858f, -1309.685f, 50.81084f, 3283.859f, -1297.856f, 53.2137f, 1.75f, false, true, 0))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_79[25 /*10*/], Global_35, 17))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_79[25 /*10*/], Global_35, -1, false, 1);
					Local_79[25 /*10*/].f_2 = 100;
					sLocal_1764 = "IND3_FAIL_ROOM";
					__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
					iLocal_1763 = 1;
				}
			}
			break;
		case 4:
			iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(3286.869f, -1304.827f, 50.7904f, joaat("SER_GRANDKOR_L2_INT"));
			if (iVar1 == INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_79[25 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD"), true, 0, false, false);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_79[25 /*10*/], Global_35, -1, false, 1);
				Local_79[25 /*10*/].f_2++;
			}
			break;
	}
}

bool func_1511(char[4] cParam0)
{
	if (!func_1503(cParam0, 3))
	{
	}
	if (!func_1503(cParam0, 4))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_941[3 /*3*/].f_1) && ENTITY::DOES_ENTITY_EXIST(vLocal_941[4 /*3*/].f_1))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(vLocal_941[3 /*3*/].f_1, 3288.621f, -1306.145f, 42.037f, false, true, true);
		ENTITY::SET_ENTITY_QUATERNION(vLocal_941[3 /*3*/].f_1, 0.602f, 0.3745f, -0.602f, 0.3674f);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(vLocal_941[4 /*3*/].f_1, 3291.251f, -1312.878f, 41.7629f, false, true, true);
		ENTITY::SET_ENTITY_QUATERNION(vLocal_941[4 /*3*/].f_1, 0f, 0f, 0.1862f, 0.9825f);
		return true;
	}
	return false;
}

void func_1512()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		func_2005(iVar0);
		iVar0++;
	}
}

void func_1513()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 != 0)
		{
			vVar1 = { 0f, 0f, 0f };
			switch (iVar0)
			{
				case 1:
					vVar1 = { 3285.089f, -1307.161f, 41.826f };
					fVar4 = 179.8885f;
					iVar5 = 3;
					iVar6 = 2;
					iVar7 = 3;
					bVar8 = false;
					break;
				case 2:
					vVar1 = { 3285.031f, -1311.182f, 41.769f };
					fVar4 = 179.8885f;
					iVar5 = 3;
					iVar6 = 2;
					iVar7 = 3;
					bVar8 = false;
					break;
				case 3:
					vVar1 = { 3285.031f, -1315.329f, 41.749f };
					fVar4 = 179.8885f;
					iVar5 = 3;
					iVar6 = 2;
					iVar7 = 3;
					bVar8 = false;
					break;
				case 4:
					vVar1 = { 3285.031f, -1319.417f, 41.736f };
					fVar4 = 179.8885f;
					iVar5 = 3;
					iVar6 = 2;
					iVar7 = 3;
					bVar8 = false;
					break;
				case 5:
					vVar1 = { 3291.86f, -1307.021f, 41.826f };
					fVar4 = 179.8885f;
					iVar5 = 3;
					iVar6 = 2;
					iVar7 = 3;
					bVar8 = false;
					break;
				case 6:
					vVar1 = { 3291.861f, -1311.182f, 41.769f };
					fVar4 = 179.8885f;
					iVar5 = 3;
					iVar6 = 2;
					iVar7 = 3;
					bVar8 = false;
					break;
				case 7:
					vVar1 = { 3291.86f, -1315.329f, 41.749f };
					fVar4 = 179.8885f;
					iVar5 = 3;
					iVar6 = 2;
					iVar7 = 3;
					bVar8 = false;
					break;
			}
			if (!__LIB_0__::func_86(vVar1) && !AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_1768[iVar0]))
			{
				iLocal_1768[iVar0] = TASK::ADD_COVER_POINT(vVar1, fVar4, iVar5, iVar6, iVar7, bVar8);
			}
		}
		iVar0++;
	}
}

void func_1515()
{
	__LIB_1__::func_948(2145058250, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(64259291, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(178754137, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(441201058, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-331983497, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-7373783, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-81267534, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(685297339, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-1035861617, 1, 1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-721377524, 1, -1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-1514256248, 1, -1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(1381081784, 1, -1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-1907171172, 1, 1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(1603339033, 1, -1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-1217326873, 1, 1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-382798750, 1, -1f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(1624230601, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(1473624189, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(104193638, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-221005918, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(34778421, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-263452248, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-1194059083, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(638645553, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(612230150, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-215219869, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-1120193049, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-2022127005, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(-1715573010, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(1754631325, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(119948423, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(351789098, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(398241243, 1, 0f, 0, 0, 0f, 1, 0);
	__LIB_1__::func_948(90310950, 1, 0f, 0, 0, 0f, 1, 0);
}

void func_1516()
{
	struct<4> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1767))
	{
		ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[25], "P_BOTTLEJD01X", &Var0, false, 0, 2);
		iLocal_1767 = OBJECT::CREATE_OBJECT(iLocal_38, Var0, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_1767, Var0.f_3, 2, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1767, true);
	}
}

void func_1517()
{
	iLocal_1807 = VOLUME::_CREATE_VOLUME_BOX(3283.614f, -1326.903f, 42.54905f, 0f, 0f, 0f, 2.012426f, 1.829063f, 1.857073f);
	TASK::_0x2A10538D0A005E81(iLocal_1807, 1);
}

void func_1518(char[4] cParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (__LIB_9__::func_344())
			{
				fLocal_1780 = 5f;
				__LIB_9__::func_60(cParam0, 1);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				__LIB_1__::func_148(&(vLocal_1607[10 /*3*/]));
				__LIB_9__::func_142(cParam0, "IND3_OBJ_KILL", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(vLocal_1607[10 /*3*/])) >= 15f)
			{
				bVar1 = false;
				iVar2 = 0;
				while (iVar2 < 29)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Local_79[iVar2 /*10*/]) && ENTITY::IS_ENTITY_DEAD(Local_79[iVar2 /*10*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_79[iVar2 /*10*/])) == Global_35)
					{
						bVar1 = true;
					}
					else
					{
						iVar2++;
					}
				}
				if (!bVar1)
				{
					__LIB_9__::func_208(cParam0, "IND3_OBJ_KILL", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= fLocal_1780)
			{
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				fLocal_1780 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar0)
				{
					case 0:
						__LIB_9__::func_60(cParam0, 2);
						break;
					case 1:
						__LIB_9__::func_60(cParam0, 3);
						break;
					case 2:
						__LIB_9__::func_60(cParam0, 4);
						break;
					case 3:
						__LIB_9__::func_60(cParam0, 5);
						break;
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[25], false))
			{
				__LIB_8__::func_711(cParam0, "IND3_STRAUSSGUN", 0);
				__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				fLocal_1780 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
			}
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 3:
			__LIB_8__::func_711(cParam0, "IND3_TRELAWGUN", 0);
			__LIB_9__::func_60(cParam0, 1);
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			fLocal_1780 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
			break;
		case 4:
			__LIB_8__::func_711(cParam0, "IND3_JAVIERGUN", 0);
			__LIB_9__::func_60(cParam0, 1);
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			fLocal_1780 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
			break;
		case 5:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			switch (iVar0)
			{
				case 0:
					sVar4 = "IND3_GUARDSHOT1";
					sVar3 = "IND3_GUARD1";
					break;
				case 1:
					sVar4 = "IND3_GUARDSHOT2";
					sVar3 = "IND3_GUARD2";
					break;
				case 2:
					sVar4 = "IND3_GUARDSHOT3";
					sVar3 = "IND3_GUARD3";
					break;
				case 3:
					sVar4 = "IND3_GUARDSHOT4";
					sVar3 = "IND3_GUARD4";
					break;
				case 4:
					sVar4 = "IND3_GUARDSHOT5";
					sVar3 = "IND3_GUARD5";
					break;
			}
			iVar5 = func_2007();
			if (!ENTITY::IS_ENTITY_DEAD(iVar5))
			{
				__LIB_9__::func_42(cParam0, iVar5, sVar3, 0);
				__LIB_8__::func_711(cParam0, sVar4, 0);
			}
			__LIB_9__::func_60(cParam0, 1);
			__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
			fLocal_1780 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
			break;
	}
}

void func_1519(char[4] cParam0)
{
	int iVar0;
	struct<12> Var1;
	int iVar13;
	Var1 = { Var1 };
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar13 = Local_1571[iVar0 /*10*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar13))
		{
			switch (iVar0)
			{
				case 1:
					if (!__LIB_0__::func_27(iLocal_1717, 8) && MISC::_0x7A76104CC2CC69E8(iVar13, 0, 1))
					{
						PED::KNOCK_OFF_PED_PROP(iVar13, false, true, true, true);
						__LIB_1__::func_683(&iLocal_1717, 8);
					}
					switch (Local_1571[iVar0 /*10*/].f_2)
					{
						case 0:
							if (PED::IS_PED_IN_COVER(iVar13, false, false))
							{
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 1:
							if (__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 1f)
							{
								__LIB_2__::func_279(Local_79[8 /*10*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(iVar13, 27, true);
								TASK::TASK_COMBAT_PED(iVar13, Local_79[8 /*10*/], 16777216, 0);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 2:
							if ((ENTITY::IS_ENTITY_DEAD(Local_79[8 /*10*/]) && !__LIB_0__::func_491(iVar13, 1120685857)) && !__LIB_0__::func_27(iLocal_1717, 134217728))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(iVar13, 27, false);
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar13, PED::GET_PED_DEFENSIVE_AREA_POSITION(iVar13, false), 100f, 33554432, 2);
							}
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[25], false) || func_2008(Local_79[16 /*10*/]))
							{
								if (!__LIB_0__::func_27(iLocal_1717, 134217728))
								{
									TASK::CLEAR_PED_TASKS(Local_1571[1 /*10*/], true, false);
									Local_1462[1 /*21*/].f_3 = iLocal_1768[8];
									Local_1462[1 /*21*/].f_7 = 1;
									Local_1462[1 /*21*/].f_4 = 2;
									Local_1462[1 /*21*/].f_10 = 2f;
									Local_1462[1 /*21*/] = Local_1571[1 /*10*/];
									Local_1462[1 /*21*/].f_5 = -1;
									Local_1462[1 /*21*/].f_14 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[8]) };
									Local_1462[1 /*21*/].f_18 = 1;
									AICOVERPOINT::TASK_ENTER_COVER(&(Local_1462[1 /*21*/]));
									__LIB_1__::func_148(&(Local_1571[1 /*10*/].f_4));
									__LIB_1__::func_683(&iLocal_1717, 134217728);
								}
							}
							if (PED::IS_PED_IN_COVER(Local_1571[1 /*10*/], false, false))
							{
								if (func_2008(Local_79[16 /*10*/]) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[25], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1720[25]) >= 0.6050724f))
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[26], "CS_JAVIERESCUELLA", Local_1571[1 /*10*/], 0);
									TASK::CLEAR_PED_TASKS(Local_1571[1 /*10*/], true, false);
									ANIMSCENE::START_ANIM_SCENE(iLocal_1720[26]);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_79[8 /*10*/], 27, false);
									Local_1571[iVar0 /*10*/].f_2++;
								}
							}
							break;
						case 3:
							if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[26], "CS_JAVIERESCUELLA"))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(iVar13, false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar13, 3285.048f, -1315.268f, 41.7501f, 1.5f, 0, 0, 0);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar13, TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[3]), -1, 0, 0f, 1, 1, iLocal_1768[3], 0, 0, 0);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 4:
							if (PED::IS_PED_IN_COVER(iVar13, false, false))
							{
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 5:
							if (__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 2f)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar13, PED::GET_PED_DEFENSIVE_AREA_POSITION(iVar13, false), 100f, 33554432, 2);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 6:
							if ((((__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 4f && func_2009(7)) && func_2009(8)) && func_2009(10)) && func_2009(11))
							{
								Local_1462[1 /*21*/].f_3 = iLocal_1768[4];
								Local_1462[1 /*21*/].f_7 = 1;
								Local_1462[1 /*21*/].f_4 = 1;
								Local_1462[1 /*21*/].f_10 = 2f;
								Local_1462[1 /*21*/] = Local_1571[1 /*10*/];
								Local_1462[1 /*21*/].f_5 = -1;
								Local_1462[1 /*21*/].f_14 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[4]) };
								Local_1462[1 /*21*/].f_18 = 0;
								AICOVERPOINT::TASK_ENTER_COVER(&(Local_1462[1 /*21*/]));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 7:
							if (PED::IS_PED_IN_COVER(iVar13, false, false))
							{
								__LIB_1__::func_683(&iLocal_1716, 32);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar13, 3285.031f, -1319.493f, 41.73527f, 1.5f, 0, 0, 0);
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 8:
							if (__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 1f)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar13, PED::GET_PED_DEFENSIVE_AREA_POSITION(iVar13, false), 100f, 33554432, 2);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
					}
					break;
				case 2:
					switch (Local_1571[iVar0 /*10*/].f_2)
					{
						case 0:
							if (!PED::_0x5102307CE88798EB(Local_1571[iVar0 /*10*/]))
							{
								PED::REQUEST_PED_VISIBILITY_TRACKING(Local_1571[iVar0 /*10*/]);
							}
							if (!__LIB_0__::func_27(iLocal_1718, 16777216))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3291.234f, -1303.357f, 41.66219f, 3285.705f, -1303.357f, 44.91244f, 2.75f, false, true, 0))
								{
									if (!__LIB_0__::func_75(&(Local_1571[iVar0 /*10*/].f_4)))
									{
										__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
									}
									if (__LIB_0__::func_264(&(Local_1571[iVar0 /*10*/].f_4)) >= 4f)
									{
										func_2010();
										__LIB_0__::func_37(&(Local_1571[iVar0 /*10*/].f_4));
										__LIB_1__::func_683(&iLocal_1718, 16777216);
									}
								}
							}
							if (func_2009(8))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3291.234f, -1303.357f, 41.66219f, 3285.705f, -1303.357f, 44.91244f, 2.75f, false, true, 0) || func_2011() >= 1)
								{
									if (PED::IS_TRACKED_PED_VISIBLE(Local_1571[iVar0 /*10*/]) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3291.234f, -1303.357f, 41.66219f, 3285.705f, -1303.357f, 44.91244f, 2.75f, false, true, 0))
									{
										PED::_0x3088634CF8C819CF(Local_1571[iVar0 /*10*/]);
										__LIB_0__::func_37(&(Local_1571[iVar0 /*10*/].f_4));
										Local_1571[iVar0 /*10*/].f_2++;
									}
								}
							}
							break;
						case 1:
							if (PED::IS_PED_IN_COVER(iVar13, false, false) && func_1445(cParam0, 16, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_79[16 /*10*/], true);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[25], "CS_LEOSTRAUSS", Local_1571[2 /*10*/], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[25], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[16 /*10*/], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[25], "P_BOTTLEJD01X", iLocal_1767, 0);
								AICOVERPOINT::_0x140B3CB1D424A945(iVar13, joaat("WEAPON_UNARMED"));
								ANIMSCENE::START_ANIM_SCENE(iLocal_1720[25]);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 2:
							if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[25], "CS_LEOSTRAUSS"))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1767, false);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar13, TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[1]), -1, 0, 0f, 1, 1, iLocal_1768[1], 0, 0, 0);
								PED::_0x2208438012482A1A(iVar13, false, false);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1571[iVar0 /*10*/], 1769075659))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_79[16 /*10*/]))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[25], "pbl_Breakout01", true);
								}
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1571[iVar0 /*10*/], -163181203))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_79[16 /*10*/]))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[25], "pbl_Breakout02", true);
								}
								else
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_79[16 /*10*/], joaat("REL_PLAYER_ALLY"));
								}
							}
							break;
						case 3:
							if (PED::IS_PED_IN_COVER(iVar13, false, false))
							{
								AICOVERPOINT::_0x1A7A802B2301EDC0(iVar13);
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 4:
							if (func_2009(7) && __LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 3f)
							{
								Local_1462[2 /*21*/].f_3 = iLocal_1768[2];
								Local_1462[2 /*21*/].f_7 = 1;
								Local_1462[2 /*21*/].f_4 = 2;
								Local_1462[2 /*21*/].f_10 = 2f;
								Local_1462[2 /*21*/] = Local_1571[2 /*10*/];
								Local_1462[2 /*21*/].f_5 = -1;
								Local_1462[2 /*21*/].f_14 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[2]) };
								AICOVERPOINT::TASK_ENTER_COVER(&(Local_1462[2 /*21*/]));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 5:
							if (PED::IS_PED_IN_COVER(iVar13, false, false))
							{
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 6:
							if (__LIB_0__::func_27(iLocal_1716, 32) && __LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 2f)
							{
								Local_1462[2 /*21*/].f_3 = iLocal_1768[3];
								Local_1462[2 /*21*/].f_7 = 1;
								Local_1462[2 /*21*/].f_4 = 1;
								Local_1462[2 /*21*/].f_10 = 2f;
								Local_1462[2 /*21*/] = Local_1571[2 /*10*/];
								Local_1462[2 /*21*/].f_5 = -1;
								Local_1462[2 /*21*/].f_14 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[3]) };
								AICOVERPOINT::TASK_ENTER_COVER(&(Local_1462[2 /*21*/]));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
					}
					break;
				case 0:
					if (!__LIB_0__::func_27(iLocal_1717, 256) && MISC::_0x7A76104CC2CC69E8(Local_1571[iVar0 /*10*/], 0, 1))
					{
						PED::KNOCK_OFF_PED_PROP(Local_1571[iVar0 /*10*/], false, true, true, true);
						__LIB_1__::func_683(&iLocal_1717, 256);
					}
					switch (Local_1571[iVar0 /*10*/].f_2)
					{
						case 0:
							if (PED::IS_PED_IN_COVER(iVar13, false, false))
							{
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 1:
							if ((__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 2f && func_2009(7)) && func_2009(8))
							{
								Local_1462[0 /*21*/].f_3 = iLocal_1768[6];
								Local_1462[0 /*21*/].f_7 = 1;
								Local_1462[0 /*21*/].f_4 = 2;
								Local_1462[0 /*21*/].f_10 = 2f;
								Local_1462[0 /*21*/] = Local_1571[0 /*10*/];
								Local_1462[0 /*21*/].f_5 = -1;
								Local_1462[0 /*21*/].f_14 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[6]) };
								AICOVERPOINT::TASK_ENTER_COVER(&(Local_1462[0 /*21*/]));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 2:
							if (PED::IS_PED_IN_COVER(iVar13, false, false))
							{
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 3:
							if ((__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= 2f && func_2009(10)) && func_2009(11))
							{
								Local_1462[0 /*21*/].f_3 = iLocal_1768[7];
								Local_1462[0 /*21*/].f_7 = 1;
								Local_1462[0 /*21*/].f_4 = 2;
								Local_1462[0 /*21*/].f_10 = 2f;
								Local_1462[0 /*21*/] = Local_1571[0 /*10*/];
								Local_1462[0 /*21*/].f_5 = -1;
								Local_1462[0 /*21*/].f_14 = { TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[7]) };
								AICOVERPOINT::TASK_ENTER_COVER(&(Local_1462[0 /*21*/]));
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1520()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 6;
	while (iVar0 <= 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79[iVar0 /*10*/]))
		{
			switch (iVar0)
			{
				case 12:
					switch (Local_79[iVar0 /*10*/].f_2)
					{
						case 0:
							ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[19], "S_M_M_NBXRIVERBOATGUARDS_01", &vVar1, false, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_79[iVar0 /*10*/], vVar1, 1.5f, 20000, 0.25f, 0, 40000f);
							if (!MAP::DOES_BLIP_EXIST(Local_79[iVar0 /*10*/].f_3))
							{
								Local_79[iVar0 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[iVar0 /*10*/]);
								MAP::_BLIP_SET_MODIFIER(Local_79[iVar0 /*10*/].f_3, -1034486097);
							}
							__LIB_1__::func_683(&(Local_79[iVar0 /*10*/].f_1), 2);
							Local_79[iVar0 /*10*/].f_2++;
							break;
						case 1:
							ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[19], "S_M_M_NBXRIVERBOATGUARDS_01", &vVar1, false, 0, 2);
							if (__LIB_0__::func_48(Local_79[iVar0 /*10*/], Global_35, 3f, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[iVar0 /*10*/], true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[iVar0 /*10*/], 200f, 0, 0);
								Local_79[iVar0 /*10*/].f_2 += 2;
							}
							else if (__LIB_0__::func_266(Local_79[iVar0 /*10*/], vVar1, 1.5f, 1, 1))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[19], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[iVar0 /*10*/], 0);
								__LIB_2__::func_279(Local_79[iVar0 /*10*/], 1);
								PED::_0x8ACC0506743A8A5C(Local_79[iVar0 /*10*/], joaat("SCRIPT_CALMAIMPOSTCOMBAT_ZERO"), 2, -1082130432 /* Float: -1f */);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_79[iVar0 /*10*/], 0, false);
								ANIMSCENE::START_ANIM_SCENE(iLocal_1720[19]);
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
						case 2:
							if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[19], "S_M_M_NBXRIVERBOATGUARDS_01") || __LIB_0__::func_48(Local_79[iVar0 /*10*/], Global_35, 3f, 1))
							{
								if (!ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[19], "S_M_M_NBXRIVERBOATGUARDS_01"))
								{
									ANIMSCENE::ABORT_ANIM_SCENE(iLocal_1720[19], false);
								}
								__LIB_2__::func_279(Local_79[iVar0 /*10*/], 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[iVar0 /*10*/], true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[iVar0 /*10*/], 200f, 0, 0);
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
						case 3:
							break;
					}
					break;
				case 13:
					switch (Local_79[iVar0 /*10*/].f_2)
					{
						case 0:
							ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[19], "S_M_M_NBXRIVERBOATGUARDS_01", &vVar1, false, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_79[iVar0 /*10*/], vVar1, 1.5f, 20000, 0.25f, 0, 40000f);
							if (!MAP::DOES_BLIP_EXIST(Local_79[iVar0 /*10*/].f_3))
							{
								Local_79[iVar0 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[iVar0 /*10*/]);
								MAP::_BLIP_SET_MODIFIER(Local_79[iVar0 /*10*/].f_3, -1034486097);
							}
							__LIB_1__::func_683(&(Local_79[iVar0 /*10*/].f_1), 2);
							Local_79[iVar0 /*10*/].f_2++;
							break;
						case 1:
							ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[20], "S_M_M_NBXRIVERBOATGUARDS_01", &vVar1, false, 0, 2);
							if (__LIB_0__::func_48(Local_79[iVar0 /*10*/], Global_35, 3f, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[iVar0 /*10*/], true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[iVar0 /*10*/], 200f, 0, 0);
								Local_79[iVar0 /*10*/].f_2 += 2;
							}
							else if (__LIB_0__::func_266(Local_79[iVar0 /*10*/], vVar1, 1.5f, 1, 1))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[20], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[iVar0 /*10*/], 0);
								__LIB_2__::func_279(Local_79[iVar0 /*10*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_79[iVar0 /*10*/], 0, false);
								ANIMSCENE::START_ANIM_SCENE(iLocal_1720[20]);
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
						case 2:
							if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[20], "S_M_M_NBXRIVERBOATGUARDS_01") || __LIB_0__::func_48(Local_79[iVar0 /*10*/], Global_35, 3f, 1))
							{
								if (!ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[20], "S_M_M_NBXRIVERBOATGUARDS_01"))
								{
									ANIMSCENE::ABORT_ANIM_SCENE(iLocal_1720[20], false);
								}
								__LIB_2__::func_279(Local_79[iVar0 /*10*/], 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[iVar0 /*10*/], true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[iVar0 /*10*/], 200f, 0, 0);
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
						case 3:
							break;
					}
					break;
				case 15:
					switch (Local_79[iVar0 /*10*/].f_2)
					{
						case 0:
							ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[19], "S_M_M_NBXRIVERBOATGUARDS_01", &vVar1, false, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_79[iVar0 /*10*/], vVar1, 1.5f, 20000, 0.25f, 0, 40000f);
							if (!MAP::DOES_BLIP_EXIST(Local_79[iVar0 /*10*/].f_3))
							{
								Local_79[iVar0 /*10*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_79[iVar0 /*10*/]);
								MAP::_BLIP_SET_MODIFIER(Local_79[iVar0 /*10*/].f_3, -1034486097);
							}
							__LIB_1__::func_683(&(Local_79[iVar0 /*10*/].f_1), 2);
							Local_79[iVar0 /*10*/].f_2++;
							break;
						case 1:
							ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_1720[18], "S_M_M_NBXRIVERBOATGUARDS_01", &vVar1, false, 0, 2);
							if (__LIB_0__::func_48(Local_79[iVar0 /*10*/], Global_35, 3f, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[iVar0 /*10*/], true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[iVar0 /*10*/], 200f, 0, 0);
								Local_79[iVar0 /*10*/].f_2 += 2;
							}
							else if (__LIB_0__::func_266(Local_79[iVar0 /*10*/], vVar1, 1.5f, 1, 1))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[18], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[iVar0 /*10*/], 0);
								__LIB_2__::func_279(Local_79[iVar0 /*10*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_79[iVar0 /*10*/], 0, false);
								ANIMSCENE::START_ANIM_SCENE(iLocal_1720[18]);
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
						case 2:
							if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[18], "S_M_M_NBXRIVERBOATGUARDS_01") || __LIB_0__::func_48(Local_79[iVar0 /*10*/], Global_35, 3f, 1))
							{
								if (!ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[18], "S_M_M_NBXRIVERBOATGUARDS_01"))
								{
									ANIMSCENE::ABORT_ANIM_SCENE(iLocal_1720[18], false);
								}
								__LIB_2__::func_279(Local_79[iVar0 /*10*/], 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[iVar0 /*10*/], true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[iVar0 /*10*/], 200f, 0, 0);
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
						case 3:
							break;
					}
					break;
				case 16:
					switch (Local_79[iVar0 /*10*/].f_2)
					{
						case 0:
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[25], false))
							{
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
						case 1:
							if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1720[25], "S_M_M_NBXRIVERBOATGUARDS_01"))
							{
								__LIB_1__::func_864(Local_79[iVar0 /*10*/], 1, 0);
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
					}
					break;
				case 18:
					switch (Local_79[iVar0 /*10*/].f_2)
					{
						case 0:
							if (__LIB_0__::func_266(Local_1571[1 /*10*/], 3283.992f, -1327.047f, 41.70125f, 2f, 1, 1) && PED::IS_PED_IN_COVER(Local_1571[1 /*10*/], false, false))
							{
								__LIB_1__::func_148(&(Local_79[iVar0 /*10*/].f_4));
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
						case 1:
							if (__LIB_0__::func_265(&(Local_79[iVar0 /*10*/].f_4)) >= 2f)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_79[iVar0 /*10*/], 3288.533f, -1329.011f, 41.74587f, 3.5f, 0, 0, 0);
								Local_79[iVar0 /*10*/].f_2++;
							}
							break;
					}
					break;
			}
		}
		else if (!__LIB_0__::func_27(Local_79[iVar0 /*10*/].f_1, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_79[iVar0 /*10*/]))
			{
				__LIB_1__::func_683(&(Local_79[iVar0 /*10*/].f_1), 4);
			}
		}
		iVar0++;
	}
}

void func_1521(bool bParam0)
{
	if (bParam0)
	{
		__LIB_2__::func_279(Local_1571[1 /*10*/], 1);
		PED::_0xD05AD61F242C626B(Local_1571[1 /*10*/], 3f);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[1 /*10*/], false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1571[1 /*10*/], false);
		__LIB_1__::func_683(&iLocal_1717, 64);
	}
	else
	{
		__LIB_2__::func_279(Local_1571[1 /*10*/], 0);
		PED::_0xD05AD61F242C626B(Local_1571[1 /*10*/], 1f);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_1571[1 /*10*/], false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1571[1 /*10*/], true);
		__LIB_1__::func_681(&iLocal_1717, 64);
	}
}

void func_1525()
{
	if (!__LIB_0__::func_27(iLocal_1716, 4096))
	{
		if (PED::IS_PED_IN_COVER(Global_35, false, true) || PED::IS_PED_AIMING_FROM_COVER(Global_35))
		{
			if (__LIB_0__::func_75(&(vLocal_1607[23 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_1607[23 /*3*/]));
			}
			if (PLAYER::_0x2E78D822208E740A(PLAYER::PLAYER_ID()) != 1f)
			{
				PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
			}
		}
		else
		{
			if (!__LIB_0__::func_75(&(vLocal_1607[23 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_1607[23 /*3*/]));
			}
			if (__LIB_0__::func_265(&(vLocal_1607[23 /*3*/])) >= 4f && PLAYER::_0x2E78D822208E740A(PLAYER::PLAYER_ID()) != 1.2f)
			{
				PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1.2f);
			}
		}
	}
	else if (PLAYER::_0x2E78D822208E740A(PLAYER::PLAYER_ID()) != 1.5f)
	{
		PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1.5f);
	}
}

int func_1526()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79[iVar0 /*10*/]) && iVar0 != 16)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1527(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (__LIB_8__::func_711(cParam0, "IND3_ESCAPE", 0))
			{
				__LIB_9__::func_208(cParam0, "IND3_OBJ_ESCAPE", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_78 = __LIB_8__::func_777(408396114, 3275.703f, -1348.283f, 40.0846f, 5.5f, 1);
				__LIB_9__::func_60(cParam0, 1);
			}
			break;
		case 1:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1) && __LIB_8__::func_711(cParam0, "IND3_ESCAPE_BT1", 0))
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == -1833472731 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == -640386210) || __LIB_0__::func_264(&(vLocal_1607[24 /*3*/])) >= 3f)
			{
				if (AUDIO::_0x1ECC76792F661CF5("IND3_LEAVE"))
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION("IND3_LEAVE", true, false);
				}
				__LIB_9__::func_60(cParam0, 3);
				return;
			}
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				if (!__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				}
			}
			else if (__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
			}
			if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 5f && __LIB_8__::func_711(cParam0, "IND3_LEAVE", 0))
			{
				if (!__LIB_0__::func_27(iLocal_1716, 65536))
				{
					__LIB_9__::func_208(cParam0, "IND3_OBJ_ESCAPE", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_683(&iLocal_1716, 65536);
				}
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
			}
			break;
		case 3:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1) && __LIB_8__::func_711(cParam0, "IND3_ESCAPE_BT3", 0))
			{
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_IN_WATER(Local_1571[2 /*10*/]))
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 5);
				return;
			}
			if ((((!AUDIO::_0xA2CAC9DEF0195E6F(1) && !ENTITY::IS_ENTITY_IN_WATER(Local_1571[2 /*10*/])) && __LIB_0__::func_48(Global_35, Local_1571[2 /*10*/], 10f, 1)) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) != 1344959368) && __LIB_8__::func_711(cParam0, "IND3_ESCAPE_BT4", 0))
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				if (!__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				}
			}
			else if (__LIB_0__::func_75(&(vLocal_1607[5 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
			}
			if ((((__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 6f && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_FALLING(Global_35)) && !ENTITY::IS_ENTITY_IN_WATER(Global_35)) && __LIB_8__::func_711(cParam0, "IND3_LEAVE", 0))
			{
				__LIB_0__::func_37(&(vLocal_1607[5 /*3*/]));
			}
			break;
	}
}

void func_1528()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	vector3 vVar7;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Local_1571[iVar0 /*10*/];
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		fVar6 = 0f;
		vVar7 = { 0f, 0f, 0f };
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			switch (iVar0)
			{
				case 1:
					switch (Local_1571[iVar0 /*10*/].f_2)
					{
						case 0:
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar1, 3283.799f, -1326.772f, 41.70037f, 1.5f, 1, 0, 0);
							PED::SET_PED_DEFENSIVE_AREA_DIRECTION(iVar1, 3286.693f, -1335.238f, 44.9723f, false);
							PED::SET_PED_CONFIG_FLAG(iVar1, 246, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							PED::SET_PED_CONFIG_FLAG(iVar1, 252, false);
							TASK::CLEAR_PED_TASKS(iVar1, true, false);
							__LIB_0__::func_37(&(Local_1571[iVar0 /*10*/].f_4));
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar1, TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1768[9]), -1, 1, 0, 1, 1, iLocal_1768[9], 1, 0, 0);
							Local_1571[iVar0 /*10*/].f_2++;
							break;
						case 1:
							if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == -1833472731 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == -640386210) || __LIB_0__::func_264(&(vLocal_1607[24 /*3*/])) >= 0.25f)
							{
								PED::_0xFD6943B6DF77E449(iVar1, false);
								TASK::CLEAR_PED_TASKS(iVar1, true, false);
								PED::REMOVE_PED_DEFENSIVE_AREA(iVar1, false);
								__LIB_9__::func_928(iVar1, PED::GET_PED_GROUP_INDEX(Global_35));
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								PED::SET_PED_CONFIG_FLAG(iVar1, 265, false);
								PED::SET_PED_CONFIG_FLAG(iVar1, 411, true);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							else if (((!PED::IS_PED_IN_COVER(iVar1, false, false) && !PED::IS_PED_AIMING_FROM_COVER(iVar1)) && !__LIB_0__::func_491(iVar1, -1959848946)) && PED::IS_PED_STOPPED(iVar1))
							{
								TASK::_0xDF8A5855B9F9A97B(iVar1, 0, 0, 3286.693f, -1335.238f, 44.9723f, 3283.775f, -1326.872f, 41.6998f, -1, 1, 0, 1, 1, 0, 1, 0, 0);
							}
							break;
						case 2:
							if (ENTITY::IS_ENTITY_IN_WATER(iVar1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								__LIB_3__::func_456(iVar1);
								TASK::CLEAR_PED_TASKS(iVar1, true, false);
								if (!__LIB_0__::func_27(iLocal_1717, 8))
								{
									PED::KNOCK_OFF_PED_PROP(Local_1571[iVar0 /*10*/], false, true, true, true);
									__LIB_1__::func_683(&iLocal_1717, 8);
								}
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							else if ((__LIB_0__::func_264(&(vLocal_1607[24 /*3*/])) >= 3.25f && !__LIB_0__::func_491(iVar1, 658540077)) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, 0))
							{
								__LIB_3__::func_456(iVar1);
								TASK::CLEAR_PED_TASKS(iVar1, true, false);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar1, sLocal_71, 0, 8, -1, 0, 0, -1);
							}
							break;
						case 3:
							PED::SET_PED_RESET_FLAG(iVar1, 151, true);
							if (__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= Local_1571[iVar0 /*10*/].f_7 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iVar1, sLocal_65, 0f, 0, 14, -1, 0);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 4:
							PED::SET_PED_RESET_FLAG(iVar1, 151, true);
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, 0))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar1, 2f, 0, -1082130432 /* Float: -1f */, 0);
							}
							break;
					}
					break;
				case 0:
					if (PED::_GET_PED_CROUCH_MOVEMENT(iVar1))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(iVar1, false, 0, false);
					}
					switch (Local_1571[iVar0 /*10*/].f_2)
					{
						case 0:
							ENTITY::SET_ENTITY_INVINCIBLE(iVar1, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							PED::SET_PED_CONFIG_FLAG(iVar1, 265, false);
							PED::SET_PED_CONFIG_FLAG(iVar1, 411, true);
							PED::_SET_PED_CROUCH_MOVEMENT(iVar1, false, 0, false);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar1, sLocal_70, 0, 520, -1, 0, 0, -1);
							PED::_SET_PED_BLACKBOARD_FLOAT(iVar1, "Cautious", 1f, -1);
							PED::SET_PED_USING_ACTION_MODE(iVar1, true, -1, 0);
							Local_1571[iVar0 /*10*/].f_2++;
							break;
						case 1:
							if (ENTITY::IS_ENTITY_IN_WATER(iVar1))
							{
								PED::_0x411189E51B8020BA(iVar1, "Cautious");
								PED::SET_PED_USING_ACTION_MODE(iVar1, false, -1, 0);
								TASK::CLEAR_PED_TASKS(iVar1, true, false);
								if (!__LIB_0__::func_27(iLocal_1717, 256))
								{
									PED::KNOCK_OFF_PED_PROP(Local_1571[iVar0 /*10*/], false, true, true, true);
									__LIB_1__::func_683(&iLocal_1717, 256);
								}
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							else
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_71, 3279.519f, -1337.886f, 41.9401f, &iVar2);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_71, 3279.036f, -1343.135f, 42.0965f, &iVar3);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_70, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &iVar4);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_70, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar5);
								TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_70, iVar5, &vVar7);
								fVar6 = __LIB_0__::func_94(Global_35, vVar7, 1);
								if (((iVar4 <= iVar3 && iVar4 >= iVar2) || TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1)) || __LIB_0__::func_264(&(vLocal_1607[24 /*3*/])) >= 4.25f)
								{
									if (((!__LIB_0__::func_48(Global_35, iVar1, 7f, 1) && !ENTITY::IS_ENTITY_IN_WATER(Global_35)) && (iVar4 > iVar5 || fVar6 >= 6f)) && __LIB_0__::func_264(&(vLocal_1607[24 /*3*/])) <= 4.25f)
									{
										if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1))
										{
											TASK::WAYPOINT_PLAYBACK_PAUSE(iVar1, 1, 0, 0);
										}
									}
									else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1))
									{
										TASK::WAYPOINT_PLAYBACK_RESUME(iVar1, false, -1, 0);
									}
								}
							}
							break;
						case 2:
							PED::SET_PED_RESET_FLAG(iVar1, 151, true);
							if (__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= Local_1571[iVar0 /*10*/].f_7 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iVar1, sLocal_65, 1.2f, 0, 14, -1, 0);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 3:
							PED::SET_PED_RESET_FLAG(iVar1, 151, true);
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, 0))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar1, 2f, 0, -1082130432 /* Float: -1f */, 0);
							}
							break;
					}
					break;
				case 2:
					switch (Local_1571[iVar0 /*10*/].f_2)
					{
						case 0:
							ENTITY::SET_ENTITY_INVINCIBLE(iVar1, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							PED::SET_PED_CONFIG_FLAG(iVar1, 265, false);
							PED::SET_PED_CONFIG_FLAG(iVar1, 411, true);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar1, sLocal_71, 0, 520, -1, 0, 0, -1);
							PED::_SET_PED_BLACKBOARD_FLOAT(iVar1, "Cautious", 1f, -1);
							PED::SET_PED_USING_ACTION_MODE(iVar1, true, -1, 0);
							Local_1571[iVar0 /*10*/].f_2++;
							break;
						case 1:
							if (ENTITY::IS_ENTITY_IN_WATER(iVar1))
							{
								PED::_0x411189E51B8020BA(iVar1, "Cautious");
								PED::SET_PED_USING_ACTION_MODE(iVar1, false, -1, 0);
								TASK::CLEAR_PED_TASKS(iVar1, true, false);
								__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
								Local_1571[iVar0 /*10*/].f_7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							else
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_71, 3279.519f, -1337.886f, 41.9401f, &iVar2);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_71, 3279.036f, -1343.135f, 42.0965f, &iVar3);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_71, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &iVar4);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_71, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar5);
								TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_70, iVar5, &vVar7);
								fVar6 = __LIB_0__::func_94(Global_35, vVar7, 1);
								if (((iVar4 <= iVar3 && iVar4 >= iVar2) || TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1)) || __LIB_0__::func_264(&(vLocal_1607[24 /*3*/])) >= 4f)
								{
									if ((((!__LIB_0__::func_48(Global_35, iVar1, 8f, 1) && !__LIB_0__::func_48(Global_35, Local_1571[0 /*10*/], 7f, 1)) && !ENTITY::IS_ENTITY_IN_WATER(Global_35)) && (iVar4 > iVar5 || fVar6 >= 6f)) && __LIB_0__::func_264(&(vLocal_1607[24 /*3*/])) <= 4f)
									{
										if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1))
										{
											TASK::WAYPOINT_PLAYBACK_PAUSE(iVar1, 0, 0, 0);
										}
									}
									else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1))
									{
										TASK::WAYPOINT_PLAYBACK_RESUME(iVar1, false, -1, 0);
									}
								}
							}
							break;
						case 2:
							PED::SET_PED_RESET_FLAG(iVar1, 151, true);
							if (__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= Local_1571[iVar0 /*10*/].f_7 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == 0)
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iVar1, sLocal_65, -1.5f, 0, 14, -1, 0);
								Local_1571[iVar0 /*10*/].f_2++;
							}
							break;
						case 3:
							PED::SET_PED_RESET_FLAG(iVar1, 151, true);
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, 0))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar1, 2f, 0, -1082130432 /* Float: -1f */, 0);
							}
							break;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1529(char[4] cParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_79[17 /*10*/]))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 3291.234f, -1303.357f, 41.66219f, 3285.705f, -1303.357f, 44.91244f, 2.75f, false, true, 0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == 1344959368)
		{
			__LIB_1__::func_948(398241243, 0, 0, 0, 1, 0, 1, 0);
			__LIB_1__::func_948(90310950, 0, 0, 0, 1, 0, 1, 0);
			func_1445(cParam0, 17, 1);
		}
	}
}

void func_1530(char[4] cParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			iLocal_78 = __LIB_4__::func_983(408396114, 2917.677f, -1258.165f, 41.7431f, 1);
			__LIB_9__::func_142(cParam0, "IND3_OBJ_SWIM", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_0__::func_268(&(vLocal_1607[5 /*3*/]), 5f);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_1607[5 /*3*/])) >= 7f)
			{
				iVar2 = -1;
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				switch (iVar0)
				{
					case 0:
						sVar1 = "IND3_SWIMSHOT";
						break;
					case 1:
						sVar1 = "IND3_SWIMSHOTJA";
						break;
					case 2:
						sVar1 = "IND3_SWIMSHOTTR";
						break;
					case 3:
						iVar2 = func_2019(1);
						if (iVar2 != -1)
						{
							switch (iVar2)
							{
								case 21:
									sVar1 = "IND3_GUARD1SWIM";
									break;
								case 22:
									sVar1 = "IND3_GUARD2SWIM";
									break;
								case 23:
									sVar1 = "IND3_GUARD3SWIM";
									break;
							}
						}
						break;
					case 4:
						iVar2 = func_2019(0);
						if (iVar2 != -1)
						{
							sVar1 = "IND3_SWIMSHOTGU";
							__LIB_9__::func_42(cParam0, Local_79[iVar2 /*10*/], "IND3_GUARD5", 0);
						}
						break;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && __LIB_8__::func_711(cParam0, sVar1, 0))
				{
					if (iVar2 != -1 && !MISC::ARE_STRINGS_EQUAL(sVar1, "IND3_SWIMSHOTGU"))
					{
						__LIB_1__::func_683(&(Local_79[iVar2 /*10*/].f_1), 256);
					}
					__LIB_1__::func_148(&(vLocal_1607[5 /*3*/]));
				}
			}
			break;
	}
}

void func_1531(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Local_1571[iVar0 /*10*/];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_RESET_FLAG(iVar1, 151, true);
			switch (Local_1571[iVar0 /*10*/].f_2)
			{
				case 0:
					if (ENTITY::IS_ENTITY_IN_WATER(iVar1))
					{
						if (iVar0 == 0)
						{
							if (!__LIB_0__::func_27(iLocal_1717, 256))
							{
								PED::KNOCK_OFF_PED_PROP(Local_1571[iVar0 /*10*/], false, true, true, true);
								__LIB_1__::func_683(&iLocal_1717, 256);
							}
						}
						else if (iVar0 == 1)
						{
							if (!__LIB_0__::func_27(iLocal_1717, 8))
							{
								PED::KNOCK_OFF_PED_PROP(Local_1571[iVar0 /*10*/], false, true, true, true);
								__LIB_1__::func_683(&iLocal_1717, 8);
							}
						}
						TASK::CLEAR_PED_TASKS(iVar1, true, false);
						__LIB_1__::func_148(&(Local_1571[iVar0 /*10*/].f_4));
						Local_1571[iVar0 /*10*/].f_7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
						Local_1571[iVar0 /*10*/].f_2++;
					}
					else if (((iVar0 == 1 && !__LIB_0__::func_491(iVar1, 658540077)) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, 0)) && __LIB_6__::func_862(cParam0, 8))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar1, sLocal_71, 0, 8, -1, 0, 0, -1);
					}
					break;
				case 1:
					if (__LIB_0__::func_265(&(Local_1571[iVar0 /*10*/].f_4)) >= Local_1571[iVar0 /*10*/].f_7 || TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, 0))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, 0))
						{
							iVar2 = 67108876;
							switch (iVar0)
							{
								case 1:
									fVar3 = 0f;
									break;
								case 0:
									fVar3 = 1.2f;
									break;
								case 2:
									fVar3 = -1.5f;
									break;
							}
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iVar1, sLocal_65, fVar3, 0, iVar2, -1, 0);
						}
						Local_1571[iVar0 /*10*/].f_2++;
					}
					break;
				case 2:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVar1, 3f, 0, -1082130432 /* Float: -1f */, 0);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1532(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (Local_1571[1 /*10*/].f_2 > 0)
	{
		func_1429(cParam0, 21, 23, 1);
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		iVar1 = Local_79[iVar0 /*10*/];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			switch (Local_79[iVar0 /*10*/].f_2)
			{
				case 0:
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_79[iVar0 /*10*/], 500f, 0, 0);
					Local_79[iVar0 /*10*/].f_2++;
					break;
				case 1:
					PED::SET_PED_SHOOT_RATE(Local_79[iVar0 /*10*/], 35);
					PED::SET_PED_ACCURACY(Local_79[iVar0 /*10*/], 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 27, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_79[iVar0 /*10*/], 24, false);
					Local_79[iVar0 /*10*/].f_2++;
					break;
				case 2:
					if (__LIB_0__::func_27(iLocal_1718, 32768))
					{
						TASK::CLEAR_PED_TASKS(Local_79[iVar0 /*10*/], true, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_79[iVar0 /*10*/], true);
						Local_79[iVar0 /*10*/].f_2++;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1552()
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
	iVar0 = func_2042(6291456, 0);
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

int func_1576(var uParam0, int iParam1, int iParam2)
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
		return func_1576(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1611(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_893(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1612(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_6__::func_872(cParam0, 512))
	{
		if (__LIB_6__::func_872(cParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_2064(cParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_9__::func_141(cParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_9__::func_141(cParam0, iParam1, 128);
	}
	else
	{
		__LIB_9__::func_147(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

bool func_1644(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
		uParam0->f_2286 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
			__LIB_9__::func_911(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_9__::func_956(uParam0);
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
				__LIB_9__::func_54(uParam0);
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

bool func_1650(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_9__::func_957(uParam4);
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
					__LIB_9__::func_199(uParam4, &cParam0, cParam5);
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
					__LIB_8__::func_632(cParam5);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_8__::func_705(cParam5, __LIB_6__::func_864(cParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_6__::func_862(cParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
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
				if (__LIB_5__::func_577(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
					{
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
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
				if (__LIB_8__::func_587(cParam5) != 0 || (__LIB_6__::func_877(cParam5) == 1 && __LIB_8__::func_663(cParam5, __LIB_6__::func_864(cParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_9__::func_199(uParam4, &cParam0, cParam5);
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
			func_407(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_8__::func_632(cParam5);
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
				__LIB_9__::func_957(uParam4);
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
				if (__LIB_6__::func_877(cParam5) == 1 && __LIB_8__::func_663(cParam5, __LIB_6__::func_864(cParam5)) >= 3)
				{
					if (__LIB_8__::func_634(cParam5))
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

bool func_1658(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !iLocal_4456[iParam0])
	{
		__LIB_6__::func_810(iParam0, iParam1, iParam2);
		if (!__LIB_6__::func_804(iParam1))
		{
			return false;
		}
		__LIB_1__::func_288(iParam0, iParam2, 1);
		__LIB_1__::func_558(iParam0, iParam1, iParam2, 1);
		PED::CLEAR_PED_ENV_DIRT(iParam1);
		iLocal_4456[iParam0] = 1;
		return false;
	}
	return true;
}

int func_1659(char[4] cParam0, int iParam1)
{
	if (__LIB_6__::func_872(cParam0, 4194304) && __LIB_6__::func_864(cParam0) == iLocal_43)
	{
		if (!__LIB_0__::func_27(iLocal_1718, 4096))
		{
			__LIB_9__::func_959(0);
			__LIB_1__::func_683(&iLocal_1718, 4096);
		}
	}
	if (!bLocal_4485)
	{
		__LIB_10__::func_21(Global_35, iParam1);
		if (!__LIB_8__::func_924(Global_35))
		{
			return 0;
		}
		__LIB_9__::func_164(Global_35, 1, 0);
		if (!__LIB_8__::func_837(iParam1))
		{
			return 0;
		}
		bLocal_4485 = true;
	}
	return 1;
}

bool func_1673()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 57)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_370[iVar0 /*10*/]) && (iVar0 < 13 || iVar0 > 24))
		{
			if ((!PED::IS_PED_USING_ANY_SCENARIO(Local_370[iVar0 /*10*/]) && iVar0 >= 13) && iVar0 <= 53)
			{
				func_2175(iVar0);
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1674()
{
	int iVar0;
	char cVar1[32];
	char cVar5[32];
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iLocal_1543[iVar0] = OBJECT::CREATE_OBJECT(iLocal_36, __LIB_7__::func_913(3288.113f, -1318.341f, 41.7622f, 1f), true, true, false, false, true);
		StringCopy(&cVar1, "PROP_CHIP_GREEN_X10", 32);
		if (iVar0 != 0)
		{
			StringConCat(&cVar1, "^", 32);
			MISC::_INT_TO_STRING((iVar0 - 0), "%i", &cVar5);
			StringConCat(&cVar1, &cVar5, 32);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], &cVar1, iLocal_1543[iVar0], 0);
		iVar0++;
	}
	iVar0 = 5;
	while (iVar0 <= 16)
	{
		iLocal_1543[iVar0] = OBJECT::CREATE_OBJECT(iLocal_37, __LIB_7__::func_913(3288.113f, -1318.341f, 41.7622f, 1f), true, true, false, false, true);
		StringCopy(&cVar1, "P_CRD_2_C01X", 32);
		if (iVar0 != 5)
		{
			StringConCat(&cVar1, "^", 32);
			MISC::_INT_TO_STRING((iVar0 - 5), "%i", &cVar5);
			StringConCat(&cVar1, &cVar5, 32);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[38], &cVar1, iLocal_1543[iVar0], 0);
		iVar0++;
	}
}

void func_1675()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[27], false))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1766))
		{
			iLocal_1766 = OBJECT::CREATE_OBJECT(iLocal_26, 3284.63f, -1321.78f, 41.72f, true, true, false, false, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[27], "p_glass03x", iLocal_1766, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[27], "STRAUSS", Local_1571[2 /*10*/], 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_1720[27]);
		func_1474(1);
	}
}

void func_1681(char[4] cParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	switch (iLocal_1763)
	{
		case 0:
			if (!__LIB_8__::func_671(cParam0) && __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 5)
			{
				if (__LIB_6__::func_864(cParam0) <= iLocal_46)
				{
					sVar0 = "TRELAWNY_ABANDON";
					if (__LIB_0__::func_27(iLocal_1718, -2147483648))
					{
						sVar0 = "GANG_FAIL";
					}
					__LIB_9__::func_910(cParam0, Local_1571[0 /*10*/], "TRELAWNY_RETURN", sVar0, (75f / 4f), (150f / 4f), 0, 0, 1, joaat("BLIP_STYLE_COMPANION"), 1);
					if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						sLocal_1764 = "LAW_FAIL";
						__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
						iLocal_1763 = 1;
						return;
					}
				}
				if (__LIB_6__::func_864(cParam0) <= iLocal_43 && __LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_CASH_REGISTER")))
				{
					sLocal_1764 = "IND3_FAIL_TILL";
					__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
					iLocal_1763 = 1;
					return;
				}
				if (__LIB_6__::func_864(cParam0) <= iLocal_54 && __LIB_6__::func_864(cParam0) >= iLocal_47)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::IS_ENTITY_IN_WATER(Global_35))
					{
						if (!__LIB_0__::func_75(&(vLocal_1607[7 /*3*/])))
						{
							__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
						}
						else if (__LIB_0__::func_265(&(vLocal_1607[7 /*3*/])) >= 5f)
						{
							sLocal_1764 = "IND3_FAIL_BOAT";
							__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
							iLocal_1763 = 1;
							return;
						}
					}
				}
				if (__LIB_6__::func_864(cParam0) >= iLocal_47 && __LIB_6__::func_864(cParam0) <= iLocal_53)
				{
					iVar1 = 54;
					while (iVar1 <= 56)
					{
						if ((((ENTITY::DOES_ENTITY_EXIST(Local_370[iVar1 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_370[iVar1 /*10*/])) && ENTITY::IS_ENTITY_IN_VOLUME(Local_370[iVar1 /*10*/], iLocal_1808, true, 0)) && __LIB_0__::func_48(Local_370[iVar1 /*10*/], Global_35, 7f, 1)) && (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_79[8 /*10*/], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_79[9 /*10*/], Global_35, 17)))
						{
							sLocal_1764 = "IND3_FAIL_PUSH";
							__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
							iLocal_1763 = 1;
							return;
						}
						iVar1++;
					}
				}
				if (__LIB_6__::func_864(cParam0) == iLocal_46)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::IS_ENTITY_IN_WATER(Global_35))
					{
						sLocal_1764 = "IND3_FAIL_SUIT";
						__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
						iLocal_1763 = 1;
						return;
					}
				}
				iVar2 = 234;
				if (__LIB_6__::func_864(cParam0) == iLocal_46)
				{
					iVar3 = 0;
					while (iVar3 < 29)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_79[iVar3 /*10*/]) && !__LIB_0__::func_272(Local_79[iVar3 /*10*/], iVar2))
						{
							sLocal_1764 = "IND3_FAIL_DOCK";
							__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
							iLocal_1763 = 1;
							return;
						}
						iVar3++;
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_77) && __LIB_6__::func_864(cParam0) <= iLocal_46) && !__LIB_0__::func_27(iLocal_1716, 524288))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_77, Global_35, 1, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_370[4 /*10*/], Global_35, 1, 1))
						{
							sLocal_1764 = "IND3_FAIL_COAC";
						}
						else
						{
							sLocal_1764 = "IND3_FAIL_SPKCOACH";
						}
						__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
						iLocal_1763 = 1;
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4413))
					{
						iVar4 = 0;
						while (iVar4 < 6)
						{
							iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_77, iVar4);
							if (ENTITY::DOES_ENTITY_EXIST(iVar5))
							{
								iLocal_4413 = iVar5;
								return;
							}
							iVar4++;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_4413) && (((!__LIB_0__::func_272(iLocal_4413, iVar2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_4413, Global_35, 1, 1)) || PED::IS_PED_FLEEING(iLocal_4413)) || PED::_0xE4770DA1B8FF4FD1(iLocal_4413) == 0))
					{
						__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
						iLocal_1763 = 1;
						sLocal_1764 = "IND3_FAIL_HORS";
						return;
					}
				}
				if (__LIB_6__::func_864(cParam0) <= iLocal_46)
				{
					iVar6 = 0;
					while (iVar6 < 57)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_370[iVar6 /*10*/]) && (((((!__LIB_0__::func_272(Local_370[iVar6 /*10*/], iVar2) || PED::IS_PED_FLEEING(Local_370[iVar6 /*10*/])) || PED::IS_PED_IN_COMBAT(Local_370[iVar6 /*10*/], 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_370[iVar6 /*10*/], Global_35, 1, 1)) || PED::_0x29FCE825613FEFCA(Local_370[iVar6 /*10*/], 5000)) || func_2184(iVar6)))
						{
							if (iVar6 == 1)
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_370[iVar6 /*10*/], Global_35, 1, 1) || ENTITY::IS_ENTITY_DEAD(Local_370[iVar6 /*10*/]))
								{
									sLocal_1764 = "IND3_FAIL_BARB";
								}
								else
								{
									sLocal_1764 = "IND3_FAIL_SPKBRB";
								}
							}
							else if (iVar6 == 0)
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_370[iVar6 /*10*/], Global_35, 1, 1) || ENTITY::IS_ENTITY_DEAD(Local_370[iVar6 /*10*/]))
								{
									sLocal_1764 = "IND3_FAIL_TAIL";
								}
								else
								{
									sLocal_1764 = "IND3_FAIL_SPKTLR";
								}
								if (AUDIO::_0x1ECC76792F661CF5("IND3_TAILENTER"))
								{
									AUDIO::STOP_SCRIPTED_CONVERSATION("IND3_TAILENTER", false, false);
								}
							}
							else if (iVar6 == 4)
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_370[iVar6 /*10*/], Global_35, 1, 1) || ENTITY::IS_ENTITY_DEAD(Local_370[iVar6 /*10*/]))
								{
									sLocal_1764 = "IND3_FAIL_COAC";
								}
								else
								{
									sLocal_1764 = "IND3_FAIL_SPKCOACH";
								}
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1764))
							{
								if (iVar6 != 4 || !__LIB_0__::func_27(iLocal_1716, 524288))
								{
									__LIB_1__::func_148(&(vLocal_1607[7 /*3*/]));
									iLocal_1763 = 1;
									return;
								}
								if (__LIB_6__::func_864(cParam0) == iLocal_42 && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[0], false))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[0], "pbl_IG1_Cower", true);
								}
							}
						}
						iVar6++;
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(vLocal_1607[7 /*3*/])) >= 0.5f)
			{
				__LIB_9__::func_156(cParam0, sLocal_1764, "", 1, 0);
				iLocal_1763 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_1683(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) == iLocal_52)
	{
		if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		}
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_4407)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	}
	if (!__LIB_0__::func_27(iLocal_1716, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PED::SET_PED_RESET_FLAG(Global_35, 27, true);
	}
}

void func_1685(char[4] cParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	switch (Local_1821[iParam1 /*1279*/].f_1277)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					vVar1 = { 3288.489f, -1323.223f, 41.7734f };
					fVar4 = 60f;
					break;
				case 1:
					vVar1 = { 3288.448f, -1312.786f, 41.7734f };
					fVar4 = 60f;
					break;
			}
			func_2188(&(Local_1821[iParam1 /*1279*/]), vVar1, fVar4, 0);
			__LIB_19__::func_233(&(Local_1821[iParam1 /*1279*/]), 1, 0, 0);
			switch (iParam1)
			{
				case 0:
					__LIB_18__::func_542(&(Local_1821[iParam1 /*1279*/]), 0, __LIB_12__::func_360(3, 8), 1);
					__LIB_18__::func_542(&(Local_1821[iParam1 /*1279*/]), 1, __LIB_12__::func_360(3, 12), 1);
					__LIB_18__::func_542(&(Local_1821[iParam1 /*1279*/]), 2, __LIB_12__::func_360(1, 9), 1);
					break;
				case 1:
					__LIB_18__::func_542(&(Local_1821[iParam1 /*1279*/]), 0, __LIB_12__::func_360(2, 11), 1);
					__LIB_18__::func_542(&(Local_1821[iParam1 /*1279*/]), 1, __LIB_12__::func_360(1, 6), 1);
					__LIB_18__::func_542(&(Local_1821[iParam1 /*1279*/]), 2, __LIB_12__::func_360(0, 11), 1);
					break;
			}
			func_2192(iParam1, 1);
			break;
		case 1:
			if ((__LIB_19__::func_234(&(Local_1821[iParam1 /*1279*/])) && __LIB_18__::func_546(&(Local_1821[iParam1 /*1279*/]))) && func_2195(cParam0))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (!(iParam1 == 0 && iVar0 == 1) && !(iParam1 == 1 && iVar0 == 2))
					{
						func_2196(&(Local_1821[iParam1 /*1279*/]), iVar0, 2, 0, 0);
					}
					iVar0++;
				}
				func_2192(iParam1, 2);
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!(iParam1 == 0 && iVar0 == 1) && !(iParam1 == 1 && iVar0 == 2))
				{
					func_2197(&(Local_1821[iParam1 /*1279*/]), iVar0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 5), 0, MISC::GET_RANDOM_INT_IN_RANGE(7, 11), 0, 0);
				}
				iVar0++;
			}
			func_2192(iParam1, 3);
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!(iParam1 == 0 && iVar0 == 1) && !(iParam1 == 1 && iVar0 == 2))
				{
					func_2198(&(Local_1821[iParam1 /*1279*/]), iVar0, 0, 1, 0, MISC::GET_RANDOM_INT_IN_RANGE(3, 7), 0, 0);
				}
				iVar0++;
			}
			func_2192(iParam1, 4);
			break;
		case 4:
			if (iParam1 == 0)
			{
				func_2199(&(Local_1821[iParam1 /*1279*/]), 0, 1, 1);
				func_2199(&(Local_1821[iParam1 /*1279*/]), 1, 1, 1);
				func_2199(&(Local_1821[iParam1 /*1279*/]), 2, 1, 1);
			}
			else
			{
				func_2199(&(Local_1821[iParam1 /*1279*/]), 0, 2, 1);
				func_2199(&(Local_1821[iParam1 /*1279*/]), 1, 2, 1);
				func_2199(&(Local_1821[iParam1 /*1279*/]), 2, 2, 1);
			}
			func_2192(iParam1, 5);
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					switch (Local_1821[iParam1 /*1279*/].f_1278)
					{
						case 0:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 0, Local_370[22 /*10*/], 2, 1, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 1:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 1, Local_370[19 /*10*/], 1, 0, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 2:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 2, Local_370[23 /*10*/], 2, 2, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 3:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 3, Local_370[24 /*10*/], 2, 2, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 4:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 4, Local_370[20 /*10*/], 2, 1, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 5:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 5, Local_370[21 /*10*/], 2, 2, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
					}
					break;
				case 1:
					switch (Local_1821[iParam1 /*1279*/].f_1278)
					{
						case 0:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 0, Local_370[16 /*10*/], 2, 2, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 1:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 1, Local_370[17 /*10*/], 2, 2, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 2:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 2, Local_370[13 /*10*/], 1, 0, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 3:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 3, Local_370[18 /*10*/], 2, 1, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 4:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 4, Local_370[14 /*10*/], 2, 2, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
						case 5:
							func_2200(&(Local_1821[iParam1 /*1279*/]), 5, Local_370[15 /*10*/], 2, 1, 1, -1, 92, 255, 0, 0, 0, 0);
							break;
					}
					break;
			}
			if (Local_1821[iParam1 /*1279*/].f_1278 >= 5)
			{
				__LIB_1__::func_683(&iLocal_1718, 2048);
				__LIB_0__::func_268(&(Local_1821[iParam1 /*1279*/].f_1273), -MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 12f));
				Local_1821[iParam1 /*1279*/].f_1276 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				func_2192(iParam1, 6);
			}
			else
			{
				Local_1821[iParam1 /*1279*/].f_1278++;
			}
			break;
		case 6:
			if (!__LIB_12__::func_296(&(Local_1821[iParam1 /*1279*/]), Local_1821[iParam1 /*1279*/].f_1276))
			{
				func_2192(iParam1, 8);
			}
			else if (__LIB_0__::func_265(&(Local_1821[iParam1 /*1279*/].f_1273)) >= 0f && __LIB_18__::func_540(&(Local_1821[iParam1 /*1279*/]), Local_1821[iParam1 /*1279*/].f_1276, 1))
			{
				func_2202(&(Local_1821[iParam1 /*1279*/]), Local_1821[iParam1 /*1279*/].f_1276, 0, 4, 1);
				func_2192(iParam1, 8);
			}
			break;
		case 8:
			Local_1821[iParam1 /*1279*/].f_1276++;
			Local_1821[iParam1 /*1279*/].f_1276 = (Local_1821[iParam1 /*1279*/].f_1276 % 6);
			__LIB_0__::func_268(&(Local_1821[iParam1 /*1279*/].f_1273), -MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 12f));
			func_2192(iParam1, 6);
			break;
	}
}

void func_1686()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (AUDIO::_0x1ECC76792F661CF5("IND3_HAND1CHAT1"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND1CHAT1") == 0)
		{
			bVar0 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND1CHAT1") == 2)
		{
			bVar0 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND1CHAT1") == 3)
		{
			bVar1 = true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_HAND1CHAT2"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND1CHAT2") == 0)
		{
			bVar0 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND1CHAT2") == 1)
		{
			bVar1 = true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_CHIPSTALK"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_CHIPSTALK") == 1)
		{
			bVar2 = true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_DESREACT1"))
	{
		bVar1 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_DESREACT3"))
	{
		bVar1 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_TARGETWIN1"))
	{
		bVar3 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_HAND2CHAT1"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND2CHAT1") == 0)
		{
			bVar1 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND2CHAT1") == 1)
		{
			bVar0 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND2CHAT1") == 2)
		{
			bVar1 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND2CHAT1") == 3)
		{
			bVar0 = true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_HAND2CHAT2"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND2CHAT2") == 0)
		{
			bVar0 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND2CHAT2") == 1)
		{
			bVar1 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND2CHAT2") == 2)
		{
			bVar0 = true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_DESRAISE4"))
	{
		bVar1 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_DESAGRR"))
	{
		bVar0 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_DESALLIN2"))
	{
		bVar1 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_HAND3CHAT"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND3CHAT") == 0)
		{
			bVar1 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND3CHAT") == 1)
		{
			bVar0 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_HAND3CHAT") == 2)
		{
			bVar0 = true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_DESALLIN3"))
	{
		bVar1 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_DEALER"))
	{
		bVar2 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_KKVSAA"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_KKVSAA") == 0)
		{
			bVar0 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_KKVSAA") == 1)
		{
			bVar1 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_KKVSAA") == 2)
		{
			bVar0 = true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_TURN3"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_TURN3") == 0)
		{
			bVar0 = true;
		}
		else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("IND3_TURN3") == 1)
		{
			bVar3 = true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_PLYRLONGT"))
	{
		bVar1 = true;
	}
	else if (AUDIO::_0x1ECC76792F661CF5("IND3_PLYRLONGD"))
	{
		bVar2 = true;
	}
	if (bVar0)
	{
		if (!__LIB_12__::func_424(16))
		{
			__LIB_12__::func_436(16, 0);
		}
	}
	else if (__LIB_12__::func_424(16))
	{
		__LIB_12__::func_435(16);
	}
	if (bVar1)
	{
		if (!__LIB_12__::func_424(17))
		{
			__LIB_12__::func_436(17, 0);
		}
	}
	else if (__LIB_12__::func_424(17))
	{
		__LIB_12__::func_435(17);
	}
	if (bVar2)
	{
		if (!__LIB_12__::func_424(18))
		{
			__LIB_12__::func_436(18, 0);
		}
	}
	else if (__LIB_12__::func_424(18))
	{
		__LIB_12__::func_435(18);
	}
	if (bVar3)
	{
		if (!__LIB_12__::func_424(19))
		{
			__LIB_12__::func_436(19, 0);
		}
	}
	else if (__LIB_12__::func_424(19))
	{
		__LIB_12__::func_435(19);
	}
}

void func_1687()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79[iVar0 /*10*/]))
		{
			if (__LIB_0__::func_665(Local_79[iVar0 /*10*/], Global_35, 1, 1) <= 10f)
			{
				func_1428(Local_79[iVar0 /*10*/], Global_35);
			}
			else if (TASK::_0x508F5053E3F6F0C4(Local_79[iVar0 /*10*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1f))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_79[iVar0 /*10*/]);
			}
		}
		iVar0++;
	}
}

void func_1688()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 57)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_370[iVar0 /*10*/]) && iVar0 >= 13) && iVar0 <= 24)
		{
			if (__LIB_0__::func_665(Local_370[iVar0 /*10*/], Global_35, 1, 1) <= 6f)
			{
				func_1428(Local_370[iVar0 /*10*/], Global_35);
			}
			else if (TASK::_0x508F5053E3F6F0C4(Local_370[iVar0 /*10*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1f))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_370[iVar0 /*10*/]);
			}
		}
		iVar0++;
	}
}

void func_1699(char[4] cParam0)
{
	struct<8> Var0;
	func_2211(cParam0);
	if (__LIB_8__::func_587(cParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_8__::func_587(cParam0) == 0 && !__LIB_6__::func_862(cParam0, 8))
	{
		__LIB_8__::func_668(cParam0);
	}
	__LIB_5__::func_326(&(cParam0->f_10792));
	__LIB_8__::func_696(cParam0);
	__LIB_8__::func_638(cParam0, 67108864);
	__LIB_8__::func_638(cParam0, 8192);
	__LIB_6__::func_887(cParam0, 4);
	__LIB_6__::func_887(cParam0, 512);
	__LIB_6__::func_887(cParam0, 65536);
	__LIB_6__::func_887(cParam0, 1024);
	__LIB_6__::func_887(cParam0, 262144);
	__LIB_6__::func_887(cParam0, 16777216);
	__LIB_6__::func_887(cParam0, 64);
	__LIB_6__::func_881(cParam0, 128);
	__LIB_6__::func_868(cParam0, -2147483648);
	__LIB_6__::func_896(cParam0, 1);
	if (__LIB_6__::func_872(cParam0, 4194304))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_6__::func_881(cParam0, 4194304);
	__LIB_6__::func_881(cParam0, 8388608);
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 64) || !__LIB_6__::func_871(cParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_6__::func_862(cParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_0__::func_37(&(cParam0->f_13106));
	__LIB_1__::func_148(&(cParam0->f_13112));
	__LIB_9__::func_213(cParam0, __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1));
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_8__::func_697(cParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	__LIB_9__::func_37(cParam0);
	if (__LIB_6__::func_864(cParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_9__::func_56(cParam0, 16);
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

void func_1864(int iParam0)
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
	func_184(iParam0, 1, 1, -142743235, 1);
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
		func_184(uVar18[iVar36], 1, 1, -142743235, 1);
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
					__LIB_9__::func_2(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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

void func_1869(struct<6> Param0)
{
	if (!func_2344(Param0.f_4, 1))
	{
	}
	if (!func_2344(Param0, 1))
	{
	}
	if (!func_2344(Param0.f_2, 1))
	{
	}
	if (!func_2344(Param0.f_5, 1))
	{
	}
	if (!func_2344(Param0.f_3, 1))
	{
	}
	if (!func_2344(Param0.f_1, 1))
	{
	}
}

void func_1935(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1009(iParam0);
	}
	else
	{
		func_2394(iParam0);
	}
}

void func_1936(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_9__::func_931(iParam0);
	}
	else
	{
		__LIB_4__::func_663(iParam0);
	}
}

void func_1939()
{
	char* sVar0;
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[3], "s_base_end", 1))
	{
		if (__LIB_0__::func_75(&(Local_1571[0 /*10*/].f_4)))
		{
			if (__LIB_0__::func_265(&(Local_1571[0 /*10*/].f_4)) >= 3f)
			{
				if (__LIB_0__::func_27(iLocal_1717, 512))
				{
					sVar0 = "pbl_Idle_1";
				}
				else
				{
					sVar0 = "pbl_Idle_2";
				}
				if (__LIB_6__::func_895(iLocal_1720[3], sVar0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1720[3], sVar0, true);
					if (__LIB_0__::func_27(iLocal_1717, 512))
					{
						__LIB_1__::func_681(&iLocal_1717, 512);
					}
					else
					{
						__LIB_1__::func_683(&iLocal_1717, 512);
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&(Local_1571[0 /*10*/].f_4));
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_1571[0 /*10*/].f_4));
	}
}

void func_1955(char[4] cParam0)
{
	struct<4> Var0;
	Var0 = { __LIB_8__::func_688(cParam0, __LIB_9__::func_40(cParam0)) };
	func_2404(cParam0, &Var0);
}

Vector3 func_1957(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 5:
			vVar0 = { 3286.604f, -1307.693f, 50.7219f };
			break;
		case 7:
			vVar0 = { 3291.85f, -1316.677f, 41.7663f };
			break;
		case 6:
			vVar0 = { 3286.395f, -1309.638f, 41.7859f };
			break;
		case 11:
			vVar0 = { 3291.825f, -1320.581f, 41.73196f };
			break;
		case 9:
			vVar0 = { 3286.563f, -1325.011f, 41.7319f };
			break;
		case 10:
			vVar0 = { 3289.186f, -1324.705f, 41.7407f };
			break;
		case 8:
			vVar0 = { 3285.05f, -1316.583f, 41.7449f };
			break;
		case 12:
			vVar0 = { 3287.926f, -1331.335f, 42.95656f };
			break;
		case 13:
			vVar0 = { 3290.184f, -1329.212f, 41.73124f };
			break;
		case 14:
			vVar0 = { 3293.196f, -1325.973f, 41.7002f };
			break;
		case 15:
			vVar0 = { 3288.264f, -1334.634f, 44.35224f };
			break;
		case 16:
			vVar0 = { 3284.51f, -1309.962f, 41.7635f };
			break;
		case 17:
			vVar0 = { 3291.485f, -1309.608f, 41.7804f };
			break;
		case 18:
			vVar0 = { 3290.663f, -1334.582f, 45.1748f };
			break;
		case 19:
			vVar0 = { 3292.286f, -1333.609f, 45.5703f };
			break;
		case 20:
			vVar0 = { 3292.315f, -1330.373f, 45.5585f };
			break;
		case 26:
			vVar0 = { 3285.95f, -1306.701f, 41.8383f };
			break;
		case 27:
			vVar0 = { 3290.769f, -1307.044f, 41.8325f };
			break;
		case 28:
			vVar0 = { 3292.252f, -1316.278f, 45.5685f };
			break;
	}
	return vVar0;
}

int func_1959(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	bLocal_1818 = true;
	return __LIB_8__::func_931(iParam0, vParam1, fParam4, iParam5, fParam6, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12, 0, 0);
}

bool func_1967(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	fVar6 = (vVar0.z - vVar3.z);
	fVar6 = MISC::ABSF(fVar6);
	if (fVar6 <= 0.75f)
	{
		return false;
	}
	return true;
}

void func_1968(char[4] cParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_79[iVar0 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_79[iVar0 /*10*/]))
		{
			if ((__LIB_0__::func_48(Local_79[iVar0 /*10*/], Global_35, 3f, 1) && !func_1967(Global_35, Local_79[iVar0 /*10*/])) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				if (!__LIB_0__::func_75(&(Local_79[iVar0 /*10*/].f_4)))
				{
					__LIB_1__::func_148(&(Local_79[iVar0 /*10*/].f_4));
				}
				else if (__LIB_0__::func_265(&(Local_79[iVar0 /*10*/].f_4)) >= 6f)
				{
					__LIB_9__::func_42(cParam0, Local_79[iVar0 /*10*/], "IND3_GUARDA", 0);
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_79[iVar0 /*10*/]) != 0)
					{
						sVar1 = "IND3_LOITER_INS";
					}
					else
					{
						sVar1 = "IND3_LOITER_OUT";
					}
					if (__LIB_8__::func_711(cParam0, sVar1, 0))
					{
						__LIB_0__::func_37(&(Local_79[iVar0 /*10*/].f_4));
					}
				}
			}
			else if (__LIB_0__::func_75(&(Local_79[iVar0 /*10*/].f_4)))
			{
				__LIB_0__::func_37(&(Local_79[iVar0 /*10*/].f_4));
			}
		}
		iVar0++;
	}
}

bool func_1983(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	iVar1 = __LIB_1__::func_47(iParam0);
	if (iVar1 == -1)
	{
		return false;
	}
	iVar4 = __LIB_1__::func_55(iVar1);
	if (iVar4 == -1)
	{
		return false;
	}
	iVar5 = __LIB_1__::func_66(iVar4, iParam4);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_DYNAMIC_SCENARIO"), true);
	PED::SET_PED_RESET_FLAG(Global_35, 219, true);
	PED::SET_PED_RESET_FLAG(Global_35, 220, true);
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar5))
	{
		__LIB_1__::func_78(iVar4);
		if (Global_1392915.f_121[iVar1 /*20*/].f_2)
		{
			__LIB_1__::func_211(iVar4, 65536);
		}
		*uParam1 = { Global_1392915[iVar1 /*12*/] };
		uParam1->f_11 = iVar1;
		uParam1->f_12 = iVar4;
		uParam1->f_14 = { uParam1->f_6 };
		uParam1->f_17 = uParam1->f_9;
		uParam1->f_18 = BUILTIN::TO_FLOAT(uParam1->f_10);
		if (iParam3 == 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam1->f_23)
			{
				if (__LIB_4__::func_897(iVar4, uParam1->f_14, uParam1->f_17, iVar0, &iVar2, 0, 0))
				{
					uParam1->f_23[iVar0] = iVar2;
					if (iVar2 == Global_35)
					{
						uParam1->f_30 = iVar0;
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < uParam1->f_23)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_23[iVar0]))
			{
				if (uParam1->f_23[iVar0] == Global_35)
				{
					uParam1->f_30 = iVar0;
				}
			}
			iVar0++;
		}
		if (iParam0 == 0)
		{
			__LIB_1__::func_213(23, 1);
		}
		WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, false);
		if (uParam1->f_12 != 5 && uParam1->f_12 != 6)
		{
			HUD::_HIDE_HUD_COMPONENT(372886907);
		}
		*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar5, uParam1, 34, 6500);
		__LIB_1__::func_79();
		__LIB_1__::func_227();
		__LIB_16__::func_436(Global_1392915[iVar1 /*12*/].f_4, 1, 0);
		Global_1899528.f_45[iVar4] = __LIB_0__::func_23();
		__LIB_1__::func_446(&(Global_1899528.f_45[iVar4]), 0, 0, Global_1899528.f_53[iVar4], 0, 0, 0, 0);
		__LIB_6__::func_376(iVar1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		if (__LIB_1__::func_80(iVar4, &uVar3))
		{
			__LIB_1__::func_228(uVar3);
		}
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar5);
		return true;
	}
	return false;
}

void func_1985(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 3))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
			case 2:
				if (iVar0 == iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				break;
			case 5:
				if (iVar0 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
		}
		__LIB_12__::func_435(3);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 4))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
			case 2:
				if (iVar0 == iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				break;
			case 5:
				if (iVar0 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
		}
		__LIB_12__::func_435(4);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 5))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
			case 2:
				if (iVar0 == iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				break;
			case 5:
				if (iVar0 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
		}
		__LIB_12__::func_435(5);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 6))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
			case 2:
				if (iVar0 == iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				break;
			case 5:
				if (iVar0 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
		}
		__LIB_12__::func_435(6);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 7))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
			case 2:
				if (iVar0 != iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				if (iVar0 != iLocal_49)
				{
					__LIB_1__::func_681(&iLocal_1718, 16);
				}
				__LIB_1__::func_683(&iLocal_1718, 32);
				break;
			case 5:
				if (iVar0 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
		}
		__LIB_12__::func_435(7);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 8))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 2:
				__LIB_1__::func_681(&iLocal_1718, 16);
				__LIB_1__::func_683(&iLocal_1718, 128);
				break;
		}
		__LIB_12__::func_435(8);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 10))
	{
		if ((iVar0 == iLocal_49 && !__LIB_0__::func_27(iLocal_1718, 32)) && !__LIB_0__::func_27(iLocal_1718, 128))
		{
			__LIB_1__::func_683(&iLocal_1718, 16);
		}
		__LIB_12__::func_435(10);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 11))
	{
		if ((iVar0 == iLocal_49 && !__LIB_0__::func_27(iLocal_1718, 32)) && !__LIB_0__::func_27(iLocal_1718, 128))
		{
			__LIB_1__::func_683(&iLocal_1718, 16);
		}
		__LIB_12__::func_435(11);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 12))
	{
		if ((iVar0 == iLocal_49 && !__LIB_0__::func_27(iLocal_1718, 32)) && !__LIB_0__::func_27(iLocal_1718, 128))
		{
			__LIB_1__::func_683(&iLocal_1718, 16);
		}
		if (iVar0 == iLocal_50)
		{
			__LIB_1__::func_683(&iLocal_1716, 67108864);
		}
		if (iVar0 == iLocal_49)
		{
			__LIB_3__::func_20(2, cParam0->f_7375.f_804);
			__LIB_1__::func_211(2, 8192);
		}
		__LIB_12__::func_435(12);
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 13))
	{
		if (iVar0 == iLocal_48)
		{
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			__LIB_8__::func_711(cParam0, "IND3_TARGETWIN1", 0);
			__LIB_1__::func_683(&iLocal_1717, 1073741824 /* Float: 2f */);
		}
		__LIB_1__::func_683(&iLocal_1716, 67108864);
		__LIB_12__::func_435(13);
	}
}

void func_1986(char[4] cParam0)
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar1 = __LIB_6__::func_864(cParam0);
	bVar2 = false;
	if (((((__LIB_1__::func_77(2, 4096) && !AUDIO::_0xA2CAC9DEF0195E6F(1)) && !__LIB_0__::func_27(iLocal_1717, 4096)) && !__LIB_0__::func_27(iLocal_1717, 32768)) && !__LIB_0__::func_27(iLocal_1717, 524288)) && !__LIB_0__::func_27(iLocal_1717, 2097152))
	{
		__LIB_1__::func_212(2, 4096);
	}
	if (__LIB_0__::func_27(iLocal_1717, 4096))
	{
		if (!__LIB_1__::func_322(sLocal_4409) && __LIB_8__::func_711(cParam0, "IND3_DESREACT1", 0))
		{
			__LIB_1__::func_681(&iLocal_1717, 4096);
			__LIB_1__::func_683(&iLocal_1717, 8192);
		}
	}
	else if (__LIB_0__::func_27(iLocal_1717, 32768))
	{
		if (!__LIB_1__::func_322(sLocal_4409) && __LIB_8__::func_711(cParam0, "IND3_DESREACT2", 0))
		{
			__LIB_1__::func_681(&iLocal_1717, 32768);
			__LIB_1__::func_683(&iLocal_1717, 65536);
		}
	}
	else if (__LIB_0__::func_27(iLocal_1717, 524288))
	{
		if (!__LIB_1__::func_322(sLocal_4409) && __LIB_8__::func_711(cParam0, "IND3_DESREACT3", 0))
		{
			__LIB_1__::func_681(&iLocal_1717, 524288);
			__LIB_1__::func_683(&iLocal_1717, 1048576);
		}
	}
	else if (__LIB_0__::func_27(iLocal_1717, 2097152))
	{
		if (!__LIB_1__::func_322("IND3_DESRAISE4") && __LIB_8__::func_711(cParam0, "IND3_DESAGRR", 0))
		{
			__LIB_1__::func_681(&iLocal_1717, 2097152);
			__LIB_1__::func_683(&iLocal_1717, 4194304);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 3))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 0:
				sVar0 = "IND3_PLR1CALL1";
				bVar2 = true;
				break;
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				sVar0 = "IND3_PLR2CALL1";
				bVar2 = true;
				break;
			case 3:
				sVar0 = "IND3_PLR3CALL1";
				bVar2 = true;
				break;
			case 2:
				if (iVar1 == iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				if (iVar1 == iLocal_48)
				{
					sVar0 = "IND3_ARTCALL1";
				}
				else
				{
					sVar0 = "IND3_PLYRCALL";
				}
				break;
			case 5:
				if (iVar1 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				sVar0 = "IND3_TARGTCALL";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_1__::func_211(2, 4096);
				if (bVar2)
				{
					if (!__LIB_0__::func_27(iLocal_1717, 8192))
					{
						if (!__LIB_0__::func_27(iLocal_1717, 4096))
						{
							__LIB_1__::func_683(&iLocal_1717, 4096);
							sLocal_4409 = sVar0;
						}
					}
					else if ((!__LIB_0__::func_27(iLocal_1717, 65536) && __LIB_0__::func_27(iLocal_1717, 8192)) && __LIB_0__::func_27(iLocal_1717, 16384))
					{
						if (!__LIB_0__::func_27(iLocal_1717, 32768))
						{
							__LIB_1__::func_683(&iLocal_1717, 32768);
							sLocal_4409 = sVar0;
						}
					}
				}
				__LIB_12__::func_435(3);
			}
		}
		else
		{
			__LIB_12__::func_435(3);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 4))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 0:
				break;
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
			case 3:
				break;
			case 2:
				if (iVar1 == iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				sVar0 = "IND3_PLYRCHK";
				break;
			case 5:
				if (iVar1 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_1__::func_211(2, 4096);
				__LIB_12__::func_435(4);
			}
		}
		else
		{
			__LIB_12__::func_435(4);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 5))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 0:
				break;
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
			case 3:
				break;
			case 2:
				if (iVar1 == iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				if (iVar1 == iLocal_48)
				{
					sVar0 = "IND3_ARTRAISE1";
				}
				else
				{
					sVar0 = "IND3_PLYRRAISE";
				}
				break;
			case 5:
				if (iVar1 == iLocal_48)
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					switch (iVar3)
					{
						case 0:
							sVar0 = "IND3_DESRAISE1";
							break;
						case 1:
							sVar0 = "IND3_DESRAISE2";
							break;
						case 2:
							sVar0 = "IND3_DESRAISE3";
							break;
					}
				}
				else if (iVar1 == iLocal_49)
				{
					bVar2 = true;
					iLocal_4410++;
					sVar0 = "IND3_DESRAISE4";
				}
				if (iVar1 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_1__::func_211(2, 4096);
				if (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1) == 5 && iVar1 == iLocal_48)
				{
					if (!__LIB_0__::func_27(iLocal_1717, 16384))
					{
						__LIB_1__::func_683(&iLocal_1717, 16384);
					}
					else if (!__LIB_0__::func_27(iLocal_1717, 131072))
					{
						__LIB_1__::func_683(&iLocal_1717, 131072);
					}
					else if (!__LIB_0__::func_27(iLocal_1717, 262144))
					{
						__LIB_1__::func_683(&iLocal_1717, 262144);
					}
				}
				if (bVar2 && iLocal_4410 >= 1)
				{
					if (!__LIB_0__::func_27(iLocal_1717, 4194304))
					{
						__LIB_1__::func_683(&iLocal_1717, 2097152);
					}
				}
				__LIB_12__::func_435(5);
			}
		}
		else
		{
			__LIB_12__::func_435(5);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 6))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 0:
				sVar0 = "IND3_PLR1ALLIN1";
				break;
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				sVar0 = "IND3_PLR2ALLIN1";
				break;
			case 3:
				sVar0 = "IND3_PLR3ALLIN1";
				break;
			case 2:
				if (iVar1 == iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				if (iVar1 == iLocal_50)
				{
					__LIB_1__::func_683(&iLocal_1716, 1073741824 /* Float: 2f */);
					sVar0 = "IND3_ARTALLIN";
				}
				else
				{
					sVar0 = "IND3_PLYRALLIN";
				}
				break;
			case 5:
				if (iVar1 == iLocal_48)
				{
					sVar0 = "IND3_DESALLIN1";
				}
				else if (iVar1 == iLocal_49)
				{
					sVar0 = "IND3_DESALLIN2";
				}
				else if (iVar1 == iLocal_50)
				{
					sVar0 = "IND3_DESALLIN3";
				}
				if (iVar1 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				if (iVar1 == iLocal_50)
				{
					__LIB_1__::func_683(&iLocal_1716, 536870912);
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_1__::func_211(2, 4096);
				__LIB_12__::func_435(6);
			}
		}
		else
		{
			__LIB_12__::func_435(6);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 7))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 0:
				sVar0 = "";
				break;
			case 1:
				if (!__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				sVar0 = "";
				break;
			case 3:
				sVar0 = "";
				break;
			case 2:
				if (iVar1 != iLocal_48)
				{
					__LIB_1__::func_683(&iLocal_1718, 256);
				}
				__LIB_1__::func_681(&iLocal_1718, 16);
				__LIB_1__::func_683(&iLocal_1718, 32);
				if (iVar1 == iLocal_48)
				{
					sVar0 = "IND3_FOLD1";
					bVar2 = true;
				}
				else
				{
					sVar0 = "IND3_PLYRFOLD";
				}
				break;
			case 5:
				if (iVar1 != iLocal_48 && !__LIB_0__::func_27(iLocal_1718, 32))
				{
					__LIB_1__::func_683(&iLocal_1718, 16);
				}
				sVar0 = "";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_1__::func_211(2, 4096);
				if (bVar2 && !__LIB_0__::func_27(iLocal_1717, 1048576))
				{
					if (!__LIB_0__::func_27(iLocal_1717, 524288))
					{
						__LIB_1__::func_683(&iLocal_1717, 524288);
						sLocal_4409 = sVar0;
					}
				}
				__LIB_12__::func_435(7);
			}
		}
		else
		{
			__LIB_12__::func_435(7);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 8))
	{
		switch (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1))
		{
			case 0:
				sVar0 = "IND3_PLR1LOSE1";
				break;
			case 1:
				sVar0 = "IND3_PLR3LOSE1";
				break;
			case 3:
				sVar0 = "";
				break;
			case 2:
				__LIB_1__::func_681(&iLocal_1718, 16);
				__LIB_1__::func_683(&iLocal_1718, 128);
				if (iVar1 == iLocal_49)
				{
					if (!__LIB_0__::func_27(iLocal_1717, 33554432) && !__LIB_12__::func_424(14))
					{
						sVar0 = "IND3_TURN2";
					}
					else
					{
						sVar0 = "";
					}
				}
				else if (iVar1 == iLocal_50)
				{
					if (!__LIB_0__::func_27(iLocal_1717, 67108864))
					{
						sVar0 = "IND3_KKVSAA";
					}
					else
					{
						sVar0 = "";
					}
				}
				break;
			case 5:
				if (iVar1 == iLocal_48)
				{
					if (!__LIB_0__::func_27(iLocal_1717, 8388608))
					{
						sVar0 = "IND3_TURN1";
					}
					else
					{
						sVar0 = "";
					}
				}
				else if (iVar1 == iLocal_49)
				{
					if (!__LIB_0__::func_27(iLocal_1717, 16777216))
					{
						sVar0 = "IND3_REACT2";
					}
					else
					{
						sVar0 = "";
					}
				}
				else
				{
					sVar0 = "";
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_1__::func_211(2, 4096);
				__LIB_12__::func_435(8);
				if (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1) == 2)
				{
					if (iVar1 == iLocal_49)
					{
						__LIB_1__::func_683(&iLocal_1717, 33554432);
					}
					else if (iVar1 == iLocal_50)
					{
						__LIB_1__::func_683(&iLocal_1717, 67108864);
					}
				}
				else if (__LIB_5__::func_297(Global_1835011[34 /*74*/].f_1) == 5)
				{
					if (iVar1 == iLocal_48)
					{
						__LIB_1__::func_683(&iLocal_1717, 8388608);
					}
					else if (iVar1 == iLocal_49)
					{
						__LIB_1__::func_683(&iLocal_1717, 16777216);
					}
				}
			}
		}
		else
		{
			__LIB_12__::func_435(8);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 10))
	{
		__LIB_12__::func_435(10);
		if ((iVar1 == iLocal_49 && !__LIB_0__::func_27(iLocal_1718, 32)) && !__LIB_0__::func_27(iLocal_1718, 128))
		{
			__LIB_1__::func_683(&iLocal_1718, 16);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 11))
	{
		if (iVar1 == iLocal_50)
		{
			sVar0 = "IND3_HAND3RIVER";
		}
		if ((iVar1 == iLocal_49 && !__LIB_0__::func_27(iLocal_1718, 32)) && !__LIB_0__::func_27(iLocal_1718, 128))
		{
			__LIB_1__::func_683(&iLocal_1718, 16);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_12__::func_435(11);
			}
		}
		else
		{
			__LIB_12__::func_435(11);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 12))
	{
		if (iVar1 == iLocal_50)
		{
			__LIB_1__::func_683(&iLocal_1716, 67108864);
			sVar0 = "IND3_TURN3";
		}
		if ((iVar1 == iLocal_49 && !__LIB_0__::func_27(iLocal_1718, 32)) && !__LIB_0__::func_27(iLocal_1718, 128))
		{
			__LIB_1__::func_683(&iLocal_1718, 16);
		}
		if (iVar1 == iLocal_49)
		{
			__LIB_3__::func_20(2, cParam0->f_7375.f_804);
			__LIB_1__::func_211(2, 8192);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_12__::func_435(12);
				__LIB_1__::func_683(&iLocal_1717, 1073741824 /* Float: 2f */);
			}
		}
		else
		{
			__LIB_12__::func_435(12);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 13))
	{
		if (iVar1 == iLocal_48)
		{
			sVar0 = "IND3_TARGETWIN1";
			__LIB_1__::func_683(&iLocal_1717, 1073741824 /* Float: 2f */);
		}
		__LIB_1__::func_683(&iLocal_1716, 67108864);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_1__::func_683(&iLocal_1717, 1073741824 /* Float: 2f */);
				__LIB_12__::func_435(13);
			}
		}
		else
		{
			__LIB_12__::func_435(13);
		}
	}
	else if (MISC::IS_BIT_SET(__LIB_0__::func_895(Global_1835011[34 /*74*/].f_1), 9))
	{
		if (iVar1 == iLocal_48)
		{
			switch (iLocal_4455)
			{
				case 0:
					sVar0 = "IND3_PLR1LONG1";
					break;
				case 1:
					sVar0 = "IND3_PLR2LONG1";
					break;
				case 2:
					sVar0 = "IND3_PLR3LONG1";
					break;
				default:
					if (__LIB_1__::func_985())
					{
						sVar0 = "IND3_PLYRLONGT";
					}
					else
					{
						sVar0 = "IND3_PLYRLONGD";
					}
					break;
			}
			iLocal_4455++;
		}
		else if (__LIB_1__::func_985())
		{
			sVar0 = "IND3_PLYRLONGT";
		}
		else
		{
			sVar0 = "IND3_PLYRLONGD";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (__LIB_8__::func_711(cParam0, sVar0, 0))
			{
				__LIB_12__::func_435(9);
			}
		}
		else
		{
			__LIB_12__::func_435(9);
		}
	}
}

void func_1987()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[28], false))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1766))
		{
			iLocal_1766 = OBJECT::CREATE_OBJECT(iLocal_26, 3284.63f, -1321.78f, 41.72f, true, true, false, false, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[28], "p_glass03x", iLocal_1766, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[28], "STRAUSS", Local_1571[2 /*10*/], 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_1720[28]);
		func_1474(1);
	}
}

void func_1988()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1720[29], false))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1766))
		{
			iLocal_1766 = OBJECT::CREATE_OBJECT(iLocal_26, 3284.63f, -1321.78f, 41.72f, true, true, false, false, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[29], "p_glass03x", iLocal_1766, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[29], "STRAUSS", Local_1571[2 /*10*/], 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_1720[29]);
		func_1474(1);
	}
}

bool func_1989(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_864(cParam0) == iLocal_48)
	{
		iVar0 = 27;
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_49)
	{
		iVar0 = 28;
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_50)
	{
		iVar0 = 29;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Chin_Idle", 1) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1720[iVar0], "Glance_Idle", 1))
	{
		return true;
	}
	return false;
}

char* func_1990(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) + 1;
	switch (iVar0)
	{
		case 1:
			return sParam0;
		case 2:
			return sParam1;
		case 3:
			return sParam2;
		case 4:
			return sParam3;
		default:
			break;
	}
	return sParam0;
}

char* func_2004(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 5:
			sVar0 = "P_DOORRIVERBOAT01X";
			break;
		case 6:
			sVar0 = "P_DOORRIVERBOAT01X^1";
			break;
		case 7:
			sVar0 = "P_DOORRIVERBOAT01X^2";
			break;
		case 8:
			sVar0 = "P_DOORRIVERBOAT01X^3";
			break;
	}
	return sVar0;
}

void func_2005(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	switch (iParam0)
	{
		case 5:
			vVar0 = { 3286.639f, -1307.674f, 50.7422f };
			fVar3 = 332.3098f;
			break;
		case 7:
			vVar0 = { 3291.785f, -1317.563f, 42.6767f };
			fVar3 = -21.43f;
			break;
		case 6:
			vVar0 = { 3285.441f, -1310.524f, 41.7755f };
			fVar3 = 175.1475f;
			break;
		case 11:
			vVar0 = { 3286.301f, -1322.118f, 42.6622f };
			fVar3 = -77.74f;
			break;
		case 9:
			vVar0 = { 3292.872f, -1326.449f, 42.6755f };
			fVar3 = -15.72f;
			break;
		case 10:
			vVar0 = { 3290.075f, -1325.615f, 42.6366f };
			fVar3 = 17.3f;
			break;
		case 8:
			vVar0 = { 3285.988f, -1326.261f, 42.6932f };
			fVar3 = -18.52f;
			break;
		case 12:
			vVar0 = { 3281.309f, -1335.318f, 45.6094f };
			fVar3 = 332.3098f;
			break;
		case 13:
			vVar0 = { 3280.634f, -1335.891f, 45.6251f };
			fVar3 = 332.3098f;
			break;
		case 14:
			vVar0 = { 3295.832f, -1331.058f, 41.772f };
			fVar3 = 354.3098f;
			break;
		case 15:
			vVar0 = { 3295.237f, -1335.515f, 45.6399f };
			fVar3 = 792.3098f;
			break;
		case 16:
			vVar0 = { 3279.912f, -1307.425f, 41.7525f };
			fVar3 = 596.3098f;
			break;
		case 18:
			vVar0 = { 3296.465f, -1335.074f, 45.6445f };
			fVar3 = 94.4198f;
			break;
		case 19:
			vVar0 = { 3280.996f, -1338.568f, 45.6588f };
			fVar3 = 326.3098f;
			break;
		case 20:
			vVar0 = { 3281.242f, -1326.602f, 45.613f };
			fVar3 = 266.3098f;
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_79[iParam0 /*10*/]))
	{
		func_893(Local_79[iParam0 /*10*/], vVar0, fVar3, 2, 1073741824 /* Float: 2f */);
	}
}

int func_2007()
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 9999f;
	iVar3 = 0;
	while (iVar3 < 29)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79[iVar3 /*10*/]))
		{
			fVar2 = __LIB_0__::func_665(Local_79[iVar3 /*10*/], Global_35, 1, 1);
			if (fVar2 < fVar1)
			{
				fVar1 = fVar2;
				uVar0 = Local_79[iVar3 /*10*/];
			}
		}
		iVar3++;
	}
	return uVar0;
}

bool func_2008(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	return false;
}

bool func_2009(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_79[iParam0 /*10*/]) && __LIB_0__::func_27(Local_79[iParam0 /*10*/].f_1, 4))
	{
		return true;
	}
	return false;
}

void func_2010()
{
	Local_4386.f_13 = 1;
	Local_4386.f_15 = 1;
	Local_4386.f_12 = 1;
	Local_4386.f_7 = 100f;
	if (__LIB_1__::func_985())
	{
		Local_4386 = { 3285.14f, -1334.19f, 47.24f };
		Local_4386.f_3 = { 3289.38f, -1305.06f, 44.3f };
	}
	else
	{
		Local_4386 = { 3291.81f, -1334.08f, 47.27f };
		Local_4386.f_3 = { 3287.61f, -1305.04f, 44.32f };
	}
	Local_4386.f_6 = joaat("WEAPON_REPEATER_WINCHESTER");
	MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Local_4386);
}

int func_2011()
{
	int iVar0;
	int iVar1;
	iVar1 = 6;
	while (iVar1 <= 20)
	{
		if (__LIB_0__::func_27(Local_79[iVar1 /*10*/].f_1, 4))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_2019(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[29];
	int iVar33;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_79[iVar1 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(Local_79[iVar1 /*10*/])) && (!bParam0 || !__LIB_0__::func_27(Local_79[iVar1 /*10*/].f_1, 256)))
		{
			iVar3[iVar2] = iVar1;
			iVar2++;
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
		iVar33 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		iVar0 = iVar3[iVar33];
	}
	return iVar0;
}

int func_2042(int iParam0, int iParam1)
{
	var uVar0;
	return func_2447(&uVar0, iParam0, iParam1);
}

void func_2064(char[4] cParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_8__::func_645(cParam0)))
	{
		__LIB_8__::func_660(cParam0);
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
	if (!__LIB_9__::func_133(cParam0, iParam1))
	{
		func_2469(cParam0, iParam1, 442232, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(cParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(cParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

void func_2175(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	if (!ENTITY::IS_ENTITY_DEAD(Local_370[iParam0 /*10*/]))
	{
		switch (iParam0)
		{
			case 10:
				bVar0 = true;
				break;
			case 11:
				iVar1 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				iVar2 = "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				vVar3 = { 3291.231f, -1328.306f, 41.7186f };
				break;
			case 12:
				bVar0 = true;
				break;
			case 17:
				bVar0 = true;
				break;
			case 13:
				bVar0 = true;
				break;
			case 18:
				bVar0 = true;
				break;
			case 14:
				bVar0 = true;
				break;
			case 25:
				bVar0 = true;
				break;
			case 16:
				bVar0 = true;
				break;
			case 19:
				bVar0 = true;
				break;
			case 23:
				bVar0 = true;
				break;
			case 24:
				bVar0 = true;
				break;
			case 20:
				bVar0 = true;
				break;
			case 21:
				bVar0 = true;
				break;
			case 22:
				bVar0 = true;
				break;
			case 26:
				iVar1 = joaat("WORLD_HUMAN_DRINKING");
				break;
			case 28:
				iVar1 = joaat("PROP_HUMAN_SEAT_CHAIR");
				vVar3 = { 3291.14f, -1315.96f, 42.22f };
				break;
			case 29:
				iVar1 = joaat("WORLD_HUMAN_STAND_WAITING");
				break;
		}
		if (iParam0 >= 30 && iParam0 <= 53)
		{
			bVar0 = true;
		}
		OBJECT::SET_FORCE_OBJECT_THIS_FRAME(ENTITY::GET_ENTITY_COORDS(Local_370[iParam0 /*10*/], true, false) - Vector(1f, 0f, 0f), 3f);
		switch (Local_370[iParam0 /*10*/].f_2)
		{
			case 0:
				if (bVar0)
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_370[iParam0 /*10*/], ENTITY::GET_ENTITY_COORDS(Local_370[iParam0 /*10*/], true, false) - Vector(1f, 0f, 0f), 1f, 0, true, false, true, false);
				}
				else if (iVar1 != 0)
				{
					if (!__LIB_0__::func_86(vVar3))
					{
						iVar6 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar3, iVar1, 0.5f, 0, false);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar6))
						{
							TASK::_TASK_USE_SCENARIO_POINT(Local_370[iParam0 /*10*/], iVar6, iVar2, -1, false, true, 0, false, -1f, false);
						}
						else
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_370[iParam0 /*10*/], vVar3, 0.5f, -1, true, false, true, false);
						}
					}
					else
					{
						__LIB_1__::func_473(Local_370[iParam0 /*10*/], iVar1, 0, 0, 0, -1082130432 /* Float: -1f */);
					}
				}
				Local_370[iParam0 /*10*/].f_2++;
				break;
			case 1:
				Local_370[iParam0 /*10*/].f_2 = (Local_370[iParam0 /*10*/].f_2 - 1);
				break;
		}
	}
}

bool func_2184(int iParam0)
{
	int iVar0;
	if (iParam0 == 1)
	{
		iVar0 = 842874640;
	}
	else if (iParam0 == 0)
	{
		iVar0 = -662975882;
	}
	else
	{
		return false;
	}
	if (PED::_IS_PED_CARRYING(Global_35) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) == iVar0)
	{
		return true;
	}
	return false;
}

void func_2188(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_758 = 0;
	uParam0->f_762 = 0;
	uParam0->f_778 = iParam5;
	uParam0->f_779 = 0;
	StringCopy(&(uParam0->f_4[0 /*8*/]), "face_human@mini_games@generic", 64);
	StringCopy(&(uParam0->f_4[1 /*8*/]), "face_human@mini_games@poker", 64);
	StringCopy(&(uParam0->f_21[0 /*8*/]), "p_m_zero", 64);
	StringCopy(&(uParam0->f_21[1 /*8*/]), "gen_male", 64);
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_1098 = 0;
	__LIB_18__::func_530(uParam0);
	func_2578(uParam0);
	__LIB_12__::func_304(uParam0);
	__LIB_12__::func_305(uParam0);
	__LIB_12__::func_306(uParam0);
	__LIB_12__::func_307(uParam0);
	__LIB_12__::func_308(uParam0);
	__LIB_12__::func_309(uParam0);
}

void func_2192(int iParam0, int iParam1)
{
	Local_1821[iParam0 /*1279*/].f_1277 = iParam1;
}

bool func_2195(char[4] cParam0)
{
	int iVar0;
	iVar0 = 13;
	while (iVar0 <= 24)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_370[iVar0 /*10*/]))
		{
			func_1478(cParam0, iVar0, 1);
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_2196(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	uParam0->f_616[iParam1 /*9*/].f_8 = iParam2;
	iVar7 = 0;
	while (iVar7 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_616[iParam1 /*9*/].f_5[iVar7]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_616[iParam1 /*9*/].f_5[iVar7]));
		}
		uParam0->f_616[iParam1 /*9*/].f_5[iVar7] = 0;
		if (!__LIB_12__::func_361(uParam0, uParam0->f_616[iParam1 /*9*/][iVar7 /*2*/], &iVar0))
		{
			iVar0 = uParam0->f_693;
			if (bParam4)
			{
			}
		}
		if (iParam2 != 5)
		{
			if (!func_2591(uParam0, iParam1, iVar7, iParam2, &vVar1, &vVar4, 1))
			{
			}
			else
			{
				Jump @180; //curOff = 153
				if (!func_2591(uParam0, iParam3, iVar7, iParam2, &vVar1, &vVar4, 1))
				{
				}
				else
				{
					iVar8 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
					{
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar8, vVar1, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(iVar8, vVar4, 2, true);
						ENTITY::SET_ENTITY_COLLISION(iVar8, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
						uParam0->f_616[iParam1 /*9*/].f_5[iVar7] = iVar8;
					}
				}
			}
			iVar7++;
		}
	}
}

int func_2197(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (bParam6)
	{
		iVar1 = uParam0->f_73[iParam1 /*30*/].f_5[iParam2];
		iVar2 = uParam0->f_73[iParam1 /*30*/].f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		__LIB_12__::func_399(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_73[iParam1 /*30*/][iParam2]));
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_692;
		if (!func_2593(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		AUDIO::_0x06C5DF5EE444BC6B(iParam1, iParam2, vVar5);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		__LIB_9__::func_932(iVar3, iParam5, 0);
		__LIB_12__::func_400(iVar3, iParam3);
	}
	uParam0->f_73[iParam1 /*30*/][iParam2] = iVar3;
	uParam0->f_73[iParam1 /*30*/].f_5[iParam2] = iParam3;
	uParam0->f_73[iParam1 /*30*/].f_10[iParam2] = iParam4;
	return 1;
}

int func_2198(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (bParam6)
	{
		iVar1 = uParam0->f_254[iParam1 /*30*/].f_5[iParam2];
		iVar2 = uParam0->f_254[iParam1 /*30*/].f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			if (iVar2 > 0)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 1;
			}
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		__LIB_12__::func_403(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_254[iParam1 /*30*/][iParam2]));
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_692;
		if (!func_2597(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		__LIB_9__::func_932(iVar3, iParam5, 0);
		__LIB_12__::func_400(iVar3, iParam3);
	}
	uParam0->f_254[iParam1 /*30*/][iParam2] = iVar3;
	uParam0->f_254[iParam1 /*30*/].f_5[iParam2] = iParam3;
	uParam0->f_254[iParam1 /*30*/].f_10[iParam2] = iParam4;
	return 1;
}

int func_2199(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_671.f_11[iParam1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_671.f_11[iParam1]));
	}
	uParam0->f_671.f_11[iParam1] = 0;
	if (!__LIB_12__::func_361(uParam0, uParam0->f_671[iParam1 /*2*/], &iVar0))
	{
		iVar0 = uParam0->f_693;
		if (bParam3)
		{
		}
	}
	if (!func_2598(uParam0, iParam1, iParam2, &vVar1, &vVar4, 1))
	{
		return 0;
	}
	iVar7 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar7, vVar1, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar7, vVar4, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar7, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	uParam0->f_671.f_11[iParam1] = iVar7;
	return 1;
}

int func_2200(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11, bool bParam12)
{
	if (__LIB_19__::func_237(uParam0, iParam1, iParam2, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
	{
		if (iParam3 == 0)
		{
			__LIB_19__::func_238(uParam0, iParam1);
		}
		else if (!bParam11)
		{
			__LIB_19__::func_239(uParam0, iParam1, iParam3, fParam10);
		}
		else
		{
			__LIB_19__::func_240(uParam0, iParam1, bParam12);
		}
		return 1;
	}
	return 0;
}

void func_2202(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else if (iParam3 < 1)
	{
	}
	else if (iParam2 >= 4)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 10);
		__LIB_12__::func_438(uParam0, iParam1, 35);
		if (iParam2 < 0)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!__LIB_12__::func_404(uParam0, iParam1, iParam2))
				{
				}
				else
				{
					iParam2 = (iParam2 + 1 % 4);
					iVar0++;
				}
			}
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "Bet");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "BetType", BUILTIN::TO_FLOAT(iParam2));
		}
		uParam0->f_785[iParam1 /*52*/].f_19 = iParam2;
		uParam0->f_785[iParam1 /*52*/].f_20 = iParam3;
		uParam0->f_785[iParam1 /*52*/].f_21 = iParam4;
	}
}

void func_2211(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26)
	{
		return;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4096))
	{
		if (__LIB_6__::func_872(cParam0, 4) && !__LIB_6__::func_862(cParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2613(128);
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
			func_2614(cParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 33));
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8192))
	{
		if (__LIB_6__::func_862(cParam0, 1024) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

bool func_2344(int iParam0, int iParam1)
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
				if (func_2344(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2344(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2344(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2344(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_2394(int iParam0)
{
	Global_40.f_7731.f_16 = (Global_40.f_7731.f_16 - (Global_40.f_7731.f_16 && iParam0));
}

void func_2404(char[4] cParam0, char* sParam1)
{
	char cVar0[32];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false))
	{
		return;
	}
	StringCopy(&cVar0, sParam1, 32);
	func_1650(cVar0, &(cParam0->f_7375), cParam0);
}

int func_2447(var uParam0, int iParam1, int iParam2)
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
		return func_2447(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2469(char[4] cParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_133(cParam0, iParam1))
	{
		if (!__LIB_9__::func_38(cParam0, iParam1, &iVar0))
		{
			if (!__LIB_8__::func_701(cParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 1);
	cParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			cParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			cParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	cParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	cParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	cParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				cParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				cParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			cParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			cParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(cParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	cParam0->f_13145++;
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
			cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 442232;
			iVar1++;
		}
		__LIB_9__::func_134(cParam0, iParam1, 2, 4);
		__LIB_9__::func_135(cParam0, iParam1, 2500, 8);
		__LIB_9__::func_135(cParam0, iParam1, 2500, 512);
		__LIB_9__::func_136(cParam0, iParam1, 5000, 512);
		if (cParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_9__::func_137(cParam0, iParam1, -2147483648);
		}
	}
}

void func_2578(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_12__::func_329(uParam0, iVar0);
		iVar0++;
	}
	uParam0->f_764 = 0;
	uParam0->f_765 = -1;
	uParam0->f_767 = -1;
	uParam0->f_1099[0 /*3*/] = { 0.008654f, 1.171513f, 0.4999996f };
	uParam0->f_1118[0 /*3*/] = { 0f, 0f, 180f };
	uParam0->f_1099[1 /*3*/] = { 1.018887f, 0.5782621f, 0.4999996f };
	uParam0->f_1118[1 /*3*/] = { 0f, 0f, 120f };
	uParam0->f_1099[2 /*3*/] = { 1.010233f, -0.5932513f, 0.4999996f };
	uParam0->f_1118[2 /*3*/] = { 0f, 0f, 60f };
	uParam0->f_1099[3 /*3*/] = { -0.008654f, -1.171513f, 0.4999996f };
	uParam0->f_1118[3 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1099[4 /*3*/] = { -1.018887f, -0.5782621f, 0.4999996f };
	uParam0->f_1118[4 /*3*/] = { 0f, 0f, -60f };
	uParam0->f_1099[5 /*3*/] = { -1.010233f, 0.5932513f, 0.4999996f };
	uParam0->f_1118[5 /*3*/] = { 0f, 0f, -120f };
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_4__::func_883(*uParam0, uParam0->f_3, uParam0->f_1099[iVar0 /*3*/], uParam0->f_1118[iVar0 /*3*/], &(uParam0->f_1137[iVar0 /*3*/]), &(uParam0->f_1156[iVar0 /*3*/]));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		uParam0->f_1213[iVar1] = 509591;
		uParam0->f_1243[iVar1] = 509599;
		iVar1++;
	}
	StringCopy(&(uParam0->f_1175[0 /*8*/]), "mini_games@poker_mg@base", 64);
	StringCopy(&(uParam0->f_1175[1 /*8*/]), "mini_games@poker_mg@base_camp", 64);
	StringCopy(&(uParam0->f_1175[2 /*8*/]), "mini_games@poker_mg@relaxed", 64);
	StringCopy(&(uParam0->f_1175[3 /*8*/]), "mini_games@poker_mg@fem_base_camp", 64);
	uParam0->f_1208[0] = -1196886585;
	uParam0->f_1208[1] = 1937500030;
	uParam0->f_1208[2] = -521410981;
	uParam0->f_1208[3] = -1999305469;
	uParam0->f_1213[0] = 509591;
	uParam0->f_1213[1] = 509607;
	uParam0->f_1213[2] = 509615;
	uParam0->f_1213[3] = 509690;
	uParam0->f_1243[3] = 509880;
	uParam0->f_1213[4] = 509896;
	uParam0->f_1243[4] = 511089;
	uParam0->f_1213[5] = 511105;
	uParam0->f_1213[6] = 512304;
	uParam0->f_1213[7] = 515302;
	uParam0->f_1213[8] = 515514;
	uParam0->f_1213[9] = 515956;
	uParam0->f_1213[10] = 516216;
	uParam0->f_1213[11] = 516883;
	uParam0->f_1243[11] = 517896;
	uParam0->f_1213[12] = 517936;
	uParam0->f_1213[13] = 518333;
	uParam0->f_1213[14] = 518698;
	uParam0->f_1243[14] = 519465;
	uParam0->f_1213[15] = 519481;
	uParam0->f_1243[15] = 520424;
	uParam0->f_1213[16] = 520440;
	uParam0->f_1243[16] = 520956;
	uParam0->f_1213[17] = 520977;
	uParam0->f_1213[18] = 522019;
	uParam0->f_1213[19] = 522466;
	uParam0->f_1213[20] = 522812;
	uParam0->f_1243[20] = 523200;
	uParam0->f_1213[21] = 523216;
	uParam0->f_1243[21] = 523426;
	uParam0->f_1213[22] = 523442;
	uParam0->f_1243[22] = 523642;
	uParam0->f_1213[23] = 523658;
	uParam0->f_1243[23] = 524523;
	uParam0->f_1213[24] = 524539;
	uParam0->f_1243[24] = 525004;
	uParam0->f_1213[25] = 525020;
	uParam0->f_1213[26] = 525098;
	uParam0->f_1213[27] = 525661;
	uParam0->f_1213[28] = 526338;
}

bool func_2591(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = false;
	if (iParam3 == 1)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0252f, 0.57f, 0.8033f };
				vVar4 = { 0f, -180f, -172.5264f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0381f, 0.5555f, 0.805f };
				vVar4 = { 0f, 180f, 176.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.481f, 0.3068f, 0.8033f };
				vVar4 = { 0f, -180f, 127.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5001f, 0.2447f, 0.805f };
				vVar4 = { 0f, 180f, 116.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5062f, -0.2631f, 0.8033f };
				vVar4 = { 0f, -180f, 67.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.462f, -0.3108f, 0.805f };
				vVar4 = { 0f, 180f, 56.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0252f, -0.57f, 0.8033f };
				vVar4 = { 0f, -180f, 7.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0381f, -0.5555f, 0.805f };
				vVar4 = { 0f, 180f, -3.2269f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.481f, -0.3068f, 0.8033f };
				vVar4 = { 0f, -180f, -52.5263f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5001f, -0.2447f, 0.805f };
				vVar4 = { 0f, 180f, -63.2269f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5062f, 0.2631f, 0.8033f };
				vVar4 = { 0f, -180f, -112.5264f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.462f, 0.3108f, 0.805f };
				vVar4 = { 0f, 180f, -123.2269f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 2)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0002f, 0.5979f, 0.8033f };
				vVar4 = { 0f, -180f, -173.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0146f, 0.5994f, 0.805f };
				vVar4 = { 0f, 180f, 177.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5177f, 0.2991f, 0.8033f };
				vVar4 = { 0f, -180f, 126.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5264f, 0.2871f, 0.805f };
				vVar4 = { 0f, 180f, 117.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5179f, -0.2988f, 0.8033f };
				vVar4 = { 0f, -180f, 66.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5118f, -0.3123f, 0.805f };
				vVar4 = { 0f, 180f, 57.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0002f, -0.5979f, 0.8033f };
				vVar4 = { 0f, -180f, 6.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0146f, -0.5994f, 0.805f };
				vVar4 = { 0f, 180f, -2.7616f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5177f, -0.2991f, 0.8033f };
				vVar4 = { 0f, -180f, -53.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5264f, -0.2871f, 0.805f };
				vVar4 = { 0f, 180f, -62.7616f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5179f, 0.2988f, 0.8033f };
				vVar4 = { 0f, -180f, -113.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5118f, 0.3123f, 0.805f };
				vVar4 = { 0f, 180f, -122.7616f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 3)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0048f, 0.6125f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -5.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0198f, 0.613f, 0.8032f };
				vVar4 = { 0f, 0f, 0f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5281f, 0.3104f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -65.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5408f, 0.2893f, 0.8032f };
				vVar4 = { 0f, 0f, -60f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5328f, -0.3021f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -125.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.521f, -0.3237f, 0.8032f };
				vVar4 = { 0f, 0f, -120f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0048f, -0.6125f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 174.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0198f, -0.613f, 0.8032f };
				vVar4 = { 0f, 0f, 180f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5281f, -0.3104f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 114.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5408f, -0.2893f, 0.8032f };
				vVar4 = { 0f, 0f, 120f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5328f, 0.3021f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 54.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.521f, 0.3237f, 0.8032f };
				vVar4 = { 0f, 0f, 60f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 4)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0197f, 0.5193f, 0.8014f };
				vVar4 = { 0f, 180f, 135f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0276f, 0.513f, 0.8032f };
				vVar4 = { 0f, 180f, 126.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.4595f, 0.2426f, 0.8014f };
				vVar4 = { 0f, 180f, 75f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.458f, 0.2326f, 0.8032f };
				vVar4 = { 0f, 180f, 66.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.4399f, -0.2767f, 0.8014f };
				vVar4 = { 0f, 180f, 15f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.4304f, -0.2804f, 0.8032f };
				vVar4 = { 0f, 180f, 6.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0197f, -0.5193f, 0.8014f };
				vVar4 = { 0f, 180f, -45f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0276f, -0.513f, 0.8032f };
				vVar4 = { 0f, 180f, -53.2665f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.4595f, -0.2426f, 0.8014f };
				vVar4 = { 0f, 180f, -105f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.458f, -0.2326f, 0.8032f };
				vVar4 = { 0f, 180f, -113.2665f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.4399f, 0.2767f, 0.8014f };
				vVar4 = { 0f, 180f, -165f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.4304f, 0.2804f, 0.8032f };
				vVar4 = { 0f, 180f, -173.2665f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 5)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.2147f, 0.5145f, 0.803f };
				vVar4 = { 0f, -180f, -149.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.2194f, 0.5192f, 0.8034f };
				vVar4 = { 0f, -180f, -145.6939f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5529f, 0.0713f, 0.803f };
				vVar4 = { 0f, -180f, 150.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5593f, 0.0696f, 0.8034f };
				vVar4 = { 0f, -180f, 154.3062f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.3382f, -0.4432f, 0.803f };
				vVar4 = { 0f, -180f, 90.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.3399f, -0.4496f, 0.8034f };
				vVar4 = { 0f, -180f, 94.3061f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.2147f, -0.5145f, 0.803f };
				vVar4 = { 0f, -180f, 30.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.2194f, -0.5192f, 0.8034f };
				vVar4 = { 0f, -180f, 34.3061f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5529f, -0.0713f, 0.803f };
				vVar4 = { 0f, -180f, -29.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5593f, -0.0696f, 0.8034f };
				vVar4 = { 0f, -180f, -25.6939f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.3382f, 0.4432f, 0.803f };
				vVar4 = { 0f, -180f, -89.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.3399f, 0.4496f, 0.8034f };
				vVar4 = { 0f, -180f, -85.6939f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 0)
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam6)
		{
			__LIB_4__::func_883(*uParam0, uParam0->f_3, vVar1, vVar4, uParam4, uParam5);
		}
		else
		{
			*uParam4 = { vVar1 };
			*uParam5 = { vVar4 };
		}
		return true;
	}
	return false;
}

bool func_2593(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.2469f, -0.657f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		__LIB_4__::func_883(*uParam0, uParam0->f_3, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

bool func_2597(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 11.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 1.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 9.99f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0696f, 0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -48.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -58.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -50.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0316f, 0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -108.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -118.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -110.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.038f, 0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -168.8103f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -178.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -170.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 131.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 121.446f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 129.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 71.1897f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 61.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 69.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		__LIB_4__::func_883(*uParam0, uParam0->f_3, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

bool func_2598(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.1398f, 0.3457f, 0.803f };
			vVar4 = { 0f, 0f, 177.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.0686f, 0.3527f, 0.803f };
			vVar4 = { 0f, 0f, 179.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.0038f, 0.35f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.0748f, 0.3543f, 0.803f };
			vVar4 = { 0f, 0f, 178.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.1462f, 0.3533f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 1)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.3693f, 0.0518f, 0.803f };
			vVar4 = { 0f, 0f, 117.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.3397f, 0.1169f, 0.803f };
			vVar4 = { 0f, 0f, 119.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.3012f, 0.1783f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.2694f, 0.2419f, 0.803f };
			vVar4 = { 0f, 0f, 118.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.2328f, 0.3032f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 2)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2295f, -0.2939f, 0.803f };
			vVar4 = { 0f, 0f, 57.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.2711f, -0.2358f, 0.803f };
			vVar4 = { 0f, 0f, 59.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.305f, -0.1717f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.3442f, -0.1124f, 0.803f };
			vVar4 = { 0f, 0f, 58.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.379f, -0.05f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 3)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.1398f, -0.3457f, 0.803f };
			vVar4 = { 0f, 0f, -2.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.0686f, -0.3527f, 0.803f };
			vVar4 = { 0f, 0f, -0.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.0038f, -0.35f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.0748f, -0.3543f, 0.803f };
			vVar4 = { 0f, 0f, -1.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.1462f, -0.3533f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 4)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.3693f, -0.0518f, 0.803f };
			vVar4 = { 0f, 0f, -62.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.3397f, -0.1169f, 0.803f };
			vVar4 = { 0f, 0f, -60.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.3012f, -0.1783f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2694f, -0.2419f, 0.803f };
			vVar4 = { 0f, 0f, -61.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.2328f, -0.3032f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 5)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.2295f, 0.2939f, 0.803f };
			vVar4 = { 0f, 0f, -122.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.2711f, 0.2358f, 0.803f };
			vVar4 = { 0f, 0f, -120.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.305f, 0.1717f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.3442f, 0.1124f, 0.803f };
			vVar4 = { 0f, 0f, -121.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.379f, 0.05f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam5)
		{
			__LIB_4__::func_883(*uParam0, uParam0->f_3, vVar1, vVar4, uParam3, uParam4);
		}
		else
		{
			*uParam3 = { vVar1 };
			*uParam4 = { vVar4 };
		}
		return true;
	}
	return false;
}

int func_2613(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1576(&uVar0, iParam0, 0);
	iVar9 = func_2447(&uVar4, iParam0, 0);
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

void func_2614(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (cParam0->f_7374 != 0 && cParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != cParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, cParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, cParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, cParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, cParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4)) && __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2613(128);
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
				iVar3 = func_2613(128);
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

void func_2853(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bVar0 = MISC::IS_BIT_SET(uParam1->f_19, 0);
	bVar1 = MISC::IS_BIT_SET(uParam1->f_19, 1);
	iVar2 = uParam1->f_20;
	iVar3 = uParam1->f_21;
	if (uParam0->f_40)
	{
		if (__LIB_18__::func_545(uParam0))
		{
			__LIB_12__::func_319(uParam0);
			if (iVar2 < 4)
			{
				__LIB_12__::func_367(uParam0, iParam2, iVar2);
			}
			if (__LIB_12__::func_300(uParam0, iParam2) == 2)
			{
				__LIB_18__::func_549(uParam0, iParam2, 1);
			}
			else
			{
				__LIB_18__::func_549(uParam0, iParam2, 0);
			}
			__LIB_12__::func_437(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 7:
			if (__LIB_12__::func_363(uParam1, "ReceiveDeckEnterNoCardsAnimFinished"))
			{
				if (__LIB_1__::func_985() || bVar0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleRiffleFront");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleStandardFront");
				}
				__LIB_12__::func_438(uParam0, iParam2, 8);
			}
			break;
		case 8:
			if (__LIB_12__::func_363(uParam1, "ShuffleStandardFrontAnimFinished") || __LIB_12__::func_363(uParam1, "ShuffleRiffleFrontAnimFinished"))
			{
				__LIB_12__::func_438(uParam0, iParam2, 11);
			}
			break;
		case 9:
			if (__LIB_12__::func_363(uParam1, "ShuffleEnterAnimFinished"))
			{
				if (__LIB_1__::func_985() || bVar0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleRiffleLeft");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleStandardLeft");
				}
				__LIB_12__::func_438(uParam0, iParam2, 10);
			}
			break;
		case 10:
			if (__LIB_12__::func_363(uParam1, "ShuffleStandardLeftAnimFinished") || __LIB_12__::func_363(uParam1, "ShuffleRiffleLeftAnimFinished"))
			{
				__LIB_12__::func_438(uParam0, iParam2, 11);
			}
			break;
		case 11:
			if (__LIB_12__::func_368(uParam0) && __LIB_18__::func_545(uParam0))
			{
				func_2997(uParam0, iParam2, iVar3);
				__LIB_12__::func_359(uParam0, iParam2, 6);
				__LIB_12__::func_438(uParam0, iParam2, 12);
			}
			break;
		case 12:
			if (__LIB_12__::func_369(uParam0))
			{
				iVar5 = 0;
				while (iVar5 < 6)
				{
					iVar4 = __LIB_12__::func_358(uParam0, iVar5, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::_0x0B7CB1300CBFE19C(iVar4, 1))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -942436593))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 6 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -1248793974))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 1 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -1698646806))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 2 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -2004414345))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 3 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, 220797369))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 4 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -228858849))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 5 % 6));
						}
					}
					iVar5++;
				}
			}
			if (__LIB_12__::func_370(uParam0))
			{
				if (iVar2 < 4)
				{
					__LIB_12__::func_367(uParam0, iParam2, iVar2);
				}
				__LIB_12__::func_371(uParam0, iParam2);
				__LIB_12__::func_340(uParam0, iParam2, 6);
				if (bVar1)
				{
					__LIB_18__::func_552(uParam0, iParam2, "DealToHoldCardsRequest", 0.5f);
					__LIB_12__::func_438(uParam0, iParam2, 13);
				}
				else
				{
					__LIB_18__::func_552(uParam0, iParam2, "DealToNoCardsRequest", 0.5f);
					__LIB_12__::func_438(uParam0, iParam2, 14);
				}
			}
			break;
		case 13:
			if (__LIB_12__::func_363(uParam1, "DealToHoldCardsAnimFinished"))
			{
				__LIB_18__::func_549(uParam0, iParam2, 1);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 14:
			if (__LIB_12__::func_363(uParam1, "DealToNoCardsAnimFinished"))
			{
				__LIB_18__::func_549(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle") || __LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_319(uParam0);
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -240642751))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_enter_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 190968016))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_standard_front_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1711999502))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_riffle_front_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 96509896))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_standard_left_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1301672132))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_riffle_left_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1846387738))
	{
		__LIB_12__::func_427(uParam0, iParam2, "deal_to_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "deal_to_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_2854(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (__LIB_18__::func_546(uParam0))
		{
			if (__LIB_12__::func_300(uParam0, iParam2) == 2)
			{
				__LIB_18__::func_549(uParam0, iParam2, 1);
			}
			uParam0->f_765 = -1;
			__LIB_12__::func_437(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 15:
			if (__LIB_18__::func_546(uParam0))
			{
				switch (uParam0->f_765)
				{
					case 1:
						func_2199(uParam0, 0, -1, 1);
						func_2199(uParam0, 1, -1, 1);
						func_2199(uParam0, 2, -1, 1);
						if (uParam0->f_766)
						{
							func_2199(uParam0, 3, -1, 1);
							func_2199(uParam0, 4, -1, 1);
						}
						break;
					case 2:
						func_2199(uParam0, 3, -1, 1);
						if (uParam0->f_766)
						{
							func_2199(uParam0, 4, -1, 1);
						}
						break;
					case 3:
						func_2199(uParam0, 4, -1, 1);
						break;
				}
				if (uParam1->f_1 == 1)
				{
					if (uParam0->f_765 == 1)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopEnterNoCards");
						__LIB_12__::func_438(uParam0, iParam2, 16);
					}
					else if (uParam0->f_765 == 2)
					{
						if (!uParam0->f_766)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnNoCards");
							__LIB_12__::func_438(uParam0, iParam2, 19);
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnRiverNoCards");
							__LIB_12__::func_438(uParam0, iParam2, 22);
						}
					}
					else if (uParam0->f_765 == 3)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "RiverNoCards");
						__LIB_12__::func_438(uParam0, iParam2, 20);
					}
				}
				else if (uParam1->f_1 == 2)
				{
					if (uParam0->f_765 == 1)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopEnterHoldCards");
						__LIB_12__::func_438(uParam0, iParam2, 23);
					}
					else if (uParam0->f_765 == 2)
					{
						if (!uParam0->f_766)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnHoldCards");
							__LIB_12__::func_438(uParam0, iParam2, 26);
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnRiverHoldCards");
							__LIB_12__::func_438(uParam0, iParam2, 29);
						}
					}
					else if (uParam0->f_765 == 3)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "RiverHoldCards");
						__LIB_12__::func_438(uParam0, iParam2, 27);
					}
				}
			}
			break;
		case 16:
			if (__LIB_12__::func_363(uParam1, "FlopEnterNoCardsAnimFinished"))
			{
				if (!uParam0->f_766)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Flop");
					__LIB_12__::func_438(uParam0, iParam2, 17);
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopTurnRiverNoCards");
					__LIB_12__::func_438(uParam0, iParam2, 21);
				}
			}
			break;
		case 17:
			if (__LIB_12__::func_363(uParam1, "FlopAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopExitNoCards");
				__LIB_12__::func_438(uParam0, iParam2, 18);
			}
			break;
		case 18:
			__LIB_12__::func_371(uParam0, iParam2);
			if (__LIB_12__::func_363(uParam1, "FlopExitNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 19:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "TurnNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 20:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "RiverNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 21:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "FlopTurnRiverNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 22:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "TurnRiverNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 23:
			if (__LIB_12__::func_363(uParam1, "FlopEnterHoldCardsAnimFinished"))
			{
				if (!uParam0->f_766)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Flop");
					__LIB_12__::func_438(uParam0, iParam2, 24);
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopTurnRiverHoldCards");
					__LIB_12__::func_438(uParam0, iParam2, 28);
				}
			}
			break;
		case 24:
			if (__LIB_12__::func_363(uParam1, "FlopAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopExitHoldCards");
				__LIB_12__::func_438(uParam0, iParam2, 25);
			}
			break;
		case 25:
			__LIB_12__::func_371(uParam0, iParam2);
			if (__LIB_12__::func_363(uParam1, "FlopExitHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 26:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "TurnHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 27:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "RiverHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 28:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "FlopTurnRiverHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 29:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "TurnRiverHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle") || __LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				if (__LIB_12__::func_300(uParam0, iParam2) == 2)
				{
					__LIB_18__::func_549(uParam0, iParam2, 1);
				}
				if (!__LIB_12__::func_338(uParam0, iParam2, 0))
				{
					__LIB_12__::func_436(10, iParam2);
				}
				if (!__LIB_12__::func_338(uParam0, iParam2, 1))
				{
					__LIB_12__::func_436(11, iParam2);
				}
				if (!__LIB_12__::func_338(uParam0, iParam2, 2))
				{
					__LIB_12__::func_436(12, iParam2);
				}
				uParam0->f_765 = -1;
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1228639662))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_card1", __LIB_12__::func_372(uParam0, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_card2", __LIB_12__::func_372(uParam0, 1), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_card3", __LIB_12__::func_372(uParam0, 2), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -572100475))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_enter_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -113517709))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_exit_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 711118658))
	{
		__LIB_12__::func_427(uParam0, iParam2, "turn_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_no_cards_card1", __LIB_12__::func_372(uParam0, 3), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 437520029))
	{
		__LIB_12__::func_427(uParam0, iParam2, "river_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "river_no_cards_card1", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 419783961))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card1", __LIB_12__::func_372(uParam0, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card2", __LIB_12__::func_372(uParam0, 1), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card3", __LIB_12__::func_372(uParam0, 2), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card4", __LIB_12__::func_372(uParam0, 3), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card5", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 381129739))
	{
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_no_cards_card1", __LIB_12__::func_372(uParam0, 3), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_no_cards_card2", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -95084943))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_enter_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_enter_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_enter_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -607868067))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_exit_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_exit_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_exit_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1776513281))
	{
		__LIB_12__::func_427(uParam0, iParam2, "turn_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_hold_cards_card3", __LIB_12__::func_372(uParam0, 3), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1551570381))
	{
		__LIB_12__::func_427(uParam0, iParam2, "river_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "river_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "river_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "river_hold_cards_card3", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 198906537))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card3", __LIB_12__::func_372(uParam0, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card4", __LIB_12__::func_372(uParam0, 1), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card5", __LIB_12__::func_372(uParam0, 2), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card6", __LIB_12__::func_372(uParam0, 3), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card7", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 947648498))
	{
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_card3", __LIB_12__::func_372(uParam0, 3), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_card4", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -134313359))
	{
		if (!__LIB_12__::func_338(uParam0, iParam2, 0))
		{
			__LIB_12__::func_359(uParam0, iParam2, 0);
			__LIB_12__::func_436(10, iParam2);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1156819043))
	{
		if (!__LIB_12__::func_338(uParam0, iParam2, 1))
		{
			__LIB_12__::func_359(uParam0, iParam2, 1);
			__LIB_12__::func_436(11, iParam2);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1436811567))
	{
		if (!__LIB_12__::func_338(uParam0, iParam2, 2))
		{
			__LIB_12__::func_359(uParam0, iParam2, 2);
			__LIB_12__::func_436(12, iParam2);
		}
	}
}

void func_2857(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	iVar2 = uParam1->f_21;
	if (uParam0->f_40)
	{
		func_2198(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
	switch (uParam1->f_9)
	{
		case 33:
			if (__LIB_12__::func_363(uParam1, "BetBlindAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle") || __LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -131858145))
	{
		func_2198(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_blind_a_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
	}
}

void func_2858(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	iVar2 = uParam1->f_21;
	if (uParam0->f_40)
	{
		func_2198(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
	switch (uParam1->f_9)
	{
		case 35:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar0));
			if (__LIB_12__::func_363(uParam1, "BetAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle") || __LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1753320602))
	{
		func_2198(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1249714093))
	{
		func_2198(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2023235118))
	{
		func_2198(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -431766831))
	{
		func_2198(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
}

void func_2859(var uParam0, var uParam1, int iParam2)
{
	struct<2> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var0.f_1 = 4;
	Var0 = uParam1->f_19;
	Var0.f_1[0] = uParam1->f_20;
	Var0.f_1[1] = uParam1->f_21;
	Var0.f_1[2] = uParam1->f_22;
	Var0.f_1[3] = uParam1->f_23;
	iVar6 = uParam1->f_36;
	if (uParam0->f_40)
	{
		func_3006(uParam0, iParam2, uParam1, &Var0, 0);
		func_3007(uParam0, iParam2, uParam1, &Var0, 0);
		func_3008(uParam0, iParam2, uParam1, &Var0, 0);
		func_3009(uParam0, iParam2, uParam1, &Var0, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
	switch (uParam1->f_9)
	{
		case 0:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			__LIB_18__::func_556(uParam0, iParam2, Var0, 1);
			__LIB_12__::func_438(uParam0, iParam2, 36);
			break;
		case 36:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			if (__LIB_12__::func_363(uParam1, "BetAnimFinished") || __LIB_12__::func_363(uParam1, "BetBlindAnimFinished"))
			{
				__LIB_12__::func_438(uParam0, iParam2, 40);
			}
			else if ((ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1634097517) || ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 813449677)) || ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 21374103))
			{
				iVar7 = __LIB_12__::func_374(uParam0, iParam2, Var0);
				iVar8 = uParam1->f_29[Var0];
				iVar9 = __LIB_12__::func_253(iVar7, iVar8, 10);
				if (iVar9 > 4)
				{
					iVar9 = 4;
				}
				func_2198(uParam0, iParam2, Var0, iVar7, iVar8, iVar9, 0, 0);
				__LIB_18__::func_557(uParam0, uParam1, iParam2, Var0);
				AUDIO::_0x3E93DDDCBB6111E4("Game.MiniGame.OddJob.ChipValue", BUILTIN::TO_FLOAT(__LIB_9__::func_939(iVar9, 1, 4)));
				func_3006(uParam0, iParam2, uParam1, &Var0, 0);
				func_3007(uParam0, iParam2, uParam1, &Var0, 1);
				func_3009(uParam0, iParam2, uParam1, &Var0, 1);
				__LIB_12__::func_438(uParam0, iParam2, 39);
			}
			break;
		case 39:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			if ((__LIB_12__::func_363(uParam1, "BetAnimFinished") || __LIB_12__::func_363(uParam1, "BetBlindAnimFinished")) || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				if (__LIB_12__::func_300(uParam0, iParam2) == 2)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				}
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 40:
			func_3006(uParam0, iParam2, uParam1, &Var0, 1);
			func_3007(uParam0, iParam2, uParam1, &Var0, 1);
			func_3009(uParam0, iParam2, uParam1, &Var0, 1);
			func_3008(uParam0, iParam2, uParam1, &Var0, 1);
			if (__LIB_12__::func_300(uParam0, iParam2) == 2)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
			}
			__LIB_12__::func_438(uParam0, iParam2, 1);
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle") || __LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1753320602))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1249714093))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2023235118))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -431766831))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
}

void func_2860(var uParam0, var uParam1, var uParam2)
{
	__LIB_0__::func_11(uParam0, uParam2, "NEW", "BET_ADVANCED");
	__LIB_0__::func_11(uParam0, uParam2, "NEW", 0);
}

void func_2861(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_40)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (__LIB_12__::func_375(uParam0, iParam2, iVar2))
			{
				iVar0 = __LIB_12__::func_374(uParam0, iParam2, iVar2);
				iVar1 = __LIB_12__::func_376(uParam0, iParam2, iVar2);
				func_3019(uParam0, iParam2, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), 0, 0);
			}
			iVar2++;
		}
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
	switch (uParam1->f_9)
	{
		case 34:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(4));
			if (__LIB_12__::func_363(uParam1, "BetAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 727682306))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_bank_01", __LIB_12__::func_377(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_bank_02", __LIB_12__::func_377(uParam0, iParam2, 1), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_bank_03", __LIB_12__::func_377(uParam0, iParam2, 2), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_bank_05", __LIB_12__::func_377(uParam0, iParam2, 3), 0, 2);
	}
}

void func_2863(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (__LIB_18__::func_558(uParam0, iParam2))
		{
			__LIB_18__::func_549(uParam0, iParam2, 0);
			__LIB_12__::func_437(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 43:
			if (__LIB_18__::func_558(uParam0, iParam2))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_34));
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_36));
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Reveal");
				__LIB_12__::func_438(uParam0, iParam2, 44);
			}
			break;
		case 44:
			if (__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE")))
			{
				__LIB_18__::func_555(uParam0, iParam2);
				__LIB_12__::func_436(8, iParam2);
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_34));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_36));
			if (__LIB_12__::func_363(uParam1, "RevealAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				__LIB_18__::func_549(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2347088))
	{
		func_2196(uParam0, iParam2, 3, 0, 1);
		switch (uParam1->f_34)
		{
			case 0:
				if (uParam1->f_36 == 0)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				else if (uParam1->f_36 == 1)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				else if (uParam1->f_36 == 2)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				break;
			case 1:
				if (uParam1->f_36 == 0)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				else if (uParam1->f_36 == 1)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				else if (uParam1->f_36 == 2)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				break;
			case 2:
				__LIB_12__::func_427(uParam0, iParam2, "reveal_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
				__LIB_12__::func_427(uParam0, iParam2, "reveal_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				break;
		}
	}
}

void func_2867(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	iVar0 = uParam1->f_19;
	bVar1 = MISC::IS_BIT_SET(uParam1->f_20, 0);
	if (uParam0->f_40)
	{
		func_3023(uParam0, iParam2, iVar0, 0);
		__LIB_19__::func_255(uParam0, 0);
		__LIB_19__::func_256(uParam0, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 41:
			if (uParam1->f_4 == 1)
			{
				iVar3 = 1;
			}
			else if (uParam1->f_4 == 3)
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 0;
			}
			if (__LIB_12__::func_379(uParam0, iVar3))
			{
				__LIB_18__::func_559(uParam0, iParam2, iVar3);
				__LIB_12__::func_433(3);
				__LIB_12__::func_438(uParam0, iParam2, 42);
			}
			break;
		case 42:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (!__LIB_12__::func_338(uParam0, iParam2, 0))
			{
				if (__LIB_12__::func_380(uParam0, iParam2) && __LIB_12__::func_381(uParam0, iParam2))
				{
					__LIB_12__::func_359(uParam0, iParam2, 0);
				}
			}
			if (!__LIB_12__::func_338(uParam0, iParam2, 1))
			{
				if (((__LIB_12__::func_382(uParam0, iParam2) || __LIB_12__::func_366(uParam0, iParam2, 0)) || ((!uParam0->f_39 && __LIB_12__::func_338(uParam0, iParam2, 0)) && !__LIB_12__::func_381(uParam0, iParam2))) || ((uParam0->f_39 || !__LIB_12__::func_338(uParam0, iParam2, 0)) && __LIB_12__::func_383(uParam0, iParam2)))
				{
					bVar2 = (uParam0->f_39 || !__LIB_12__::func_338(uParam0, iParam2, 0));
					func_3023(uParam0, iParam2, iVar0, bVar2);
					if (!bVar1)
					{
						__LIB_19__::func_255(uParam0, bVar2);
						__LIB_19__::func_256(uParam0, bVar2);
					}
					else
					{
						func_3033(uParam0, iParam2, bVar2);
					}
					__LIB_12__::func_434(3);
					__LIB_12__::func_359(uParam0, iParam2, 1);
				}
			}
			if (__LIB_12__::func_382(uParam0, iParam2) || __LIB_12__::func_366(uParam0, iParam2, 0))
			{
				__LIB_18__::func_552(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_328(uParam0, iParam2);
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
}

int func_2997(var uParam0, int iParam1, int iParam2)
{
	char cVar0[16];
	char cVar2[16];
	int iVar4;
	int iVar5;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_763))
	{
		return 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_763, uParam0->f_1137[iParam1 /*3*/], uParam0->f_1156[iParam1 /*3*/], 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_763, "plr", uParam0->f_785[iParam1 /*52*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_763, "deck", __LIB_12__::func_298(uParam0), 0);
	iVar4 = (iParam1 + 1 % 6);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if (MISC::IS_BIT_SET(uParam0->f_764, iVar4))
		{
			if (iVar4 == iParam2)
			{
				func_2196(uParam0, iVar4, 0, 0, 0);
			}
			else
			{
				func_3075(uParam0, iVar4, 0, 0);
			}
			if (iVar4 == iParam1)
			{
				__LIB_12__::func_388(uParam0, iVar4, 2);
			}
			else
			{
				__LIB_12__::func_388(uParam0, iVar4, 1);
			}
			StringCopy(&cVar0, "card1_seat", 16);
			StringCopy(&cVar2, "card2_seat", 16);
			StringIntConCat(&cVar0, iVar5 + 1, 16);
			StringIntConCat(&cVar2, iVar5 + 1, 16);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_763, &cVar0, __LIB_12__::func_358(uParam0, iVar4, 0), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_763, &cVar2, __LIB_12__::func_358(uParam0, iVar4, 1), 0);
		}
		iVar4 = (iVar4 + 1 % 6);
		iVar5++;
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_763);
	return 1;
}

void func_3006(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = *iParam3;
	iVar0 = __LIB_12__::func_374(uParam0, iParam1, iVar2);
	iVar1 = uParam2->f_24[iVar2];
	func_2197(uParam0, iParam1, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam4, 0);
}

void func_3007(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != *iParam3)
		{
			iVar0 = __LIB_12__::func_374(uParam0, iParam1, iVar2);
			iVar1 = uParam2->f_24[iVar2];
			func_2197(uParam0, iParam1, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam4, 0);
		}
		iVar2++;
	}
}

void func_3008(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = *iParam3;
	iVar0 = __LIB_12__::func_374(uParam0, iParam1, iVar2);
	iVar1 = uParam2->f_29[iVar2];
	func_2198(uParam0, iParam1, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam4, 0);
}

void func_3009(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != *iParam3)
		{
			iVar0 = __LIB_12__::func_374(uParam0, iParam1, iVar2);
			iVar1 = uParam2->f_29[iVar2];
			func_2198(uParam0, iParam1, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam4, 0);
		}
		iVar2++;
	}
}

int func_3019(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (bParam6)
	{
		iVar1 = uParam0->f_435[iParam1 /*30*/].f_5[iParam2];
		iVar2 = uParam0->f_435[iParam1 /*30*/].f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		__LIB_12__::func_405(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_435[iParam1 /*30*/][iParam2]));
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_692;
		if (!func_3079(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		__LIB_9__::func_932(iVar3, iParam5, 0);
		__LIB_12__::func_400(iVar3, iParam3);
	}
	uParam0->f_435[iParam1 /*30*/][iParam2] = iVar3;
	uParam0->f_435[iParam1 /*30*/].f_5[iParam2] = iParam3;
	uParam0->f_435[iParam1 /*30*/].f_10[iParam2] = iParam4;
	return 1;
}

void func_3023(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar5;
	__LIB_0__::func_11(uParam0, iParam1, "OLD", "CREATE_BANK_STACKS_TO_VALUE()");
	uVar0 = 4;
	uVar5 = 4;
	__LIB_12__::func_252(iParam2, &uVar0, &uVar5);
	func_3081(uParam0, iParam1, &uVar0, &uVar5, bParam3);
	__LIB_0__::func_11(uParam0, iParam1, "NEW", 0);
}

void func_3033(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (uParam0->f_767 != iParam1)
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_785[iParam1 /*52*/].f_50))
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar4 = (iVar2 - iParam1);
			while (iVar4 <= 0)
			{
				iVar4 += 6;
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (__LIB_12__::func_404(uParam0, iVar2, iVar3))
				{
					iVar0 = __LIB_12__::func_411(uParam0, iVar2, iVar3);
					iVar1 = __LIB_12__::func_412(uParam0, iVar2, iVar3);
					func_2198(uParam0, iVar2, iVar3, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam2, 3);
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (__LIB_12__::func_375(uParam0, iVar2, iVar3))
				{
					iVar0 = __LIB_12__::func_413(uParam0, iVar2, iVar3);
					iVar1 = __LIB_12__::func_376(uParam0, iVar2, iVar3);
					func_3019(uParam0, iVar2, iVar3, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam2, 3);
				}
				iVar3++;
			}
			iVar2++;
		}
	}
}

void func_3075(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	uParam0->f_616[iParam1 /*9*/].f_8 = iParam2;
	iVar7 = 0;
	while (iVar7 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_616[iParam1 /*9*/].f_5[iVar7]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_616[iParam1 /*9*/].f_5[iVar7]));
		}
		uParam0->f_616[iParam1 /*9*/].f_5[iVar7] = 0;
		iVar0 = uParam0->f_693;
		if (iParam2 != 5)
		{
			if (!func_2591(uParam0, iParam1, iVar7, iParam2, &vVar1, &vVar4, 1))
			{
			}
			else
			{
				Jump @148; //curOff = 121
				if (!func_2591(uParam0, iParam3, iVar7, iParam2, &vVar1, &vVar4, 1))
				{
				}
				else
				{
					iVar8 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
					{
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar8, vVar1, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(iVar8, vVar4, 2, true);
						ENTITY::SET_ENTITY_COLLISION(iVar8, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
						uParam0->f_616[iParam1 /*9*/].f_5[iVar7] = iVar8;
					}
				}
			}
			iVar7++;
		}
	}
}

bool func_3079(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0353f, 0.196f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0603f, 0.1639f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0746f, 0.197f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.112f, 0.1826f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.1521f, 0.1285f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1118f, 0.1341f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1333f, 0.1631f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1022f, 0.1883f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.1874f, -0.0674f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1721f, -0.0298f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2079f, -0.0339f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.2142f, 0.0057f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0353f, -0.196f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0603f, -0.1639f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0746f, -0.197f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.112f, -0.1826f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.1521f, -0.1285f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1118f, -0.1341f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1333f, -0.1631f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1022f, -0.1883f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.1874f, 0.0674f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1721f, 0.0298f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2079f, 0.0339f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.2142f, -0.0057f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		__LIB_4__::func_883(*uParam0, uParam0->f_3, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

void func_3081(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((*uParam3)[iVar0] > 0)
		{
			func_2197(uParam0, iParam1, iVar0, (*uParam2)[iVar0], (*uParam3)[iVar0], __LIB_12__::func_253((*uParam2)[iVar0], (*uParam3)[iVar0], 10), bParam4, 0);
		}
		else
		{
			__LIB_18__::func_553(uParam0, iParam1, iVar0, bParam4);
		}
		iVar0++;
	}
}

