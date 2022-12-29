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
	struct<171> Local_37[3];
	struct<195> Local_551[6];
	struct<195> Local_1722[11];
	struct<195> Local_3868[3];
	struct<13> Local_4454[6];
	int iLocal_4533 = 0;
	int iLocal_4534[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_4541 = 0;
	int iLocal_4542 = 0;
	int iLocal_4543 = 0;
	int iLocal_4544 = 0;
	int iLocal_4545 = 0;
	int iLocal_4546 = 0;
	int iLocal_4547 = 0;
	int iLocal_4548 = 0;
	vector3 vLocal_4549[14] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_4592 = 0;
	int iLocal_4593 = 0;
	int iLocal_4594 = 0;
	int iLocal_4595 = 0;
	int iLocal_4596 = 0;
	int iLocal_4597 = 0;
	int iLocal_4598 = 0;
	int iLocal_4599 = 0;
	int iLocal_4600 = 0;
	int iLocal_4601 = 0;
	int iLocal_4602 = 0;
	int iLocal_4603 = 0;
	int iLocal_4604 = 0;
	int iLocal_4605 = 0;
	int iLocal_4606 = 0;
	int iLocal_4607 = 0;
	int iLocal_4608 = 0;
	int iLocal_4609 = 0;
	int iLocal_4610 = 0;
	int iLocal_4611 = 0;
	int iLocal_4612 = 0;
	int iLocal_4613 = 0;
	int iLocal_4614 = 0;
	int iLocal_4615 = 0;
	int iLocal_4616 = 0;
	int iLocal_4617 = 0;
	int iLocal_4618 = 0;
	int iLocal_4619 = 0;
	int iLocal_4620 = 0;
	int iLocal_4621 = 0;
	int iLocal_4622 = 0;
	int iLocal_4623 = 0;
	int iLocal_4624 = 0;
	int iLocal_4625 = 0;
	int iLocal_4626 = 0;
	int iLocal_4627 = 0;
	struct<16> Local_4628[8];
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
	var uLocal_4768 = 0;
	int iLocal_4769 = 0;
	int iLocal_4770 = 0;
	int iLocal_4771 = 0;
	struct<4> Local_4772 = { 0, 0, -1, 0 } ;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = -1;
	var uLocal_4780 = -1082130432;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = -1082130432;
	var uLocal_4785 = 1;
	var uLocal_4786 = -1082130432;
	int iLocal_4787 = 0;
	int iLocal_4788 = 0;
	int iLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = -1;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 1097859072;
	var uLocal_4808 = 1000;
	var uLocal_4809 = 1067450368;
	var uLocal_4810 = 5000;
	var uLocal_4811 = 42;
	var uLocal_4812 = 1103626240;
	var uLocal_4813 = 1077936128;
	var uLocal_4814 = 1106247680;
	var uLocal_4815 = 1103101952;
	var uLocal_4816 = 1097859072;
	var uLocal_4817 = 1103626240;
	int iLocal_4818 = 0;
	int iLocal_4819 = 0;
	int iLocal_4820 = 0;
	int iLocal_4821 = 0;
	int iLocal_4822 = 0;
	int iLocal_4823 = 0;
	var uLocal_4824[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_4833 = 0;
	int iLocal_4834 = 0;
	int iLocal_4835 = 0;
	int iLocal_4836 = 0;
	int iLocal_4837 = 0;
	int iLocal_4838 = 0;
	float fLocal_4839 = 0f;
	vector3 vLocal_4840 = { 0f, 0f, 0f };
	vector3 vLocal_4843 = { 0f, 0f, 0f };
	vector3 vLocal_4846 = { 0f, 0f, 0f };
	bool bLocal_4849 = false;
	bool bLocal_4850 = false;
	bool bLocal_4851 = false;
	bool bLocal_4852 = false;
	bool bLocal_4853 = false;
	bool bLocal_4854 = false;
	bool bLocal_4855 = false;
	bool bLocal_4856 = false;
	bool bLocal_4857 = false;
	int iLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	int iLocal_4864 = 0;
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
	var uLocal_4896 = 0;
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
	int iLocal_4913 = 0;
	int iLocal_4914 = 0;
	int iLocal_4915 = 0;
	struct<5> Local_4916[3];
	struct<5> Local_4932[3];
	int iLocal_4948[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_4955 = 0;
	int iLocal_4956 = 0;
	char* sLocal_4957 = NULL;
	char* sLocal_4958 = NULL;
	char* sLocal_4959 = NULL;
	char* sLocal_4960 = NULL;
	char* sLocal_4961 = NULL;
	char* sLocal_4962 = NULL;
	char* sLocal_4963 = NULL;
	char* sLocal_4964 = NULL;
	char* sLocal_4965 = NULL;
	int iLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 27;
	var uLocal_4970 = 8;
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
	var uLocal_4991 = -1;
	var uLocal_4992 = 8;
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
	var uLocal_5013 = -1;
	var uLocal_5014 = 8;
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
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = -1;
	var uLocal_5036 = 8;
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
	var uLocal_5057 = -1;
	var uLocal_5058 = 8;
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
	var uLocal_5079 = -1;
	var uLocal_5080 = 8;
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
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = -1;
	var uLocal_5102 = 8;
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
	var uLocal_5123 = -1;
	var uLocal_5124 = 8;
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
	var uLocal_5145 = -1;
	var uLocal_5146 = 8;
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
	var uLocal_5167 = -1;
	var uLocal_5168 = 8;
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
	var uLocal_5189 = -1;
	var uLocal_5190 = 8;
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
	var uLocal_5211 = -1;
	var uLocal_5212 = 8;
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
	var uLocal_5233 = -1;
	var uLocal_5234 = 8;
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
	var uLocal_5255 = -1;
	var uLocal_5256 = 8;
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
	var uLocal_5277 = -1;
	var uLocal_5278 = 8;
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
	var uLocal_5299 = -1;
	var uLocal_5300 = 8;
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
	var uLocal_5321 = -1;
	var uLocal_5322 = 8;
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
	var uLocal_5343 = -1;
	var uLocal_5344 = 8;
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
	var uLocal_5365 = -1;
	var uLocal_5366 = 8;
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
	var uLocal_5387 = -1;
	var uLocal_5388 = 8;
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
	var uLocal_5409 = -1;
	var uLocal_5410 = 8;
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
	var uLocal_5431 = -1;
	var uLocal_5432 = 8;
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
	var uLocal_5453 = -1;
	var uLocal_5454 = 8;
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
	var uLocal_5475 = -1;
	var uLocal_5476 = 8;
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
	var uLocal_5497 = -1;
	var uLocal_5498 = 8;
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
	var uLocal_5519 = -1;
	var uLocal_5520 = 8;
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
	var uLocal_5541 = -1;
	var uLocal_5542 = 8;
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
	var uLocal_5563 = -1;
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
	var uLocal_5602 = 2;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 60;
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
	var uLocal_5633 = 0;
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
	var uLocal_5700 = 0;
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
	var uLocal_5767 = 0;
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
	var uLocal_5787 = 40;
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
	var uLocal_5901 = 0;
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
	var uLocal_5968 = 0;
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
	var uLocal_5988 = 20;
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
	var uLocal_6049 = 14;
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
	var uLocal_6094 = 60;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 20;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
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
	var uLocal_6166 = 20;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
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
	var uLocal_6233 = 20;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
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
	var uLocal_6300 = 20;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
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
	var uLocal_6367 = 20;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
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
	var uLocal_6434 = 20;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
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
	var uLocal_6501 = 20;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
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
	var uLocal_6568 = 20;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
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
	var uLocal_6635 = 20;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
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
	var uLocal_6702 = 20;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
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
	var uLocal_6769 = 20;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
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
	var uLocal_6836 = 20;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
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
	var uLocal_6903 = 20;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
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
	var uLocal_6970 = 20;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
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
	var uLocal_7037 = 20;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
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
	var uLocal_7104 = 20;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
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
	var uLocal_7171 = 20;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
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
	var uLocal_7238 = 20;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
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
	var uLocal_7305 = 20;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
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
	var uLocal_7372 = 20;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
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
	var uLocal_7439 = 20;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
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
	var uLocal_7506 = 20;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
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
	var uLocal_7573 = 20;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
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
	var uLocal_7640 = 20;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
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
	var uLocal_7707 = 20;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
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
	var uLocal_7774 = 20;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
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
	var uLocal_7841 = 20;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
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
	var uLocal_7908 = 20;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
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
	var uLocal_7975 = 20;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
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
	var uLocal_8042 = 20;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
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
	var uLocal_8109 = 20;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
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
	var uLocal_8176 = 20;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
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
	var uLocal_8243 = 20;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
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
	var uLocal_8310 = 20;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
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
	var uLocal_8377 = 20;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
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
	var uLocal_8444 = 20;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
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
	var uLocal_8511 = 20;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
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
	var uLocal_8578 = 20;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
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
	var uLocal_8645 = 20;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
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
	var uLocal_8712 = 20;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
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
	var uLocal_8778 = 0;
	var uLocal_8779 = 20;
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
	var uLocal_8846 = 20;
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
	var uLocal_8913 = 20;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
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
	var uLocal_8980 = 20;
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
	var uLocal_9047 = 20;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
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
	var uLocal_9114 = 20;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
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
	var uLocal_9181 = 20;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
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
	var uLocal_9248 = 20;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
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
	var uLocal_9315 = 20;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
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
	var uLocal_9382 = 20;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
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
	var uLocal_9449 = 20;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
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
	var uLocal_9516 = 20;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
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
	var uLocal_9583 = 20;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
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
	var uLocal_9650 = 20;
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
	var uLocal_9691 = 0;
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
	var uLocal_9717 = 20;
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
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
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
	var uLocal_9768 = 0;
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
	var uLocal_9784 = 20;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
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
	var uLocal_9813 = 0;
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
	var uLocal_9851 = 20;
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
	var uLocal_9918 = 20;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
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
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 20;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
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
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 20;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
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
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 10;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
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
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 10;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
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
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 3;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 5;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 5;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
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
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 5;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
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
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 24;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
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
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
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
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 0;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
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
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 30;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 3;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = -1;
	var uLocal_10403 = 0;
	var uLocal_10404 = 5;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 10;
	var uLocal_10416 = 3;
	var uLocal_10417 = 500;
	var uLocal_10418 = 10000;
	var uLocal_10419 = 0;
	var uLocal_10420 = 3;
	var uLocal_10421 = 500;
	var uLocal_10422 = 10000;
	var uLocal_10423 = 0;
	var uLocal_10424 = 3;
	var uLocal_10425 = 500;
	var uLocal_10426 = 10000;
	var uLocal_10427 = 0;
	var uLocal_10428 = 3;
	var uLocal_10429 = 500;
	var uLocal_10430 = 10000;
	var uLocal_10431 = 0;
	var uLocal_10432 = 3;
	var uLocal_10433 = 500;
	var uLocal_10434 = 10000;
	var uLocal_10435 = 0;
	var uLocal_10436 = 3;
	var uLocal_10437 = 500;
	var uLocal_10438 = 10000;
	var uLocal_10439 = 0;
	var uLocal_10440 = 3;
	var uLocal_10441 = 500;
	var uLocal_10442 = 10000;
	var uLocal_10443 = 0;
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
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 3;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = -1;
	var uLocal_10468 = 0;
	var uLocal_10469 = 5;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 10;
	var uLocal_10481 = 3;
	var uLocal_10482 = 500;
	var uLocal_10483 = 10000;
	var uLocal_10484 = 0;
	var uLocal_10485 = 3;
	var uLocal_10486 = 500;
	var uLocal_10487 = 10000;
	var uLocal_10488 = 0;
	var uLocal_10489 = 3;
	var uLocal_10490 = 500;
	var uLocal_10491 = 10000;
	var uLocal_10492 = 0;
	var uLocal_10493 = 3;
	var uLocal_10494 = 500;
	var uLocal_10495 = 10000;
	var uLocal_10496 = 0;
	var uLocal_10497 = 3;
	var uLocal_10498 = 500;
	var uLocal_10499 = 10000;
	var uLocal_10500 = 0;
	var uLocal_10501 = 3;
	var uLocal_10502 = 500;
	var uLocal_10503 = 10000;
	var uLocal_10504 = 0;
	var uLocal_10505 = 3;
	var uLocal_10506 = 500;
	var uLocal_10507 = 10000;
	var uLocal_10508 = 0;
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
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 3;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = -1;
	var uLocal_10533 = 0;
	var uLocal_10534 = 5;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 10;
	var uLocal_10546 = 3;
	var uLocal_10547 = 500;
	var uLocal_10548 = 10000;
	var uLocal_10549 = 0;
	var uLocal_10550 = 3;
	var uLocal_10551 = 500;
	var uLocal_10552 = 10000;
	var uLocal_10553 = 0;
	var uLocal_10554 = 3;
	var uLocal_10555 = 500;
	var uLocal_10556 = 10000;
	var uLocal_10557 = 0;
	var uLocal_10558 = 3;
	var uLocal_10559 = 500;
	var uLocal_10560 = 10000;
	var uLocal_10561 = 0;
	var uLocal_10562 = 3;
	var uLocal_10563 = 500;
	var uLocal_10564 = 10000;
	var uLocal_10565 = 0;
	var uLocal_10566 = 3;
	var uLocal_10567 = 500;
	var uLocal_10568 = 10000;
	var uLocal_10569 = 0;
	var uLocal_10570 = 3;
	var uLocal_10571 = 500;
	var uLocal_10572 = 10000;
	var uLocal_10573 = 0;
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
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 3;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = -1;
	var uLocal_10598 = 0;
	var uLocal_10599 = 5;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 10;
	var uLocal_10611 = 3;
	var uLocal_10612 = 500;
	var uLocal_10613 = 10000;
	var uLocal_10614 = 0;
	var uLocal_10615 = 3;
	var uLocal_10616 = 500;
	var uLocal_10617 = 10000;
	var uLocal_10618 = 0;
	var uLocal_10619 = 3;
	var uLocal_10620 = 500;
	var uLocal_10621 = 10000;
	var uLocal_10622 = 0;
	var uLocal_10623 = 3;
	var uLocal_10624 = 500;
	var uLocal_10625 = 10000;
	var uLocal_10626 = 0;
	var uLocal_10627 = 3;
	var uLocal_10628 = 500;
	var uLocal_10629 = 10000;
	var uLocal_10630 = 0;
	var uLocal_10631 = 3;
	var uLocal_10632 = 500;
	var uLocal_10633 = 10000;
	var uLocal_10634 = 0;
	var uLocal_10635 = 3;
	var uLocal_10636 = 500;
	var uLocal_10637 = 10000;
	var uLocal_10638 = 0;
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
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 3;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = -1;
	var uLocal_10663 = 0;
	var uLocal_10664 = 5;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 10;
	var uLocal_10676 = 3;
	var uLocal_10677 = 500;
	var uLocal_10678 = 10000;
	var uLocal_10679 = 0;
	var uLocal_10680 = 3;
	var uLocal_10681 = 500;
	var uLocal_10682 = 10000;
	var uLocal_10683 = 0;
	var uLocal_10684 = 3;
	var uLocal_10685 = 500;
	var uLocal_10686 = 10000;
	var uLocal_10687 = 0;
	var uLocal_10688 = 3;
	var uLocal_10689 = 500;
	var uLocal_10690 = 10000;
	var uLocal_10691 = 0;
	var uLocal_10692 = 3;
	var uLocal_10693 = 500;
	var uLocal_10694 = 10000;
	var uLocal_10695 = 0;
	var uLocal_10696 = 3;
	var uLocal_10697 = 500;
	var uLocal_10698 = 10000;
	var uLocal_10699 = 0;
	var uLocal_10700 = 3;
	var uLocal_10701 = 500;
	var uLocal_10702 = 10000;
	var uLocal_10703 = 0;
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
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 3;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = -1;
	var uLocal_10728 = 0;
	var uLocal_10729 = 5;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 10;
	var uLocal_10741 = 3;
	var uLocal_10742 = 500;
	var uLocal_10743 = 10000;
	var uLocal_10744 = 0;
	var uLocal_10745 = 3;
	var uLocal_10746 = 500;
	var uLocal_10747 = 10000;
	var uLocal_10748 = 0;
	var uLocal_10749 = 3;
	var uLocal_10750 = 500;
	var uLocal_10751 = 10000;
	var uLocal_10752 = 0;
	var uLocal_10753 = 3;
	var uLocal_10754 = 500;
	var uLocal_10755 = 10000;
	var uLocal_10756 = 0;
	var uLocal_10757 = 3;
	var uLocal_10758 = 500;
	var uLocal_10759 = 10000;
	var uLocal_10760 = 0;
	var uLocal_10761 = 3;
	var uLocal_10762 = 500;
	var uLocal_10763 = 10000;
	var uLocal_10764 = 0;
	var uLocal_10765 = 3;
	var uLocal_10766 = 500;
	var uLocal_10767 = 10000;
	var uLocal_10768 = 0;
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
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 3;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = -1;
	var uLocal_10793 = 0;
	var uLocal_10794 = 5;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 10;
	var uLocal_10806 = 3;
	var uLocal_10807 = 500;
	var uLocal_10808 = 10000;
	var uLocal_10809 = 0;
	var uLocal_10810 = 3;
	var uLocal_10811 = 500;
	var uLocal_10812 = 10000;
	var uLocal_10813 = 0;
	var uLocal_10814 = 3;
	var uLocal_10815 = 500;
	var uLocal_10816 = 10000;
	var uLocal_10817 = 0;
	var uLocal_10818 = 3;
	var uLocal_10819 = 500;
	var uLocal_10820 = 10000;
	var uLocal_10821 = 0;
	var uLocal_10822 = 3;
	var uLocal_10823 = 500;
	var uLocal_10824 = 10000;
	var uLocal_10825 = 0;
	var uLocal_10826 = 3;
	var uLocal_10827 = 500;
	var uLocal_10828 = 10000;
	var uLocal_10829 = 0;
	var uLocal_10830 = 3;
	var uLocal_10831 = 500;
	var uLocal_10832 = 10000;
	var uLocal_10833 = 0;
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
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 3;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = -1;
	var uLocal_10858 = 0;
	var uLocal_10859 = 5;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 10;
	var uLocal_10871 = 3;
	var uLocal_10872 = 500;
	var uLocal_10873 = 10000;
	var uLocal_10874 = 0;
	var uLocal_10875 = 3;
	var uLocal_10876 = 500;
	var uLocal_10877 = 10000;
	var uLocal_10878 = 0;
	var uLocal_10879 = 3;
	var uLocal_10880 = 500;
	var uLocal_10881 = 10000;
	var uLocal_10882 = 0;
	var uLocal_10883 = 3;
	var uLocal_10884 = 500;
	var uLocal_10885 = 10000;
	var uLocal_10886 = 0;
	var uLocal_10887 = 3;
	var uLocal_10888 = 500;
	var uLocal_10889 = 10000;
	var uLocal_10890 = 0;
	var uLocal_10891 = 3;
	var uLocal_10892 = 500;
	var uLocal_10893 = 10000;
	var uLocal_10894 = 0;
	var uLocal_10895 = 3;
	var uLocal_10896 = 500;
	var uLocal_10897 = 10000;
	var uLocal_10898 = 0;
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
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 3;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = -1;
	var uLocal_10923 = 0;
	var uLocal_10924 = 5;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 10;
	var uLocal_10936 = 3;
	var uLocal_10937 = 500;
	var uLocal_10938 = 10000;
	var uLocal_10939 = 0;
	var uLocal_10940 = 3;
	var uLocal_10941 = 500;
	var uLocal_10942 = 10000;
	var uLocal_10943 = 0;
	var uLocal_10944 = 3;
	var uLocal_10945 = 500;
	var uLocal_10946 = 10000;
	var uLocal_10947 = 0;
	var uLocal_10948 = 3;
	var uLocal_10949 = 500;
	var uLocal_10950 = 10000;
	var uLocal_10951 = 0;
	var uLocal_10952 = 3;
	var uLocal_10953 = 500;
	var uLocal_10954 = 10000;
	var uLocal_10955 = 0;
	var uLocal_10956 = 3;
	var uLocal_10957 = 500;
	var uLocal_10958 = 10000;
	var uLocal_10959 = 0;
	var uLocal_10960 = 3;
	var uLocal_10961 = 500;
	var uLocal_10962 = 10000;
	var uLocal_10963 = 0;
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
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 3;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = -1;
	var uLocal_10988 = 0;
	var uLocal_10989 = 5;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 10;
	var uLocal_11001 = 3;
	var uLocal_11002 = 500;
	var uLocal_11003 = 10000;
	var uLocal_11004 = 0;
	var uLocal_11005 = 3;
	var uLocal_11006 = 500;
	var uLocal_11007 = 10000;
	var uLocal_11008 = 0;
	var uLocal_11009 = 3;
	var uLocal_11010 = 500;
	var uLocal_11011 = 10000;
	var uLocal_11012 = 0;
	var uLocal_11013 = 3;
	var uLocal_11014 = 500;
	var uLocal_11015 = 10000;
	var uLocal_11016 = 0;
	var uLocal_11017 = 3;
	var uLocal_11018 = 500;
	var uLocal_11019 = 10000;
	var uLocal_11020 = 0;
	var uLocal_11021 = 3;
	var uLocal_11022 = 500;
	var uLocal_11023 = 10000;
	var uLocal_11024 = 0;
	var uLocal_11025 = 3;
	var uLocal_11026 = 500;
	var uLocal_11027 = 10000;
	var uLocal_11028 = 0;
	var uLocal_11029 = 3;
	var uLocal_11030 = 500;
	var uLocal_11031 = 10000;
	var uLocal_11032 = 0;
	var uLocal_11033 = 3;
	var uLocal_11034 = 500;
	var uLocal_11035 = 10000;
	var uLocal_11036 = 0;
	var uLocal_11037 = 3;
	var uLocal_11038 = 500;
	var uLocal_11039 = 10000;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 3;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = -1;
	var uLocal_11053 = 0;
	var uLocal_11054 = 5;
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
	var uLocal_11065 = 10;
	var uLocal_11066 = 3;
	var uLocal_11067 = 500;
	var uLocal_11068 = 10000;
	var uLocal_11069 = 0;
	var uLocal_11070 = 3;
	var uLocal_11071 = 500;
	var uLocal_11072 = 10000;
	var uLocal_11073 = 0;
	var uLocal_11074 = 3;
	var uLocal_11075 = 500;
	var uLocal_11076 = 10000;
	var uLocal_11077 = 0;
	var uLocal_11078 = 3;
	var uLocal_11079 = 500;
	var uLocal_11080 = 10000;
	var uLocal_11081 = 0;
	var uLocal_11082 = 3;
	var uLocal_11083 = 500;
	var uLocal_11084 = 10000;
	var uLocal_11085 = 0;
	var uLocal_11086 = 3;
	var uLocal_11087 = 500;
	var uLocal_11088 = 10000;
	var uLocal_11089 = 0;
	var uLocal_11090 = 3;
	var uLocal_11091 = 500;
	var uLocal_11092 = 10000;
	var uLocal_11093 = 0;
	var uLocal_11094 = 3;
	var uLocal_11095 = 500;
	var uLocal_11096 = 10000;
	var uLocal_11097 = 0;
	var uLocal_11098 = 3;
	var uLocal_11099 = 500;
	var uLocal_11100 = 10000;
	var uLocal_11101 = 0;
	var uLocal_11102 = 3;
	var uLocal_11103 = 500;
	var uLocal_11104 = 10000;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 3;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = -1;
	var uLocal_11118 = 0;
	var uLocal_11119 = 5;
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
	var uLocal_11130 = 10;
	var uLocal_11131 = 3;
	var uLocal_11132 = 500;
	var uLocal_11133 = 10000;
	var uLocal_11134 = 0;
	var uLocal_11135 = 3;
	var uLocal_11136 = 500;
	var uLocal_11137 = 10000;
	var uLocal_11138 = 0;
	var uLocal_11139 = 3;
	var uLocal_11140 = 500;
	var uLocal_11141 = 10000;
	var uLocal_11142 = 0;
	var uLocal_11143 = 3;
	var uLocal_11144 = 500;
	var uLocal_11145 = 10000;
	var uLocal_11146 = 0;
	var uLocal_11147 = 3;
	var uLocal_11148 = 500;
	var uLocal_11149 = 10000;
	var uLocal_11150 = 0;
	var uLocal_11151 = 3;
	var uLocal_11152 = 500;
	var uLocal_11153 = 10000;
	var uLocal_11154 = 0;
	var uLocal_11155 = 3;
	var uLocal_11156 = 500;
	var uLocal_11157 = 10000;
	var uLocal_11158 = 0;
	var uLocal_11159 = 3;
	var uLocal_11160 = 500;
	var uLocal_11161 = 10000;
	var uLocal_11162 = 0;
	var uLocal_11163 = 3;
	var uLocal_11164 = 500;
	var uLocal_11165 = 10000;
	var uLocal_11166 = 0;
	var uLocal_11167 = 3;
	var uLocal_11168 = 500;
	var uLocal_11169 = 10000;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 3;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = -1;
	var uLocal_11183 = 0;
	var uLocal_11184 = 5;
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
	var uLocal_11195 = 10;
	var uLocal_11196 = 3;
	var uLocal_11197 = 500;
	var uLocal_11198 = 10000;
	var uLocal_11199 = 0;
	var uLocal_11200 = 3;
	var uLocal_11201 = 500;
	var uLocal_11202 = 10000;
	var uLocal_11203 = 0;
	var uLocal_11204 = 3;
	var uLocal_11205 = 500;
	var uLocal_11206 = 10000;
	var uLocal_11207 = 0;
	var uLocal_11208 = 3;
	var uLocal_11209 = 500;
	var uLocal_11210 = 10000;
	var uLocal_11211 = 0;
	var uLocal_11212 = 3;
	var uLocal_11213 = 500;
	var uLocal_11214 = 10000;
	var uLocal_11215 = 0;
	var uLocal_11216 = 3;
	var uLocal_11217 = 500;
	var uLocal_11218 = 10000;
	var uLocal_11219 = 0;
	var uLocal_11220 = 3;
	var uLocal_11221 = 500;
	var uLocal_11222 = 10000;
	var uLocal_11223 = 0;
	var uLocal_11224 = 3;
	var uLocal_11225 = 500;
	var uLocal_11226 = 10000;
	var uLocal_11227 = 0;
	var uLocal_11228 = 3;
	var uLocal_11229 = 500;
	var uLocal_11230 = 10000;
	var uLocal_11231 = 0;
	var uLocal_11232 = 3;
	var uLocal_11233 = 500;
	var uLocal_11234 = 10000;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 3;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = -1;
	var uLocal_11248 = 0;
	var uLocal_11249 = 5;
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
	var uLocal_11260 = 10;
	var uLocal_11261 = 3;
	var uLocal_11262 = 500;
	var uLocal_11263 = 10000;
	var uLocal_11264 = 0;
	var uLocal_11265 = 3;
	var uLocal_11266 = 500;
	var uLocal_11267 = 10000;
	var uLocal_11268 = 0;
	var uLocal_11269 = 3;
	var uLocal_11270 = 500;
	var uLocal_11271 = 10000;
	var uLocal_11272 = 0;
	var uLocal_11273 = 3;
	var uLocal_11274 = 500;
	var uLocal_11275 = 10000;
	var uLocal_11276 = 0;
	var uLocal_11277 = 3;
	var uLocal_11278 = 500;
	var uLocal_11279 = 10000;
	var uLocal_11280 = 0;
	var uLocal_11281 = 3;
	var uLocal_11282 = 500;
	var uLocal_11283 = 10000;
	var uLocal_11284 = 0;
	var uLocal_11285 = 3;
	var uLocal_11286 = 500;
	var uLocal_11287 = 10000;
	var uLocal_11288 = 0;
	var uLocal_11289 = 3;
	var uLocal_11290 = 500;
	var uLocal_11291 = 10000;
	var uLocal_11292 = 0;
	var uLocal_11293 = 3;
	var uLocal_11294 = 500;
	var uLocal_11295 = 10000;
	var uLocal_11296 = 0;
	var uLocal_11297 = 3;
	var uLocal_11298 = 500;
	var uLocal_11299 = 10000;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 3;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = -1;
	var uLocal_11313 = 0;
	var uLocal_11314 = 5;
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
	var uLocal_11325 = 10;
	var uLocal_11326 = 3;
	var uLocal_11327 = 500;
	var uLocal_11328 = 10000;
	var uLocal_11329 = 0;
	var uLocal_11330 = 3;
	var uLocal_11331 = 500;
	var uLocal_11332 = 10000;
	var uLocal_11333 = 0;
	var uLocal_11334 = 3;
	var uLocal_11335 = 500;
	var uLocal_11336 = 10000;
	var uLocal_11337 = 0;
	var uLocal_11338 = 3;
	var uLocal_11339 = 500;
	var uLocal_11340 = 10000;
	var uLocal_11341 = 0;
	var uLocal_11342 = 3;
	var uLocal_11343 = 500;
	var uLocal_11344 = 10000;
	var uLocal_11345 = 0;
	var uLocal_11346 = 3;
	var uLocal_11347 = 500;
	var uLocal_11348 = 10000;
	var uLocal_11349 = 0;
	var uLocal_11350 = 3;
	var uLocal_11351 = 500;
	var uLocal_11352 = 10000;
	var uLocal_11353 = 0;
	var uLocal_11354 = 3;
	var uLocal_11355 = 500;
	var uLocal_11356 = 10000;
	var uLocal_11357 = 0;
	var uLocal_11358 = 3;
	var uLocal_11359 = 500;
	var uLocal_11360 = 10000;
	var uLocal_11361 = 0;
	var uLocal_11362 = 3;
	var uLocal_11363 = 500;
	var uLocal_11364 = 10000;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 3;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = -1;
	var uLocal_11378 = 0;
	var uLocal_11379 = 5;
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
	var uLocal_11390 = 10;
	var uLocal_11391 = 3;
	var uLocal_11392 = 500;
	var uLocal_11393 = 10000;
	var uLocal_11394 = 0;
	var uLocal_11395 = 3;
	var uLocal_11396 = 500;
	var uLocal_11397 = 10000;
	var uLocal_11398 = 0;
	var uLocal_11399 = 3;
	var uLocal_11400 = 500;
	var uLocal_11401 = 10000;
	var uLocal_11402 = 0;
	var uLocal_11403 = 3;
	var uLocal_11404 = 500;
	var uLocal_11405 = 10000;
	var uLocal_11406 = 0;
	var uLocal_11407 = 3;
	var uLocal_11408 = 500;
	var uLocal_11409 = 10000;
	var uLocal_11410 = 0;
	var uLocal_11411 = 3;
	var uLocal_11412 = 500;
	var uLocal_11413 = 10000;
	var uLocal_11414 = 0;
	var uLocal_11415 = 3;
	var uLocal_11416 = 500;
	var uLocal_11417 = 10000;
	var uLocal_11418 = 0;
	var uLocal_11419 = 3;
	var uLocal_11420 = 500;
	var uLocal_11421 = 10000;
	var uLocal_11422 = 0;
	var uLocal_11423 = 3;
	var uLocal_11424 = 500;
	var uLocal_11425 = 10000;
	var uLocal_11426 = 0;
	var uLocal_11427 = 3;
	var uLocal_11428 = 500;
	var uLocal_11429 = 10000;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 3;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = -1;
	var uLocal_11443 = 0;
	var uLocal_11444 = 5;
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
	var uLocal_11455 = 10;
	var uLocal_11456 = 3;
	var uLocal_11457 = 500;
	var uLocal_11458 = 10000;
	var uLocal_11459 = 0;
	var uLocal_11460 = 3;
	var uLocal_11461 = 500;
	var uLocal_11462 = 10000;
	var uLocal_11463 = 0;
	var uLocal_11464 = 3;
	var uLocal_11465 = 500;
	var uLocal_11466 = 10000;
	var uLocal_11467 = 0;
	var uLocal_11468 = 3;
	var uLocal_11469 = 500;
	var uLocal_11470 = 10000;
	var uLocal_11471 = 0;
	var uLocal_11472 = 3;
	var uLocal_11473 = 500;
	var uLocal_11474 = 10000;
	var uLocal_11475 = 0;
	var uLocal_11476 = 3;
	var uLocal_11477 = 500;
	var uLocal_11478 = 10000;
	var uLocal_11479 = 0;
	var uLocal_11480 = 3;
	var uLocal_11481 = 500;
	var uLocal_11482 = 10000;
	var uLocal_11483 = 0;
	var uLocal_11484 = 3;
	var uLocal_11485 = 500;
	var uLocal_11486 = 10000;
	var uLocal_11487 = 0;
	var uLocal_11488 = 3;
	var uLocal_11489 = 500;
	var uLocal_11490 = 10000;
	var uLocal_11491 = 0;
	var uLocal_11492 = 3;
	var uLocal_11493 = 500;
	var uLocal_11494 = 10000;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 3;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = -1;
	var uLocal_11508 = 0;
	var uLocal_11509 = 5;
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
	var uLocal_11520 = 10;
	var uLocal_11521 = 3;
	var uLocal_11522 = 500;
	var uLocal_11523 = 10000;
	var uLocal_11524 = 0;
	var uLocal_11525 = 3;
	var uLocal_11526 = 500;
	var uLocal_11527 = 10000;
	var uLocal_11528 = 0;
	var uLocal_11529 = 3;
	var uLocal_11530 = 500;
	var uLocal_11531 = 10000;
	var uLocal_11532 = 0;
	var uLocal_11533 = 3;
	var uLocal_11534 = 500;
	var uLocal_11535 = 10000;
	var uLocal_11536 = 0;
	var uLocal_11537 = 3;
	var uLocal_11538 = 500;
	var uLocal_11539 = 10000;
	var uLocal_11540 = 0;
	var uLocal_11541 = 3;
	var uLocal_11542 = 500;
	var uLocal_11543 = 10000;
	var uLocal_11544 = 0;
	var uLocal_11545 = 3;
	var uLocal_11546 = 500;
	var uLocal_11547 = 10000;
	var uLocal_11548 = 0;
	var uLocal_11549 = 3;
	var uLocal_11550 = 500;
	var uLocal_11551 = 10000;
	var uLocal_11552 = 0;
	var uLocal_11553 = 3;
	var uLocal_11554 = 500;
	var uLocal_11555 = 10000;
	var uLocal_11556 = 0;
	var uLocal_11557 = 3;
	var uLocal_11558 = 500;
	var uLocal_11559 = 10000;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 3;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = -1;
	var uLocal_11573 = 0;
	var uLocal_11574 = 5;
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
	var uLocal_11585 = 10;
	var uLocal_11586 = 3;
	var uLocal_11587 = 500;
	var uLocal_11588 = 10000;
	var uLocal_11589 = 0;
	var uLocal_11590 = 3;
	var uLocal_11591 = 500;
	var uLocal_11592 = 10000;
	var uLocal_11593 = 0;
	var uLocal_11594 = 3;
	var uLocal_11595 = 500;
	var uLocal_11596 = 10000;
	var uLocal_11597 = 0;
	var uLocal_11598 = 3;
	var uLocal_11599 = 500;
	var uLocal_11600 = 10000;
	var uLocal_11601 = 0;
	var uLocal_11602 = 3;
	var uLocal_11603 = 500;
	var uLocal_11604 = 10000;
	var uLocal_11605 = 0;
	var uLocal_11606 = 3;
	var uLocal_11607 = 500;
	var uLocal_11608 = 10000;
	var uLocal_11609 = 0;
	var uLocal_11610 = 3;
	var uLocal_11611 = 500;
	var uLocal_11612 = 10000;
	var uLocal_11613 = 0;
	var uLocal_11614 = 3;
	var uLocal_11615 = 500;
	var uLocal_11616 = 10000;
	var uLocal_11617 = 0;
	var uLocal_11618 = 3;
	var uLocal_11619 = 500;
	var uLocal_11620 = 10000;
	var uLocal_11621 = 0;
	var uLocal_11622 = 3;
	var uLocal_11623 = 500;
	var uLocal_11624 = 10000;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 3;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = -1;
	var uLocal_11638 = 0;
	var uLocal_11639 = 5;
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
	var uLocal_11650 = 10;
	var uLocal_11651 = 3;
	var uLocal_11652 = 500;
	var uLocal_11653 = 10000;
	var uLocal_11654 = 0;
	var uLocal_11655 = 3;
	var uLocal_11656 = 500;
	var uLocal_11657 = 10000;
	var uLocal_11658 = 0;
	var uLocal_11659 = 3;
	var uLocal_11660 = 500;
	var uLocal_11661 = 10000;
	var uLocal_11662 = 0;
	var uLocal_11663 = 3;
	var uLocal_11664 = 500;
	var uLocal_11665 = 10000;
	var uLocal_11666 = 0;
	var uLocal_11667 = 3;
	var uLocal_11668 = 500;
	var uLocal_11669 = 10000;
	var uLocal_11670 = 0;
	var uLocal_11671 = 3;
	var uLocal_11672 = 500;
	var uLocal_11673 = 10000;
	var uLocal_11674 = 0;
	var uLocal_11675 = 3;
	var uLocal_11676 = 500;
	var uLocal_11677 = 10000;
	var uLocal_11678 = 0;
	var uLocal_11679 = 3;
	var uLocal_11680 = 500;
	var uLocal_11681 = 10000;
	var uLocal_11682 = 0;
	var uLocal_11683 = 3;
	var uLocal_11684 = 500;
	var uLocal_11685 = 10000;
	var uLocal_11686 = 0;
	var uLocal_11687 = 3;
	var uLocal_11688 = 500;
	var uLocal_11689 = 10000;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 3;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = -1;
	var uLocal_11703 = 0;
	var uLocal_11704 = 5;
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
	var uLocal_11715 = 10;
	var uLocal_11716 = 3;
	var uLocal_11717 = 500;
	var uLocal_11718 = 10000;
	var uLocal_11719 = 0;
	var uLocal_11720 = 3;
	var uLocal_11721 = 500;
	var uLocal_11722 = 10000;
	var uLocal_11723 = 0;
	var uLocal_11724 = 3;
	var uLocal_11725 = 500;
	var uLocal_11726 = 10000;
	var uLocal_11727 = 0;
	var uLocal_11728 = 3;
	var uLocal_11729 = 500;
	var uLocal_11730 = 10000;
	var uLocal_11731 = 0;
	var uLocal_11732 = 3;
	var uLocal_11733 = 500;
	var uLocal_11734 = 10000;
	var uLocal_11735 = 0;
	var uLocal_11736 = 3;
	var uLocal_11737 = 500;
	var uLocal_11738 = 10000;
	var uLocal_11739 = 0;
	var uLocal_11740 = 3;
	var uLocal_11741 = 500;
	var uLocal_11742 = 10000;
	var uLocal_11743 = 0;
	var uLocal_11744 = 3;
	var uLocal_11745 = 500;
	var uLocal_11746 = 10000;
	var uLocal_11747 = 0;
	var uLocal_11748 = 3;
	var uLocal_11749 = 500;
	var uLocal_11750 = 10000;
	var uLocal_11751 = 0;
	var uLocal_11752 = 3;
	var uLocal_11753 = 500;
	var uLocal_11754 = 10000;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 3;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = -1;
	var uLocal_11768 = 0;
	var uLocal_11769 = 5;
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
	var uLocal_11780 = 10;
	var uLocal_11781 = 3;
	var uLocal_11782 = 500;
	var uLocal_11783 = 10000;
	var uLocal_11784 = 0;
	var uLocal_11785 = 3;
	var uLocal_11786 = 500;
	var uLocal_11787 = 10000;
	var uLocal_11788 = 0;
	var uLocal_11789 = 3;
	var uLocal_11790 = 500;
	var uLocal_11791 = 10000;
	var uLocal_11792 = 0;
	var uLocal_11793 = 3;
	var uLocal_11794 = 500;
	var uLocal_11795 = 10000;
	var uLocal_11796 = 0;
	var uLocal_11797 = 3;
	var uLocal_11798 = 500;
	var uLocal_11799 = 10000;
	var uLocal_11800 = 0;
	var uLocal_11801 = 3;
	var uLocal_11802 = 500;
	var uLocal_11803 = 10000;
	var uLocal_11804 = 0;
	var uLocal_11805 = 3;
	var uLocal_11806 = 500;
	var uLocal_11807 = 10000;
	var uLocal_11808 = 0;
	var uLocal_11809 = 3;
	var uLocal_11810 = 500;
	var uLocal_11811 = 10000;
	var uLocal_11812 = 0;
	var uLocal_11813 = 3;
	var uLocal_11814 = 500;
	var uLocal_11815 = 10000;
	var uLocal_11816 = 0;
	var uLocal_11817 = 3;
	var uLocal_11818 = 500;
	var uLocal_11819 = 10000;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 3;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = -1;
	var uLocal_11833 = 0;
	var uLocal_11834 = 5;
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
	var uLocal_11845 = 10;
	var uLocal_11846 = 3;
	var uLocal_11847 = 500;
	var uLocal_11848 = 10000;
	var uLocal_11849 = 0;
	var uLocal_11850 = 3;
	var uLocal_11851 = 500;
	var uLocal_11852 = 10000;
	var uLocal_11853 = 0;
	var uLocal_11854 = 3;
	var uLocal_11855 = 500;
	var uLocal_11856 = 10000;
	var uLocal_11857 = 0;
	var uLocal_11858 = 3;
	var uLocal_11859 = 500;
	var uLocal_11860 = 10000;
	var uLocal_11861 = 0;
	var uLocal_11862 = 3;
	var uLocal_11863 = 500;
	var uLocal_11864 = 10000;
	var uLocal_11865 = 0;
	var uLocal_11866 = 3;
	var uLocal_11867 = 500;
	var uLocal_11868 = 10000;
	var uLocal_11869 = 0;
	var uLocal_11870 = 3;
	var uLocal_11871 = 500;
	var uLocal_11872 = 10000;
	var uLocal_11873 = 0;
	var uLocal_11874 = 3;
	var uLocal_11875 = 500;
	var uLocal_11876 = 10000;
	var uLocal_11877 = 0;
	var uLocal_11878 = 3;
	var uLocal_11879 = 500;
	var uLocal_11880 = 10000;
	var uLocal_11881 = 0;
	var uLocal_11882 = 3;
	var uLocal_11883 = 500;
	var uLocal_11884 = 10000;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 3;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = -1;
	var uLocal_11898 = 0;
	var uLocal_11899 = 5;
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
	var uLocal_11910 = 10;
	var uLocal_11911 = 3;
	var uLocal_11912 = 500;
	var uLocal_11913 = 10000;
	var uLocal_11914 = 0;
	var uLocal_11915 = 3;
	var uLocal_11916 = 500;
	var uLocal_11917 = 10000;
	var uLocal_11918 = 0;
	var uLocal_11919 = 3;
	var uLocal_11920 = 500;
	var uLocal_11921 = 10000;
	var uLocal_11922 = 0;
	var uLocal_11923 = 3;
	var uLocal_11924 = 500;
	var uLocal_11925 = 10000;
	var uLocal_11926 = 0;
	var uLocal_11927 = 3;
	var uLocal_11928 = 500;
	var uLocal_11929 = 10000;
	var uLocal_11930 = 0;
	var uLocal_11931 = 3;
	var uLocal_11932 = 500;
	var uLocal_11933 = 10000;
	var uLocal_11934 = 0;
	var uLocal_11935 = 3;
	var uLocal_11936 = 500;
	var uLocal_11937 = 10000;
	var uLocal_11938 = 0;
	var uLocal_11939 = 3;
	var uLocal_11940 = 500;
	var uLocal_11941 = 10000;
	var uLocal_11942 = 0;
	var uLocal_11943 = 3;
	var uLocal_11944 = 500;
	var uLocal_11945 = 10000;
	var uLocal_11946 = 0;
	var uLocal_11947 = 3;
	var uLocal_11948 = 500;
	var uLocal_11949 = 10000;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 3;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = -1;
	var uLocal_11963 = 0;
	var uLocal_11964 = 5;
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
	var uLocal_11975 = 10;
	var uLocal_11976 = 3;
	var uLocal_11977 = 500;
	var uLocal_11978 = 10000;
	var uLocal_11979 = 0;
	var uLocal_11980 = 3;
	var uLocal_11981 = 500;
	var uLocal_11982 = 10000;
	var uLocal_11983 = 0;
	var uLocal_11984 = 3;
	var uLocal_11985 = 500;
	var uLocal_11986 = 10000;
	var uLocal_11987 = 0;
	var uLocal_11988 = 3;
	var uLocal_11989 = 500;
	var uLocal_11990 = 10000;
	var uLocal_11991 = 0;
	var uLocal_11992 = 3;
	var uLocal_11993 = 500;
	var uLocal_11994 = 10000;
	var uLocal_11995 = 0;
	var uLocal_11996 = 3;
	var uLocal_11997 = 500;
	var uLocal_11998 = 10000;
	var uLocal_11999 = 0;
	var uLocal_12000 = 3;
	var uLocal_12001 = 500;
	var uLocal_12002 = 10000;
	var uLocal_12003 = 0;
	var uLocal_12004 = 3;
	var uLocal_12005 = 500;
	var uLocal_12006 = 10000;
	var uLocal_12007 = 0;
	var uLocal_12008 = 3;
	var uLocal_12009 = 500;
	var uLocal_12010 = 10000;
	var uLocal_12011 = 0;
	var uLocal_12012 = 3;
	var uLocal_12013 = 500;
	var uLocal_12014 = 10000;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 3;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = -1;
	var uLocal_12028 = 0;
	var uLocal_12029 = 5;
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
	var uLocal_12040 = 10;
	var uLocal_12041 = 3;
	var uLocal_12042 = 500;
	var uLocal_12043 = 10000;
	var uLocal_12044 = 0;
	var uLocal_12045 = 3;
	var uLocal_12046 = 500;
	var uLocal_12047 = 10000;
	var uLocal_12048 = 0;
	var uLocal_12049 = 3;
	var uLocal_12050 = 500;
	var uLocal_12051 = 10000;
	var uLocal_12052 = 0;
	var uLocal_12053 = 3;
	var uLocal_12054 = 500;
	var uLocal_12055 = 10000;
	var uLocal_12056 = 0;
	var uLocal_12057 = 3;
	var uLocal_12058 = 500;
	var uLocal_12059 = 10000;
	var uLocal_12060 = 0;
	var uLocal_12061 = 3;
	var uLocal_12062 = 500;
	var uLocal_12063 = 10000;
	var uLocal_12064 = 0;
	var uLocal_12065 = 3;
	var uLocal_12066 = 500;
	var uLocal_12067 = 10000;
	var uLocal_12068 = 0;
	var uLocal_12069 = 3;
	var uLocal_12070 = 500;
	var uLocal_12071 = 10000;
	var uLocal_12072 = 0;
	var uLocal_12073 = 3;
	var uLocal_12074 = 500;
	var uLocal_12075 = 10000;
	var uLocal_12076 = 0;
	var uLocal_12077 = 3;
	var uLocal_12078 = 500;
	var uLocal_12079 = 10000;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 3;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = -1;
	var uLocal_12093 = 0;
	var uLocal_12094 = 5;
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
	var uLocal_12105 = 10;
	var uLocal_12106 = 3;
	var uLocal_12107 = 500;
	var uLocal_12108 = 10000;
	var uLocal_12109 = 0;
	var uLocal_12110 = 3;
	var uLocal_12111 = 500;
	var uLocal_12112 = 10000;
	var uLocal_12113 = 0;
	var uLocal_12114 = 3;
	var uLocal_12115 = 500;
	var uLocal_12116 = 10000;
	var uLocal_12117 = 0;
	var uLocal_12118 = 3;
	var uLocal_12119 = 500;
	var uLocal_12120 = 10000;
	var uLocal_12121 = 0;
	var uLocal_12122 = 3;
	var uLocal_12123 = 500;
	var uLocal_12124 = 10000;
	var uLocal_12125 = 0;
	var uLocal_12126 = 3;
	var uLocal_12127 = 500;
	var uLocal_12128 = 10000;
	var uLocal_12129 = 0;
	var uLocal_12130 = 3;
	var uLocal_12131 = 500;
	var uLocal_12132 = 10000;
	var uLocal_12133 = 0;
	var uLocal_12134 = 3;
	var uLocal_12135 = 500;
	var uLocal_12136 = 10000;
	var uLocal_12137 = 0;
	var uLocal_12138 = 3;
	var uLocal_12139 = 500;
	var uLocal_12140 = 10000;
	var uLocal_12141 = 0;
	var uLocal_12142 = 3;
	var uLocal_12143 = 500;
	var uLocal_12144 = 10000;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 3;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = -1;
	var uLocal_12158 = 0;
	var uLocal_12159 = 5;
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
	var uLocal_12170 = 10;
	var uLocal_12171 = 3;
	var uLocal_12172 = 500;
	var uLocal_12173 = 10000;
	var uLocal_12174 = 0;
	var uLocal_12175 = 3;
	var uLocal_12176 = 500;
	var uLocal_12177 = 10000;
	var uLocal_12178 = 0;
	var uLocal_12179 = 3;
	var uLocal_12180 = 500;
	var uLocal_12181 = 10000;
	var uLocal_12182 = 0;
	var uLocal_12183 = 3;
	var uLocal_12184 = 500;
	var uLocal_12185 = 10000;
	var uLocal_12186 = 0;
	var uLocal_12187 = 3;
	var uLocal_12188 = 500;
	var uLocal_12189 = 10000;
	var uLocal_12190 = 0;
	var uLocal_12191 = 3;
	var uLocal_12192 = 500;
	var uLocal_12193 = 10000;
	var uLocal_12194 = 0;
	var uLocal_12195 = 3;
	var uLocal_12196 = 500;
	var uLocal_12197 = 10000;
	var uLocal_12198 = 0;
	var uLocal_12199 = 3;
	var uLocal_12200 = 500;
	var uLocal_12201 = 10000;
	var uLocal_12202 = 0;
	var uLocal_12203 = 3;
	var uLocal_12204 = 500;
	var uLocal_12205 = 10000;
	var uLocal_12206 = 0;
	var uLocal_12207 = 3;
	var uLocal_12208 = 500;
	var uLocal_12209 = 10000;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 3;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 0;
	var uLocal_12222 = -1;
	var uLocal_12223 = 0;
	var uLocal_12224 = 5;
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
	var uLocal_12235 = 10;
	var uLocal_12236 = 3;
	var uLocal_12237 = 500;
	var uLocal_12238 = 10000;
	var uLocal_12239 = 0;
	var uLocal_12240 = 3;
	var uLocal_12241 = 500;
	var uLocal_12242 = 10000;
	var uLocal_12243 = 0;
	var uLocal_12244 = 3;
	var uLocal_12245 = 500;
	var uLocal_12246 = 10000;
	var uLocal_12247 = 0;
	var uLocal_12248 = 3;
	var uLocal_12249 = 500;
	var uLocal_12250 = 10000;
	var uLocal_12251 = 0;
	var uLocal_12252 = 3;
	var uLocal_12253 = 500;
	var uLocal_12254 = 10000;
	var uLocal_12255 = 0;
	var uLocal_12256 = 3;
	var uLocal_12257 = 500;
	var uLocal_12258 = 10000;
	var uLocal_12259 = 0;
	var uLocal_12260 = 3;
	var uLocal_12261 = 500;
	var uLocal_12262 = 10000;
	var uLocal_12263 = 0;
	var uLocal_12264 = 3;
	var uLocal_12265 = 500;
	var uLocal_12266 = 10000;
	var uLocal_12267 = 0;
	var uLocal_12268 = 3;
	var uLocal_12269 = 500;
	var uLocal_12270 = 10000;
	var uLocal_12271 = 0;
	var uLocal_12272 = 3;
	var uLocal_12273 = 500;
	var uLocal_12274 = 10000;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 3;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = -1;
	var uLocal_12288 = 0;
	var uLocal_12289 = 5;
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
	var uLocal_12300 = 10;
	var uLocal_12301 = 3;
	var uLocal_12302 = 500;
	var uLocal_12303 = 10000;
	var uLocal_12304 = 0;
	var uLocal_12305 = 3;
	var uLocal_12306 = 500;
	var uLocal_12307 = 10000;
	var uLocal_12308 = 0;
	var uLocal_12309 = 3;
	var uLocal_12310 = 500;
	var uLocal_12311 = 10000;
	var uLocal_12312 = 0;
	var uLocal_12313 = 3;
	var uLocal_12314 = 500;
	var uLocal_12315 = 10000;
	var uLocal_12316 = 0;
	var uLocal_12317 = 3;
	var uLocal_12318 = 500;
	var uLocal_12319 = 10000;
	var uLocal_12320 = 0;
	var uLocal_12321 = 3;
	var uLocal_12322 = 500;
	var uLocal_12323 = 10000;
	var uLocal_12324 = 0;
	var uLocal_12325 = 3;
	var uLocal_12326 = 500;
	var uLocal_12327 = 10000;
	var uLocal_12328 = 0;
	var uLocal_12329 = 3;
	var uLocal_12330 = 500;
	var uLocal_12331 = 10000;
	var uLocal_12332 = 0;
	var uLocal_12333 = 3;
	var uLocal_12334 = 500;
	var uLocal_12335 = 10000;
	var uLocal_12336 = 0;
	var uLocal_12337 = 3;
	var uLocal_12338 = 500;
	var uLocal_12339 = 10000;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 1;
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
	var uLocal_12356 = 65;
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
	var uLocal_13137 = 1097859072;
	var uLocal_13138 = 1101004800;
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
	var uLocal_13165 = 4;
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
	var uLocal_13237 = 40;
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
	var uLocal_13878 = 40;
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
	var uLocal_14519 = 60;
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
	var uLocal_15015 = 0;
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
	var uLocal_15256 = 0;
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
	var uLocal_15286 = 0;
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
	var uLocal_15298 = 0;
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
	var uLocal_15309 = 0;
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
	var uLocal_15322 = 0;
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
	var uLocal_15335 = 0;
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
	var uLocal_15348 = 0;
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
	var uLocal_15361 = 0;
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
	var uLocal_15374 = 0;
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
	var uLocal_15387 = 0;
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
	var uLocal_15400 = 0;
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
	var uLocal_15413 = 0;
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
	var uLocal_15426 = 0;
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
	var uLocal_15439 = 0;
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
	var uLocal_15452 = 0;
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
	var uLocal_15465 = 0;
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
	var uLocal_15478 = 0;
	var uLocal_15479 = 0;
	var uLocal_15480 = 15;
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
	var uLocal_15491 = 0;
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
	var uLocal_15504 = 0;
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
	var uLocal_15517 = 0;
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
	var uLocal_15530 = 0;
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
	var uLocal_15543 = 0;
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
	var uLocal_15556 = 0;
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
	var uLocal_15569 = 0;
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
	var uLocal_15582 = 0;
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
	var uLocal_15595 = 0;
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
	var uLocal_15608 = 0;
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
	var uLocal_15621 = 0;
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
	var uLocal_15634 = 0;
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
	var uLocal_15647 = 0;
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
	var uLocal_15660 = 0;
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
	var uLocal_15673 = 0;
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
	var uLocal_15686 = 0;
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
	var uLocal_15699 = 0;
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
	var uLocal_15712 = 0;
	var uLocal_15713 = 0;
	var uLocal_15714 = 0;
	var uLocal_15715 = 0;
	var uLocal_15716 = 0;
	var uLocal_15717 = 0;
	var uLocal_15718 = 0;
	var uLocal_15719 = 0;
	var uLocal_15720 = 0;
	var uLocal_15721 = 10;
	var uLocal_15722 = 0;
	var uLocal_15723 = 0;
	var uLocal_15724 = 0;
	var uLocal_15725 = 0;
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
	var uLocal_15738 = 0;
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
	var uLocal_15751 = -1;
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
	var uLocal_15763 = 65;
	var uLocal_15764 = 0;
	var uLocal_15765 = 0;
	var uLocal_15766 = 0;
	var uLocal_15767 = 0;
	var uLocal_15768 = 0;
	var uLocal_15769 = 0;
	var uLocal_15770 = 0;
	var uLocal_15771 = 0;
	var uLocal_15772 = 0;
	var uLocal_15773 = 0;
	var uLocal_15774 = -1569615261;
	var uLocal_15775 = 0;
	var uLocal_15776 = 0;
	var uLocal_15777 = 0;
	var uLocal_15778 = 0;
	var uLocal_15779 = 0;
	var uLocal_15780 = 0;
	var uLocal_15781 = 0;
	var uLocal_15782 = 0;
	var uLocal_15783 = 0;
	var uLocal_15784 = 0;
	var uLocal_15785 = 0;
	var uLocal_15786 = 0;
	var uLocal_15787 = -1569615261;
	var uLocal_15788 = 0;
	var uLocal_15789 = 0;
	var uLocal_15790 = 0;
	var uLocal_15791 = 0;
	var uLocal_15792 = 0;
	var uLocal_15793 = 0;
	var uLocal_15794 = 0;
	var uLocal_15795 = 0;
	var uLocal_15796 = 0;
	var uLocal_15797 = 0;
	var uLocal_15798 = 0;
	var uLocal_15799 = 0;
	var uLocal_15800 = -1569615261;
	var uLocal_15801 = 0;
	var uLocal_15802 = 0;
	var uLocal_15803 = 0;
	var uLocal_15804 = 0;
	var uLocal_15805 = 0;
	var uLocal_15806 = 0;
	var uLocal_15807 = 0;
	var uLocal_15808 = 0;
	var uLocal_15809 = 0;
	var uLocal_15810 = 0;
	var uLocal_15811 = 0;
	var uLocal_15812 = 0;
	var uLocal_15813 = -1569615261;
	var uLocal_15814 = 0;
	var uLocal_15815 = 0;
	var uLocal_15816 = 0;
	var uLocal_15817 = 0;
	var uLocal_15818 = 0;
	var uLocal_15819 = 0;
	var uLocal_15820 = 0;
	var uLocal_15821 = 0;
	var uLocal_15822 = 0;
	var uLocal_15823 = 0;
	var uLocal_15824 = 0;
	var uLocal_15825 = 0;
	var uLocal_15826 = -1569615261;
	var uLocal_15827 = 0;
	var uLocal_15828 = 0;
	var uLocal_15829 = 0;
	var uLocal_15830 = 0;
	var uLocal_15831 = 0;
	var uLocal_15832 = 0;
	var uLocal_15833 = 0;
	var uLocal_15834 = 0;
	var uLocal_15835 = 0;
	var uLocal_15836 = 0;
	var uLocal_15837 = 0;
	var uLocal_15838 = 0;
	var uLocal_15839 = -1569615261;
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
	var uLocal_15852 = -1569615261;
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
	var uLocal_15865 = -1569615261;
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
	var uLocal_15878 = -1569615261;
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
	var uLocal_15891 = -1569615261;
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
	var uLocal_15904 = -1569615261;
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
	var uLocal_15917 = -1569615261;
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
	var uLocal_15930 = -1569615261;
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
	var uLocal_15943 = -1569615261;
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
	var uLocal_15956 = -1569615261;
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
	var uLocal_15969 = -1569615261;
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
	var uLocal_15982 = -1569615261;
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
	var uLocal_15995 = -1569615261;
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
	var uLocal_16008 = -1569615261;
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
	var uLocal_16021 = -1569615261;
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
	var uLocal_16034 = -1569615261;
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
	var uLocal_16047 = -1569615261;
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
	var uLocal_16060 = -1569615261;
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
	var uLocal_16073 = -1569615261;
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
	var uLocal_16086 = -1569615261;
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
	var uLocal_16099 = -1569615261;
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
	var uLocal_16112 = -1569615261;
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
	var uLocal_16125 = -1569615261;
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
	var uLocal_16138 = -1569615261;
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
	var uLocal_16151 = -1569615261;
	var uLocal_16152 = 0;
	var uLocal_16153 = 0;
	var uLocal_16154 = 0;
	var uLocal_16155 = 0;
	var uLocal_16156 = 0;
	var uLocal_16157 = 0;
	var uLocal_16158 = 0;
	var uLocal_16159 = 0;
	var uLocal_16160 = 0;
	var uLocal_16161 = 0;
	var uLocal_16162 = 0;
	var uLocal_16163 = 0;
	var uLocal_16164 = -1569615261;
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
	var uLocal_16177 = -1569615261;
	var uLocal_16178 = 0;
	var uLocal_16179 = 0;
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
	var uLocal_16190 = -1569615261;
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
	var uLocal_16201 = 0;
	var uLocal_16202 = 0;
	var uLocal_16203 = -1569615261;
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
	var uLocal_16216 = -1569615261;
	var uLocal_16217 = 0;
	var uLocal_16218 = 0;
	var uLocal_16219 = 0;
	var uLocal_16220 = 0;
	var uLocal_16221 = 0;
	var uLocal_16222 = 0;
	var uLocal_16223 = 0;
	var uLocal_16224 = 0;
	var uLocal_16225 = 0;
	var uLocal_16226 = 0;
	var uLocal_16227 = 0;
	var uLocal_16228 = 0;
	var uLocal_16229 = -1569615261;
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
	var uLocal_16242 = -1569615261;
	var uLocal_16243 = 0;
	var uLocal_16244 = 0;
	var uLocal_16245 = 0;
	var uLocal_16246 = 0;
	var uLocal_16247 = 0;
	var uLocal_16248 = 0;
	var uLocal_16249 = 0;
	var uLocal_16250 = 0;
	var uLocal_16251 = 0;
	var uLocal_16252 = 0;
	var uLocal_16253 = 0;
	var uLocal_16254 = 0;
	var uLocal_16255 = -1569615261;
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
	var uLocal_16267 = 0;
	var uLocal_16268 = -1569615261;
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
	var uLocal_16281 = -1569615261;
	var uLocal_16282 = 0;
	var uLocal_16283 = 0;
	var uLocal_16284 = 0;
	var uLocal_16285 = 0;
	var uLocal_16286 = 0;
	var uLocal_16287 = 0;
	var uLocal_16288 = 0;
	var uLocal_16289 = 0;
	var uLocal_16290 = 0;
	var uLocal_16291 = 0;
	var uLocal_16292 = 0;
	var uLocal_16293 = 0;
	var uLocal_16294 = -1569615261;
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
	var uLocal_16307 = -1569615261;
	var uLocal_16308 = 0;
	var uLocal_16309 = 0;
	var uLocal_16310 = 0;
	var uLocal_16311 = 0;
	var uLocal_16312 = 0;
	var uLocal_16313 = 0;
	var uLocal_16314 = 0;
	var uLocal_16315 = 0;
	var uLocal_16316 = 0;
	var uLocal_16317 = 0;
	var uLocal_16318 = 0;
	var uLocal_16319 = 0;
	var uLocal_16320 = -1569615261;
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
	var uLocal_16333 = -1569615261;
	var uLocal_16334 = 0;
	var uLocal_16335 = 0;
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
	var uLocal_16346 = -1569615261;
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
	var uLocal_16359 = -1569615261;
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
	var uLocal_16372 = -1569615261;
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
	var uLocal_16385 = -1569615261;
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
	var uLocal_16398 = -1569615261;
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
	var uLocal_16411 = -1569615261;
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
	var uLocal_16424 = -1569615261;
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
	var uLocal_16437 = -1569615261;
	var uLocal_16438 = 0;
	var uLocal_16439 = 0;
	var uLocal_16440 = 0;
	var uLocal_16441 = 0;
	var uLocal_16442 = 0;
	var uLocal_16443 = 0;
	var uLocal_16444 = 0;
	var uLocal_16445 = 0;
	var uLocal_16446 = 0;
	var uLocal_16447 = 0;
	var uLocal_16448 = 0;
	var uLocal_16449 = 0;
	var uLocal_16450 = -1569615261;
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
	var uLocal_16463 = -1569615261;
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
	var uLocal_16476 = -1569615261;
	var uLocal_16477 = 0;
	var uLocal_16478 = 0;
	var uLocal_16479 = 0;
	var uLocal_16480 = 0;
	var uLocal_16481 = 0;
	var uLocal_16482 = 0;
	var uLocal_16483 = 0;
	var uLocal_16484 = 0;
	var uLocal_16485 = 0;
	var uLocal_16486 = 0;
	var uLocal_16487 = 0;
	var uLocal_16488 = 0;
	var uLocal_16489 = -1569615261;
	var uLocal_16490 = 0;
	var uLocal_16491 = 0;
	var uLocal_16492 = 0;
	var uLocal_16493 = 0;
	var uLocal_16494 = 0;
	var uLocal_16495 = 0;
	var uLocal_16496 = 0;
	var uLocal_16497 = 0;
	var uLocal_16498 = 0;
	var uLocal_16499 = 0;
	var uLocal_16500 = 0;
	var uLocal_16501 = 0;
	var uLocal_16502 = -1569615261;
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
	var uLocal_16515 = -1569615261;
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
	var uLocal_16528 = -1569615261;
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
	var uLocal_16541 = -1569615261;
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
	var uLocal_16554 = -1569615261;
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
	var uLocal_16567 = -1569615261;
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
	var uLocal_16580 = -1569615261;
	var uLocal_16581 = 0;
	var uLocal_16582 = 0;
	var uLocal_16583 = 0;
	var uLocal_16584 = 0;
	var uLocal_16585 = 0;
	var uLocal_16586 = 0;
	var uLocal_16587 = 0;
	var uLocal_16588 = 0;
	var uLocal_16589 = 0;
	var uLocal_16590 = 0;
	var uLocal_16591 = 0;
	var uLocal_16592 = 0;
	var uLocal_16593 = -1569615261;
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
	var uLocal_16606 = -1569615261;
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
	var uLocal_16624 = 1;
	var uLocal_16625 = 30;
	var uLocal_16626 = -1;
	var uLocal_16627 = 0;
	var uLocal_16628 = 1;
	var uLocal_16629 = 0;
	var uLocal_16630 = 0;
	var uLocal_16631 = 0;
	var uLocal_16632 = 0;
	var uLocal_16633 = 0;
	var uLocal_16634 = 0;
	var uLocal_16635 = 0;
	var uLocal_16636 = 0;
	var uLocal_16637 = 0;
	var uLocal_16638 = 1065353216;
	var uLocal_16639 = 0;
	var uLocal_16640 = 0;
	var uLocal_16641 = 1065353216;
	var uLocal_16642 = 1;
	var uLocal_16643 = 0;
	var uLocal_16644 = -1;
	var uLocal_16645 = 0;
	var uLocal_16646 = 1;
	var uLocal_16647 = 0;
	var uLocal_16648 = 0;
	var uLocal_16649 = 0;
	var uLocal_16650 = 0;
	var uLocal_16651 = 0;
	var uLocal_16652 = 0;
	var uLocal_16653 = 0;
	var uLocal_16654 = 0;
	var uLocal_16655 = 0;
	var uLocal_16656 = 1065353216;
	var uLocal_16657 = 0;
	var uLocal_16658 = 0;
	var uLocal_16659 = 1065353216;
	var uLocal_16660 = 1;
	var uLocal_16661 = 0;
	var uLocal_16662 = -1;
	var uLocal_16663 = 0;
	var uLocal_16664 = 1;
	var uLocal_16665 = 0;
	var uLocal_16666 = 0;
	var uLocal_16667 = 0;
	var uLocal_16668 = 0;
	var uLocal_16669 = 0;
	var uLocal_16670 = 0;
	var uLocal_16671 = 0;
	var uLocal_16672 = 0;
	var uLocal_16673 = 0;
	var uLocal_16674 = 1065353216;
	var uLocal_16675 = 0;
	var uLocal_16676 = 0;
	var uLocal_16677 = 1065353216;
	var uLocal_16678 = 1;
	var uLocal_16679 = 0;
	var uLocal_16680 = -1;
	var uLocal_16681 = 0;
	var uLocal_16682 = 1;
	var uLocal_16683 = 0;
	var uLocal_16684 = 0;
	var uLocal_16685 = 0;
	var uLocal_16686 = 0;
	var uLocal_16687 = 0;
	var uLocal_16688 = 0;
	var uLocal_16689 = 0;
	var uLocal_16690 = 0;
	var uLocal_16691 = 0;
	var uLocal_16692 = 1065353216;
	var uLocal_16693 = 0;
	var uLocal_16694 = 0;
	var uLocal_16695 = 1065353216;
	var uLocal_16696 = 1;
	var uLocal_16697 = 0;
	var uLocal_16698 = -1;
	var uLocal_16699 = 0;
	var uLocal_16700 = 1;
	var uLocal_16701 = 0;
	var uLocal_16702 = 0;
	var uLocal_16703 = 0;
	var uLocal_16704 = 0;
	var uLocal_16705 = 0;
	var uLocal_16706 = 0;
	var uLocal_16707 = 0;
	var uLocal_16708 = 0;
	var uLocal_16709 = 0;
	var uLocal_16710 = 1065353216;
	var uLocal_16711 = 0;
	var uLocal_16712 = 0;
	var uLocal_16713 = 1065353216;
	var uLocal_16714 = 1;
	var uLocal_16715 = 0;
	var uLocal_16716 = -1;
	var uLocal_16717 = 0;
	var uLocal_16718 = 1;
	var uLocal_16719 = 0;
	var uLocal_16720 = 0;
	var uLocal_16721 = 0;
	var uLocal_16722 = 0;
	var uLocal_16723 = 0;
	var uLocal_16724 = 0;
	var uLocal_16725 = 0;
	var uLocal_16726 = 0;
	var uLocal_16727 = 0;
	var uLocal_16728 = 1065353216;
	var uLocal_16729 = 0;
	var uLocal_16730 = 0;
	var uLocal_16731 = 1065353216;
	var uLocal_16732 = 1;
	var uLocal_16733 = 0;
	var uLocal_16734 = -1;
	var uLocal_16735 = 0;
	var uLocal_16736 = 1;
	var uLocal_16737 = 0;
	var uLocal_16738 = 0;
	var uLocal_16739 = 0;
	var uLocal_16740 = 0;
	var uLocal_16741 = 0;
	var uLocal_16742 = 0;
	var uLocal_16743 = 0;
	var uLocal_16744 = 0;
	var uLocal_16745 = 0;
	var uLocal_16746 = 1065353216;
	var uLocal_16747 = 0;
	var uLocal_16748 = 0;
	var uLocal_16749 = 1065353216;
	var uLocal_16750 = 1;
	var uLocal_16751 = 0;
	var uLocal_16752 = -1;
	var uLocal_16753 = 0;
	var uLocal_16754 = 1;
	var uLocal_16755 = 0;
	var uLocal_16756 = 0;
	var uLocal_16757 = 0;
	var uLocal_16758 = 0;
	var uLocal_16759 = 0;
	var uLocal_16760 = 0;
	var uLocal_16761 = 0;
	var uLocal_16762 = 0;
	var uLocal_16763 = 0;
	var uLocal_16764 = 1065353216;
	var uLocal_16765 = 0;
	var uLocal_16766 = 0;
	var uLocal_16767 = 1065353216;
	var uLocal_16768 = 1;
	var uLocal_16769 = 0;
	var uLocal_16770 = -1;
	var uLocal_16771 = 0;
	var uLocal_16772 = 1;
	var uLocal_16773 = 0;
	var uLocal_16774 = 0;
	var uLocal_16775 = 0;
	var uLocal_16776 = 0;
	var uLocal_16777 = 0;
	var uLocal_16778 = 0;
	var uLocal_16779 = 0;
	var uLocal_16780 = 0;
	var uLocal_16781 = 0;
	var uLocal_16782 = 1065353216;
	var uLocal_16783 = 0;
	var uLocal_16784 = 0;
	var uLocal_16785 = 1065353216;
	var uLocal_16786 = 1;
	var uLocal_16787 = 0;
	var uLocal_16788 = -1;
	var uLocal_16789 = 0;
	var uLocal_16790 = 1;
	var uLocal_16791 = 0;
	var uLocal_16792 = 0;
	var uLocal_16793 = 0;
	var uLocal_16794 = 0;
	var uLocal_16795 = 0;
	var uLocal_16796 = 0;
	var uLocal_16797 = 0;
	var uLocal_16798 = 0;
	var uLocal_16799 = 0;
	var uLocal_16800 = 1065353216;
	var uLocal_16801 = 0;
	var uLocal_16802 = 0;
	var uLocal_16803 = 1065353216;
	var uLocal_16804 = 1;
	var uLocal_16805 = 0;
	var uLocal_16806 = -1;
	var uLocal_16807 = 0;
	var uLocal_16808 = 1;
	var uLocal_16809 = 0;
	var uLocal_16810 = 0;
	var uLocal_16811 = 0;
	var uLocal_16812 = 0;
	var uLocal_16813 = 0;
	var uLocal_16814 = 0;
	var uLocal_16815 = 0;
	var uLocal_16816 = 0;
	var uLocal_16817 = 0;
	var uLocal_16818 = 1065353216;
	var uLocal_16819 = 0;
	var uLocal_16820 = 0;
	var uLocal_16821 = 1065353216;
	var uLocal_16822 = 1;
	var uLocal_16823 = 0;
	var uLocal_16824 = -1;
	var uLocal_16825 = 0;
	var uLocal_16826 = 1;
	var uLocal_16827 = 0;
	var uLocal_16828 = 0;
	var uLocal_16829 = 0;
	var uLocal_16830 = 0;
	var uLocal_16831 = 0;
	var uLocal_16832 = 0;
	var uLocal_16833 = 0;
	var uLocal_16834 = 0;
	var uLocal_16835 = 0;
	var uLocal_16836 = 1065353216;
	var uLocal_16837 = 0;
	var uLocal_16838 = 0;
	var uLocal_16839 = 1065353216;
	var uLocal_16840 = 1;
	var uLocal_16841 = 0;
	var uLocal_16842 = -1;
	var uLocal_16843 = 0;
	var uLocal_16844 = 1;
	var uLocal_16845 = 0;
	var uLocal_16846 = 0;
	var uLocal_16847 = 0;
	var uLocal_16848 = 0;
	var uLocal_16849 = 0;
	var uLocal_16850 = 0;
	var uLocal_16851 = 0;
	var uLocal_16852 = 0;
	var uLocal_16853 = 0;
	var uLocal_16854 = 1065353216;
	var uLocal_16855 = 0;
	var uLocal_16856 = 0;
	var uLocal_16857 = 1065353216;
	var uLocal_16858 = 1;
	var uLocal_16859 = 0;
	var uLocal_16860 = -1;
	var uLocal_16861 = 0;
	var uLocal_16862 = 1;
	var uLocal_16863 = 0;
	var uLocal_16864 = 0;
	var uLocal_16865 = 0;
	var uLocal_16866 = 0;
	var uLocal_16867 = 0;
	var uLocal_16868 = 0;
	var uLocal_16869 = 0;
	var uLocal_16870 = 0;
	var uLocal_16871 = 0;
	var uLocal_16872 = 1065353216;
	var uLocal_16873 = 0;
	var uLocal_16874 = 0;
	var uLocal_16875 = 1065353216;
	var uLocal_16876 = 1;
	var uLocal_16877 = 0;
	var uLocal_16878 = -1;
	var uLocal_16879 = 0;
	var uLocal_16880 = 1;
	var uLocal_16881 = 0;
	var uLocal_16882 = 0;
	var uLocal_16883 = 0;
	var uLocal_16884 = 0;
	var uLocal_16885 = 0;
	var uLocal_16886 = 0;
	var uLocal_16887 = 0;
	var uLocal_16888 = 0;
	var uLocal_16889 = 0;
	var uLocal_16890 = 1065353216;
	var uLocal_16891 = 0;
	var uLocal_16892 = 0;
	var uLocal_16893 = 1065353216;
	var uLocal_16894 = 1;
	var uLocal_16895 = 0;
	var uLocal_16896 = -1;
	var uLocal_16897 = 0;
	var uLocal_16898 = 1;
	var uLocal_16899 = 0;
	var uLocal_16900 = 0;
	var uLocal_16901 = 0;
	var uLocal_16902 = 0;
	var uLocal_16903 = 0;
	var uLocal_16904 = 0;
	var uLocal_16905 = 0;
	var uLocal_16906 = 0;
	var uLocal_16907 = 0;
	var uLocal_16908 = 1065353216;
	var uLocal_16909 = 0;
	var uLocal_16910 = 0;
	var uLocal_16911 = 1065353216;
	var uLocal_16912 = 1;
	var uLocal_16913 = 0;
	var uLocal_16914 = -1;
	var uLocal_16915 = 0;
	var uLocal_16916 = 1;
	var uLocal_16917 = 0;
	var uLocal_16918 = 0;
	var uLocal_16919 = 0;
	var uLocal_16920 = 0;
	var uLocal_16921 = 0;
	var uLocal_16922 = 0;
	var uLocal_16923 = 0;
	var uLocal_16924 = 0;
	var uLocal_16925 = 0;
	var uLocal_16926 = 1065353216;
	var uLocal_16927 = 0;
	var uLocal_16928 = 0;
	var uLocal_16929 = 1065353216;
	var uLocal_16930 = 1;
	var uLocal_16931 = 0;
	var uLocal_16932 = -1;
	var uLocal_16933 = 0;
	var uLocal_16934 = 1;
	var uLocal_16935 = 0;
	var uLocal_16936 = 0;
	var uLocal_16937 = 0;
	var uLocal_16938 = 0;
	var uLocal_16939 = 0;
	var uLocal_16940 = 0;
	var uLocal_16941 = 0;
	var uLocal_16942 = 0;
	var uLocal_16943 = 0;
	var uLocal_16944 = 1065353216;
	var uLocal_16945 = 0;
	var uLocal_16946 = 0;
	var uLocal_16947 = 1065353216;
	var uLocal_16948 = 1;
	var uLocal_16949 = 0;
	var uLocal_16950 = -1;
	var uLocal_16951 = 0;
	var uLocal_16952 = 1;
	var uLocal_16953 = 0;
	var uLocal_16954 = 0;
	var uLocal_16955 = 0;
	var uLocal_16956 = 0;
	var uLocal_16957 = 0;
	var uLocal_16958 = 0;
	var uLocal_16959 = 0;
	var uLocal_16960 = 0;
	var uLocal_16961 = 0;
	var uLocal_16962 = 1065353216;
	var uLocal_16963 = 0;
	var uLocal_16964 = 0;
	var uLocal_16965 = 1065353216;
	var uLocal_16966 = 1;
	var uLocal_16967 = 0;
	var uLocal_16968 = -1;
	var uLocal_16969 = 0;
	var uLocal_16970 = 1;
	var uLocal_16971 = 0;
	var uLocal_16972 = 0;
	var uLocal_16973 = 0;
	var uLocal_16974 = 0;
	var uLocal_16975 = 0;
	var uLocal_16976 = 0;
	var uLocal_16977 = 0;
	var uLocal_16978 = 0;
	var uLocal_16979 = 0;
	var uLocal_16980 = 1065353216;
	var uLocal_16981 = 0;
	var uLocal_16982 = 0;
	var uLocal_16983 = 1065353216;
	var uLocal_16984 = 1;
	var uLocal_16985 = 0;
	var uLocal_16986 = -1;
	var uLocal_16987 = 0;
	var uLocal_16988 = 1;
	var uLocal_16989 = 0;
	var uLocal_16990 = 0;
	var uLocal_16991 = 0;
	var uLocal_16992 = 0;
	var uLocal_16993 = 0;
	var uLocal_16994 = 0;
	var uLocal_16995 = 0;
	var uLocal_16996 = 0;
	var uLocal_16997 = 0;
	var uLocal_16998 = 1065353216;
	var uLocal_16999 = 0;
	var uLocal_17000 = 0;
	var uLocal_17001 = 1065353216;
	var uLocal_17002 = 1;
	var uLocal_17003 = 0;
	var uLocal_17004 = -1;
	var uLocal_17005 = 0;
	var uLocal_17006 = 1;
	var uLocal_17007 = 0;
	var uLocal_17008 = 0;
	var uLocal_17009 = 0;
	var uLocal_17010 = 0;
	var uLocal_17011 = 0;
	var uLocal_17012 = 0;
	var uLocal_17013 = 0;
	var uLocal_17014 = 0;
	var uLocal_17015 = 0;
	var uLocal_17016 = 1065353216;
	var uLocal_17017 = 0;
	var uLocal_17018 = 0;
	var uLocal_17019 = 1065353216;
	var uLocal_17020 = 1;
	var uLocal_17021 = 0;
	var uLocal_17022 = -1;
	var uLocal_17023 = 0;
	var uLocal_17024 = 1;
	var uLocal_17025 = 0;
	var uLocal_17026 = 0;
	var uLocal_17027 = 0;
	var uLocal_17028 = 0;
	var uLocal_17029 = 0;
	var uLocal_17030 = 0;
	var uLocal_17031 = 0;
	var uLocal_17032 = 0;
	var uLocal_17033 = 0;
	var uLocal_17034 = 1065353216;
	var uLocal_17035 = 0;
	var uLocal_17036 = 0;
	var uLocal_17037 = 1065353216;
	var uLocal_17038 = 1;
	var uLocal_17039 = 0;
	var uLocal_17040 = -1;
	var uLocal_17041 = 0;
	var uLocal_17042 = 1;
	var uLocal_17043 = 0;
	var uLocal_17044 = 0;
	var uLocal_17045 = 0;
	var uLocal_17046 = 0;
	var uLocal_17047 = 0;
	var uLocal_17048 = 0;
	var uLocal_17049 = 0;
	var uLocal_17050 = 0;
	var uLocal_17051 = 0;
	var uLocal_17052 = 1065353216;
	var uLocal_17053 = 0;
	var uLocal_17054 = 0;
	var uLocal_17055 = 1065353216;
	var uLocal_17056 = 1;
	var uLocal_17057 = 0;
	var uLocal_17058 = -1;
	var uLocal_17059 = 0;
	var uLocal_17060 = 1;
	var uLocal_17061 = 0;
	var uLocal_17062 = 0;
	var uLocal_17063 = 0;
	var uLocal_17064 = 0;
	var uLocal_17065 = 0;
	var uLocal_17066 = 0;
	var uLocal_17067 = 0;
	var uLocal_17068 = 0;
	var uLocal_17069 = 0;
	var uLocal_17070 = 1065353216;
	var uLocal_17071 = 0;
	var uLocal_17072 = 0;
	var uLocal_17073 = 1065353216;
	var uLocal_17074 = 1;
	var uLocal_17075 = 0;
	var uLocal_17076 = -1;
	var uLocal_17077 = 0;
	var uLocal_17078 = 1;
	var uLocal_17079 = 0;
	var uLocal_17080 = 0;
	var uLocal_17081 = 0;
	var uLocal_17082 = 0;
	var uLocal_17083 = 0;
	var uLocal_17084 = 0;
	var uLocal_17085 = 0;
	var uLocal_17086 = 0;
	var uLocal_17087 = 0;
	var uLocal_17088 = 1065353216;
	var uLocal_17089 = 0;
	var uLocal_17090 = 0;
	var uLocal_17091 = 1065353216;
	var uLocal_17092 = 1;
	var uLocal_17093 = 0;
	var uLocal_17094 = -1;
	var uLocal_17095 = 0;
	var uLocal_17096 = 1;
	var uLocal_17097 = 0;
	var uLocal_17098 = 0;
	var uLocal_17099 = 0;
	var uLocal_17100 = 0;
	var uLocal_17101 = 0;
	var uLocal_17102 = 0;
	var uLocal_17103 = 0;
	var uLocal_17104 = 0;
	var uLocal_17105 = 0;
	var uLocal_17106 = 1065353216;
	var uLocal_17107 = 0;
	var uLocal_17108 = 0;
	var uLocal_17109 = 1065353216;
	var uLocal_17110 = 1;
	var uLocal_17111 = 0;
	var uLocal_17112 = -1;
	var uLocal_17113 = 0;
	var uLocal_17114 = 1;
	var uLocal_17115 = 0;
	var uLocal_17116 = 0;
	var uLocal_17117 = 0;
	var uLocal_17118 = 0;
	var uLocal_17119 = 0;
	var uLocal_17120 = 0;
	var uLocal_17121 = 0;
	var uLocal_17122 = 0;
	var uLocal_17123 = 0;
	var uLocal_17124 = 1065353216;
	var uLocal_17125 = 0;
	var uLocal_17126 = 0;
	var uLocal_17127 = 1065353216;
	var uLocal_17128 = 1;
	var uLocal_17129 = 0;
	var uLocal_17130 = -1;
	var uLocal_17131 = 0;
	var uLocal_17132 = 1;
	var uLocal_17133 = 0;
	var uLocal_17134 = 0;
	var uLocal_17135 = 0;
	var uLocal_17136 = 0;
	var uLocal_17137 = 0;
	var uLocal_17138 = 0;
	var uLocal_17139 = 0;
	var uLocal_17140 = 0;
	var uLocal_17141 = 0;
	var uLocal_17142 = 1065353216;
	var uLocal_17143 = 0;
	var uLocal_17144 = 0;
	var uLocal_17145 = 1065353216;
	var uLocal_17146 = 1;
	var uLocal_17147 = 0;
	var uLocal_17148 = -1;
	var uLocal_17149 = 0;
	var uLocal_17150 = 1;
	var uLocal_17151 = 0;
	var uLocal_17152 = 0;
	var uLocal_17153 = 0;
	var uLocal_17154 = 0;
	var uLocal_17155 = 0;
	var uLocal_17156 = 0;
	var uLocal_17157 = 0;
	var uLocal_17158 = 0;
	var uLocal_17159 = 0;
	var uLocal_17160 = 1065353216;
	var uLocal_17161 = 0;
	var uLocal_17162 = 0;
	var uLocal_17163 = 1065353216;
	var uLocal_17164 = 1;
	var uLocal_17165 = 0;
	var uLocal_17166 = 8;
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
	var uLocal_17183 = 0;
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
	var uLocal_17205 = 0;
	var uLocal_17206 = 0;
	var uLocal_17207 = 0;
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
	var uLocal_17318 = 0;
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
	var uLocal_17353 = 0;
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
	var uLocal_17370 = 0;
	var uLocal_17371 = 0;
	var uLocal_17372 = 0;
	var uLocal_17373 = 0;
	var uLocal_17374 = 0;
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
	var uLocal_17456 = 0;
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
	var uLocal_17495 = 8;
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
	var uLocal_17516 = -1;
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
	var uLocal_17538 = -1;
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
	var uLocal_17560 = -1;
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
	var uLocal_17580 = 0;
	var uLocal_17581 = 0;
	var uLocal_17582 = -1;
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
	var uLocal_17604 = -1;
	var uLocal_17605 = 0;
	var uLocal_17606 = 0;
	var uLocal_17607 = 0;
	var uLocal_17608 = 0;
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
	var uLocal_17626 = -1;
	var uLocal_17627 = 0;
	var uLocal_17628 = 0;
	var uLocal_17629 = 0;
	var uLocal_17630 = 0;
	var uLocal_17631 = 0;
	var uLocal_17632 = 0;
	var uLocal_17633 = 0;
	var uLocal_17634 = 0;
	var uLocal_17635 = 0;
	var uLocal_17636 = 0;
	var uLocal_17637 = 0;
	var uLocal_17638 = 0;
	var uLocal_17639 = 0;
	var uLocal_17640 = 0;
	var uLocal_17641 = 0;
	var uLocal_17642 = 0;
	var uLocal_17643 = 0;
	var uLocal_17644 = 0;
	var uLocal_17645 = 0;
	var uLocal_17646 = 0;
	var uLocal_17647 = 0;
	var uLocal_17648 = -1;
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
	var uLocal_17670 = -1;
	var uLocal_17671 = 0;
	var uLocal_17672 = 11;
	var uLocal_17673 = 0;
	var uLocal_17674 = 0;
	var uLocal_17675 = 0;
	var uLocal_17676 = 0;
	var uLocal_17677 = 0;
	var uLocal_17678 = 0;
	var uLocal_17679 = 0;
	var uLocal_17680 = 0;
	var uLocal_17681 = 0;
	var uLocal_17682 = 0;
	var uLocal_17683 = 0;
	var uLocal_17684 = 0;
	var uLocal_17685 = 0;
	var uLocal_17686 = 0;
	var uLocal_17687 = 0;
	var uLocal_17688 = 0;
	var uLocal_17689 = 0;
	var uLocal_17690 = 0;
	var uLocal_17691 = 0;
	var uLocal_17692 = 0;
	var uLocal_17693 = 0;
	var uLocal_17694 = 0;
	var uLocal_17695 = 0;
	var uLocal_17696 = 0;
	var uLocal_17697 = 0;
	var uLocal_17698 = 0;
	var uLocal_17699 = 0;
	var uLocal_17700 = 0;
	var uLocal_17701 = 0;
	var uLocal_17702 = 0;
	var uLocal_17703 = 0;
	var uLocal_17704 = 0;
	var uLocal_17705 = 0;
	var uLocal_17706 = 0;
	var uLocal_17707 = 0;
	var uLocal_17708 = 0;
	var uLocal_17709 = 0;
	var uLocal_17710 = 0;
	var uLocal_17711 = 0;
	var uLocal_17712 = 0;
	var uLocal_17713 = 0;
	var uLocal_17714 = 0;
	var uLocal_17715 = 0;
	var uLocal_17716 = 0;
	var uLocal_17717 = 0;
	var uLocal_17718 = 0;
	var uLocal_17719 = 0;
	var uLocal_17720 = 0;
	var uLocal_17721 = 0;
	var uLocal_17722 = 0;
	var uLocal_17723 = 0;
	var uLocal_17724 = 0;
	var uLocal_17725 = 0;
	var uLocal_17726 = 0;
	var uLocal_17727 = 0;
	var uLocal_17728 = 0;
	var uLocal_17729 = 0;
	var uLocal_17730 = 0;
	var uLocal_17731 = 0;
	var uLocal_17732 = 0;
	var uLocal_17733 = 0;
	var uLocal_17734 = 0;
	var uLocal_17735 = 0;
	var uLocal_17736 = 0;
	var uLocal_17737 = 0;
	var uLocal_17738 = 0;
	var uLocal_17739 = 0;
	var uLocal_17740 = 0;
	var uLocal_17741 = 0;
	var uLocal_17742 = 0;
	var uLocal_17743 = 0;
	var uLocal_17744 = 0;
	var uLocal_17745 = 0;
	var uLocal_17746 = 0;
	var uLocal_17747 = 0;
	var uLocal_17748 = 0;
	var uLocal_17749 = 0;
	var uLocal_17750 = 0;
	var uLocal_17751 = 0;
	var uLocal_17752 = 0;
	var uLocal_17753 = 0;
	var uLocal_17754 = 0;
	var uLocal_17755 = 0;
	var uLocal_17756 = 0;
	var uLocal_17757 = 0;
	var uLocal_17758 = 0;
	var uLocal_17759 = 0;
	var uLocal_17760 = 0;
	var uLocal_17761 = 0;
	var uLocal_17762 = 0;
	var uLocal_17763 = 0;
	var uLocal_17764 = 0;
	var uLocal_17765 = 0;
	var uLocal_17766 = 0;
	var uLocal_17767 = 0;
	var uLocal_17768 = 0;
	var uLocal_17769 = 0;
	var uLocal_17770 = 0;
	var uLocal_17771 = 0;
	var uLocal_17772 = 0;
	var uLocal_17773 = 0;
	var uLocal_17774 = 0;
	var uLocal_17775 = 0;
	var uLocal_17776 = 0;
	var uLocal_17777 = 0;
	var uLocal_17778 = 0;
	var uLocal_17779 = 0;
	var uLocal_17780 = 0;
	var uLocal_17781 = 0;
	var uLocal_17782 = 0;
	var uLocal_17783 = 2;
	var uLocal_17784 = 0;
	var uLocal_17785 = 0;
	var uLocal_17786 = 0;
	var uLocal_17787 = 0;
	var uLocal_17788 = 0;
	var uLocal_17789 = 0;
	var uLocal_17790 = 0;
	var uLocal_17791 = 0;
	var uLocal_17792 = 0;
	var uLocal_17793 = 0;
	var uLocal_17794 = 0;
	var uLocal_17795 = 0;
	var uLocal_17796 = 0;
	var uLocal_17797 = 0;
	var uLocal_17798 = 0;
	var uLocal_17799 = 0;
	var uLocal_17800 = 0;
	var uLocal_17801 = 0;
	var uLocal_17802 = 0;
	var uLocal_17803 = 0;
	var uLocal_17804 = 0;
	var uLocal_17805 = 0;
	var uLocal_17806 = 0;
	var uLocal_17807 = 0;
	var uLocal_17808 = 0;
	var uLocal_17809 = 0;
	var uLocal_17810 = 0;
	var uLocal_17811 = 0;
	var uLocal_17812 = 0;
	var uLocal_17813 = 0;
	var uLocal_17814 = 0;
	var uLocal_17815 = 0;
	var uLocal_17816 = 0;
	var uLocal_17817 = 0;
	var uLocal_17818 = 2;
	var uLocal_17819 = 0;
	var uLocal_17820 = 0;
	var uLocal_17821 = 0;
	var uLocal_17822 = 0;
	var uLocal_17823 = 0;
	var uLocal_17824 = 0;
	var uLocal_17825 = 0;
	var uLocal_17826 = 0;
	var uLocal_17827 = 0;
	var uLocal_17828 = 0;
	var uLocal_17829 = 0;
	var uLocal_17830 = 0;
	var uLocal_17831 = 0;
	var uLocal_17832 = 0;
	var uLocal_17833 = 0;
	var uLocal_17834 = 0;
	var uLocal_17835 = -1;
	var uLocal_17836 = 0;
	var uLocal_17837 = 0;
	var uLocal_17838 = -1;
	var uLocal_17839 = -1082130432;
	var uLocal_17840 = 0;
	var uLocal_17841 = 0;
	var uLocal_17842 = 0;
	var uLocal_17843 = 0;
	var uLocal_17844 = 0;
	var uLocal_17845 = 0;
	var uLocal_17846 = 0;
	var uLocal_17847 = 0;
	var uLocal_17848 = 0;
	var uLocal_17849 = 0;
	var uLocal_17850 = 0;
	var uLocal_17851 = 0;
	var uLocal_17852 = 0;
	var uLocal_17853 = 0;
	var uLocal_17854 = 0;
	var uLocal_17855 = 0;
	var uLocal_17856 = 0;
	var uLocal_17857 = 0;
	var uLocal_17858 = 0;
	var uLocal_17859 = 0;
	var uLocal_17860 = 0;
	var uLocal_17861 = 0;
	var uLocal_17862 = 0;
	var uLocal_17863 = 0;
	var uLocal_17864 = 0;
	var uLocal_17865 = 0;
	var uLocal_17866 = 0;
	var uLocal_17867 = 0;
	var uLocal_17868 = 0;
	var uLocal_17869 = 0;
	var uLocal_17870 = 0;
	var uLocal_17871 = 0;
	var uLocal_17872 = 0;
	var uLocal_17873 = 0;
	var uLocal_17874 = 0;
	var uLocal_17875 = 0;
	var uLocal_17876 = 0;
	var uLocal_17877 = 0;
	var uLocal_17878 = 0;
	var uLocal_17879 = 0;
	var uLocal_17880 = 0;
	var uLocal_17881 = 0;
	var uLocal_17882 = 0;
	var uLocal_17883 = 0;
	var uLocal_17884 = 0;
	var uLocal_17885 = 0;
	var uLocal_17886 = 0;
	var uLocal_17887 = 0;
	var uLocal_17888 = 0;
	var uLocal_17889 = 0;
	var uLocal_17890 = 0;
	var uLocal_17891 = 0;
	var uLocal_17892 = 0;
	var uLocal_17893 = 0;
	var uLocal_17894 = 0;
	var uLocal_17895 = 0;
	var uLocal_17896 = 0;
	var uLocal_17897 = 0;
	var uLocal_17898 = 0;
	var uLocal_17899 = 0;
	var uLocal_17900 = 0;
	var uLocal_17901 = 0;
	var uLocal_17902 = 0;
	var uLocal_17903 = 0;
	var uLocal_17904 = 0;
	var uLocal_17905 = 0;
	var uLocal_17906 = 0;
	var uLocal_17907 = 0;
	var uLocal_17908 = 0;
	var uLocal_17909 = 0;
	var uLocal_17910 = 0;
	var uLocal_17911 = 0;
	var uLocal_17912 = 0;
	var uLocal_17913 = 0;
	var uLocal_17914 = 0;
	var uLocal_17915 = 0;
	var uLocal_17916 = 0;
	var uLocal_17917 = 0;
	var uLocal_17918 = 0;
	var uLocal_17919 = 0;
	var uLocal_17920 = 0;
	var uLocal_17921 = 24;
	var uLocal_17922 = 0;
	var uLocal_17923 = 0;
	var uLocal_17924 = 0;
	var uLocal_17925 = 0;
	var uLocal_17926 = 0;
	var uLocal_17927 = 0;
	var uLocal_17928 = 0;
	var uLocal_17929 = 0;
	var uLocal_17930 = 0;
	var uLocal_17931 = 0;
	var uLocal_17932 = 0;
	var uLocal_17933 = 0;
	var uLocal_17934 = 0;
	var uLocal_17935 = 0;
	var uLocal_17936 = 0;
	var uLocal_17937 = 0;
	var uLocal_17938 = 0;
	var uLocal_17939 = 0;
	var uLocal_17940 = 0;
	var uLocal_17941 = 0;
	var uLocal_17942 = 0;
	var uLocal_17943 = 0;
	var uLocal_17944 = 0;
	var uLocal_17945 = 0;
	var uLocal_17946 = 0;
	var uLocal_17947 = 0;
	var uLocal_17948 = 0;
	var uLocal_17949 = 0;
	var uLocal_17950 = 0;
	var uLocal_17951 = 0;
	var uLocal_17952 = 0;
	var uLocal_17953 = 0;
	var uLocal_17954 = 0;
	var uLocal_17955 = 0;
	var uLocal_17956 = 0;
	var uLocal_17957 = 0;
	var uLocal_17958 = 0;
	var uLocal_17959 = 0;
	var uLocal_17960 = 0;
	var uLocal_17961 = 0;
	var uLocal_17962 = 0;
	var uLocal_17963 = 0;
	var uLocal_17964 = 0;
	var uLocal_17965 = 0;
	var uLocal_17966 = 0;
	var uLocal_17967 = 0;
	var uLocal_17968 = 0;
	var uLocal_17969 = 0;
	var uLocal_17970 = 0;
	var uLocal_17971 = 0;
	var uLocal_17972 = 0;
	var uLocal_17973 = 0;
	var uLocal_17974 = 0;
	var uLocal_17975 = 0;
	var uLocal_17976 = 0;
	var uLocal_17977 = 0;
	var uLocal_17978 = 0;
	var uLocal_17979 = 0;
	var uLocal_17980 = 0;
	var uLocal_17981 = 0;
	var uLocal_17982 = 0;
	var uLocal_17983 = 0;
	var uLocal_17984 = 0;
	var uLocal_17985 = 0;
	var uLocal_17986 = 0;
	var uLocal_17987 = 0;
	var uLocal_17988 = 0;
	var uLocal_17989 = 0;
	var uLocal_17990 = 0;
	var uLocal_17991 = 0;
	var uLocal_17992 = 0;
	var uLocal_17993 = 0;
	var uLocal_17994 = 0;
	var uLocal_17995 = 0;
	var uLocal_17996 = 0;
	var uLocal_17997 = 0;
	var uLocal_17998 = 0;
	var uLocal_17999 = 0;
	var uLocal_18000 = 0;
	var uLocal_18001 = 0;
	var uLocal_18002 = 0;
	var uLocal_18003 = 0;
	var uLocal_18004 = 0;
	var uLocal_18005 = 0;
	var uLocal_18006 = 0;
	var uLocal_18007 = 0;
	var uLocal_18008 = 0;
	var uLocal_18009 = 0;
	var uLocal_18010 = 0;
	var uLocal_18011 = 0;
	var uLocal_18012 = 0;
	var uLocal_18013 = 0;
	var uLocal_18014 = 0;
	var uLocal_18015 = 0;
	var uLocal_18016 = 0;
	var uLocal_18017 = 0;
	var uLocal_18018 = 0;
	var uLocal_18019 = 0;
	var uLocal_18020 = 0;
	var uLocal_18021 = 0;
	var uLocal_18022 = 0;
	var uLocal_18023 = 0;
	var uLocal_18024 = 0;
	var uLocal_18025 = 0;
	var uLocal_18026 = 0;
	var uLocal_18027 = 0;
	var uLocal_18028 = 0;
	var uLocal_18029 = 0;
	var uLocal_18030 = 0;
	var uLocal_18031 = 0;
	var uLocal_18032 = 0;
	var uLocal_18033 = 0;
	var uLocal_18034 = 0;
	var uLocal_18035 = 0;
	var uLocal_18036 = 0;
	var uLocal_18037 = 0;
	var uLocal_18038 = 0;
	var uLocal_18039 = 0;
	var uLocal_18040 = 0;
	var uLocal_18041 = 0;
	var uLocal_18042 = 0;
	var uLocal_18043 = 0;
	var uLocal_18044 = 0;
	var uLocal_18045 = -1;
	var uLocal_18046 = 0;
	var uLocal_18047 = 0;
	var uLocal_18048 = 0;
	var uLocal_18049 = 0;
	var uLocal_18050 = 0;
	var uLocal_18051 = 0;
	var uLocal_18052 = 0;
	var uLocal_18053 = 0;
	var uLocal_18054 = 0;
	var uLocal_18055 = 0;
	var uLocal_18056 = 0;
	var uLocal_18057 = 0;
	var uLocal_18058 = 0;
	var uLocal_18059 = 0;
	var uLocal_18060 = 0;
	var uLocal_18061 = 0;
	var uLocal_18062 = 0;
	var uLocal_18063 = 0;
	var uLocal_18064 = 0;
	var uLocal_18065 = 0;
	var uLocal_18066 = 0;
	var uLocal_18067 = 0;
	var uLocal_18068 = 0;
	var uLocal_18069 = 0;
	var uLocal_18070 = 0;
	var uLocal_18071 = 0;
	var uLocal_18072 = -1;
	var uLocal_18073 = 20;
	var uLocal_18074 = 0;
	var uLocal_18075 = 0;
	var uLocal_18076 = 0;
	var uLocal_18077 = 0;
	var uLocal_18078 = 0;
	var uLocal_18079 = 0;
	var uLocal_18080 = 0;
	var uLocal_18081 = 0;
	var uLocal_18082 = 0;
	var uLocal_18083 = 0;
	var uLocal_18084 = 0;
	var uLocal_18085 = 0;
	var uLocal_18086 = 0;
	var uLocal_18087 = 0;
	var uLocal_18088 = 0;
	var uLocal_18089 = 0;
	var uLocal_18090 = 0;
	var uLocal_18091 = 0;
	var uLocal_18092 = 0;
	var uLocal_18093 = 0;
	var uLocal_18094 = 0;
	var uLocal_18095 = 0;
	var uLocal_18096 = 0;
	var uLocal_18097 = 0;
	var uLocal_18098 = 0;
	var uLocal_18099 = 0;
	var uLocal_18100 = 0;
	var uLocal_18101 = 1028443341;
	var uLocal_18102 = 1038174126;
	var uLocal_18103 = 1065353216;
	var uLocal_18104 = 1065353216;
	var uLocal_18105 = 1086324736;
	var uLocal_18106 = 1082130432;
	var uLocal_18107 = 1073741824;
	var uLocal_18108 = 1065353216;
	var uLocal_18109 = 1108082688;
	var uLocal_18110 = 1108082688;
	var uLocal_18111 = 3000;
	var uLocal_18112 = 1092616192;
	var uLocal_18113 = 0;
	var uLocal_18114 = 0;
	var uLocal_18115 = 0;
	var uLocal_18116 = 0;
	var uLocal_18117 = 0;
	var uLocal_18118 = 0;
	var uLocal_18119 = 0;
	var uLocal_18120 = 0;
	var uLocal_18121 = 0;
	var uLocal_18122 = 0;
	var uLocal_18123 = 0;
	var uLocal_18124 = 0;
	var uLocal_18125 = 0;
	var uLocal_18126 = 0;
	var uLocal_18127 = 0;
	var uLocal_18128 = 0;
	var uLocal_18129 = 0;
	var uLocal_18130 = 0;
	var uLocal_18131 = 0;
	var uLocal_18132 = 0;
	var uLocal_18133 = 0;
	var uLocal_18134 = 0;
	var uLocal_18135 = 0;
	var uLocal_18136 = 0;
	var uLocal_18137 = 0;
	var uLocal_18138 = 0;
	var uLocal_18139 = 0;
	var uLocal_18140 = 0;
	var uLocal_18141 = 0;
	var uLocal_18142 = 0;
	var uLocal_18143 = 0;
	var uLocal_18144 = 0;
	var uLocal_18145 = 0;
	var uLocal_18146 = 0;
	var uLocal_18147 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 1;
	iLocal_18 = 2;
	iLocal_19 = 25;
	iLocal_28 = joaat("WAGON02X");
	iLocal_29 = joaat("P_CRATE03X");
	iLocal_30 = joaat("A_M_M_JAMESONGUARD_01");
	iLocal_31 = joaat("S_M_M_PINLAW_01");
	iLocal_32 = __LIB_2__::func_185(10, 0, 0);
	iLocal_33 = __LIB_2__::func_185(10, 1, 0);
	iLocal_34 = __LIB_2__::func_185(10, 2, 0);
	iLocal_35 = joaat("A_M_M_VHTTOWNFOLK_01");
	iLocal_36 = joaat("A_M_M_VHTTOWNFOLK_01");
	iLocal_4837 = -1;
	vLocal_4846 = { 2961.164f, 485.8644f, 45.81655f };
	sLocal_4957 = "script@story@trn2@ig1_bill_passed_out@ig1_bill_passed_out";
	sLocal_4958 = "script@story@trn2@ig1_bill_passed_out@ig1_bill_passed_out_wagon";
	sLocal_4959 = "script@story@trn2@ig1_law_spotted@ig1_law_spotted";
	sLocal_4960 = "script@story@trn2@ig2_bill_beckon@ig2_bill_beckon";
	sLocal_4961 = "script@story@trn2@ig_bill_arrives@ig3_bill_arrives";
	sLocal_4962 = "script@story@trn2@leadin@ext@leadin";
	sLocal_4963 = "script@story@trn2@leadin@ext@leadin_otherside";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_4968, 1073741824 /* Float: 2f */);
		func_3(&uLocal_4968, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_5(&uScriptParam_0, &uLocal_4968);
	func_6(&uLocal_4968);
	while (!__LIB_4__::func_936(&uLocal_4968, -2147483648))
	{
		func_8(&uLocal_4968);
		BUILTIN::WAIT(0);
	}
	while (!func_3(&uLocal_4968, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0, bool bParam1)
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
		func_13(uParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_281(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_716(1);
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
					if (!__LIB_0__::func_899(&(uParam0->f_13118)))
					{
						__LIB_4__::func_89(&(uParam0->f_13118), 0);
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
						if (((!bVar0 && !__LIB_11__::func_752(uParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_4__::func_936(uParam0, 80))
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
							if (__LIB_11__::func_752(uParam0, bVar1))
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
				__LIB_5__::func_599(uParam0, func_38(__LIB_4__::func_939(uParam0)), func_38(__LIB_5__::func_475(uParam0)), __LIB_4__::func_939(uParam0), __LIB_5__::func_475(uParam0));
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
		if (!func_13(uParam0))
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
	__LIB_4__::func_716(1);
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
	__LIB_11__::func_836(uParam0, 0, !bVar2, bVar2);
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
				func_78(uParam0);
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
					func_87(__LIB_3__::func_918(uParam0->f_607), !__LIB_4__::func_936(uParam0, 128), 1, bVar3, 1);
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
					__LIB_6__::func_833();
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
				func_87(__LIB_3__::func_918(uParam0->f_607), 1, 1, 0, 1);
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

void func_5(var uParam0, var uParam1)
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
	func_112(uParam1, uParam0);
	func_113(uParam1);
	if (uParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((uParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_6(var uParam0)
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
		func_127(uParam0);
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
			Var2 = { func_38(__LIB_4__::func_939(uParam0)) };
			if (__LIB_4__::func_939(uParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(uParam0->f_607) };
			}
			if (!func_131(Var2))
			{
				__LIB_4__::func_945(uParam0, 1048576);
			}
			__LIB_4__::func_946(uParam0, 0);
			if (__LIB_4__::func_951(uParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_11__::func_58(uParam0, __LIB_1__::func_469(uParam0->f_607), 0);
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
	__LIB_11__::func_59(uParam0, 0);
	if (!__LIB_5__::func_278(uParam0, __LIB_4__::func_939(uParam0)))
	{
		__LIB_4__::func_946(uParam0, 0);
	}
	__LIB_5__::func_333(uParam0);
	__LIB_6__::func_922(uParam0);
	func_143(uParam0);
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
	__LIB_11__::func_60(uParam0);
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

void func_8(var uParam0)
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
			func_160(uParam0, 0);
			__LIB_0__::func_16(uParam0);
			if (func_162(uParam0))
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
			if (func_165(uParam0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 2);
			}
			func_160(uParam0, __LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) > 4);
			break;
		case 2:
			if (func_3(uParam0, 0))
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

bool func_13(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = __LIB_4__::func_938(uParam0) != false;
	func_167(92, 0, 0);
	__LIB_6__::func_350(86, 2, 0, 0);
	__LIB_4__::func_193(904);
	__LIB_4__::func_193(464);
	__LIB_4__::func_193(449);
	__LIB_4__::func_193(465);
	__LIB_4__::func_193(455);
	__LIB_4__::func_193(456);
	__LIB_4__::func_193(457);
	__LIB_4__::func_193(458);
	__LIB_0__::func_395(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "TRN2_MCS1_LI");
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), true);
	__LIB_4__::func_0(&iLocal_4948);
	__LIB_0__::func_325(&iLocal_4955);
	AUDIO::_0x660A8F876DF1D4F8(28);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_4859))
	{
		func_173(&uLocal_4859, func_172(1, 3), func_172(1, 4), 0, 0);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_4860))
	{
		__LIB_11__::func_225(&uLocal_4860, func_172(4, 0) + Vector(-10f, 0f, 0f), func_172(4, 1) + Vector(10f, 0f, 0f), 0, 0);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_4861))
	{
		func_173(&uLocal_4861, 2560.295f, 778f, 78.2246f, 2640.517f, 860f, 95f, 0, 0);
	}
	PATHFIND::_0xD17672447692478E(iLocal_4627, 0);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_4862))
	{
		__LIB_0__::func_484(&uLocal_4862, iLocal_4597, 0);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_4863))
	{
		__LIB_0__::func_484(&uLocal_4863, iLocal_4624, 0);
	}
	__LIB_0__::func_722(1, 0);
	TASK::REMOVE_COVER_POINT(iLocal_4593);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	__LIB_0__::func_400(1091543855);
	__LIB_5__::func_440("trn2_nav_van_cover_00");
	if (__LIB_0__::func_139(iLocal_4913))
	{
		__LIB_1__::func_281(&iLocal_4913, 1, 1);
	}
	iVar1 = 0;
	while (iVar1 < Local_551)
	{
		PED::_0x3088634CF8C819CF(Local_551[iVar1 /*195*/]);
		__LIB_0__::func_490(&(Local_551[iVar1 /*195*/]), 0);
		__LIB_0__::func_490(&(Local_551[iVar1 /*195*/].f_1), 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_551[iVar1 /*195*/]))
		{
			PED::DELETE_PED(&(Local_551[iVar1 /*195*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_551[iVar1 /*195*/].f_1))
		{
			PED::DELETE_PED(&(Local_551[iVar1 /*195*/].f_1));
		}
		if (MAP::DOES_BLIP_EXIST(Local_551[iVar1 /*195*/].f_2))
		{
			MAP::REMOVE_BLIP(&(Local_551[iVar1 /*195*/].f_2));
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1722 - 1))
	{
		__LIB_0__::func_490(&(Local_1722[iVar0 /*195*/]), !bVar2);
		__LIB_0__::func_490(&(Local_1722[iVar0 /*195*/].f_1), !bVar2);
		if (MAP::DOES_BLIP_EXIST(Local_1722[iVar0 /*195*/].f_2))
		{
			MAP::REMOVE_BLIP(&(Local_1722[iVar0 /*195*/].f_2));
		}
		iVar0++;
	}
	func_179();
	__LIB_0__::func_783(7, 32);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4548))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4548);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4545))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4545);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4547))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4547);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4546))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4546);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4543))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_4543);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4914))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4914);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4915))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4915);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_2__::func_426(&(iLocal_4534[iVar0]));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[2 /*171*/]))
	{
		if (__LIB_1__::func_22(1))
		{
			__LIB_11__::func_757(uParam0, 1, Local_37[2 /*171*/], 0, 0, bVar2, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]))
	{
		if (__LIB_1__::func_22(6))
		{
			__LIB_11__::func_757(uParam0, 6, Local_37[1 /*171*/], 0, 0, 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[0 /*171*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 167, false);
		if (__LIB_1__::func_22(3))
		{
			__LIB_11__::func_757(uParam0, 3, Local_37[0 /*171*/], 0, 0, 1, 0);
		}
	}
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_13__::func_484(Global_1835011[uParam0->f_607 /*74*/].f_1, 1);
	}
	else
	{
		__LIB_13__::func_484(Global_1835011[uParam0->f_607 /*74*/].f_1, 0);
	}
	func_185();
	__LIB_6__::func_357();
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	if (LAW::_0xF46108C50A22B029())
	{
		LAW::_0x29CD4896ECB66C12();
	}
	LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	if (Global_1935630.f_18)
	{
		LAW::_0x55F37F5F3F2475E1();
	}
	return true;
}

struct<4> func_38(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			__LIB_4__::func_954(&Var0, func_224(0, 0));
			break;
		case 1:
			__LIB_4__::func_954(&Var0, func_224(1, 0));
			break;
		case 2:
			__LIB_4__::func_954(&Var0, func_224(2, 4));
			break;
		case 25:
			__LIB_4__::func_954(&Var0, func_224(5, 1));
			break;
		default:
			Var0 = { Global_36 };
			break;
	}
	return Var0;
}

void func_78(var uParam0)
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
		func_279(uParam0);
	}
}

void func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_9__::func_202();
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
						func_316(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_316(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_316(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_316(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_316(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_316(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_316(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_316(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_316(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_316(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_316(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_316(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_316(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318();
						func_319(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_316(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_87(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_87(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_87(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_316(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_316(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_357();
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
							func_316(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_112(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	func_381(uParam0);
	uParam0->f_634[0] = 59078;
	uParam0->f_634[1] = 59078;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_384(uParam0);
}

void func_113(var uParam0)
{
	__LIB_8__::func_762(uParam0, 50);
	if (CLOCK::GET_CLOCK_HOURS() >= 18 && CLOCK::GET_CLOCK_HOURS() < 20)
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	else if ((CLOCK::GET_CLOCK_HOURS() >= 21 || CLOCK::GET_CLOCK_HOURS() < 4) || (CLOCK::GET_CLOCK_HOURS() == 4 && CLOCK::GET_CLOCK_MINUTES() < 15))
	{
		CLOCK::SET_CLOCK_TIME(4, 15, 0);
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 20 && CLOCK::GET_CLOCK_HOURS() < 21)
	{
		if (!func_386(-2147483648))
		{
			func_387(-2147483648);
		}
	}
	if (__LIB_5__::func_253(uParam0) == 0)
	{
		iLocal_4544 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_4544))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_4544, 2798.262f, 520.6355f, 66.1453f, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_4544, 343.5278f);
		}
	}
}

void func_127(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_390(&(uParam0->f_7375));
	}
}

bool func_131(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_392(Param0, Param0.f_3);
}

int func_143(var uParam0)
{
	int iVar0;
	iLocal_27 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	__LIB_5__::func_338(uParam0, iLocal_27, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_28, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_29, 1);
	__LIB_5__::func_338(uParam0, iLocal_30, 14);
	__LIB_5__::func_338(uParam0, iLocal_31, 1);
	__LIB_5__::func_338(uParam0, iLocal_32, 1);
	__LIB_5__::func_338(uParam0, iLocal_33, 1);
	__LIB_5__::func_338(uParam0, iLocal_34, 1);
	__LIB_5__::func_338(uParam0, joaat("P_TNT_TRAINROBBERY_01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CRATECOVER06X_TNT"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("SCRIPTEDBALL"), 4);
	__LIB_5__::func_338(uParam0, iLocal_35, 3);
	__LIB_5__::func_338(uParam0, iLocal_36, 3);
	__LIB_8__::func_792(uParam0, sLocal_4961, &(Local_4628[7 /*16*/]), 1, 2, func_410(20), 0, 1);
	__LIB_8__::func_792(uParam0, sLocal_4958, &(Local_4628[2 /*16*/]), 2, 0, func_410(16), 0, 1);
	__LIB_8__::func_792(uParam0, sLocal_4957, &(Local_4628[1 /*16*/]), 2, 0, func_410(1), 0f, 0);
	__LIB_8__::func_792(uParam0, sLocal_4959, &(Local_4628[5 /*16*/]), 4, 0, func_410(17), 0, 1);
	__LIB_8__::func_792(uParam0, sLocal_4960, &(Local_4628[6 /*16*/]), 2, 0, func_410(18), 0, 1);
	__LIB_8__::func_792(uParam0, sLocal_4962, &(Local_4628[3 /*16*/]), 4, 2, func_410(0), 0, 1);
	__LIB_8__::func_792(uParam0, sLocal_4963, &(Local_4628[4 /*16*/]), 4, 2, func_410(0), 0, 1);
	__LIB_5__::func_566(uParam0, Local_4628[2 /*16*/], func_410(13), 2);
	__LIB_5__::func_566(uParam0, Local_4628[2 /*16*/], func_410(14), 2);
	__LIB_5__::func_566(uParam0, Local_4628[2 /*16*/], func_410(15), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(2), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(3), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(4), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(5), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(6), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(7), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(8), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(9), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(10), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(11), 2);
	__LIB_5__::func_566(uParam0, Local_4628[1 /*16*/], func_410(12), 2);
	__LIB_5__::func_566(uParam0, Local_4628[6 /*16*/], func_410(19), 2);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		__LIB_5__::func_565(uParam0, func_413(iVar0), 67108863, 2, -1);
		iVar0++;
	}
	__LIB_5__::func_565(uParam0, "trn2_horse_flee_1", 2, 2, -1);
	__LIB_8__::func_793(uParam0, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 67108863, -1, 0);
	__LIB_8__::func_793(uParam0, joaat("WEAPON_RIFLE_BOLTACTION_BILL"), 524294, -1, 0);
	__LIB_8__::func_792(uParam0, "script@story@trn2@leadout@int@leadout", &(uLocal_4824[0]), 1, 0, "pbl_enter", 0, 1);
	return 1;
}

void func_160(var uParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 134217728))
	{
		func_143(uParam0);
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

bool func_162(var uParam0)
{
	if (__LIB_4__::func_962(uParam0) < 1)
	{
		func_426(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_427(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_428(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_429(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_431(uParam0))
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
			if (__LIB_11__::func_65(uParam0))
			{
				__LIB_4__::func_963(uParam0, 3);
			}
			break;
		case 3:
			if (func_433(uParam0))
			{
				__LIB_4__::func_963(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_165(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_939(uParam0) == 26)
	{
		__LIB_4__::func_964(uParam0, 0);
		return true;
	}
	if (func_435(uParam0))
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
			func_435(uParam0);
		}
	}
	return false;
}

void func_167(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == -1)
	{
		return;
	}
	func_436(iParam0, &iVar0, &iVar1);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iVar2 != -1)
		{
			__LIB_11__::func_310(iVar2, bParam1);
			if (bParam2)
			{
				func_438(iVar2, 1, 1);
			}
		}
		iVar2++;
	}
}

Vector3 func_172(int iParam0, int iParam1)
{
	return func_448(iParam0, iParam1);
}

void func_173(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { __LIB_2__::func_66(vParam1, vParam4, iParam7) };
	vVar3 = { __LIB_2__::func_67(vParam1, vParam4, iParam7) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar3, 0, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam8);
}

void func_179()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_2__::func_426(&(Local_4454[iVar0 /*13*/]));
		iVar0++;
	}
}

void func_185()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_4549[iVar0 /*3*/]))
		{
			OBJECT::DELETE_OBJECT(&(vLocal_4549[iVar0 /*3*/]));
		}
		iVar0++;
	}
}

struct<4> func_224(int iParam0, int iParam1)
{
	return func_497(iParam0, iParam1);
}

void func_279(var uParam0)
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
		if (func_427(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_316(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_316(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_316(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_316(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_316(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_316(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_316(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_316(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_316(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_316(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_316(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_316(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_318()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_655();
	func_656();
	func_657();
	func_658();
	func_659();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_319(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_662(iParam0, 1, 1, -142743235, 1);
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

void func_357()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_703(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_381(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_742(uParam0, iVar0);
		iVar0++;
	}
}

void func_384(var uParam0)
{
	__LIB_5__::func_476(uParam0, iLocal_16, iLocal_17, 111576, 111667, 111949, 112248, 113097, "TRN2_INT", 524298, -1);
	__LIB_5__::func_476(uParam0, iLocal_17, iLocal_18, 113340, 113731, 114024, 114403, 116039, "TRN2_MCS1", 528450, -1);
	__LIB_5__::func_476(uParam0, iLocal_18, iLocal_19, 116212, 116608, 116629, 117029, 118554, "", 8, -1);
	__LIB_5__::func_476(uParam0, iLocal_19, 26, 118764, 119070, 119307, 119464, 119545, "TRN2_EXT", 2, -1);
}

bool func_386(int iParam0)
{
	return __LIB_0__::func_27(iLocal_4820, iParam0);
}

void func_387(int iParam0)
{
	if (!func_386(iParam0))
	{
		__LIB_1__::func_683(&iLocal_4820, iParam0);
	}
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
		func_768(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_770(uParam0);
		func_771(uParam0);
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
		iVar0 = func_779(0, 0);
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
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_leadin";
			break;
		case 1:
			sVar0 = "pbl_Drunk_Idle_Enter";
			break;
		case 2:
			sVar0 = "pbl_Drunk_Run_Enter";
			break;
		case 3:
			sVar0 = "pbl_Drunk_Idle01";
			break;
		case 4:
			sVar0 = "pbl_Drunk_Idle02";
			break;
		case 5:
			sVar0 = "pbl_Drunk_Idle03";
			break;
		case 6:
			sVar0 = "pbl_Drunk_Breakout";
			break;
		case 7:
			sVar0 = "pbl_Stagger_to_Road";
			break;
		case 8:
			sVar0 = "pbl_Bill_Shoots";
			break;
		case 9:
			sVar0 = "pbl_Road_Base";
			break;
		case 10:
			sVar0 = "pbl_Road_Breakout";
			break;
		case 11:
			sVar0 = "pbl_Road_Idle_01";
			break;
		case 12:
			sVar0 = "pbl_Road_Idle_02";
			break;
		case 13:
			sVar0 = "pbl_Bill_Shoot";
			break;
		case 14:
			sVar0 = "pbl_Road_Base";
			break;
		case 15:
			sVar0 = "pbl_Road_Breakout";
			break;
		case 16:
			sVar0 = "pbl_Stagger_to_Road";
			break;
		case 17:
			sVar0 = "pbl_Action";
			break;
		case 18:
			sVar0 = "pbl_Far";
			break;
		case 19:
			sVar0 = "pbl_Near";
			break;
		case 20:
			sVar0 = "pl_Bill_Arrives";
			break;
		default:
			break;
	}
	return sVar0;
}

char* func_413(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "trn2_toCoachAmbush2";
			break;
		case 1:
			sVar0 = "trn2_SnipeAssist";
			break;
		case 2:
			sVar0 = "trn2_wagon";
			break;
		case 3:
			sVar0 = "trn2_toBeaverHollow";
			break;
		case 4:
			sVar0 = "trn2_wave01_bridge";
			break;
		case 5:
			sVar0 = "trn2_wave01_left";
			break;
		case 6:
			sVar0 = "trn2_wave01_right";
			break;
		case 7:
			sVar0 = "trn2_wave02_left";
			break;
		case 8:
			sVar0 = "trn2_wave02_right";
			break;
		case 9:
			sVar0 = "trn2_wave03_A_middle";
			break;
		case 10:
			sVar0 = "trn2_wave03_left";
			break;
		case 11:
			sVar0 = "trn2_wave03_middle";
			break;
		case 12:
			sVar0 = "trn2_wave03_right";
			break;
		case 13:
			sVar0 = "trn2_wave04_left";
			break;
		case 14:
			sVar0 = "trn2_wave04_right";
			break;
		case 15:
			sVar0 = "trn2_pinkaton_route";
			break;
	}
	return sVar0;
}

bool func_426(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	if (func_838(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_427(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
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
						func_846(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
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

void func_428(var uParam0)
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
		if (func_848(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_429(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (func_850(uParam0))
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
			if (func_852(uParam0, Var0))
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

bool func_431(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_8__::func_910(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_426(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_427(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		if (!__LIB_0__::func_899(&(uParam0->f_13115)))
		{
			__LIB_4__::func_89(&(uParam0->f_13115), 0);
		}
		if (__LIB_1__::func_583(&(uParam0->f_13115)) < 30f)
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

bool func_433(var uParam0)
{
	if (!func_858(uParam0))
	{
		return false;
	}
	if (!func_859(3, &(Local_37[0 /*171*/].f_1)))
	{
		return false;
	}
	else
	{
		__LIB_5__::func_559(uParam0, Local_37[0 /*171*/].f_1, Local_37[0 /*171*/]);
	}
	if (!func_861(uParam0, 0))
	{
		return false;
	}
	else
	{
		func_863(uParam0, iLocal_4533, 133521, 0, "HORSE_NME", 67108863, 1023, 3, 40);
	}
	if (__LIB_4__::func_939(uParam0) <= iLocal_17)
	{
		if (!func_864(0, 5, 1))
		{
			return false;
		}
		else
		{
			func_865();
		}
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_16)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]))
		{
			if (!func_838(uParam0, 6, &(Local_37[1 /*171*/]), 0, 2578.662f, 796.4379f, 84.7859f, 35.92f, 1, -922193456, 0, 0, 1, 0))
			{
				return false;
			}
		}
		if (!func_859(6, &(Local_37[1 /*171*/].f_1)))
		{
			return false;
		}
		else
		{
			__LIB_5__::func_559(uParam0, Local_37[1 /*171*/].f_1, Local_37[1 /*171*/]);
		}
		if (!__LIB_4__::func_948(uParam0, 4))
		{
			__LIB_0__::func_202(Global_35, 0);
			__LIB_0__::func_202(Local_37[0 /*171*/], 0);
			__LIB_0__::func_202(Local_37[1 /*171*/], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4545))
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_5__::func_34(uParam0, iLocal_29, 0)))
			{
				iLocal_4545 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(uParam0, iLocal_29, 0));
			}
			else
			{
				iLocal_4545 = OBJECT::CREATE_OBJECT(iLocal_29, 2784.404f, 522.162f, 67.2168f, true, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_4545, 136.38f);
			}
			__LIB_5__::func_580(uParam0, iLocal_4545, "p_crate03x", 0, 0, 0, 0);
		}
		AUDIO::_0x0D7FD6A55FD63AEF(28, 3, 0);
	}
	if (__LIB_4__::func_939(uParam0) == 2 || __LIB_4__::func_939(uParam0) == 3)
	{
		if (!func_869(func_172(2, 0), func_868(2, 0)))
		{
			return false;
		}
	}
	func_870();
	__LIB_5__::func_561(uParam0, Local_37[1 /*171*/], 2, 512);
	__LIB_5__::func_563(uParam0, Local_37[1 /*171*/], 60000, 512);
	__LIB_5__::func_562(uParam0, Local_37[1 /*171*/], 2000, 512);
	__LIB_5__::func_572(uParam0, Local_37[0 /*171*/], 128);
	func_875();
	func_167(92, 1, 1);
	__LIB_6__::func_350(86, 2, 1, 0);
	__LIB_5__::func_580(uParam0, Local_37[0 /*171*/], 0, 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, Local_37[1 /*171*/], 0, 0, 0, 0, 0);
	__LIB_5__::func_106(uParam0, Local_37[1 /*171*/], "MICAH_BELL", 0);
	func_876(uParam0);
	if (__LIB_4__::func_939(uParam0) == 1)
	{
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_4593))
		{
			iLocal_4593 = TASK::ADD_COVER_POINT(2949.044f, 535.7297f, 43.7618f, 324.7248f, 0, 2, 0, false);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_4618))
		{
			TASK::_0xEB2ED1DC3AEC0654(iLocal_4618, 1, 1, 1, 0);
		}
	}
	__LIB_2__::func_165(func_172(1, 0), 200f, 0, 0, 5);
	__LIB_1__::func_572(func_172(1, 0), 200f, 0, 0, 0, 0, 0);
	if (__LIB_4__::func_939(uParam0) <= 2)
	{
		__LIB_3__::func_414(&uLocal_4967, 2950.405f, 534.9246f, 43.75696f, 5f, 1, 63, 0);
	}
	__LIB_0__::func_401(1091543855);
	__LIB_5__::func_441("trn2_nav_van_cover_00");
	__LIB_4__::func_228(&uLocal_4790);
	__LIB_2__::func_906(&uLocal_4790, 40);
	__LIB_1__::func_402(&uLocal_4790, 0);
	__LIB_5__::func_550(uParam0, 138579);
	__LIB_5__::func_256(uParam0, 138748);
	__LIB_5__::func_257(uParam0, 139862);
	__LIB_3__::func_229(904);
	__LIB_3__::func_229(464);
	__LIB_3__::func_229(449);
	__LIB_3__::func_229(465);
	__LIB_3__::func_229(455);
	__LIB_3__::func_229(456);
	__LIB_3__::func_229(457);
	__LIB_3__::func_229(458);
	if ((__LIB_4__::func_948(uParam0, 4) || __LIB_4__::func_948(uParam0, 4194304)) || __LIB_4__::func_951(uParam0, 2))
	{
		__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 1, 1103626240 /* Float: 25f */);
	}
	else
	{
		__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 0, 1103626240 /* Float: 25f */);
	}
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	return true;
}

bool func_435(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_893(uParam0);
	__LIB_11__::func_756(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_850(uParam0);
		}
	}
	__LIB_11__::func_56(uParam0);
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
		func_429(uParam0);
	}
	if (__LIB_5__::func_331(uParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_78(uParam0);
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
						__LIB_4__::func_523(uParam0, iVar0);
						__LIB_4__::func_944(uParam0, 4);
					}
					__LIB_10__::func_922(uParam0);
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
				if (__LIB_17__::func_525(uParam0))
				{
					if (__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_4__::func_969(uParam0, 4);
					}
					__LIB_5__::func_286(uParam0, iVar0, 2);
				}
			}
			else if (__LIB_10__::func_914(uParam0) >= uParam0->f_13144)
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
					if (func_910(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_912(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_910(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_912(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_912(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_910(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_910(uParam0, iVar0, iVar1))
			{
				__LIB_5__::func_286(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_17__::func_526(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_11__::func_729(uParam0);
				if (__LIB_5__::func_331(uParam0, iVar1, 2))
				{
					if (__LIB_5__::func_483(uParam0, iVar1))
					{
						__LIB_11__::func_39(uParam0, iVar1);
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
					__LIB_11__::func_645(uParam0, iVar1);
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
				if ((__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_4__::func_948(uParam0, 8192)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
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
						__LIB_5__::func_599(uParam0, func_38(iVar0), func_38(iVar1), iVar0, iVar1);
						__LIB_4__::func_969(uParam0, 268435456);
					}
				}
				if (__LIB_4__::func_948(uParam0, 1048576))
				{
					if (func_131(func_38(0)))
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
				__LIB_17__::func_526(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_11__::func_729(uParam0);
				if (__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 2))
				{
					if (__LIB_5__::func_483(uParam0, __LIB_5__::func_475(uParam0)))
					{
						__LIB_11__::func_39(uParam0, __LIB_5__::func_475(uParam0));
					}
				}
			}
			if ((!__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_4__::func_948(uParam0, 8192)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
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
				__LIB_11__::func_645(uParam0, iVar1);
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

void func_436(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case 78:
			*uParam1 = 0;
			*iParam2 = 3;
			break;
		case 38:
			*uParam1 = 6;
			*iParam2 = 17;
			break;
		case 69:
			*uParam1 = 18;
			*iParam2 = 21;
			break;
		case 3:
			*uParam1 = 22;
			*iParam2 = 22;
			break;
		case 5:
			*uParam1 = 36;
			*iParam2 = 55;
			break;
		case 105:
			*uParam1 = 25;
			*iParam2 = 33;
			break;
		case 101:
			*uParam1 = 35;
			*iParam2 = 35;
			break;
		case 23:
			*uParam1 = 23;
			*iParam2 = 24;
			break;
		case 26:
			*uParam1 = 60;
			*iParam2 = 65;
			break;
		case 76:
			*uParam1 = 68;
			*iParam2 = 80;
			break;
		case 92:
			*uParam1 = 82;
			*iParam2 = 86;
			break;
		case 28:
			*uParam1 = 87;
			*iParam2 = 89;
			break;
		case 115:
			*uParam1 = 90;
			*iParam2 = 94;
			break;
		case 120:
			*uParam1 = 95;
			*iParam2 = 96;
			break;
		case 117:
			*uParam1 = 99;
			*iParam2 = 100;
			break;
		case 71:
			*uParam1 = 56;
			*iParam2 = 56;
			break;
		case 98:
			*uParam1 = 57;
			*iParam2 = 57;
			break;
		case 9:
			*uParam1 = 58;
			*iParam2 = 58;
			break;
		case 79:
			*uParam1 = 59;
			*iParam2 = 59;
			break;
		case 13:
			*uParam1 = 4;
			*iParam2 = 4;
			break;
		case 14:
			*uParam1 = 5;
			*iParam2 = 5;
			break;
		case 90:
		case 128:
			*uParam1 = 34;
			*iParam2 = 34;
			break;
		case 113:
			*uParam1 = 67;
			*iParam2 = 67;
			break;
		case -1:
			*uParam1 = 101;
			*iParam2 = 101;
			break;
	}
}

void func_438(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (bParam2)
	{
		iVar0 = __LIB_1__::func_921(iParam0);
		iVar1 = 0;
		iVar2 = __LIB_1__::func_915(iVar0);
		if (iVar2 >= 15)
		{
			return;
		}
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			iVar3 = Global_1914319.f_3[iVar0 /*446*/].f_317[iVar1 /*6*/];
			if (__LIB_0__::func_30(iVar3))
			{
				__LIB_0__::func_68(iVar3, 0, 0);
				if (!__LIB_0__::func_724(iVar3))
				{
					return;
				}
				if (bParam1)
				{
					OBJECT::_0x7F458B543006C8FE(iVar3, 16);
				}
				else
				{
					OBJECT::_0x7F458B543006C8FE(iVar3, 0);
				}
			}
			iVar1++;
		}
	}
	if (bParam1)
	{
		__LIB_1__::func_936(iParam0, 2097152);
	}
	else
	{
		__LIB_1__::func_937(iParam0, 2097152);
	}
}

Vector3 func_448(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2780.446f, 520.1077f, 66.7941f;
				case 1:
					return 2776.685f, 521.3568f, 67.1229f;
				case 2:
					return 2775.51f, 522.6251f, 67.0885f;
				case 3:
					return 2348.776f, 1360.268f, 105.4629f;
				case 4:
					return 2778.018f, 521.2173f, 66.9315f;
				case 5:
					return 2791.174f, 518.6402f, 66.4126f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2968.953f, 488.5403f, 45.8684f;
				case 1:
					return 2959.482f, 533.8622f, 43.4832f;
				case 2:
					return 2975.505f, 502.355f, 47.4842f;
				case 3:
					return 2926.798f, 603.7943f, 36.774f;
				case 4:
					return 3044.932f, 448.5198f, 65.2589f;
				case 5:
					return 2941.513f, 598.0825f, 43.1702f;
				case 6:
					return 2944.988f, 597.6603f, 43.1962f;
				case 7:
					return 2942.715f, 594.8314f, 43.1111f;
				case 8:
					return 2940.1f, 601.817f, 43.5499f;
				case 9:
					return 2937.809f, 599.0038f, 43.4164f;
				case 10:
					return 2942.731f, 599.3033f, 43.2441f;
				case 11:
					return 2955.268f, 588.2153f, 43.1833f;
				case 12:
					return 2958.499f, 587.7204f, 43.2705f;
				case 13:
					return 2955.192f, 584.9361f, 43.3685f;
				case 14:
					return 2953.621f, 591.9351f, 43.136f;
				case 15:
					return 2951.181f, 588.7387f, 43.1428f;
				case 16:
					return 2956.044f, 589.7205f, 43.1699f;
				case 17:
					return 2976.531f, 502.8038f, 47.9128f;
				case 18:
					return 2961.915f, 490.6491f, 45.4549f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2958.995f, 509.3389f, 44.5208f;
				case 1:
					return 2961.676f, 554.2907f, 43.6979f;
				case 2:
					return 2961.884f, 561.6008f, 43.6977f;
				case 3:
					return 2958.904f, 555.4321f, 43.6568f;
				case 4:
					return 2964.724f, 509.0153f, 44.1817f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2965.69f, 540.8749f, 43.3171f;
				case 1:
					return 2974.064f, 536.558f, 42.487f;
				case 2:
					return 2970.428f, 536.7942f, 42.502f;
				case 3:
					return 2955.363f, 538.1401f, 43.5615f;
				case 4:
					return 2965.113f, 522.2142f, 43.5697f;
				case 5:
					return 2964.173f, 530.9199f, 43.345f;
				case 6:
					return 2955.405f, 518.3095f, 43.9727f;
				case 7:
					return 2954.283f, 524.8269f, 44.4725f;
				case 8:
					return 2951.561f, 534.7532f, 43.7482f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 3061.909f, 183.4974f, -24.6453f;
				case 1:
					return 2143.22f, 1403.743f, 91.0537f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2392.51f, 1205.113f, 97.7285f;
				case 1:
					return 2389.741f, 1206.507f, 97.9932f;
				case 2:
					return 2390.568f, 1208.135f, 98.0929f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2786.721f, 459.976f, 63.9582f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2902.524f, 388.4097f, 44.953f;
				case 1:
					return 2903.523f, 382.9738f, 44.3754f;
				case 2:
					return 2583.269f, 393.707f, 70.5658f;
				case 3:
					return 2585.226f, 392.4784f, 70.5797f;
				case 4:
					return 2504.262f, 747.9092f, 72.8054f;
				case 5:
					return 2505.583f, 751.1984f, 72.5806f;
				case 6:
					return 2648.1f, 567.7259f, 82.2159f;
				case 7:
					return 2646.533f, 570.7178f, 82.2015f;
				case 8:
					return 2648.975f, 571.7418f, 82.1255f;
				case 9:
					return 2908.199f, 389.5655f, 45.3984f;
				case 10:
					return 2583.324f, 532.9016f, 70.1079f;
				case 11:
					return 2553.052f, 699.458f, 79.1254f;
				case 12:
					return 2555.058f, 699.9058f, 78.931f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2964.972f, 481.7337f, 46.2145f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2954.046f, 522.6444f, 44.4779f;
				case 1:
					return 2981.691f, 566.0383f, 44.6328f;
				case 2:
					return 2952.237f, 527.053f, 44.4641f;
				case 3:
					return 2952.231f, 519.3246f, 44.4625f;
				case 4:
					return 2969.697f, 522.3248f, 43.0755f;
				case 5:
					return 2970.672f, 538.7186f, 42.5325f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2966.218f, 410.5701f, 48.5104f;
				case 1:
					return 2969.858f, 410.6547f, 48.6953f;
				case 2:
					return 2969.151f, 412.5727f, 48.687f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

struct<4> func_497(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_448(iParam0, iParam1) };
	Var0.f_3 = func_997(iParam0, iParam1);
	return Var0;
}

void func_655()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1145(0);
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
	func_1145(1);
}

void func_656()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_316(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_657()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1148(0);
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
	func_1148(1);
}

void func_658()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1148(0);
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
	func_1148(1);
}

void func_659()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_316(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_316(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_662(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_662(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_662(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_662(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_703(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1193(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_316(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_742(var uParam0, int iParam1)
{
	func_1219(uParam0, iParam1);
	__LIB_5__::func_292(uParam0, iParam1, 26);
}

int func_743(var uParam0)
{
	if (!func_861(uParam0, 0))
	{
		return 0;
	}
	if (!func_858(uParam0))
	{
		return 0;
	}
	if (!func_859(3, &(Local_37[0 /*171*/].f_1)))
	{
		return 0;
	}
	if (!func_1221(0, 2, 1))
	{
		return 0;
	}
	if (__LIB_4__::func_948(uParam0, 4))
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	return 1;
}

int func_744(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4914))
	{
		iLocal_4914 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_SNIPERRIFLE_CARCANO"), 30, 2956.108f, 486.2331f, 46.2793f, true, 1f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4914, Local_37[0 /*171*/].f_1, PED::GET_PED_BONE_INDEX(Local_37[0 /*171*/].f_1, 3086), -0.02f, 0.037f, 0.1f, 160f, 10f, 0f, true, false, false, false, 2, true, false, false);
		return 0;
	}
	func_1222(iLocal_4533, func_224(0, 2), 2, 1073741824 /* Float: 2f */);
	func_1222(Local_37[0 /*171*/].f_1, func_224(0, 1), 34, 1073741824 /* Float: 2f */);
	func_1222(Local_37[1 /*171*/].f_1, func_224(0, 5), 34, 1073741824 /* Float: 2f */);
	if (!__LIB_0__::func_163(iLocal_4533, -982327190))
	{
		TASK::TASK_STAND_STILL(iLocal_4533, -1);
	}
	if (PED::_GET_LAST_MOUNT(Global_35) != iLocal_4533)
	{
		func_1222(PED::_GET_LAST_MOUNT(Global_35), func_224(0, 2), 2, 1073741824 /* Float: 2f */);
	}
	__LIB_0__::func_202(Global_35, 0);
	__LIB_0__::func_202(Local_37[0 /*171*/], 0);
	__LIB_0__::func_202(Local_37[1 /*171*/], 0);
	__LIB_4__::func_705(6, 1);
	return 1;
}

int func_745(var uParam0)
{
	__LIB_0__::func_722(1, 0);
	__LIB_2__::func_259(&uLocal_4868);
	__LIB_11__::func_59(uParam0, 1);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_1__::func_649(&iLocal_4769, 0);
	__LIB_1__::func_649(&iLocal_4770, 0);
	if (__LIB_4__::func_948(uParam0, 4))
	{
		__LIB_5__::func_486(uParam0, "TRN2_OBJ01a", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_11__::func_647(uParam0, "TRN2_OBJ01a", 4, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_4597))
	{
		uLocal_4862 = PED::_0x4C39C95AE5DB1329(iLocal_4597, false, 8);
		__LIB_1__::func_391(iLocal_4597, 0, 0, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 16384);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 8);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 40);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 24);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 1048576);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_4627, 0, 0, 0);
	}
	iLocal_4864 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2704.722f, 708.6203f, 76.9066f, joaat("PROP_HITCHINGPOST"), 20f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_4864))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_4864, false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[0 /*171*/], false);
	__LIB_0__::func_782(7, 32);
	__LIB_6__::func_914(uParam0);
	__LIB_1__::func_296(3, 0, 1, 1);
	__LIB_1__::func_296(6, 0, 1, 1);
	PED::SET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 167, true);
	AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
	return 1;
}

int func_746(var uParam0)
{
	func_1233(Local_37[0 /*171*/], &uLocal_4904);
	func_1234(uParam0);
	func_1235(uParam0);
	func_1236();
	TASK::WAYPOINT_RECORDING_GET_COORD(func_413(0), 174, &vLocal_4846);
	if (WEAPON::_0x95CA12E2C68043E5(Global_35, 0))
	{
	}
	else if (!WEAPON::_0x95CA12E2C68043E5(Global_35, 0))
	{
	}
	if (__LIB_4__::func_971(uParam0) >= 1)
	{
		func_1238();
	}
	if (func_1239(134217728))
	{
		__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(Local_37[0 /*171*/], true, false), 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_4533);
			if (__LIB_0__::func_272(Global_35, 0))
			{
				if (__LIB_0__::func_394(Global_35, iLocal_4533, 0))
				{
					__LIB_13__::func_495(7);
					__LIB_0__::func_722(1, 0);
					__LIB_2__::func_259(&uLocal_4868);
					__LIB_0__::func_783(7, 32);
					func_1243(256);
					__LIB_10__::func_930(uParam0, Local_37[0 /*171*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
					__LIB_5__::func_486(uParam0, "TRN2_OBJ01", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_11__::func_647(uParam0, "TRN2_OBJ01", 5, 0, 0);
					__LIB_4__::func_952(uParam0, 1);
				}
			}
			break;
		case 1:
			if (!func_1239(1048576))
			{
				if (__LIB_0__::func_394(Global_35, iLocal_4533, 1))
				{
					func_1243(1048576);
				}
			}
			if (func_1239(1048576))
			{
				if (__LIB_17__::func_527(uParam0, iLocal_4533, 1125515264 /* Float: 150f */, 0, 0, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
				{
					__LIB_10__::func_935(uParam0, Local_37[0 /*171*/], 1);
					if (func_1239(256))
					{
						TASK::WAYPOINT_PLAYBACK_PAUSE(Local_37[0 /*171*/], 1, 1, 0);
						func_1247(256);
					}
				}
			}
			if (__LIB_0__::func_394(Global_35, iLocal_4533, 0))
			{
				__LIB_10__::func_930(uParam0, Local_37[0 /*171*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				if (!func_1239(256))
				{
					__LIB_5__::func_486(uParam0, "TRN2_OBJ01", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					TASK::WAYPOINT_PLAYBACK_RESUME(Local_37[0 /*171*/], true, -1, 0);
					func_1243(256);
				}
			}
			if ((__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(Local_37[0 /*171*/], 0)) && __LIB_0__::func_272(Local_37[0 /*171*/].f_1, 0))
			{
				if (!func_1239(33554432))
				{
					func_1248();
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_4846, true) <= 20f)
				{
					if (func_1239(1048576))
					{
						func_1247(1048576);
					}
					if (__LIB_4__::func_979(uParam0) != 9 && __LIB_4__::func_979(uParam0) != 51)
					{
						__LIB_11__::func_59(uParam0, 9);
					}
				}
				if (!__LIB_0__::func_86(vLocal_4846))
				{
					__LIB_1__::func_448(Local_37[0 /*171*/], vLocal_4846, 0, 50f, 30f, 5f, 4f, 1, 1, 1, 0);
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						func_1250(Global_35, vLocal_4846, &uLocal_4883, 50f, 30f, 10f, 9f, 1f, 0, 0, 1, 1, 1);
					}
				}
				if ((ANIMSCENE::_0x005E6F28DD7ED58D(Local_4628[7 /*16*/], "CS_BillWilliamson") || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_4628[7 /*16*/], "CS_BillWilliamson")) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[7 /*16*/]) >= 1f)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[0 /*171*/], true);
					if (__LIB_0__::func_665(Global_35, Local_37[0 /*171*/], 1, 1) <= 50f)
					{
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_747(var uParam0)
{
	if (PED::DOES_GROUP_EXIST(iLocal_4789))
	{
		PED::REMOVE_GROUP(iLocal_4789);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "TRN2_MCS1_LI");
	__LIB_1__::func_463(Local_37[1 /*171*/].f_1, 6, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]) && __LIB_5__::func_570(uParam0, Local_37[1 /*171*/]))
	{
		__LIB_11__::func_718(uParam0, Local_37[1 /*171*/]);
	}
	__LIB_10__::func_935(uParam0, Local_37[0 /*171*/], 1);
	AUDIO::_0x660A8F876DF1D4F8(14);
	__LIB_1__::func_721(7);
	return 1;
}

int func_749(var uParam0)
{
	if (!func_858(uParam0))
	{
		return 0;
	}
	else
	{
		func_1222(Local_37[0 /*171*/], func_224(3, 8), 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4915))
	{
		iLocal_4915 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_RIFLE_BOLTACTION_BILL"), 30, 2956.108f, 486.2331f, 46.2793f, true, 1f);
		return 0;
	}
	else
	{
		__LIB_5__::func_580(uParam0, iLocal_4915, "Guard_Leader_Rifle", 0, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4914))
	{
		iLocal_4914 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_SNIPERRIFLE_CARCANO"), 30, 2956.108f, 486.2331f, 46.2793f, true, 1f);
		return 0;
	}
	else
	{
		__LIB_5__::func_580(uParam0, iLocal_4914, "w_rifle_rollingBlock01", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]))
	{
		__LIB_11__::func_757(uParam0, 6, Local_37[1 /*171*/], 0, 1, 1, 0);
	}
	func_1222(Global_35, func_224(1, 0), 2, 1073741824 /* Float: 2f */);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_4597))
	{
		uLocal_4862 = PED::_0x4C39C95AE5DB1329(iLocal_4597, false, 8);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 8);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 40);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 24);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 1048576);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_4627, 0, 0, 0);
		uLocal_4862 = __LIB_1__::func_391(iLocal_4597, 0, 0, 0);
	}
	ENTITY::CREATE_MODEL_HIDE(2957.353f, 550.3802f, 43.9396f, 5f, joaat("P_WAGON01X"), true);
	ENTITY::CREATE_MODEL_HIDE(2958.196f, 548.4855f, 43.6148f, 0.2f, joaat("P_WAGONWHEEL01"), true);
	func_861(uParam0, 0);
	CLOCK::SET_CLOCK_TIME(18, 0, 0);
	return 1;
}

int func_750(var uParam0)
{
	if (STREAMING::_0x8A3945405B31048F() > 0.85f)
	{
		__LIB_5__::func_521(0.85f);
	}
	PED::_0xAB0D553FE20A6E25(0.9f);
	if (__LIB_0__::func_272(iLocal_4533, 0))
	{
		func_846(iLocal_4533, 2976.283f, 479.2025f, 45.3229f, 220.6005f, 2, 1073741824 /* Float: 2f */);
	}
	if (!__LIB_0__::func_163(iLocal_4533, 923520851))
	{
		TASK::TASK_WANDER_IN_AREA(iLocal_4533, 2975.504f, 481.312f, 45.0541f, 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
	}
	Local_37[0 /*171*/].f_166 = 0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
	}
	if (__LIB_0__::func_272(Local_37[0 /*171*/], 0))
	{
		__LIB_8__::func_806(uParam0, Local_37[0 /*171*/], 0, 0, 0, 0, 0);
	}
	if (__LIB_0__::func_272(Local_37[0 /*171*/].f_1, 0))
	{
		__LIB_8__::func_806(uParam0, Local_37[0 /*171*/].f_1, "Horse_01", 0, 0, 0, 0);
	}
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_4863))
	{
		uLocal_4863 = __LIB_1__::func_391(iLocal_4624, 0, 0, 0);
	}
	func_1258(0, 13);
	__LIB_6__::func_901(uParam0, 8192);
	__LIB_6__::func_901(uParam0, 524288);
	__LIB_5__::func_33(uParam0, 65536);
	return 1;
}

int func_751(var uParam0)
{
	if (!func_1261(uParam0, func_172(1, 5), func_868(1, 5), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_272(Local_37[0 /*171*/], 0))
	{
		__LIB_0__::func_705(3, 1);
	}
	__LIB_4__::func_0(&iLocal_4948);
	__LIB_0__::func_325(&iLocal_4955);
	__LIB_0__::func_325(&iLocal_4956);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_4618))
	{
		TASK::_0xEB2ED1DC3AEC0654(iLocal_4618, 1, 1, 1, 0);
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4547, true);
	__LIB_0__::func_722(1, 0);
	__LIB_2__::func_259(&uLocal_4868);
	__LIB_2__::func_259(&uLocal_4874);
	__LIB_11__::func_59(uParam0, 1);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_1__::func_649(&iLocal_4769, 0);
	__LIB_1__::func_649(&iLocal_4770, 0);
	if (__LIB_0__::func_272(Local_37[0 /*171*/].f_1, 0))
	{
		func_846(Local_37[0 /*171*/].f_1, 2960.989f, 485.8315f, 45.81857f, 18.1146f, 2, 1073741824 /* Float: 2f */);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4543))
	{
		if (!__LIB_4__::func_257(iLocal_4543))
		{
			__LIB_17__::func_523(iLocal_4543);
			VEHICLE::_0x226C6A4E3346D288(iLocal_4543, 0);
		}
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_4543, false);
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Local_37[0 /*171*/], joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), 0, false))
	{
		__LIB_1__::func_766(Local_37[0 /*171*/], joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_37[0 /*171*/], joaat("WEAPON_REVOLVER_SCHOFIELD_BILL"), false, 0, false, false);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 27, true);
	PED::SET_PED_ACCURACY(Local_37[0 /*171*/], 100);
	PED::ADD_RELATIONSHIP_GROUP("REL_CONVOY", &iLocal_4787);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_413(1), 1, 1f, 0.5f, 1);
	return 1;
}

int func_752(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	func_1265(uParam0);
	func_1266(uParam0);
	func_1267();
	func_1268(uParam0);
	func_1269();
	if ((func_1270() == 0 || __LIB_0__::func_94(iLocal_4542, 2958.788f, 530.4504f, 43.47543f, 1) >= 40f) || (func_1272(4) && !ENTITY::DOES_ENTITY_EXIST(iLocal_4542)))
	{
		func_1273(uParam0);
	}
	if (__LIB_4__::func_971(uParam0) >= 1)
	{
		if (PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_0xBDD9C235D8D1052E(Global_35))
		{
			bVar1 = true;
		}
		if (!__LIB_1__::func_205(Global_35, iLocal_4616, 1, 0))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (__LIB_0__::func_272(Local_551[iVar0 /*195*/], 0))
				{
					if (__LIB_0__::func_665(Global_35, Local_551[iVar0 /*195*/], 1, 1) <= 45f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_551[iVar0 /*195*/], 17))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
		}
		if (bVar1)
		{
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_4787, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_4787, joaat("PLAYER"));
		}
	}
	if (__LIB_4__::func_971(uParam0) == 1 || __LIB_4__::func_971(uParam0) == 2)
	{
		if (__LIB_9__::func_406(&uLocal_4898, 12f))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_37[0 /*171*/], false);
			__LIB_8__::func_795(uParam0, Local_37[0 /*171*/], 1, 1);
		}
		else
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_37[0 /*171*/], true);
			__LIB_8__::func_795(uParam0, Local_37[0 /*171*/], 0, 1);
		}
	}
	if (!func_1239(64))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (__LIB_0__::func_272(Local_551[iVar0 /*195*/], 0))
			{
				if (iVar0 != 0)
				{
					if (__LIB_1__::func_205(Global_35, iLocal_4617, 1, 0) && CAM::GET_GAMEPLAY_CAM_FOV() <= 20f)
					{
						if (__LIB_2__::func_0(Local_551[iVar0 /*195*/], 0.3f, 0.7f, 0.2f, 0.75f))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_551[iVar0 /*195*/], false);
						}
						else
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_551[iVar0 /*195*/], true);
						}
					}
					else if (PED::IS_TRACKED_PED_VISIBLE(Local_551[iVar0 /*195*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_551[iVar0 /*195*/], false);
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_551[iVar0 /*195*/], true);
					}
				}
			}
			iVar0++;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_37[0 /*171*/], joaat("PLAY")))
	{
		if (!func_386(64))
		{
			iLocal_23 = 5;
			func_387(64);
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[1 /*16*/], false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(8)))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[1 /*16*/]) >= 0.4328f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_551[0 /*195*/]))
				{
					__LIB_1__::func_864(Local_551[0 /*195*/], 0, 0);
				}
			}
		}
	}
	if (__LIB_4__::func_971(uParam0) >= 1)
	{
		if (!func_1239(64))
		{
			func_1279();
		}
	}
	if (bLocal_4851 == 0)
	{
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	PED::SET_PED_RESET_FLAG(Global_35, 174, true);
	PED::SET_PED_RESET_FLAG(iLocal_4533, 154, true);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1280(uParam0);
			func_1281(uParam0);
			if (!func_386(128) && !func_386(67108864))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_4617, 1, 0))
				{
					if (!func_1239(32768))
					{
						func_1243(32768);
					}
				}
				if (!func_1239(32768))
				{
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (__LIB_0__::func_272(Local_551[iVar0 /*195*/], 0))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_551[iVar0 /*195*/], 17) || PED::IS_TRACKED_PED_VISIBLE(Local_551[iVar0 /*195*/]))
							{
								func_1243(32768);
							}
						}
						iVar0++;
					}
				}
				if (func_1239(32768))
				{
					func_1282(3.5f);
				}
				else
				{
					func_1282(0.5f);
				}
			}
			if (func_386(1))
			{
				if (!__LIB_1__::func_205(Global_35, iLocal_4617, 1, 0))
				{
					__LIB_11__::func_59(uParam0, 11);
					func_1283(1);
				}
			}
			if (func_386(8192))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 27, false);
				PED::SET_PED_ACCURACY(Local_37[0 /*171*/], 0);
				Local_37[0 /*171*/].f_166 = 8;
				func_1284();
				if (((ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(3)) || ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(4))) || ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(5))) || ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(1)))
				{
					iLocal_22 = 6;
				}
				func_1243(16777216);
				__LIB_11__::func_59(uParam0, 4);
				__LIB_4__::func_952(uParam0, 1);
			}
			else if (!func_386(67108864))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_4628[1 /*16*/], func_410(7)))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_4628[1 /*16*/], "U_M_Y_ARMENLISTED_01", &vVar2, true, func_410(7), 2))
						{
							if (__LIB_0__::func_94(Local_551[0 /*195*/], vVar2, 1) <= 0.9f)
							{
								__LIB_1__::func_649(&iLocal_4770, 46);
							}
						}
					}
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(7)))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[1 /*16*/]) >= 0.4219f)
				{
					if (iLocal_22 != 9 && iLocal_22 != 11)
					{
						iLocal_22 = 9;
					}
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[1 /*16*/]) <= 0.30069f)
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_4628[1 /*16*/]);
				}
			}
			if (!func_1239(64))
			{
				func_1285();
			}
			func_1286();
			if (func_1270() < 3)
			{
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			func_1286();
			if (func_1239(64))
			{
				__LIB_2__::func_259(&uLocal_4868);
				iLocal_4955 = __LIB_1__::func_863(iLocal_4543, 408396114, 1, 1);
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			func_1286();
			AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_4543, 0, 16, -1);
			if (PED::IS_PED_IN_VEHICLE(Local_551[5 /*195*/], iLocal_4543, false))
			{
				TASK::_0xE01F55B2896F6B37(iLocal_4543, 1);
			}
			else
			{
				TASK::_0x4BA972D0E5AD8122(iLocal_4543, 0);
			}
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_4543, true);
			__LIB_4__::func_952(uParam0, 4);
			break;
		case 4:
			func_1286();
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_4543, true))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
			}
			if (__LIB_2__::func_343(Local_37[0 /*171*/], iLocal_4543, 0) && __LIB_2__::func_343(Global_35, iLocal_4543, 0))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_4955))
				{
					MAP::REMOVE_BLIP(&iLocal_4955);
				}
				if (TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_4543))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(iLocal_4543);
				}
				if (__LIB_0__::func_163(Local_37[0 /*171*/], -235832601))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_753(var uParam0)
{
	int iVar0;
	__LIB_0__::func_172(iLocal_4597);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4547, false);
	if (__LIB_0__::func_272(Local_37[0 /*171*/], 0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_37[0 /*171*/], false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[0 /*171*/], true);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		PED::_0x3088634CF8C819CF(Local_551[iVar0 /*195*/]);
		if (MAP::DOES_BLIP_EXIST(Local_551[iVar0 /*195*/].f_2))
		{
			MAP::REMOVE_BLIP(&(Local_551[iVar0 /*195*/].f_2));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_551[iVar0 /*195*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_551[iVar0 /*195*/]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_551[iVar0 /*195*/].f_1));
		}
		iVar0++;
	}
	__LIB_4__::func_992(uParam0, 65536);
	return uParam0->f_607 == uParam0->f_607;
}

int func_754(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xBA0980B5C0A11924(0f);
	if (!func_869(func_172(2, 0), func_868(2, 0)))
	{
		return 0;
	}
	func_861(uParam0, 1);
	func_1222(Global_35, func_224(2, 0), 2, 1073741824 /* Float: 2f */);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4914))
	{
		WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(&iLocal_4914, Global_35, 752097756, false);
	}
	else
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 30, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_4597))
	{
		if (!PED::_0x91A5F9CBEBB9D936(uLocal_4862))
		{
			uLocal_4862 = PED::_0x4C39C95AE5DB1329(iLocal_4597, false, 8);
		}
		__LIB_1__::func_391(iLocal_4597, 0, 0, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 16384);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 8);
		MISC::_0x2FCD528A397E5C88(iLocal_4597, 40);
		MISC::CLEAR_AREA(Global_36, 300f, 1048576);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_4627, 0, 0, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, false, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_4543, true);
		TASK::_0x4BA972D0E5AD8122(iLocal_4543, 0);
		func_1222(iLocal_4543, func_224(2, 0), 2, 1073741824 /* Float: 2f */);
	}
	if (!func_858(uParam0))
	{
		return 0;
	}
	else
	{
		func_1222(Local_37[0 /*171*/], func_224(2, 0), 2, 1073741824 /* Float: 2f */);
	}
	if (!__LIB_2__::func_343(Global_35, iLocal_4543, 0))
	{
		__LIB_4__::func_185(&Global_35, &iLocal_4543, -1, 1);
	}
	if (!__LIB_2__::func_343(Local_37[0 /*171*/], iLocal_4543, 0))
	{
		__LIB_4__::func_185(&(Local_37[0 /*171*/]), &iLocal_4543, 0, 1);
	}
	__LIB_0__::func_489(0, 0);
	CLOCK::SET_CLOCK_TIME(18, 0, 0);
	return 1;
}

int func_755(var uParam0)
{
	__LIB_0__::func_395(1);
	__LIB_2__::func_259(&uLocal_4874);
	return 1;
}

bool func_756(var uParam0)
{
	__LIB_4__::func_944(uParam0, 33554432);
	__LIB_6__::func_914(uParam0);
	AUDIO::_0xD9130842D7226045("GNG3_Sounds", 0);
	if (func_386(131072))
	{
		VEHICLE::_0xCF342503CA4C8DF1(iLocal_4543, 0f);
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_ANIMAL_DEER_GRAZING", false);
	if (__LIB_0__::func_272(iLocal_4533, 0))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_4533))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_4533);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4548))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4548, iLocal_4546, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_4548, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_4548, false, false);
	}
	PED::ADD_RELATIONSHIP_GROUP("rel_shooter", &iLocal_4818);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), iLocal_4818);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_4818, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_4818, joaat("REL_PLAYER_ENEMY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_PLAYER_ENEMY"), iLocal_4818);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4547, true);
	__LIB_2__::func_259(&uLocal_4868);
	__LIB_2__::func_259(&(Local_1722[1 /*195*/].f_12));
	__LIB_2__::func_259(&(Local_1722[2 /*195*/].f_12));
	__LIB_2__::func_259(&uLocal_4886);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_2__::func_259(&uLocal_4868);
	__LIB_11__::func_59(uParam0, 1);
	__LIB_1__::func_649(&iLocal_4769, 0);
	__LIB_1__::func_649(&iLocal_4770, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 3, false);
	iLocal_4822 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, false, false))
	{
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(iLocal_4543, true);
		__LIB_2__::func_259(&uLocal_4874);
		VEHICLE::_0x8F75941C86EEBFCA(iLocal_4543, false);
		VEHICLE::_0xC84E138448507567(iLocal_4543, false);
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_37[0 /*171*/], false);
	ENTITY::SET_ENTITY_PROOFS(Local_37[0 /*171*/], 1, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[0 /*171*/], true);
	AUDIO::STOP_PED_SPEAKING(Local_37[0 /*171*/], true);
	return uParam0->f_607 == uParam0->f_607;
}

int func_757(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_899(&uLocal_4892))
	{
	}
	func_1292(bLocal_4849);
	if (func_1239(4))
	{
		if (!__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
		{
			LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_THEFT_VEHICLE"), 0, 0, true);
		}
		if (!func_1239(67108864))
		{
			if (Global_1935630.f_18)
			{
				LAW::_0xDEA083C16BB91345();
				func_1243(67108864);
			}
		}
		LAW::_0xBD944A3D36E992DE();
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		PED::SET_PED_RESET_FLAG(Global_35, 128, true);
	}
	func_1293(uParam0);
	func_1294(uParam0);
	func_1295(uParam0);
	if (!func_1296(uParam0))
	{
		return 0;
	}
	func_1297(uParam0);
	func_1298();
	func_1299();
	func_1300();
	func_1301();
	func_1302();
	if (!__LIB_0__::func_899(&uLocal_4877))
	{
		__LIB_4__::func_89(&uLocal_4877, 0);
	}
	if (STREAMING::_0x8A3945405B31048F() > 0.8f)
	{
		__LIB_5__::func_521(0.8f);
	}
	PED::_0xAB0D553FE20A6E25(0.9f);
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	iVar1 = func_779(144, 0);
	iVar2 = func_1303(4194432, 0);
	iVar3 = func_1303(132, 0);
	if (!func_1239(8))
	{
		if (iVar1 != joaat("WEAPON_UNARMED") && iVar1 != 0)
		{
			if (WEAPON::_IS_WEAPON_PISTOL(iVar0) || WEAPON::_IS_WEAPON_REVOLVER(iVar0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar0) == 0)
				{
					func_316(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar0), WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0), 1, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
		}
		else if (iVar2 != joaat("WEAPON_UNARMED") && iVar2 != 0)
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar2) == 0)
			{
				func_316(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar2), WEAPON::_GET_WEAPON_CLIP_SIZE(iVar2), 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) == 0)
		{
			func_316(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), WEAPON::_GET_WEAPON_CLIP_SIZE(iVar3), 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4548))
	{
		iLocal_4548 = OBJECT::CREATE_OBJECT(joaat("SCRIPTEDBALL"), 2958.626f, 520.676f, 43.7728f, true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_4548, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_4548, false, false);
	}
	if (!bLocal_4852)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_4546))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_4546, true, iLocal_4818);
			bLocal_4852 = true;
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_4603, 1, 0))
	{
		VEHICLE::_0xCF342503CA4C8DF1(iLocal_4543, 0.5f);
	}
	if (__LIB_1__::func_205(Global_35, iLocal_4602, 1, 0))
	{
		if (!func_386(131072))
		{
			func_387(131072);
		}
	}
	func_1304();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_4541) != iLocal_4818)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_4541, iLocal_4818);
	}
	if (__LIB_0__::func_272(iLocal_4533, 0))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_4533))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_4533);
		}
	}
	if (__LIB_0__::func_163(Global_35, -235832601))
	{
		if (__LIB_0__::func_899(&uLocal_4874))
		{
			if (__LIB_9__::func_178(&uLocal_4874) > 5f || (__LIB_9__::func_178(&uLocal_4874) > 0.5f && ((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_SPRINT")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_MOVE_LR"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_MOVE_UD")))))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
		}
	}
	if (func_386(256))
	{
		if (!func_386(512))
		{
			func_1306();
		}
	}
	if (func_386(512))
	{
		func_1307();
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			CAM::_0x1CFB749AD4317BDE();
			if (func_1308(Global_35, 50f))
			{
				if (!__LIB_0__::func_899(&uLocal_4892))
				{
					__LIB_4__::func_87(&uLocal_4892, 10f, 0);
				}
				if (__LIB_0__::func_899(&uLocal_4892))
				{
					if (__LIB_1__::func_583(&uLocal_4892) >= IntToFloat(iLocal_4835))
					{
						if (!func_386(256) && !func_386(512))
						{
							func_387(256);
						}
					}
				}
				if (!func_1239(4194304))
				{
					if (__LIB_0__::func_94(Global_35, func_172(5, 0), 1) <= 200f)
					{
						iLocal_4833 = 6;
						if (func_386(512))
						{
							func_1283(512);
						}
						if (!func_386(256))
						{
							func_387(256);
						}
						func_1243(4194304);
					}
				}
			}
			if (MISC::_0x7A76104CC2CC69E8(iLocal_4547, 1, 1))
			{
				if (!func_1272(2))
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_4547, true, false), 25, 15f, true, false, 1f);
					func_1310(2);
				}
			}
			if (iLocal_4833 >= 6)
			{
				if (MISC::_0x7A76104CC2CC69E8(iLocal_4547, 0, 1))
				{
					if (!func_1272(2))
					{
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_4547, true, false), 25, 15f, true, false, 1f);
						func_1310(2);
					}
				}
			}
			if (iLocal_4833 >= 10)
			{
				if (__LIB_4__::func_339(&iLocal_4541))
				{
					if (!func_1272(2))
					{
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_4547, true, false), 25, 15f, true, false, 1f);
						func_1310(2);
					}
				}
			}
			if (iLocal_4836 >= 7)
			{
				if (!func_1272(2))
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_4547, true, false), 25, 15f, true, false, 1f);
					func_1310(2);
				}
			}
			if (!func_1239(268435456))
			{
				if (__LIB_0__::func_94(iLocal_4543, func_172(5, 0), 1) <= 75f)
				{
					__LIB_11__::func_59(uParam0, 16);
					func_1243(268435456);
				}
			}
			if (__LIB_0__::func_94(iLocal_4543, func_172(5, 0), 1) < 25f)
			{
				__LIB_1__::func_281(&iLocal_4913, 1, 1);
				func_1243(1);
				__LIB_2__::func_259(&uLocal_4874);
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_4543, 15f, 3, false);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_4543);
			}
			if (ENTITY::GET_ENTITY_SPEED(iLocal_4543) <= 7f && (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[3 /*16*/]) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[4 /*16*/])) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[3 /*16*/]) >= 0.9570405f) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[4 /*16*/]) >= 0.9570405f))
			{
				__LIB_0__::func_325(&(iLocal_4948[0]));
				MAP::CLEAR_GPS_CUSTOM_ROUTE();
				return 1;
			}
			break;
	}
	return 0;
}

int func_758(var uParam0)
{
	int iVar0;
	__LIB_0__::func_172(iLocal_4597);
	if (__LIB_0__::func_139(iLocal_4913))
	{
		__LIB_1__::func_281(&iLocal_4913, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_4533) && PED::IS_PED_IN_GROUP(iLocal_4533))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_4533);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4548))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4548);
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), true);
	if (LAW::_0xF46108C50A22B029())
	{
		LAW::_0x29CD4896ECB66C12();
	}
	LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	if (Global_1935630.f_18)
	{
		LAW::_0x55F37F5F3F2475E1();
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1722 - 1))
	{
		__LIB_0__::func_490(&(Local_1722[iVar0 /*195*/]), 0);
		__LIB_0__::func_490(&(Local_1722[iVar0 /*195*/].f_1), 0);
		if (MAP::DOES_BLIP_EXIST(Local_1722[iVar0 /*195*/].f_2))
		{
			MAP::REMOVE_BLIP(&(Local_1722[iVar0 /*195*/].f_2));
		}
		iVar0++;
	}
	return 1;
}

int func_759(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!func_858(uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_37[2 /*171*/]))
	{
		if (!func_838(uParam0, 1, &(Local_37[2 /*171*/]), 0, vVar0.x, vVar0.y, vVar0.z, func_868(5, 1), 1, 0, 0, 0, 1, 0))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]))
	{
		if (!func_838(uParam0, 6, &(Local_37[1 /*171*/]), 0, vVar3.x, vVar3.y, vVar3.z, func_868(5, 2), 1, 0, 0, 0, 1, 0))
		{
			return 0;
		}
	}
	else
	{
		__LIB_1__::func_288(6, -922193456, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[1 /*171*/], true);
	}
	if (!func_859(6, &(Local_37[1 /*171*/].f_1)))
	{
		return 0;
	}
	if (!func_869(func_172(2, 0), func_868(2, 0)))
	{
		return 0;
	}
	func_1222(Local_37[0 /*171*/], func_224(5, 1), 2, 1073741824 /* Float: 2f */);
	func_861(uParam0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4914))
	{
		WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(&iLocal_4914, Global_35, 752097756, false);
	}
	else
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 30, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
	CLOCK::SET_CLOCK_TIME(18, 0, 0);
	return 1;
}

bool func_760(var uParam0)
{
	if (func_1239(16384))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_7375.f_804, "Arthur_is_Driving", true, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_7375.f_804, "Arthur_is_Driving", false, false);
	}
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_37[1 /*171*/], "MicahBell", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_37[0 /*171*/], "BillWilliamson", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_37[2 /*171*/], "JohnMarston", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_4543, "wagon02x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_4547, "p_TNT_trainrobbery_01x", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, iLocal_4534[1], "Horse_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, iLocal_4534[0], "Horse_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_37[1 /*171*/].f_1, "Horse_01^2", 0, 0, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_761(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4547))
	{
		OBJECT::DELETE_OBJECT(&iLocal_4547);
	}
	func_1313(&iLocal_4543, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[2 /*171*/]))
	{
		if (__LIB_1__::func_22(1))
		{
			__LIB_11__::func_757(uParam0, 1, Local_37[2 /*171*/], 0, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[0 /*171*/]))
	{
		if (__LIB_1__::func_22(3))
		{
			__LIB_11__::func_757(uParam0, 3, Local_37[0 /*171*/], 0, 1, 1, 0);
		}
	}
	func_846(iLocal_4533, 2389.552f, 1172.277f, 95.7064f, 352.5113f, 2, 1073741824 /* Float: 2f */);
	PED::SET_PED_KEEP_TASK(iLocal_4533, true);
	return uParam0->f_607 == uParam0->f_607;
}

int func_762(var uParam0)
{
	__LIB_0__::func_11(uParam0);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (!__LIB_0__::func_163(iLocal_4533, 1227113341))
			{
				TASK::TASK_GO_TO_ENTITY(iLocal_4533, Global_35, 20000, 5f, 1.5f, 2f, 0);
			}
			return 1;
	}
	return 0;
}

bool func_763(var uParam0)
{
	LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	return uParam0->f_607 == uParam0->f_607;
}

void func_768(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1318();
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

void func_770(var uParam0)
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
			func_846(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_846(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_771(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_846(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_779(int iParam0, int iParam1)
{
	var uVar0;
	return func_1342(&uVar0, iParam0, iParam1);
}

bool func_838(var uParam0, int iParam1, var uParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1373(iParam1, 1, 0, fParam4, fParam5, fParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1374(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_846(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == __LIB_0__::func_17(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
				func_846(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_846(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_848(var uParam0, int iParam1)
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
			func_768(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_4__::func_89(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_583(&(uParam0->f_3)) >= 1f)
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

bool func_850(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (func_1409(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
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

bool func_852(var uParam0, struct<4> Param1)
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
	if (func_1415(Param1, &(uParam0->f_7375), uParam0))
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

bool func_858(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_37[0 /*171*/]))
	{
		Local_37[0 /*171*/] = __LIB_4__::func_953(uParam0);
		return false;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_37[0 /*171*/]))
	{
		__LIB_5__::func_106(uParam0, Local_37[0 /*171*/], "BILL", 0);
		__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
		__LIB_1__::func_288(3, -922193456, 1);
		if (__LIB_4__::func_939(uParam0) <= 1)
		{
			__LIB_5__::func_602(Local_37[0 /*171*/], joaat("WEAPON_RIFLE_BOLTACTION_BILL"));
		}
		__LIB_1__::func_296(3, 0, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[0 /*171*/], true);
		__LIB_0__::func_904(3, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_37[0 /*171*/], false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_37[0 /*171*/], true);
		PED::SET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 454, true);
	}
	return true;
}

bool func_859(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = func_1423(iParam0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		__LIB_1__::func_411(iParam0, *uParam1, 1);
		return true;
	}
	return false;
}

bool func_861(var uParam0, bool bParam1)
{
	bool bVar0;
	iLocal_4533 = __LIB_0__::func_398(7);
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4533))
	{
		bVar0 = true;
	}
	iLocal_4533 = __LIB_11__::func_107(func_172(0, 2), func_868(0, 2), 1, 1, 0, 1, 1);
	if (!bVar0)
	{
		func_1222(iLocal_4533, func_224(0, 2), 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4533))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_4533))
	{
		return false;
	}
	if (!__LIB_1__::func_16(iLocal_4533))
	{
		return false;
	}
	PED::_0x2EB75FB86C41F026(iLocal_4533, 3, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_4533, 284, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_4533, 48, true);
	POPULATION::_0xF74E134F40192884(iLocal_4533, 2);
	if (bParam1)
	{
		if (!__LIB_0__::func_163(iLocal_4533, -982327190))
		{
			func_1427(iLocal_4533);
		}
	}
	return true;
}

void func_863(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 133521;
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

bool func_864(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_4454[iVar1 /*13*/]))
		{
			switch (iVar1)
			{
				case 0:
					Local_4454[iVar1 /*13*/].f_1 = { func_224(9, 0) };
					Local_4454[iVar1 /*13*/].f_11 = joaat("WORLD_HUMAN_SMOKE_NERVOUS_STRESSED");
					iVar2 = iLocal_35;
					Local_4454[iVar1 /*13*/].f_6 = 1;
					break;
				case 1:
					Local_4454[iVar1 /*13*/].f_1 = { func_224(9, 1) };
					Local_4454[iVar1 /*13*/].f_11 = joaat("WORLD_HUMAN_LEAN_RAILING_DRINKING");
					iVar2 = iLocal_35;
					break;
				case 2:
					Local_4454[iVar1 /*13*/].f_1 = { func_224(9, 2) };
					Local_4454[iVar1 /*13*/].f_11 = joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING");
					Local_4454[iVar1 /*13*/].f_12 = "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_A";
					iVar2 = iLocal_35;
					Local_4454[iVar1 /*13*/].f_6 = 1;
					break;
				case 3:
					Local_4454[iVar1 /*13*/].f_1 = { func_224(9, 3) };
					Local_4454[iVar1 /*13*/].f_11 = joaat("WORLD_HUMAN_LEAN_WALL_DRINKING");
					Local_4454[iVar1 /*13*/].f_12 = "WORLD_HUMAN_LEAN_WALL_DRINKING_MALE_A";
					iVar2 = iLocal_36;
					Local_4454[iVar1 /*13*/].f_6 = 1;
					break;
				case 4:
					Local_4454[iVar1 /*13*/].f_1 = { func_224(9, 4) };
					Local_4454[iVar1 /*13*/].f_11 = joaat("WORLD_HUMAN_SIT_BACK_EXHAUSTED");
					iVar2 = iLocal_36;
					Local_4454[iVar1 /*13*/].f_6 = 1;
					break;
				case 5:
					Local_4454[iVar1 /*13*/].f_1 = { func_224(9, 5) };
					Local_4454[iVar1 /*13*/].f_11 = joaat("WORLD_HUMAN_LEAN_POST_LEFT_HAND_PLANTED");
					Local_4454[iVar1 /*13*/].f_12 = "WORLD_HUMAN_LEAN_POST_LEFT_HAND_PLANTED_MALE_B";
					iVar2 = iLocal_36;
					break;
			}
			Local_4454[iVar1 /*13*/] = __LIB_1__::func_545(iVar2, Local_4454[iVar1 /*13*/].f_1, Local_4454[iVar1 /*13*/].f_1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_LOD_MULTIPLIER(Local_4454[iVar1 /*13*/], 2f);
			Local_4454[iVar1 /*13*/].f_5 = 1;
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4454[iVar1 /*13*/], true);
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

int func_865()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (MISC::IS_STRING_NULL_OR_EMPTY(Local_4454[iVar1 /*13*/].f_12))
		{
			if (!__LIB_0__::func_163(Local_4454[iVar1 /*13*/], -1098463898))
			{
				__LIB_2__::func_915(Local_4454[iVar1 /*13*/], Local_4454[iVar1 /*13*/].f_11, Local_4454[iVar1 /*13*/].f_1 + Vector(0f, 0f, 0f), Local_4454[iVar1 /*13*/].f_1.f_3, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
			}
		}
		else if (!__LIB_0__::func_163(Local_4454[iVar1 /*13*/], -1098463898))
		{
			__LIB_2__::func_915(Local_4454[iVar1 /*13*/], Local_4454[iVar1 /*13*/].f_11, Local_4454[iVar1 /*13*/].f_1 + Vector(0f, 0f, 0f), Local_4454[iVar1 /*13*/].f_1.f_3, -1, 1, 0, Local_4454[iVar1 /*13*/].f_12, -1082130432 /* Float: -1f */);
		}
		iVar0++;
	}
	return 1;
}

float func_868(int iParam0, int iParam1)
{
	return func_997(iParam0, iParam1);
}

bool func_869(vector3 vParam0, float fParam3)
{
	if (!func_1435(vParam0, fParam3))
	{
		return false;
	}
	func_1436(1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, false, false))
	{
		func_846(iLocal_4543, vParam0, fParam3, 2, 1073741824 /* Float: 2f */);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4543, false);
		func_1437(iLocal_4543, 0);
		__LIB_17__::func_521(iLocal_4543, 1);
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iLocal_4543, true);
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(iLocal_4543, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4547))
	{
		OBJECT::SET_OBJECT_TARGETTABLE(iLocal_4547, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_4547, false);
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4547, iLocal_4543, 14, -0.08f, 0.6f, 0.15f, 0f, 0f, 0f, false, false, true, false, 2, true, false, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4546, iLocal_4543, 14, 0f, -1.4f, 0.13f, 0f, 0f, 5f, false, false, true, false, 2, true, false, false);
	VEHICLE::_0xCBF88256E44D5D39(iLocal_4543, 0);
	return true;
}

void func_870()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = __LIB_0__::func_398(1);
	iVar1 = 0;
	vVar2 = { 2774.684f, 513.5845f, 66.9882f };
	fVar5 = 355.826f;
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && __LIB_0__::func_94(iVar0, vVar2, 1) <= 1000f)
	{
		if (__LIB_0__::func_126(iVar0))
		{
			PHYSICS::_0x0348469DAA17576C(iVar0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
		func_846(iVar0, vVar2, fVar5, 2, 1073741824 /* Float: 2f */);
		iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar2, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar1, "", -1, false, true, 0, false, -1f, false);
		}
		else
		{
			TASK::TASK_STAND_STILL(iVar0, -1);
		}
	}
}

void func_875()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4594))
	{
		iLocal_4594 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2783.78f, 520.494f, 68.94646f, 0f, 0f, 0f, 23.95027f, 12.12377f, 11.51247f, "m_volMicahStart");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4596))
	{
		iLocal_4596 = VOLUME::_CREATE_VOLUME_BOX(3710.048f, 1874.408f, 48.68645f, 0f, 0f, 39.09938f, 15.52322f, 43.86698f, 16.87811f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4595))
	{
		iLocal_4595 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2597.935f, 418.7586f, 74.36453f, 0f, 0f, 169.0598f, 29.89784f, 111.8037f, 39.68219f, "IGNORE WEAPON DAMAGE");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4597))
	{
		iLocal_4597 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2954.282f, 532.9239f, 53.36977f, 0f, 0f, 0f, 165.9913f, 281.7906f, 87.05807f, "m_volWagonVanhorn");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4598))
	{
		iLocal_4598 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2964.304f, 569.9207f, 45.7644f, 0f, 0f, -8.72783f, 17.6935f, 2.478885f, 5.604404f, "m_volTriggerStagger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4599))
	{
		iLocal_4599 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2909.861f, 545.0843f, 66.53109f, 0f, 0f, 0f, 112.1299f, 166.9201f, 30f, "m_volLawRiderNotSpawn");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4600))
	{
		iLocal_4600 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2885.841f, 423.9306f, 55.6414f, 0f, 0f, -8.304f, 3.68507f, 9.324547f, 8.324611f, "m_volWave01BridgeTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4601))
	{
		iLocal_4601 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2909.297f, 393.6906f, 50.42726f, 0f, 0f, 40.78783f, 1.724023f, 18.41875f, 13.45015f, "m_volWave01BridgeCombatTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4603))
	{
		iLocal_4603 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2821.655f, 441.054f, 67.1862f, 0f, 0f, -28.62501f, 7.932951f, 8.730055f, 9.024193f, "m_volWave01Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4602))
	{
		iLocal_4602 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2783.974f, 462.1788f, 64.32682f, 0f, 0f, 0f, 5.998316f, 5.735026f, 9.448659f, "m_volWave01CombatTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4604))
	{
		iLocal_4604 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2632.842f, 481.6675f, 72.01977f, 0f, 0f, -60.35766f, 9.43504f, 6.45469f, 10.8751f, "m_volWave02Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4605))
	{
		iLocal_4605 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2612.396f, 470.7321f, 70.77586f, 0f, 0f, 22.91315f, 1.531524f, 6.722202f, 5.67628f, "m_volWave02DiagTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4607))
	{
		iLocal_4607 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2556.81f, 530.1995f, 70.77586f, 0f, 0f, -12.181f, 1.531524f, 11.93958f, 12.43751f, "m_volWave03HillTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4606))
	{
		iLocal_4606 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2574.125f, 528.1351f, 72.12963f, 0f, 0f, -86.85094f, 14.96284f, 7.950124f, 9.811289f, "m_volWave03Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4608))
	{
		iLocal_4608 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2577.196f, 563.9698f, 74.18803f, 0f, 0f, -44.46644f, 2.587212f, 15.65045f, 6.838752f, "m_volWave03CombatTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4609))
	{
		iLocal_4609 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2540.249f, 558.2404f, 72.6349f, 0f, 0f, 3.820459f, 5.88131f, 1.99716f, 4.940427f, "m_volWave03DiagTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4610))
	{
		iLocal_4610 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2463.721f, 666.7555f, 73.72561f, 0f, 0f, 9.538802f, 9.874969f, 7.458642f, 8.040471f, "m_volWave04Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4611))
	{
		iLocal_4611 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2532.303f, 741.9139f, 75.83626f, 0f, 0f, -10.35933f, 1.261339f, 9.190093f, 3.776783f, "m_volWave04CombatTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4612))
	{
		iLocal_4612 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.639f, 762.3652f, 72.2584f, 0f, 0f, -15.51035f, 9.874969f, 7.458642f, 8.040471f, "m_volWave04ChaseTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4613))
	{
		iLocal_4613 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2478.535f, 726.5859f, 73.61075f, 0f, 0f, 42.70513f, 4.795198f, 6.108559f, 5.350485f, "m_volWave04DiagTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4614))
	{
		iLocal_4614 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2475.57f, 1128.676f, 97.9116f, 0f, 0f, 0f, 229.062f, 148.6695f, 159.3401f, "m_volExtLeadFrontTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4615))
	{
		iLocal_4615 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2475.57f, 1283.007f, 97.91159f, 0f, 0f, 0f, 229.062f, 148.6695f, 159.3401f, "m_volExtLeadRearTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4616))
	{
		iLocal_4616 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2974.481f, 496.6098f, 46.89554f, 0f, 0f, 9.822252f, 8.351121f, 11.94008f, 11.91508f, "m_volSniperHouse");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4617))
	{
		iLocal_4617 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2974.594f, 496.7028f, 48.78112f, 0f, 0f, 9.674947f, 7.825465f, 11.97714f, 3.258427f, "m_volSniperPosition");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4618))
	{
		iLocal_4618 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2955.63f, 524.7244f, 44.71762f, 0f, 0f, 0f, 1.719008f, 2.339734f, 2.501626f, "m_volBlockCover");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4619))
	{
		iLocal_4619 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2609.995f, 483.5939f, 70.56313f, 0f, 0f, 25.68407f, 72.36274f, 37.65544f, 11.32736f, "m_volCrateDiagBlock1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4620))
	{
		iLocal_4620 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2540.278f, 558.3334f, 73.49483f, 0f, 0f, 4.14113f, 26.59189f, 49.53028f, 10.43652f, "m_volCrateDiagBlock2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4621))
	{
		iLocal_4621 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2478.672f, 726.6633f, 71.98164f, 0f, 0f, -46.57208f, 21.72663f, 29.98508f, 9.990817f, "m_volCrateDiagBlock3");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4622))
	{
		iLocal_4622 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2965.296f, 485.7148f, 47.80883f, 0f, 0f, 15.88524f, 8.668094f, 7.53679f, 6.424674f, "m_volWagonStop");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4623))
	{
		iLocal_4623 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2961.432f, 547.0856f, 45.29844f, 0f, 0f, -7.273173f, 9.212412f, 1.771259f, 7.733238f, "m_volTNTWagonStop");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4624))
	{
		iLocal_4624 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2965.516f, 522.3839f, 44.12028f, 0f, 0f, 0f, 3.587376f, 3.052722f, 2.7227f, "m_volThugScenarioBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4625))
	{
		iLocal_4625 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2963.017f, 578.2106f, 45.1907f, 0f, 0f, 49.13151f, 11.59037f, 4.460935f, 5.467456f, "m_volTriggerSpottedFail");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4626))
	{
		iLocal_4626 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2980.003f, 498.9305f, 45.39156f, 0f, 0f, 10.5091f, 3.466124f, 9.141086f, 2.817496f, "m_volCrouchVolume");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_4627))
	{
		iLocal_4627 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volRoadsOff");
		VOLUME::_0x39816F6F94F385AD(iLocal_4627, 2511.335f, 977.4142f, 53.36978f, 0f, 0f, 0f, 165.9913f, 135.3352f, 170.0307f);
		VOLUME::_0x39816F6F94F385AD(iLocal_4627, 2511.335f, 788.4799f, 53.36978f, 0f, 0f, 0f, 165.9913f, 174.4424f, 87.05807f);
		VOLUME::_0x39816F6F94F385AD(iLocal_4627, 2584.224f, 532.9239f, 53.36978f, 0f, 0f, 0f, 165.9913f, 174.4424f, 87.05807f);
		VOLUME::_0x39816F6F94F385AD(iLocal_4627, 2954.282f, 532.9239f, 53.36978f, 0f, 0f, 0f, 165.9913f, 281.7906f, 87.05807f);
		VOLUME::_0x39816F6F94F385AD(iLocal_4627, 2743.083f, 676.7958f, 53.36978f, 0f, 0f, 0f, 129.1285f, 133.0682f, 87.05807f);
	}
}

void func_876(var uParam0)
{
	Local_4916[0 /*5*/].f_1 = "TRN2_SNIP_GOONA";
	Local_4916[0 /*5*/].f_2 = "TRN2_SNIP_GOONA";
	Local_4916[0 /*5*/].f_3 = 2;
	Local_4916[1 /*5*/].f_1 = "TRN2_SNIP_GOONB";
	Local_4916[1 /*5*/].f_2 = "TRN2_SNIP_GOONB";
	Local_4916[1 /*5*/].f_3 = 2;
	Local_4916[2 /*5*/].f_1 = "TRN2_SNIP_GOONC";
	Local_4916[2 /*5*/].f_2 = "TRN2_SNIP_GOONC";
	Local_4916[2 /*5*/].f_3 = 2;
	Local_4932[0 /*5*/].f_1 = "TRN2_CHSE_GOONA";
	Local_4932[0 /*5*/].f_2 = "TRN2_CHSE_GOONA";
	Local_4932[0 /*5*/].f_3 = 2;
	Local_4932[1 /*5*/].f_1 = "TRN2_CHSE_GOONB";
	Local_4932[1 /*5*/].f_2 = "TRN2_CHSE_GOONB";
	Local_4932[1 /*5*/].f_3 = 2;
	Local_4932[2 /*5*/].f_1 = "TRN2_CHSE_GOONC";
	Local_4932[2 /*5*/].f_2 = "TRN2_CHSE_GOONC";
	Local_4932[2 /*5*/].f_3 = 2;
	func_1440(uParam0);
}

int func_885(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_16)
	{
		__LIB_0__::func_202(Global_35, 0);
		__LIB_0__::func_202(Local_37[0 /*171*/], 0);
		__LIB_0__::func_202(Local_37[1 /*171*/], 0);
		if (!func_859(3, &(Local_37[0 /*171*/].f_1)))
		{
			return 0;
		}
	}
	else if (iVar0 == iLocal_17)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, true))
		{
			WEAPON::_0xE9BD19F8121ADE3E(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"));
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_37[0 /*171*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
	}
	return 1;
}

int func_887(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_16)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		if (__LIB_11__::func_320(uParam0, Local_37[1 /*171*/], "MicahBell", 0, 1, 1) && !ENTITY::IS_ENTITY_DEAD(Local_37[1 /*171*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_4824[0], "MicahBell", Local_37[1 /*171*/], 0);
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_4824[0], "pbl_enter"))
			{
				ANIMSCENE::START_ANIM_SCENE(uLocal_4824[0]);
			}
			else
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_4824[0], "pbl_enter", true);
			}
		}
		if (__LIB_11__::func_320(uParam0, Local_37[0 /*171*/], "BillWilliamson", 0, 1, 1))
		{
			func_1222(Local_37[0 /*171*/], func_224(0, 4), 2, 1073741824 /* Float: 2f */);
			if (!__LIB_0__::func_163(Local_37[0 /*171*/], 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(Local_37[0 /*171*/], Local_37[0 /*171*/].f_1, 20000, -1, 1f, 1, 0, 0);
			}
		}
	}
	else if (iVar0 == iLocal_17)
	{
		if (!func_1239(536870912))
		{
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
			if (__LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
			}
			func_1243(536870912);
		}
		if (func_386(-2147483648))
		{
			if (!func_1239(-2147483648))
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
				CLOCK::SET_CLOCK_TIME(4, 15, 0);
				func_1243(-2147483648);
			}
		}
		if (__LIB_9__::func_126(uParam0) > 41500)
		{
			func_1281(uParam0);
			func_1282(2f);
		}
		if (__LIB_11__::func_320(uParam0, Local_37[0 /*171*/], "BillWilliamson", 0, 1, 0))
		{
			func_846(Local_37[0 /*171*/], 2950.87f, 534.6813f, 44.7509f, 309.78f, 2, 1073741824 /* Float: 2f */);
			if (__LIB_0__::func_272(iLocal_4533, 0))
			{
				func_846(iLocal_4533, 2976.283f, 479.2025f, 45.3229f, 220.6005f, 2, 1073741824 /* Float: 2f */);
			}
			if (!__LIB_0__::func_163(iLocal_4533, 923520851))
			{
				TASK::TASK_WANDER_IN_AREA(iLocal_4533, 2975.504f, 481.312f, 45.0541f, 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			if (!__LIB_0__::func_163(Local_37[0 /*171*/].f_1, 923520851))
			{
				TASK::TASK_WANDER_IN_AREA(Local_37[0 /*171*/].f_1, 2975.504f, 481.312f, 45.0541f, 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			__LIB_5__::func_602(Local_37[0 /*171*/], joaat("WEAPON_RIFLE_BOLTACTION_BILL"));
		}
		if (__LIB_11__::func_320(uParam0, Global_35, "ARTHUR", 0, 1, 0))
		{
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_SNIPERRIFLE_CARCANO"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4914))
				{
					WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(&iLocal_4914, Global_35, 752097756, false);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 30, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				}
			}
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		}
	}
	else if (iVar0 == iLocal_19)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_0xAB0D553FE20A6E25(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (__LIB_11__::func_320(uParam0, Local_37[2 /*171*/], "JohnMarston", 0, 1, 1))
		{
			__LIB_11__::func_757(uParam0, 1, Local_37[2 /*171*/], 0, 1, 1, 0);
		}
		if (__LIB_9__::func_828(uParam0, iLocal_4543, "wagon02x", 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4543))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_4543);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4546))
			{
				OBJECT::DELETE_OBJECT(&iLocal_4546);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4547))
			{
				OBJECT::DELETE_OBJECT(&iLocal_4547);
			}
			iVar1 = 0;
			while (iVar1 < 6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4534[iVar1]))
				{
					PED::DELETE_PED(&(iLocal_4534[iVar1]));
				}
				iVar1++;
			}
		}
		if (__LIB_11__::func_320(uParam0, Local_37[0 /*171*/], "BillWilliamson", 0, 1, 1))
		{
			__LIB_11__::func_757(uParam0, 3, Local_37[0 /*171*/], 0, 1, 1, 0);
		}
		if (__LIB_11__::func_320(uParam0, Local_37[1 /*171*/], "MicahBell", 0, 1, 1))
		{
			PED::SET_PED_KEEP_TASK(Local_37[1 /*171*/], true);
			PED::_SET_PED_ON_MOUNT(Local_37[1 /*171*/], Local_37[1 /*171*/].f_1, -1, true);
			if (!__LIB_0__::func_163(Local_37[1 /*171*/], -1107084229))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(Local_37[1 /*171*/], 1.75f, func_172(0, 3), 1);
			}
			__LIB_11__::func_757(uParam0, 6, Local_37[1 /*171*/], 0, 0, 1, 0);
			__LIB_4__::func_89(&(Global_1360165[6 /*1157*/].f_130), 0);
			Global_1360165[6 /*1157*/].f_133 = 15f;
		}
	}
	return 0;
}

int func_889(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			__LIB_5__::func_486(uParam0, "TRN2_OBJ01a", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 1:
			__LIB_5__::func_486(uParam0, "TRN2_OBJ02", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 2:
			__LIB_5__::func_486(uParam0, "TRN2_OBJ05", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
	}
	return 1;
}

void func_893(var uParam0)
{
	int iVar0;
	if (!func_386(-2147483648) || __LIB_4__::func_939(uParam0) == 1)
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 18)
		{
			CLOCK::PAUSE_CLOCK(true, 0);
		}
	}
	if (__LIB_4__::func_939(uParam0) == 0)
	{
		if (func_386(-2147483648))
		{
			if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 1500)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(1500);
			}
		}
	}
	if (__LIB_4__::func_939(uParam0) <= iLocal_17)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_551[0 /*195*/], Local_37[0 /*171*/], 1, 1) || (PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_0xBDD9C235D8D1052E(Global_35)))
		{
			if (!func_386(8388608))
			{
				func_387(8388608);
			}
		}
		if (func_386(8388608))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4454[iVar0 /*13*/]))
				{
					if (__LIB_0__::func_272(Local_4454[iVar0 /*13*/], 0))
					{
						if (!__LIB_0__::func_163(Local_4454[iVar0 /*13*/], 518218985))
						{
							PED::_0xEEED8FAFEC331A70(Local_4454[iVar0 /*13*/], 2959.784f, 534.1965f, 43.52335f, 3);
							TASK::TASK_SMART_FLEE_PED(Local_4454[iVar0 /*13*/], Local_37[0 /*171*/], -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
							PED::SET_PED_KEEP_TASK(Local_4454[iVar0 /*13*/], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_4454[iVar0 /*13*/]));
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_18)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_17)
	{
		if (__LIB_4__::func_971(uParam0) >= 4)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
		}
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_18)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	}
	if (__LIB_4__::func_939(uParam0) < 25)
	{
		if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) == 5)
		{
			func_1456(uParam0);
		}
	}
	if (__LIB_4__::func_939(uParam0) >= iLocal_17)
	{
		if (ENTITY::GET_ENTITY_ROLL(iLocal_4543) <= -40f)
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				VEHICLE::_0x4402960666000E62(iLocal_4543, iVar0);
				iVar0++;
			}
		}
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_18)
	{
		if (func_1272(1))
		{
			if (ENTITY::IS_ENTITY_IN_AREA(Global_35, 2465f, 463f, -150f, 2695f, 728f, 150f, false, true, 0))
			{
				if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_4543) != Global_35)
				{
					WATER::_0xE8126623008372AA();
				}
			}
		}
	}
	if (__LIB_4__::func_939(uParam0) >= iLocal_17)
	{
		__LIB_1__::func_538(0);
	}
}

bool func_910(var uParam0, int iParam1, int iParam2)
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
				__LIB_5__::func_599(uParam0, func_38(iParam1), func_38(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_38(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1468(uParam0);
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

bool func_912(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (func_850(uParam0))
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
		__LIB_4__::func_523(uParam0, iParam1);
		__LIB_4__::func_944(uParam0, 4);
	}
	Var0 = { __LIB_5__::func_299(uParam0, iParam1) };
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		if (__LIB_4__::func_937(uParam0, 2097152))
		{
			if (func_850(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_852(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_852(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (func_850(uParam0))
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
		return func_852(uParam0, Var0);
	}
	return true;
}

float func_997(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 42.995f;
				case 1:
					return -45.565f;
				case 2:
					return -44.76f;
				case 3:
					return 205.7429f;
				case 4:
					return 43.33f;
				case 5:
					return 76.5172f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 285.58f;
				case 1:
					return 349.4123f;
				case 2:
					return 279.5727f;
				case 3:
					return 137.0385f;
				case 4:
					return 137.0385f;
				case 5:
					return 228.4927f;
				case 6:
					return 230.977f;
				case 7:
					return 231.842f;
				case 8:
					return 224.959f;
				case 9:
					return 229.328f;
				case 10:
					return -130f;
				case 11:
					return 226.4927f;
				case 12:
					return 220.977f;
				case 13:
					return 225.842f;
				case 14:
					return 232.959f;
				case 15:
					return 231.328f;
				case 16:
					return -134f;
				case 17:
					return 460.5666f;
				case 18:
					return 373.5046f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 186.2652f;
				case 1:
					return 13.9761f;
				case 2:
					return 6.28f;
				case 3:
					return 347.775f;
				case 4:
					return 94.3219f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2.661f;
				case 1:
					return -2.998f;
				case 2:
					return -5.6036f;
				case 3:
					return -7.139f;
				case 4:
					return 3.208f;
				case 5:
					return 4.375f;
				case 6:
					return 4f;
				case 7:
					return 0f;
				case 8:
					return -4.0781f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 185.6566f;
				case 1:
					return 180.6271f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 166.1793f;
				case 1:
					return 190.1793f;
				case 2:
					return 192.658f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 56.16f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 304.56f;
				case 1:
					return 305.895f;
				case 2:
					return 340.6931f;
				case 3:
					return 337.5672f;
				case 4:
					return 115.035f;
				case 5:
					return 28.8f;
				case 6:
					return 152.7575f;
				case 7:
					return 146.6075f;
				case 8:
					return 148.465f;
				case 9:
					return -46.08f;
				case 10:
					return 93.3044f;
				case 11:
					return 25.92f;
				case 12:
					return 12.96f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 20.06f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -79.865f;
				case 1:
					return 170.87f;
				case 2:
					return 271.27f;
				case 3:
					return -90f;
				case 4:
					return -220.95f;
				case 5:
					return -6.5758f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 104.785f;
				case 1:
					return 104.785f;
				case 2:
					return 104.785f;
			}
			break;
	}
	return 0f;
}

void func_1145(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_316(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1657(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_319(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_662(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1662(Var0);
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

void func_1148(bool bParam0)
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
		func_316(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_316(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_662(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_662(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_662(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1193(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1193(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1193(iVar63, -915411861, 1, 0, 0));
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

void func_1219(var uParam0, int iParam1)
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
		uParam0->f_1[iVar0 /*22*/][iVar1] = 59078;
		MISC::CLEAR_BIT(&(uParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

bool func_1221(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	char[] cVar7[8];
	if (!func_1713(iParam0, iParam1, 1))
	{
		return false;
	}
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3868[iVar1 /*195*/]))
		{
			switch (iVar1)
			{
				case 0:
					vVar3 = { func_172(10, 0) };
					fVar6 = func_868(10, 0);
					bVar2 = true;
					cVar7 = func_413(4);
					break;
				case 1:
					vVar3 = { func_172(10, 1) };
					fVar6 = func_868(10, 1);
					bVar2 = true;
					break;
				case 2:
					vVar3 = { func_172(10, 2) };
					fVar6 = func_868(10, 2);
					bVar2 = true;
					break;
			}
			if (!Local_3868[iVar1 /*195*/].f_184)
			{
				Local_3868[iVar1 /*195*/] = __LIB_1__::func_545(iLocal_31, vVar3, fVar6, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (!MISC::IS_STRING_NULL(Local_3868[iVar1 /*195*/].f_194))
				{
					Local_3868[iVar1 /*195*/].f_194 = cVar7;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3868[iVar1 /*195*/], true);
				__LIB_1__::func_991(Local_3868[iVar1 /*195*/], 0);
				PED::SET_PED_CONFIG_FLAG(Local_3868[iVar1 /*195*/], 186, false);
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_3868[iVar1 /*195*/]);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3868[iVar1 /*195*/], joaat("REL_PLAYER_ENEMY"));
				if (bVar2)
				{
					__LIB_1__::func_571(Local_3868[iVar1 /*195*/], Local_3868[iVar1 /*195*/].f_1, 0, -1, 1);
				}
				Local_3868[iVar1 /*195*/].f_184 = 1;
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

void func_1222(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_846(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1233(int iParam0, var uParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
	if ((iVar0 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_491(iParam0, 716706914)) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 716706914, true) != 6)
	{
		if ((PED::IS_PED_SHOOTING(iParam0) || PED::IS_PED_IN_COMBAT(iParam0, 0)) || PED::IS_PED_SHOOTING(Global_35))
		{
			if (__LIB_0__::func_899(uParam1))
			{
				__LIB_1__::func_561(uParam1);
			}
		}
		else if (!__LIB_0__::func_899(uParam1))
		{
			__LIB_2__::func_259(uParam1);
		}
		else if (__LIB_1__::func_583(uParam1) >= 1.5f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 1, 0, 0);
			__LIB_2__::func_259(uParam1);
		}
	}
}

int func_1234(var uParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]))
	{
		if (__LIB_0__::func_665(Global_35, Local_37[1 /*171*/], 1, 1) > 150f)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_4824[0], "PBL_EXIT"))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_4824[0], "PBL_EXIT"))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_4824[0], "MicahBell") || ANIMSCENE::_0xB89FCFF19DAFFF28(uLocal_4824[0], "MicahBell"))
					{
						func_1729(uParam0);
					}
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_4824[0], "PBL_EXIT", true);
				}
			}
			else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uLocal_4824[0], "PBL_EXIT"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_4824[0], "PBL_EXIT");
			}
		}
		if (!func_1239(2097152))
		{
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_4824[0], "MicahBell") || ANIMSCENE::_0xB89FCFF19DAFFF28(uLocal_4824[0], "MicahBell"))
			{
				if (!__LIB_0__::func_163(Local_37[1 /*171*/], -1107084229))
				{
					PED::SET_PED_CONFIG_FLAG(Local_37[1 /*171*/], 167, true);
					TASK::_TASK_MOVE_IN_TRAFFIC_4(Local_37[1 /*171*/], 1.501f, func_172(0, 3), 1);
				}
				func_1243(2097152);
			}
		}
		else if (__LIB_0__::func_665(Global_35, Local_37[1 /*171*/], 1, 1) >= 150f)
		{
			__LIB_11__::func_757(uParam0, 6, Local_37[1 /*171*/], 0, 0, 1, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_37[0 /*171*/]))
	{
		switch (iLocal_4769)
		{
			case 0:
				if (!__LIB_0__::func_163(Local_37[0 /*171*/], 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(Local_37[0 /*171*/], Local_37[0 /*171*/].f_1, 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
					__LIB_1__::func_649(&iLocal_4769, 2);
				}
				break;
			case 2:
				if (__LIB_0__::func_396(Local_37[0 /*171*/]))
				{
					func_1731();
					__LIB_1__::func_649(&iLocal_4769, 4);
				}
				break;
			case 4:
				if (PED::IS_PED_ON_MOUNT(Local_37[0 /*171*/]))
				{
					if (!__LIB_0__::func_163(Local_37[0 /*171*/], 658540077) && !func_1239(32))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_37[0 /*171*/], func_413(0), 0, 25614, -1, 0, 0, -1);
						__LIB_1__::func_649(&iLocal_4769, 10);
					}
				}
				break;
			case 10:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar1 = iVar0;
					if (MAP::DOES_BLIP_EXIST(Local_3868[iVar1 /*195*/].f_2))
					{
						MAP::REMOVE_BLIP(&(Local_3868[iVar1 /*195*/].f_2));
					}
					iVar0++;
				}
				if (func_1239(134217728))
				{
					if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_37[0 /*171*/]))
					{
						TASK::WAYPOINT_PLAYBACK_RESUME(Local_37[0 /*171*/], false, -1, 0);
						PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), Local_37[0 /*171*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
						func_1247(134217728);
					}
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_37[0 /*171*/]) <= 1)
				{
					__LIB_5__::func_537(Local_37[0 /*171*/], 1.75f, 0, 1045220557 /* Float: 0.2f */, 1, 3f, 5f, 10f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
				}
				else
				{
					__LIB_5__::func_537(Local_37[0 /*171*/], 1.75f, 0, 1045220557 /* Float: 0.2f */, 1, 3f, 5f, 10f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_37[0 /*171*/], vLocal_4846, 5f, 5f, 5f, false, true, 0) && !__LIB_0__::func_163(Local_37[0 /*171*/], 713668775))
				{
					if (!func_1239(32))
					{
						if (!__LIB_0__::func_394(Local_37[0 /*171*/], Local_37[0 /*171*/].f_1, 0))
						{
							if (!__LIB_0__::func_163(Local_37[0 /*171*/], 1868526510))
							{
								TASK::TASK_MOUNT_ANIMAL(Local_37[0 /*171*/], Local_37[0 /*171*/].f_1, 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
								__LIB_1__::func_649(&iLocal_4769, 4);
							}
						}
					}
				}
				else if (!func_1239(32))
				{
					func_1243(32);
				}
				if (!func_1239(262144))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_37[0 /*171*/], 0))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_37[0 /*171*/]) >= 35)
						{
							if (!PED::_0x268B3AEBF032A88D(Local_37[0 /*171*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[0 /*171*/], true);
							}
						}
						if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_37[0 /*171*/]) >= 66)
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								iVar1 = iVar0;
								if (PED::IS_TRACKED_PED_VISIBLE(Local_3868[iVar1 /*195*/]) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_37[0 /*171*/], Local_3868[iVar1 /*195*/], 17))
								{
									bLocal_4855 = true;
								}
								iVar0++;
							}
							if (bLocal_4855)
							{
								func_1243(33554432);
								__LIB_11__::func_59(uParam0, 6);
								__LIB_1__::func_649(&iLocal_4769, 5);
							}
							else
							{
								func_1243(262144);
							}
						}
					}
				}
				if (bLocal_4855 == 1)
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_3868[0 /*195*/]) >= 62)
					{
						iVar0 = 0;
						while (iVar0 < 3)
						{
							iVar1 = iVar0;
							if ((!PED::IS_TRACKED_PED_VISIBLE(Local_3868[iVar1 /*195*/]) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_37[0 /*171*/], Local_3868[iVar1 /*195*/], 17)) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_3868[iVar1 /*195*/], 17))
							{
								bLocal_4857 = true;
							}
							else
							{
								bLocal_4857 = false;
							}
							iVar0++;
						}
						if (bLocal_4857)
						{
							func_1243(524288);
						}
					}
				}
				if (__LIB_0__::func_94(Local_37[0 /*171*/], vLocal_4846, 1) <= 5f)
				{
					if (!__LIB_0__::func_163(Local_37[0 /*171*/], 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Local_37[0 /*171*/], Local_4628[7 /*16*/], "CS_BillWilliamson", "pl_Bill_Arrives", 1.48f, 1, 0, 20000, -1082130432 /* Float: -1f */);
						PED::_0x2208438012482A1A(Local_37[0 /*171*/], false, false);
						PED::_0x2208438012482A1A(Local_37[0 /*171*/].f_1, false, false);
						PED::SET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 167, false);
						__LIB_1__::func_649(&iLocal_4769, 11);
					}
				}
				break;
			case 5:
				if (!func_1239(134217728))
				{
					if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_37[0 /*171*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[0 /*171*/], true);
						TASK::WAYPOINT_PLAYBACK_PAUSE(Local_37[0 /*171*/], 0, 1, 0);
						PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), Local_37[0 /*171*/]);
						func_1243(134217728);
					}
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar1 = iVar0;
					if (!MAP::DOES_BLIP_EXIST(Local_3868[iVar1 /*195*/].f_2))
					{
						Local_3868[iVar1 /*195*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COP"), Local_3868[iVar1 /*195*/]);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_3868[iVar1 /*195*/].f_2, "BLIP_PINKERTON");
					}
					iVar0++;
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_3868[0 /*195*/], 0))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_3868[0 /*195*/]) >= 45)
					{
						func_1243(262144);
						__LIB_1__::func_649(&iLocal_4769, 10);
					}
				}
				break;
			case 11:
				break;
		}
		return 1;
	}
	return 0;
}

void func_1235(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_37[0 /*171*/], 0))
	{
	}
	if ((__LIB_4__::func_979(uParam0) != 6 && __LIB_4__::func_979(uParam0) != 7) && __LIB_4__::func_979(uParam0) != 8)
	{
		__LIB_8__::func_875(Local_37[0 /*171*/], sLocal_4965, 1, 1);
	}
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (__LIB_5__::func_314(uParam0, "TRN2_Obj1", 0))
			{
				if (!__LIB_0__::func_899(&uLocal_4871))
				{
					__LIB_4__::func_89(&uLocal_4871, 0);
				}
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_2__::func_259(&uLocal_4865);
				__LIB_5__::func_486(uParam0, "TRN2_OBJ01a", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_0__::func_899(&uLocal_4868))
			{
				if (__LIB_9__::func_178(&uLocal_4868) >= 10f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "TRN2_MntUp1", 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
						}
					}
					if (!__LIB_5__::func_491(uParam0, "TRN2_OBJ01a"))
					{
						if (__LIB_11__::func_647(uParam0, "TRN2_OBJ01a", 4, 0, 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
							__LIB_11__::func_59(uParam0, -1);
						}
					}
				}
			}
			if (!func_1239(2097152))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_4594, 1, 0))
				{
					if (__LIB_9__::func_178(&uLocal_4871) >= 20f)
					{
						if (!__LIB_5__::func_463())
						{
							if (__LIB_5__::func_314(uParam0, "TRN2_MNTUP_MCH", 0))
							{
								__LIB_2__::func_259(&uLocal_4868);
								__LIB_2__::func_259(&uLocal_4871);
							}
						}
					}
				}
				else if (__LIB_0__::func_394(Global_35, iLocal_4533, 0))
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "TRN2_MCH_CMMT", 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
							__LIB_11__::func_59(uParam0, 4);
						}
					}
					else
					{
						__LIB_11__::func_59(uParam0, 4);
					}
				}
			}
			else if (__LIB_0__::func_394(Global_35, iLocal_4533, 0))
			{
				if (!__LIB_1__::func_205(Global_35, iLocal_4594, 1, 0))
				{
					__LIB_11__::func_59(uParam0, 4);
				}
			}
			break;
		case 3:
			if (!func_1239(2097152))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_4594, 1, 0))
				{
					if (__LIB_9__::func_178(&uLocal_4868) >= 20f)
					{
						if (!__LIB_5__::func_463())
						{
							if (__LIB_5__::func_314(uParam0, "TRN2_MNTUP_MCH", 0))
							{
								__LIB_2__::func_259(&uLocal_4868);
							}
						}
					}
				}
				else if (__LIB_0__::func_394(Global_35, iLocal_4533, 0))
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "TRN2_MCH_CMMT", 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
							__LIB_11__::func_59(uParam0, 4);
						}
					}
					else
					{
						__LIB_11__::func_59(uParam0, 4);
					}
				}
			}
			else if (__LIB_0__::func_394(Global_35, iLocal_4533, 0))
			{
				if (!__LIB_1__::func_205(Global_35, iLocal_4594, 1, 0))
				{
					__LIB_11__::func_59(uParam0, 4);
				}
			}
			break;
		case 4:
			if (!__LIB_8__::func_684("TRN2_MCH_CMMT") && !__LIB_8__::func_684("TRN2_MntUp1"))
			{
				if (__LIB_5__::func_314(uParam0, "TRN2_VRIDE_BANT", 0))
				{
					sLocal_4965 = "TRN2_VRIDE_BANT";
					__LIB_11__::func_59(uParam0, 5);
				}
			}
			break;
		case 5:
			if (!__LIB_9__::func_344())
			{
				__LIB_2__::func_259(&uLocal_4865);
			}
			if (!func_1737())
			{
				if (__LIB_0__::func_899(&uLocal_4865))
				{
					if (__LIB_9__::func_178(&uLocal_4865) > 5f)
					{
						if (__LIB_11__::func_647(uParam0, "TRN2_OBJ01", 4, 0, 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
							__LIB_11__::func_59(uParam0, -1);
						}
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_4865);
			}
			break;
		case 6:
			if (__LIB_8__::func_684("TRN2_VRIDE_BANT"))
			{
				if (!AUDIO::_0xF01C570E0A0A1E67("TRN2_VRIDE_BANT"))
				{
					AUDIO::PAUSE_SCRIPTED_CONVERSATION("TRN2_VRIDE_BANT", true, false, false, true);
				}
			}
			else if (__LIB_5__::func_314(uParam0, "TRN2_PINK_PAT", 0))
			{
				__LIB_11__::func_59(uParam0, 7);
			}
			break;
		case 7:
			if (func_1239(262144))
			{
				if (!__LIB_8__::func_684("TRN2_PINK_PAT"))
				{
					if (__LIB_5__::func_314(uParam0, "TRN2_PINK_CLEAR", 0))
					{
						__LIB_11__::func_59(uParam0, 8);
					}
				}
			}
			break;
		case 8:
			if (!__LIB_8__::func_684("TRN2_PINK_CLEAR"))
			{
				AUDIO::RESTART_SCRIPTED_CONVERSATION("TRN2_VRIDE_BANT");
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
		case 9:
			if (__LIB_8__::func_684("TRN2_VRIDE_BANT"))
			{
				__LIB_6__::func_900("TRN2_VRIDE_BANT", 1, 0);
			}
			else if (__LIB_5__::func_314(uParam0, "TRN2_ARRIVE", 0))
			{
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_2__::func_259(&uLocal_4865);
				__LIB_11__::func_59(uParam0, 51);
			}
			break;
	}
}

void func_1236()
{
	switch (iLocal_26)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[7 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_4628[7 /*16*/], true, false))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_4628[7 /*16*/], "pl_Bill_Arrives"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_4628[7 /*16*/], "Bill_horse", &uLocal_4757, true, "pl_Bill_Arrives", 2))
					{
						func_1739(7);
						iLocal_26 = 1;
					}
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[7 /*16*/], false))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_37[0 /*171*/], "TRN2_MCS1_LI", 0f, 0f, 0f, 0, "TRN2_MCS1_LI");
				iLocal_26 = 3;
			}
			break;
		case 2:
			break;
		case 3:
			if (__LIB_3__::func_439(Local_4628[7 /*16*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[7 /*16*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_4628[7 /*16*/]);
					iLocal_26 = 4;
				}
			}
			break;
	}
}

void func_1238()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (bLocal_4856)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_5__::func_511(3);
				bLocal_4856 = false;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			bLocal_4856 = true;
		}
	}
}

bool func_1239(int iParam0)
{
	return __LIB_0__::func_27(iLocal_4819, iParam0);
}

void func_1243(int iParam0)
{
	if (!func_1239(iParam0))
	{
		__LIB_1__::func_683(&iLocal_4819, iParam0);
	}
}

void func_1247(int iParam0)
{
	if (func_1239(iParam0))
	{
		__LIB_1__::func_681(&iLocal_4819, iParam0);
	}
}

void func_1248()
{
	int iVar0;
	bool bVar1;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_3868[0 /*195*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_3868[0 /*195*/], 1.5f, 0, -1082130432 /* Float: -1f */, 0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((PED::IS_TRACKED_PED_VISIBLE(Local_3868[iVar0 /*195*/]) || PED::IS_TRACKED_PED_VISIBLE(Local_3868[iVar0 /*195*/].f_1)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_3868[iVar0 /*195*/], 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_3868[iVar0 /*195*/].f_1, 17))
		{
			if (!bVar1)
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_163(Local_3868[0 /*195*/], 658540077))
		{
			TASK::TASK_FORCE_MOTION_STATE(Local_3868[0 /*195*/].f_1, -1415276238, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_3868[0 /*195*/], func_413(15), 0, 14, -1, 0, 0, -1);
			PED::_0x2208438012482A1A(Local_3868[0 /*195*/], false, false);
		}
		else
		{
			if (!__LIB_0__::func_163(Local_3868[1 /*195*/], 658540077))
			{
				TASK::TASK_FORCE_MOTION_STATE(Local_3868[1 /*195*/].f_1, -1415276238, false);
				TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_3868[1 /*195*/], Local_3868[0 /*195*/], func_413(15), -1.5f, -3.5f, 0, 40, -1, false);
				PED::_0x2208438012482A1A(Local_3868[1 /*195*/], false, false);
			}
			if (!__LIB_0__::func_163(Local_3868[2 /*195*/], 658540077))
			{
				TASK::TASK_FORCE_MOTION_STATE(Local_3868[2 /*195*/].f_1, -1415276238, false);
				TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_3868[2 /*195*/], Local_3868[0 /*195*/], func_413(15), 1.5f, -3.5f, 0, 40, -1, false);
				PED::_0x2208438012482A1A(Local_3868[2 /*195*/], false, false);
			}
		}
	}
}

int func_1250(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, iParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_1__::func_561(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_583(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

int func_1258(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		vVar2 = { func_172(3, iVar1) };
		fVar5 = func_868(3, iVar1);
		vLocal_4549[iVar1 /*3*/].f_2 = 0;
		if ((iVar1 == 4 || iVar1 == 6) || iVar1 == 7)
		{
			fVar5 = (fVar5 - 180f);
		}
		else if (iVar1 == 8)
		{
			fVar5 = 0f;
		}
		else if (iVar1 == 9)
		{
			fVar5 = 0f;
		}
		else if (iVar1 == 10)
		{
			fVar5 = 90f;
		}
		else if (iVar1 == 11)
		{
			fVar5 = 90f;
		}
		else if (iVar1 == 12)
		{
			fVar5 = -90f;
		}
		else if (iVar1 == 13)
		{
			fVar5 = -90f;
		}
		if (iVar0 >= 8)
		{
			if (!AICOVERPOINT::_0xC276FE69DDA22BAD(vLocal_4549[iVar1 /*3*/].f_1))
			{
				vLocal_4549[iVar1 /*3*/].f_1 = TASK::_0x59872EA4CBD11C56(iLocal_4543, func_1755(iVar1), fVar5, 0, 1, 0, 0);
			}
		}
		else if (!AICOVERPOINT::_0xC276FE69DDA22BAD(vLocal_4549[iVar1 /*3*/].f_1))
		{
			vLocal_4549[iVar1 /*3*/].f_1 = TASK::ADD_COVER_POINT(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, fVar5, 0f, 1f, 0f), (fVar5 - 180f), 3, 0, 0, false);
		}
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_4592))
		{
			iLocal_4592 = TASK::ADD_COVER_POINT(func_172(3, 8), func_868(3, 8), 3, 2, 0, false);
		}
		iVar0++;
	}
	return 1;
}

bool func_1261(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!func_869(vParam1, fParam4))
	{
		return false;
	}
	if (!func_1757(uParam0, 0, 5, 1, bParam5))
	{
		return false;
	}
	func_1758(bParam5);
	__LIB_1__::func_571(Local_551[0 /*195*/], Local_551[0 /*195*/].f_1, 0, -1, 1);
	__LIB_1__::func_571(Local_551[1 /*195*/], Local_551[1 /*195*/].f_1, 0, -1, 1);
	__LIB_1__::func_571(Local_551[2 /*195*/], Local_551[2 /*195*/].f_1, 0, -1, 1);
	__LIB_1__::func_571(Local_551[3 /*195*/], Local_551[3 /*195*/].f_1, 0, -1, 1);
	__LIB_4__::func_185(&(Local_551[4 /*195*/]), &iLocal_4543, -1, 1);
	__LIB_4__::func_185(&(Local_551[5 /*195*/]), &iLocal_4543, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_551[4 /*195*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_551[4 /*195*/], 22, true);
		ENTITY::SET_ENTITY_LOD_DIST(Local_551[4 /*195*/], 300);
		__LIB_2__::func_279(Local_551[4 /*195*/], 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_551[5 /*195*/]))
	{
		ENTITY::SET_ENTITY_LOD_DIST(Local_551[5 /*195*/], 300);
		PED::SET_PED_CONFIG_FLAG(Local_551[5 /*195*/], 22, true);
	}
	__LIB_1__::func_766(Local_551[0 /*195*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_1__::func_766(Local_551[1 /*195*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_1__::func_766(Local_551[2 /*195*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_1__::func_766(Local_551[3 /*195*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_1__::func_766(Local_551[4 /*195*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_1__::func_766(Local_551[5 /*195*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	ENTITY::SET_ENTITY_LOD_DIST(Local_551[0 /*195*/], 300);
	ENTITY::SET_ENTITY_LOD_DIST(Local_551[1 /*195*/], 300);
	ENTITY::SET_ENTITY_LOD_DIST(Local_551[2 /*195*/], 300);
	ENTITY::SET_ENTITY_LOD_DIST(Local_551[3 /*195*/], 300);
	ENTITY::SET_ENTITY_LOD_DIST(Local_551[0 /*195*/].f_1, 300);
	ENTITY::SET_ENTITY_LOD_DIST(Local_551[1 /*195*/].f_1, 300);
	ENTITY::SET_ENTITY_LOD_DIST(Local_551[2 /*195*/].f_1, 300);
	ENTITY::SET_ENTITY_LOD_DIST(Local_551[3 /*195*/].f_1, 300);
	PED::SET_PED_LOD_MULTIPLIER(Local_551[0 /*195*/], 3f);
	PED::SET_PED_LOD_MULTIPLIER(Local_551[1 /*195*/], 3f);
	PED::SET_PED_LOD_MULTIPLIER(Local_551[2 /*195*/], 3f);
	PED::SET_PED_LOD_MULTIPLIER(Local_551[3 /*195*/], 3f);
	PED::SET_PED_LOD_MULTIPLIER(Local_551[0 /*195*/].f_1, 3f);
	PED::SET_PED_LOD_MULTIPLIER(Local_551[1 /*195*/].f_1, 3f);
	PED::SET_PED_LOD_MULTIPLIER(Local_551[2 /*195*/].f_1, 3f);
	PED::SET_PED_LOD_MULTIPLIER(Local_551[3 /*195*/].f_1, 3f);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_4543))
	{
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_4543, 300);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_4543, 3f);
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_4543, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_551[0 /*195*/], 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_551[1 /*195*/], 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_551[2 /*195*/], 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_551[3 /*195*/], 1);
	return true;
}

void func_1265(var uParam0)
{
	var uVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_37[0 /*171*/]))
	{
		switch (iLocal_4769)
		{
			case 0:
				if (__LIB_0__::func_272(Local_37[0 /*171*/], 0))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_4628[1 /*16*/], "pbl_Drunk_Idle_Enter"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_4628[1 /*16*/], "CS_BillWilliamson", &uVar0, true, "pbl_Drunk_Idle_Enter", 2))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_37[0 /*171*/], func_172(1, 1), 1f, 1, 0, 0);
							TASK::_0x42CFD8FD8CC8DC69(Local_37[0 /*171*/], 1);
							PED::SET_PED_COMBAT_MOVEMENT(Local_37[0 /*171*/], 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 50, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 71, false);
							PED::SET_COMBAT_FLOAT(Local_37[0 /*171*/], 53, 0f);
							PED::SET_COMBAT_FLOAT(Local_37[0 /*171*/], 58, 0f);
							PED::SET_COMBAT_FLOAT(Local_37[0 /*171*/], 42, 0f);
							PED::SET_COMBAT_FLOAT(Local_37[0 /*171*/], 44, 0f);
							vLocal_4549[4 /*3*/].f_2 = 1;
							vLocal_4549[6 /*3*/].f_2 = 1;
							vLocal_4549[7 /*3*/].f_2 = 1;
							__LIB_1__::func_649(&iLocal_4769, 75);
						}
					}
				}
				break;
			case 75:
				switch (Local_37[0 /*171*/].f_166)
				{
					case 0:
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_4628[1 /*16*/], func_410(7)))
						{
							if (__LIB_1__::func_205(Local_551[1 /*195*/], iLocal_4598, 1, 0) && !func_386(67108864))
							{
								func_387(128);
								func_1282(3.5f);
								iLocal_22 = 7;
								Local_37[0 /*171*/].f_166 = 1;
							}
						}
						break;
					case 1:
						break;
					case 8:
						if (__LIB_3__::func_439(Local_4628[1 /*16*/]) || func_1239(8192))
						{
							if (!__LIB_0__::func_163(Local_37[0 /*171*/], 242628503))
							{
								PED::_0x8ACC0506743A8A5C(Local_37[0 /*171*/], joaat("SCRIPT_STARTOFCOMBAT_UNDERFIRE"), 2, -1082130432 /* Float: -1f */);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 27, false);
								PED::SET_PED_ACCURACY(Local_37[0 /*171*/], 0);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_4858);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_4858);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, func_172(3, 8), 5000, 1, 1f, 0, 0, iLocal_4592, 0, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_4858);
								TASK::TASK_PERFORM_SEQUENCE(Local_37[0 /*171*/], iLocal_4858);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_4858);
								PED::SET_PED_SHOOT_RATE(Local_37[0 /*171*/], 50);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_37[0 /*171*/], func_172(3, 8), 1f, 0, 0, 0);
								__LIB_2__::func_259(&(Local_37[0 /*171*/].f_167));
								func_1762();
								Local_37[0 /*171*/].f_166++;
							}
						}
						break;
					case 9:
						if (__LIB_0__::func_899(&(Local_37[0 /*171*/].f_167)))
						{
							if (__LIB_9__::func_178(&(Local_37[0 /*171*/].f_167)) > 4f)
							{
								PED::_0x8ACC0506743A8A5C(Local_37[0 /*171*/], joaat("SCRIPT_STARTOFCOMBAT_UNDERFIRE"), 2, -1082130432 /* Float: -1f */);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_37[0 /*171*/], 100f, 0, 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_37[0 /*171*/], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_172(3, 7), func_868(3, 7), 0f, -1f, 1f), 1.5f, 0, 0, 0);
								__LIB_2__::func_259(&(Local_37[0 /*171*/].f_167));
								Local_551[1 /*195*/].f_189 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_172(3, 5), func_868(3, 5), 0f, 1f, 0.5f) };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_551[1 /*195*/], Local_551[1 /*195*/].f_189, 1.5f, 1, 0, 0);
								Local_37[0 /*171*/].f_166++;
							}
						}
						break;
					case 10:
						if (__LIB_0__::func_899(&(Local_37[0 /*171*/].f_167)))
						{
							if (__LIB_9__::func_178(&(Local_37[0 /*171*/].f_167)) > 15f)
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_551[1 /*195*/]))
								{
									PED::_0x8ACC0506743A8A5C(Local_37[0 /*171*/], joaat("SCRIPT_STARTOFCOMBAT_UNDERFIRE"), 2, -1082130432 /* Float: -1f */);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_37[0 /*171*/], 100f, 0, 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_37[0 /*171*/], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_172(3, 5), func_868(3, 5), 0f, -1f, 1f), 1.5f, 0, 0, 0);
									__LIB_2__::func_259(&(Local_37[0 /*171*/].f_167));
									Local_37[0 /*171*/].f_166 = 12;
								}
								else
								{
									PED::_0x8ACC0506743A8A5C(Local_37[0 /*171*/], joaat("SCRIPT_STARTOFCOMBAT_UNDERFIRE"), 2, -1082130432 /* Float: -1f */);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_37[0 /*171*/], 100f, 0, 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_37[0 /*171*/], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_172(3, 4), func_868(3, 4), 0f, -1f, 1f), 1.5f, 0, 0, 0);
									__LIB_2__::func_259(&(Local_37[0 /*171*/].f_167));
									Local_37[0 /*171*/].f_166 = 11;
								}
							}
						}
						break;
					case 11:
						if (ENTITY::IS_ENTITY_DEAD(Local_551[1 /*195*/]))
						{
							if (__LIB_0__::func_899(&(Local_37[0 /*171*/].f_167)))
							{
								if (__LIB_9__::func_178(&(Local_37[0 /*171*/].f_167)) > 15f)
								{
									PED::_0x8ACC0506743A8A5C(Local_37[0 /*171*/], joaat("SCRIPT_STARTOFCOMBAT_UNDERFIRE"), 2, -1082130432 /* Float: -1f */);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_37[0 /*171*/], 100f, 0, 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_37[0 /*171*/], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_172(3, 5), func_868(3, 5), 0f, -1f, 1f), 1.5f, 0, 0, 0);
									__LIB_2__::func_259(&(Local_37[0 /*171*/].f_167));
									Local_37[0 /*171*/].f_166++;
								}
							}
						}
						break;
				}
				break;
			case 2:
				if ((func_1270() == 0 || __LIB_0__::func_94(iLocal_4542, 2958.788f, 530.4504f, 43.47543f, 1) >= 40f) || (func_1272(4) && !ENTITY::DOES_ENTITY_EXIST(iLocal_4542)))
				{
					if (!__LIB_0__::func_163(Local_37[0 /*171*/], -1794415470))
					{
						TASK::TASK_ENTER_VEHICLE(Local_37[0 /*171*/], iLocal_4543, 20000, 0, 2f, 1, 0);
					}
					if (PED::IS_PED_IN_VEHICLE(Local_37[0 /*171*/], iLocal_4543, false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Local_37[0 /*171*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
						__LIB_1__::func_649(&iLocal_4769, 4);
					}
				}
				else if (!__LIB_0__::func_163(Local_37[0 /*171*/], 242628503))
				{
					PED::_0x8ACC0506743A8A5C(Local_37[0 /*171*/], joaat("SCRIPT_STARTOFCOMBAT_UNDERFIRE"), 2, -1082130432 /* Float: -1f */);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 27, false);
					PED::SET_PED_ACCURACY(Local_37[0 /*171*/], 0);
					PED::SET_PED_SHOOT_RATE(Local_37[0 /*171*/], 50);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_37[0 /*171*/], func_172(3, 8), 1f, 0, 0, 0);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_4858);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_4858);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_4858);
					TASK::TASK_PERFORM_SEQUENCE(Local_37[0 /*171*/], iLocal_4858);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_4858);
				}
				else if (__LIB_9__::func_178(&uLocal_4865) >= 3f)
				{
					if (!func_1239(8388608))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_4542))
						{
							__LIB_2__::func_279(iLocal_4542, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4542, false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_37[0 /*171*/], 2958.788f, 530.4504f, 43.47543f, 2f, 0, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 27, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 30, true);
							PED::SET_PED_ACCURACY(Local_37[0 /*171*/], 100);
							PED::_0xD05AD61F242C626B(iLocal_4542, 1000f);
							PED::_0xC2266AA617668AD3(iLocal_4542, 1000f);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 0, false);
							func_1243(8388608);
						}
					}
					PED::SET_PED_RESET_FLAG(iLocal_4542, 9, true);
					PED::SET_PED_RESET_FLAG(iLocal_4542, 23, true);
				}
				break;
			case 4:
				if (!__LIB_0__::func_163(Local_37[0 /*171*/], -235832601))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_37[0 /*171*/], iLocal_4543, func_413(3), 0, 0, 4620, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					__LIB_1__::func_649(&iLocal_4769, 5);
				}
				break;
			case 5:
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_4543, true))
				{
					if ((__LIB_0__::func_665(Global_35, Local_37[0 /*171*/], 1, 1) <= 10f || !PED::IS_PED_FACING_PED(Local_37[0 /*171*/], Global_35, 90f)) || __LIB_1__::func_205(Local_37[0 /*171*/], iLocal_4622, 1, 0))
					{
						if (!TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_4543))
						{
							TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_4543);
						}
						TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4543, 0f);
						if (__LIB_1__::func_205(Global_35, iLocal_4617, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_4616, 1, 0))
						{
							if (__LIB_4__::func_979(uParam0) != 9)
							{
								__LIB_1__::func_585(&uLocal_4868, 10f);
								__LIB_11__::func_59(uParam0, 9);
							}
						}
						else if (__LIB_4__::func_979(uParam0) != 10)
						{
							__LIB_1__::func_585(&uLocal_4868, 6f);
							__LIB_11__::func_59(uParam0, 10);
						}
					}
					else
					{
						if (TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_4543))
						{
							TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(iLocal_4543);
							if (__LIB_4__::func_979(uParam0) != -1)
							{
								__LIB_11__::func_59(uParam0, -1);
							}
						}
						TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4543, 5f);
					}
				}
				break;
		}
	}
}

void func_1266(var uParam0)
{
	int iVar0;
	if (((iLocal_22 == 2 || iLocal_22 == 3) || iLocal_22 == 4) || iLocal_22 == 5)
	{
		if (__LIB_0__::func_665(Global_35, Local_37[0 /*171*/], 1, 1) <= 10f)
		{
			if (!__LIB_0__::func_899(&uLocal_4901))
			{
				__LIB_4__::func_87(&uLocal_4901, 8f, 0);
			}
			else if (__LIB_9__::func_178(&uLocal_4901) >= 10f)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_5__::func_314(uParam0, "TRN2_NO_VANTAGE", 0))
					{
						__LIB_2__::func_259(&uLocal_4901);
					}
				}
				else
				{
					__LIB_1__::func_585(&uLocal_4901, 8f);
				}
			}
		}
	}
	else if (__LIB_8__::func_684("TRN2_NO_VANTAGE"))
	{
		__LIB_6__::func_900("TRN2_NO_VANTAGE", 0, 0);
	}
	if (__LIB_4__::func_971(uParam0) >= 1)
	{
		if (func_1270() != 0 && !func_1239(8388608))
		{
			func_1763(uParam0, &Local_551, &Local_4916, 300f);
		}
	}
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			__LIB_2__::func_259(&uLocal_4865);
			func_1764();
			__LIB_5__::func_486(uParam0, "TRN2_OBJ02", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iLocal_4838 = 1;
			if (__LIB_11__::func_647(uParam0, "TRN2_OBJ02", 4, 0, 0))
			{
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_9__::func_344())
			{
				__LIB_2__::func_259(&uLocal_4865);
			}
			if (__LIB_0__::func_266(Global_35, func_172(1, 2), 5f, 1, 1))
			{
				__LIB_2__::func_259(&uLocal_4865);
				__LIB_11__::func_59(uParam0, 3);
			}
			else if (__LIB_0__::func_899(&uLocal_4865))
			{
				if (__LIB_9__::func_178(&uLocal_4865) > 7.5f)
				{
					if (__LIB_11__::func_647(uParam0, "TRN2_OBJ02", 4, 0, 0))
					{
						__LIB_11__::func_59(uParam0, 3);
					}
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_205(Global_35, iLocal_4617, 1, 0))
			{
				if (!func_386(1))
				{
					func_387(1);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_4955))
				{
					MAP::REMOVE_BLIP(&iLocal_4955);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_4948[4]))
				{
					iLocal_4948[4] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_551[4 /*195*/]);
				}
				__LIB_5__::func_486(uParam0, "TRN2_OBJ03", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_5__::func_590(uParam0, "TRN2_OBJ03", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_4838 = 2;
				__LIB_2__::func_259(&uLocal_4865);
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_11__::func_59(uParam0, 5);
			}
			break;
		case 4:
			__LIB_5__::func_486(uParam0, "TRN2_OBJ04", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (MAP::DOES_BLIP_EXIST(iLocal_4955))
			{
				MAP::REMOVE_BLIP(&iLocal_4955);
			}
			__LIB_2__::func_259(&uLocal_4868);
			__LIB_11__::func_59(uParam0, 5);
			break;
		case 5:
			if (func_386(8192))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (PED::_0x09D7AFD3716DA8E1(Local_551[iVar0 /*195*/], 8000) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_551[iVar0 /*195*/], Global_35, 1, 1))
					{
						bLocal_4854 = true;
					}
					iVar0++;
				}
				if (!bLocal_4854)
				{
					if (!__LIB_0__::func_899(&uLocal_4895))
					{
						__LIB_4__::func_89(&uLocal_4895, 0);
					}
				}
				else if (__LIB_0__::func_899(&uLocal_4895))
				{
					__LIB_1__::func_561(&uLocal_4895);
				}
				iVar0 = 0;
				while (iVar0 < 6)
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_551[iVar0 /*195*/]);
					iVar0++;
				}
				bLocal_4854 = false;
				if (__LIB_0__::func_899(&uLocal_4895))
				{
					if (__LIB_1__::func_583(&uLocal_4895) >= 8f)
					{
						if (__LIB_5__::func_314(uParam0, "TRN2_SHOOT_IDLE", 0))
						{
							__LIB_1__::func_561(&uLocal_4895);
						}
					}
				}
			}
			if (func_1239(64))
			{
				__LIB_5__::func_486(uParam0, "TRN2_GETON", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_4838 = 4;
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_2__::func_259(&uLocal_4865);
				__LIB_11__::func_59(uParam0, 6);
			}
			break;
		case 6:
			if (__LIB_5__::func_314(uParam0, "TRN2_FLEE", 0))
			{
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_1__::func_649(&iLocal_4769, 2);
				__LIB_11__::func_59(uParam0, 8);
			}
			break;
		case 7:
			break;
		case 8:
			if (__LIB_0__::func_899(&uLocal_4865))
			{
				if (__LIB_2__::func_343(Local_37[0 /*171*/], iLocal_4543, 1))
				{
					if (!__LIB_2__::func_343(Global_35, iLocal_4543, 0))
					{
						if (__LIB_11__::func_647(uParam0, "TRN2_GETON", 4, 0, 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
							__LIB_11__::func_59(uParam0, -1);
						}
					}
					else
					{
						__LIB_2__::func_259(&uLocal_4865);
					}
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_899(&uLocal_4868))
			{
				if (__LIB_9__::func_178(&uLocal_4868) > 10f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "TRN2_GET_DOWN", 0))
						{
							if (!__LIB_5__::func_352("TRN2_GET_ON"))
							{
								__LIB_11__::func_647(uParam0, "TRN2_GETON", 4, 0, 0);
							}
							__LIB_2__::func_259(&uLocal_4868);
						}
					}
				}
			}
			break;
		case 10:
			if (__LIB_0__::func_899(&uLocal_4868))
			{
				if (__LIB_9__::func_178(&uLocal_4868) > 10f)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_5__::func_314(uParam0, "TRN2_GET_ON", 0))
						{
							if (!__LIB_5__::func_352("TRN2_GET_ON"))
							{
								__LIB_11__::func_647(uParam0, "TRN2_GETON", 4, 0, 0);
							}
							__LIB_2__::func_259(&uLocal_4868);
						}
					}
				}
			}
			break;
		case 11:
			if (!MAP::DOES_BLIP_EXIST(iLocal_4955))
			{
				iLocal_4955 = __LIB_4__::func_983(408396114, vLocal_4840, 1);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_4948[4]))
			{
				MAP::REMOVE_BLIP(&(iLocal_4948[4]));
			}
			__LIB_5__::func_486(uParam0, "TRN2_OBJ02_BACK", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iLocal_4838 = 3;
			__LIB_2__::func_259(&uLocal_4865);
			__LIB_2__::func_259(&uLocal_4868);
			__LIB_11__::func_59(uParam0, 3);
			break;
	}
}

void func_1267()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_551[iVar1 /*195*/]))
		{
			if (AUDIO::_0x8B25A18E390F75BF(Local_551[iVar1 /*195*/]) != joaat("TRN2_CONVOY_GROUP"))
			{
				if (AUDIO::_0x131EC9247E7A2903(Local_551[iVar1 /*195*/]))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_551[iVar1 /*195*/], "TRN2_Convoy_Group", 0f);
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4543))
	{
		if (AUDIO::_0x8B25A18E390F75BF(iLocal_4543) != joaat("TRN2_CONVOY_GROUP"))
		{
			if (AUDIO::_0x131EC9247E7A2903(iLocal_4543))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_4543, "TRN2_Convoy_Group", 0f);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_4534[iVar0]))
		{
			if (AUDIO::_0x8B25A18E390F75BF(iLocal_4534[iVar0]) != joaat("TRN2_CONVOY_GROUP"))
			{
				if (AUDIO::_0x131EC9247E7A2903(iLocal_4534[iVar0]))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_4534[iVar0], "TRN2_Convoy_Group", 0f);
				}
			}
		}
		iVar0++;
	}
}

void func_1268(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	switch (iLocal_22)
	{
		case 0:
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 27, true);
			PED::SET_PED_ACCURACY(Local_37[0 /*171*/], 100);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[1 /*16*/]))
			{
				func_1739(1);
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_4628[1 /*16*/], "pbl_Drunk_Idle_Enter"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_4628[1 /*16*/], "CS_BillWilliamson", &Var1, true, "pbl_Drunk_Idle_Enter", 2))
					{
						func_846(Local_37[0 /*171*/], Var1, Var1.f_3.f_2, 2, 1073741824 /* Float: 2f */);
					}
				}
				__LIB_9__::func_91(uParam0, Local_4628[1 /*16*/]);
				iLocal_22 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_4628[1 /*16*/], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[1 /*16*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_4628[1 /*16*/]);
				}
				else
				{
					iLocal_22 = 2;
				}
			}
			break;
		case 2:
			func_1767(1, 6);
			func_1767(1, 7);
			func_1767(1, 3);
			func_1767(1, 4);
			func_1767(1, 5);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_4628[1 /*16*/], "s_Drunk_Base", 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[1 /*16*/]) >= 0.98f)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_4628[1 /*16*/], "s_Drunk_base", true, false);
					switch (iVar0)
					{
						case 1:
							iLocal_22 = 3;
							break;
						case 2:
							iLocal_22 = 4;
							break;
						case 3:
							iLocal_22 = 5;
							break;
					}
				}
			}
			break;
		case 3:
			func_1768(1, 3);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_4628[1 /*16*/], "s_Drunk_Base", 1))
			{
				iLocal_22 = 2;
			}
			break;
		case 4:
			func_1768(1, 4);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_4628[1 /*16*/], "s_Drunk_Base", 1))
			{
				iLocal_22 = 2;
			}
			break;
		case 5:
			func_1768(1, 5);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_4628[1 /*16*/], "s_Drunk_Base", 1))
			{
				iLocal_22 = 2;
			}
			break;
		case 6:
			func_1768(1, 6);
			Local_37[0 /*171*/].f_166 = 8;
			iLocal_22 = 11;
			break;
		case 7:
			func_1768(1, 7);
			func_1767(1, 8);
			func_1767(1, 10);
			if (func_386(67108864))
			{
				if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[1 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[1 /*16*/], false)) && ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(7))) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[1 /*16*/]) <= 0.2902098f)
				{
					func_1243(8192);
					Local_37[0 /*171*/].f_166 = 8;
					iLocal_22 = 11;
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_551[1 /*195*/], joaat("STOP")))
			{
				if (__LIB_0__::func_163(Local_551[4 /*195*/], -235832601))
				{
					TASK::CLEAR_PED_TASKS(Local_551[4 /*195*/], true, false);
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(8)))
			{
				iLocal_22 = 10;
			}
			break;
		case 9:
			func_1768(1, 10);
			Local_37[0 /*171*/].f_166 = 8;
			iLocal_22 = 11;
			break;
		case 10:
			break;
		case 11:
			if (__LIB_3__::func_439(Local_4628[1 /*16*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[1 /*16*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_37[0 /*171*/], 27, false);
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_4628[1 /*16*/]);
				}
			}
			break;
	}
}

void func_1269()
{
	switch (iLocal_23)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[2 /*16*/]))
			{
				func_1739(2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_4628[2 /*16*/], iLocal_4543, -1);
				iLocal_23 = 6;
			}
			break;
		case 5:
			if (iLocal_22 == 7)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[2 /*16*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_4628[2 /*16*/]);
				}
				else
				{
					func_1767(2, 15);
					iLocal_23 = 2;
				}
			}
			break;
		case 2:
			func_1767(2, 15);
			if (PED::IS_PED_SHOOTING(Local_37[0 /*171*/]))
			{
				iLocal_23 = 4;
			}
			if (func_386(8192) || func_1769())
			{
				iLocal_23 = 4;
			}
			break;
		case 4:
			func_1768(2, 15);
			if (ANIMSCENE::_0x1F0E401031E20146(Local_4628[2 /*16*/], func_410(15)))
			{
				iLocal_23 = 7;
			}
			break;
		case 7:
			if (__LIB_3__::func_439(Local_4628[2 /*16*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[2 /*16*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_4628[2 /*16*/]);
				}
			}
			break;
	}
}

int func_1270()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_0__::func_272(Local_551[iVar0 /*195*/], 0))
		{
			if (PED::IS_PED_HUMAN(Local_551[iVar0 /*195*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1272(int iParam0)
{
	return __LIB_0__::func_27(iLocal_4821, iParam0);
}

void func_1273(var uParam0)
{
	switch (iLocal_25)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[6 /*16*/]))
			{
				func_1739(6);
				iLocal_25 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_163(Local_37[0 /*171*/], -1794415470))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_4616, 1, 0))
				{
					iLocal_25 = 2;
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_4628[6 /*16*/], func_410(19), true);
					iLocal_25 = 2;
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[6 /*16*/], false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_4628[6 /*16*/]);
			}
			else
			{
				iLocal_25 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x1F0E401031E20146(Local_4628[6 /*16*/], func_410(18)))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[6 /*16*/]) >= 0.4897119f)
				{
					if (!func_386(16777216))
					{
						__LIB_5__::func_314(uParam0, "TRN2_BECKON", 0);
						func_387(16777216);
					}
				}
			}
			if (__LIB_3__::func_439(Local_4628[6 /*16*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[6 /*16*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_4628[6 /*16*/]);
				}
			}
			break;
	}
}

void func_1279()
{
	int iVar0;
	if (iLocal_4837 == -1)
	{
		iLocal_4837 = __LIB_0__::func_342();
	}
	iVar0 = __LIB_0__::func_342();
	if (iVar0 < iLocal_4837)
	{
		bLocal_4851 = true;
	}
}

void func_1280(var uParam0)
{
	int iVar0;
	if (func_386(536870912))
	{
		if (!__LIB_0__::func_272(Local_551[4 /*195*/], 0))
		{
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
			{
				TASK::_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2(iLocal_4543, func_413(2), 0, 0, 40, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
			}
		}
	}
	if (!func_386(8192))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_551[0 /*195*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_551[0 /*195*/], Local_37[0 /*171*/], 1, 1))
			{
				if (!__LIB_1__::func_205(Global_35, iLocal_4616, 1, 0))
				{
					if (!func_1239(65536))
					{
						func_1243(65536);
					}
				}
				func_387(8192);
			}
		}
		if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[1 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[1 /*16*/], false)) && ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(8))) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[1 /*16*/]) >= 0.130597f)
		{
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_4628[1 /*16*/], "U_M_Y_ARMENLISTED_01"))
			{
				if (!__LIB_1__::func_205(Global_35, iLocal_4616, 1, 0))
				{
					if (!func_1239(65536))
					{
						func_1243(65536);
					}
				}
				iLocal_22 = 9;
				func_1243(16777216);
				func_387(8192);
			}
			else if (func_1769())
			{
				if (!__LIB_1__::func_205(Global_35, iLocal_4616, 1, 0))
				{
					if (!func_1239(65536))
					{
						func_1243(65536);
					}
				}
				func_1243(16777216);
				func_387(8192);
			}
		}
	}
	if (func_1769() && !func_386(8192))
	{
		__LIB_5__::func_573(uParam0, Local_37[0 /*171*/]);
		if (!func_386(67108864) && !func_1239(16777216))
		{
			bLocal_4850 = true;
			if (!func_1272(8))
			{
				if (func_1284())
				{
					func_1310(8);
				}
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				PED::SET_PED_ACCURACY(Local_551[iVar0 /*195*/], 100);
				iVar0++;
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[1 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[1 /*16*/], false)) && ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(1)))
			{
				iLocal_22 = 6;
			}
			if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[1 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[1 /*16*/], false)) && ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(7))) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_4628[1 /*16*/]) >= 0.4137529f)
			{
				iLocal_22 = 9;
			}
			func_1285();
			if (!func_386(536870912))
			{
				func_387(536870912);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(Local_37[0 /*171*/], false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_37[0 /*171*/], false);
			PED::SET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 138, true);
			func_387(67108864);
		}
	}
}

void func_1281(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<4> Var3;
	int iVar15;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, false, false))
	{
		switch (iLocal_4770)
		{
			case 0:
				func_1775();
				func_1776(0);
				__LIB_1__::func_649(&iLocal_4770, 2);
				break;
			case 2:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[1 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_4628[1 /*16*/], true, false))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_4628[1 /*16*/], func_410(7)) || ANIMSCENE::_0x1F0E401031E20146(Local_4628[1 /*16*/], func_410(7)))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_4628[1 /*16*/], "U_M_Y_ARMENLISTED_01", &Var3, true, func_410(7), 2))
						{
							if (!func_386(67108864))
							{
								if (__LIB_1__::func_205(Local_551[0 /*195*/], iLocal_4598, 1, 0))
								{
									if (!__LIB_0__::func_163(Local_551[0 /*195*/], 713668775))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_551[0 /*195*/], Var3, 1f, 20000, 0.25f, 0, Var3.f_3.f_2);
									}
									if (!__LIB_0__::func_163(Local_551[1 /*195*/], 713668775))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_551[1 /*195*/], 2958.224f, 540.5211f, 43.45802f, 1f, 20000, 0.25f, 0, 40000f);
										__LIB_1__::func_649(&iLocal_4770, 8);
									}
								}
							}
						}
					}
				}
				fVar1 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Local_551[2 /*195*/].f_1);
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_551[0 /*195*/], (fVar1 + 0.1f));
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_551[1 /*195*/], fVar1);
				break;
			case 8:
				fVar1 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Local_551[2 /*195*/].f_1);
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_551[0 /*195*/], (fVar1 + 0.1f));
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_551[1 /*195*/], fVar1);
				break;
			case 46:
				iVar15 = 0;
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar2 = iVar0;
					if (__LIB_0__::func_272(Local_551[iVar2 /*195*/], 0))
					{
						if (iVar2 == 4)
						{
							if (__LIB_1__::func_205(Local_551[iVar2 /*195*/], iLocal_4623, 1, 0))
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
								{
									TASK::CLEAR_PED_TASKS(Local_551[iVar2 /*195*/], true, false);
								}
								if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_4543))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_4543, 5f, 3, false);
								}
							}
							if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_4543))
							{
								iVar15++;
							}
						}
						else if (iVar2 == 5)
						{
							iVar15++;
						}
						else if (iVar2 != 0)
						{
							if (VEHICLE::_0x404527BC03DA0E6C(iLocal_4543))
							{
								if (!__LIB_0__::func_163(Local_551[iVar0 /*195*/], -982327190))
								{
									TASK::TASK_STAND_STILL(Local_551[iVar0 /*195*/], -1);
								}
								else
								{
									iVar15++;
								}
							}
						}
					}
					iVar0++;
				}
				if (iVar15 == 5)
				{
					__LIB_1__::func_649(&iLocal_4770, 65);
				}
				break;
			case 65:
				break;
			case 66:
				if (__LIB_0__::func_899(&(Local_551[1 /*195*/].f_3)))
				{
					if (__LIB_9__::func_178(&(Local_551[1 /*195*/].f_3)) > 10f)
					{
						TASK::TASK_SHOOT_AT_COORD(Local_551[1 /*195*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_37[0 /*171*/], 0.5f, 0f, 0f), 1000, joaat("FIRING_PATTERN_SINGLE_SHOT"), 1);
						__LIB_1__::func_649(&iLocal_4770, 15);
					}
				}
				break;
			case 15:
				break;
		}
	}
}

void func_1282(float fParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4543, fParam0);
	}
}

void func_1283(int iParam0)
{
	if (func_386(iParam0))
	{
		__LIB_1__::func_681(&iLocal_4820, iParam0);
	}
}

bool func_1284()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_DUTCHS"), iLocal_4787);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_4787, joaat("REL_GANG_DUTCHS"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_4787, joaat("PLAYER"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_551[iVar1 /*195*/], iLocal_4787);
		PED::SET_PED_COMBAT_MOVEMENT(Local_551[iVar1 /*195*/], 1);
		PED::SET_COMBAT_FLOAT(Local_551[iVar1 /*195*/], 1, 4f);
		PED::SET_COMBAT_FLOAT(Local_551[iVar1 /*195*/], 3, 0.75f);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_551[iVar1 /*195*/], 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_551[iVar1 /*195*/], 35, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_551[iVar1 /*195*/], 50, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_551[iVar1 /*195*/], 0, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_551[iVar1 /*195*/], 512, true);
		PED::REGISTER_TARGET(Local_551[iVar1 /*195*/], Local_37[0 /*171*/], 1);
		if (func_1239(65536))
		{
			PED::SET_PED_ACCURACY(Local_551[iVar1 /*195*/], 60);
		}
		iVar0++;
	}
	return true;
}

void func_1285()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	if (PED::DOES_GROUP_EXIST(iLocal_4788))
	{
		PED::REMOVE_GROUP(iLocal_4788);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar4 = iVar0;
		if (__LIB_0__::func_272(Local_551[iVar4 /*195*/], 1))
		{
			switch (iVar4)
			{
				case 0:
					iVar1 = -1;
					fVar2 = MISC::GET_RANDOM_INT_IN_RANGE(100, 1000);
					break;
				case 1:
					iVar1 = 5;
					fVar2 = 0;
					break;
				case 2:
					iVar1 = 2;
					fVar2 = 3000;
					break;
				case 3:
					iVar1 = 3;
					fVar2 = 2000;
					break;
				case 4:
					iVar1 = 1;
					fVar2 = 0;
					break;
				case 5:
					iVar1 = 0;
					fVar3 = 0f;
					break;
			}
			if (iVar1 == -1)
			{
				Local_551[iVar4 /*195*/].f_189 = { 2961.572f, 542.8932f, 43.4291f };
			}
			else
			{
				Local_551[iVar4 /*195*/].f_192 = iVar1;
				if (!Local_551[iVar4 /*195*/].f_187)
				{
					if (iVar1 == 5)
					{
						Local_551[iVar4 /*195*/].f_189 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_448(3, iVar1), func_997(3, iVar1), 1f, 0f, 0.5f) };
					}
					else if (iVar1 != -1)
					{
						Local_551[iVar4 /*195*/].f_189 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_448(3, iVar1), func_997(3, iVar1), 0f, 1f, 0.5f) };
					}
					Local_551[iVar4 /*195*/].f_187 = 1;
					vLocal_4549[iVar1 /*3*/].f_2 = 1;
				}
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_4948[iVar4]))
			{
				iLocal_4948[iVar4] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_551[iVar4 /*195*/]);
				MAP::_BLIP_SET_MODIFIER(iLocal_4948[iVar4], -1034486097);
			}
			if (!PED::_0x33FA048675821DA7(Local_551[iVar4 /*195*/].f_1, 3))
			{
				PED::_0x2EB75FB86C41F026(Local_551[iVar4 /*195*/].f_1, 3, 1);
				PED::_0x06D26A96CA1BCA75(Local_551[iVar4 /*195*/].f_1, 3, 1f, 0);
			}
			if (PED::IS_PED_ON_MOUNT(Local_551[iVar4 /*195*/]) || PED::IS_PED_IN_ANY_VEHICLE(Local_551[iVar4 /*195*/], false))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar5);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				if (PED::IS_PED_ON_MOUNT(Local_551[iVar4 /*195*/]))
				{
					if (iVar4 == 1)
					{
						if (!__LIB_0__::func_163(Local_551[iVar4 /*195*/].f_1, 1041577989) && func_1239(2048))
						{
							TASK::TASK_DISMOUNT_ANIMAL(0, 268435456, 0, 0, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
						}
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(0, 100f, fVar2, 0);
						TASK::TASK_DISMOUNT_ANIMAL(0, 268435456, 0, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(Local_551[iVar4 /*195*/], false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 5000, 268435456);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar5);
			}
			if (iVar4 == 4)
			{
				if (func_386(8192))
				{
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[2 /*16*/]))
					{
						if (!__LIB_0__::func_163(Local_551[iVar4 /*195*/], 242628503))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_551[iVar4 /*195*/], iVar5);
						}
					}
				}
				else if (!func_1239(16777216))
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_551[iVar4 /*195*/]))
						{
							if (!__LIB_0__::func_163(Local_551[iVar4 /*195*/], -235832601))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_551[iVar4 /*195*/], iLocal_4543, func_413(2), 0, 0, 40, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
							}
						}
					}
					else
					{
						TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4543, 10f);
					}
				}
			}
			if (iVar4 == 5)
			{
				if (func_386(8192))
				{
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[2 /*16*/]))
					{
						if (!__LIB_0__::func_163(Local_551[iVar4 /*195*/], 242628503))
						{
							TASK::_TASK_PERFORM_SEQUENCE_2(Local_551[iVar4 /*195*/], iVar5, fVar3, fVar3);
						}
					}
				}
				else if (!func_1239(16777216))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[2 /*16*/]))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[2 /*16*/], false))
						{
							if (!__LIB_0__::func_163(Local_551[iVar4 /*195*/], 780511057))
							{
								TASK::TASK_COMBAT_PED(Local_551[iVar4 /*195*/], Local_37[0 /*171*/], 0, 0);
							}
						}
					}
				}
			}
			else if (iVar4 != 0)
			{
				if (func_386(8192))
				{
					if (!__LIB_0__::func_163(Local_551[iVar4 /*195*/], 242628503))
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_551[iVar4 /*195*/], iVar5);
					}
				}
				else if (!func_1239(16777216))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[2 /*16*/]))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[2 /*16*/], false))
						{
							func_1776(1);
						}
						else if (!func_386(268435456))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_4628[1 /*16*/], "P_C_HORSE_01", Local_551[0 /*195*/].f_1);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_4628[1 /*16*/], "U_M_Y_ARMENLISTED_01", Local_551[0 /*195*/]);
							func_1776(0);
							func_1777("TRN2_FAIL_ALERT");
							func_387(268435456);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1286()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	if (!func_1239(64))
	{
		iLocal_4823 = 0;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (__LIB_0__::func_272(Local_551[iVar1 /*195*/], 0))
			{
				iLocal_4823++;
			}
			iVar1++;
		}
		if (iLocal_4823 <= 1)
		{
			func_1243(64);
		}
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar6 = Local_551[iVar1 /*195*/].f_192;
		if (iVar1 == 1)
		{
			if (__LIB_0__::func_272(Local_551[iVar1 /*195*/].f_1, 0))
			{
				if (func_386(8192))
				{
					if (!func_1239(2048))
					{
						if (!__LIB_0__::func_163(Local_551[iVar1 /*195*/].f_1, 1041577989))
						{
							TASK::TASK_HORSE_ACTION(Local_551[iVar1 /*195*/].f_1, 1, 0, 0);
							func_1243(2048);
						}
					}
					else if (PED::_IS_MOUNT_SEAT_FREE(Local_551[iVar1 /*195*/].f_1, -1))
					{
						if (!__LIB_0__::func_163(Local_551[iVar1 /*195*/].f_1, 518218985))
						{
							TASK::_TASK_FLEE_FROM_COORD(Local_551[iVar1 /*195*/].f_1, 2970.594f, 603.3129f, 44.5519f, 0f, 0f, 0f, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
						}
					}
				}
			}
		}
		else if (iVar1 == 0)
		{
			if (__LIB_0__::func_272(Local_551[iVar1 /*195*/].f_1, 0))
			{
				if (!func_1239(4096))
				{
					PED::_0x2EB75FB86C41F026(Local_551[iVar1 /*195*/].f_1, 3, 1);
					PED::_0x06D26A96CA1BCA75(Local_551[iVar1 /*195*/].f_1, 3, 1f, 0);
					func_1243(4096);
				}
				else if (PED::_IS_MOUNT_SEAT_FREE(Local_551[iVar1 /*195*/].f_1, -1))
				{
					if (!__LIB_0__::func_163(Local_551[iVar1 /*195*/].f_1, 242628503))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "trn2_horse_flee_1", 0, 10, -1, 0, 0, -1);
						TASK::_TASK_FLEE_FROM_COORD(0, 2970.594f, 603.3129f, 44.5519f, 0f, 0f, 0f, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_551[iVar1 /*195*/].f_1, iVar0);
					}
				}
			}
		}
		else if (__LIB_0__::func_272(Local_551[iVar1 /*195*/].f_1, 0))
		{
			if (!PED::IS_PED_HUMAN(Local_551[iVar1 /*195*/].f_1))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_551[iVar1 /*195*/].f_1, -1))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_551[iVar1 /*195*/].f_1, 518218985, true) != 1)
					{
						PED::_0x2EB75FB86C41F026(Local_551[iVar1 /*195*/].f_1, 3, 1);
						PED::_0x06D26A96CA1BCA75(Local_551[iVar1 /*195*/].f_1, 3, 1f, 0);
						TASK::TASK_SMART_FLEE_PED(Local_551[iVar1 /*195*/].f_1, Global_35, 100f, -1, 0, 1.75f, 0);
					}
				}
			}
		}
		if (__LIB_0__::func_272(Local_551[iVar1 /*195*/], 0))
		{
			if (func_1239(64))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(Local_551[iVar1 /*195*/], false);
				if (MAP::DOES_BLIP_EXIST(iLocal_4948[iVar1]))
				{
					MAP::REMOVE_BLIP(&(iLocal_4948[iVar1]));
				}
				if (PED::IS_PED_ON_FOOT(Local_551[iVar1 /*195*/]))
				{
					if (!__LIB_0__::func_163(Local_551[iVar1 /*195*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_551[iVar1 /*195*/], Global_35, -1f, -1, 0, 2f, 0);
					}
				}
				else
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_4858);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_4858);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_4858);
					TASK::TASK_PERFORM_SEQUENCE(Local_551[iVar1 /*195*/], iLocal_4858);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_4858);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4542))
				{
					iLocal_4542 = Local_551[iVar1 /*195*/];
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4542, false);
					func_1310(4);
				}
			}
		}
		if (IntToFloat(Local_551[iVar1 /*195*/].f_179) == 0f)
		{
			if (__LIB_0__::func_272(Local_551[iVar1 /*195*/], 0))
			{
				if (PED::IS_PED_ON_FOOT(Local_551[iVar1 /*195*/]))
				{
					if (Local_551[iVar1 /*195*/].f_192 <= 7)
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_551[iVar1 /*195*/], Local_551[iVar1 /*195*/].f_189, 1.5f, 1, 0, 0);
					}
					else
					{
						PED::_0x1854217C640B39EC(Local_551[iVar1 /*195*/], iLocal_4543, func_1755(Local_551[iVar1 /*195*/].f_192), 1.5f, 1, 0);
					}
					Local_551[iVar1 /*195*/].f_179 = 1;
				}
			}
		}
		else if (Local_551[iVar1 /*195*/].f_179 == 1)
		{
			if (iVar6 == 1 || iVar6 == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_551[iVar1 /*195*/], 2988.212f, 536.0684f, 42.18941f, 2973.281f, 537.5102f, 44.73532f, 4.25f, false, true, 0))
				{
					vVar3 = { func_1778(Global_35, Local_551[iVar1 /*195*/], 5f) };
					if (__LIB_0__::func_272(Local_551[iVar1 /*195*/], 0))
					{
						if (!PED::GET_PED_CONFIG_FLAG(Local_551[iVar1 /*195*/], 138, true))
						{
							PED::SET_PED_CONFIG_FLAG(Local_551[iVar1 /*195*/], 263, true);
							PED::SET_PED_CONFIG_FLAG(Local_551[iVar1 /*195*/], 138, true);
							ENTITY::_SET_ENTITY_HEALTH(Local_551[iVar1 /*195*/], 25, 0);
						}
					}
					if (PED::GET_PED_LAST_DAMAGE_BONE(Local_551[iVar1 /*195*/], &iVar2))
					{
						if (iVar2 != -1)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_551[iVar1 /*195*/], Global_35, 1, 1))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_551[iVar1 /*195*/], 3, vVar3, 0f, 0f, 0f, 0, false, false, true, false, true);
								Local_551[iVar1 /*195*/].f_179 = 2;
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
}

void func_1292(bool bParam0)
{
	int iVar0;
	PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, 0, 0);
	if (bParam0)
	{
		if (__LIB_2__::func_343(Global_35, iLocal_4543, 0) && __LIB_2__::func_343(Local_37[0 /*171*/], iLocal_4543, 0))
		{
			if (!__LIB_0__::func_139(iLocal_4913))
			{
				iLocal_4913 = __LIB_1__::func_877("TRN2_SWP_DRVR", joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), true);
			}
			if (Local_37[0 /*171*/] != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0))
			{
				if (__LIB_1__::func_732(iLocal_4913, 1))
				{
					if (!func_1239(16384))
					{
						func_1243(16384);
					}
					if (func_1272(1))
					{
						func_1783(1);
					}
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
					if (__LIB_0__::func_139(iLocal_4913))
					{
						__LIB_1__::func_281(&iLocal_4913, 1, 1);
					}
					bLocal_4849 = false;
				}
			}
		}
		else if (__LIB_0__::func_139(iLocal_4913))
		{
			__LIB_1__::func_281(&iLocal_4913, 1, 1);
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
		if (__LIB_0__::func_139(iLocal_4913))
		{
			__LIB_1__::func_281(&iLocal_4913, 1, 1);
		}
	}
}

void func_1293(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar6 = { 2397.525f, 1226.919f, 101.1555f };
	vVar0 = { func_172(5, 1) };
	vVar3 = { func_172(5, 2) };
	if (!ENTITY::DOES_ENTITY_EXIST(Local_37[2 /*171*/]))
	{
		if (!func_838(uParam0, 1, &(Local_37[2 /*171*/]), 0, vVar0.x, vVar0.y, vVar0.z, func_868(5, 1), 1, 0, 0, 0, 1, 0))
		{
		}
		else
		{
			func_1222(Local_37[2 /*171*/], func_224(5, 1), 2, 1073741824 /* Float: 2f */);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]))
	{
		if (!func_838(uParam0, 6, &(Local_37[1 /*171*/]), 0, vVar3.x, vVar3.y, vVar3.z, func_868(5, 2), 1, 0, 0, 0, 1, 0))
		{
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_37[1 /*171*/], true);
			func_1222(Local_37[1 /*171*/], func_224(5, 2), 2, 1073741824 /* Float: 2f */);
		}
	}
	if (!func_859(6, &(Local_37[1 /*171*/].f_1)))
	{
	}
	else
	{
		__LIB_5__::func_559(uParam0, Local_37[1 /*171*/].f_1, Local_37[1 /*171*/]);
		func_846(Local_37[1 /*171*/].f_1, vVar6, 324.33f, 2, 1073741824 /* Float: 2f */);
	}
}

int func_1294(var uParam0)
{
	int iVar0;
	var uVar1;
	float fVar4;
	int iVar5;
	if (!ENTITY::IS_ENTITY_DEAD(Local_37[0 /*171*/]))
	{
		switch (iLocal_4769)
		{
			case 0:
				__LIB_1__::func_649(&iLocal_4769, 2);
				break;
			case 2:
				if (__LIB_4__::func_971(uParam0) >= 0 && !ENTITY::IS_ENTITY_DEAD(iLocal_4543))
				{
					if ((VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_4543) == Local_37[0 /*171*/] && !PED::GET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 175, true)) && !PED::GET_PED_CONFIG_FLAG(Global_35, 175, true))
					{
						if (!__LIB_2__::func_343(Global_35, iLocal_4543, 1))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, func_413(3)))
							{
								TASK::CLEAR_PED_TASKS(Local_37[0 /*171*/], true, false);
							}
						}
						else
						{
							if (TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_4543))
							{
								TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(iLocal_4543);
							}
							if (__LIB_0__::func_94(iLocal_4543, func_172(0, 3), 1) < 30f)
							{
								if (!__LIB_0__::func_163(Local_37[0 /*171*/], -235832601))
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_37[0 /*171*/], iLocal_4543, func_413(3), 524308, iVar0, 4636, -1, 0f, 0, 1073741824 /* Float: 2f */, 0);
								}
							}
							else if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_413(3), ENTITY::GET_ENTITY_COORDS(iLocal_4543, true, false), &iVar0))
							{
								if (TASK::WAYPOINT_RECORDING_GET_COORD(func_413(3), iVar0, &uVar1))
								{
									if (iLocal_4769 != 8)
									{
										if (!__LIB_0__::func_163(Local_37[0 /*171*/], -235832601))
										{
											TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_37[0 /*171*/], iLocal_4543, func_413(3), 0, iVar0, 4620, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
										}
										else
										{
											__LIB_1__::func_649(&iLocal_4769, 85);
										}
									}
								}
							}
						}
					}
					else if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_4543) == Global_35)
					{
						if (func_1308(Local_37[0 /*171*/], 40f))
						{
							__LIB_1__::func_649(&iLocal_4769, 15);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_4543, false) && !PED::IS_PED_IN_VEHICLE(Local_37[0 /*171*/], iLocal_4543, false))
				{
					__LIB_1__::func_649(&iLocal_4769, 83);
				}
				break;
			case 8:
				if (PED::IS_PED_IN_VEHICLE(Local_37[0 /*171*/], iLocal_4543, false))
				{
					if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_4543) == Global_35)
					{
						if (__LIB_0__::func_163(Local_37[0 /*171*/], -235832601) || __LIB_0__::func_163(Local_37[0 /*171*/], 242628503))
						{
						}
					}
					else
					{
						TASK::_0xE01F55B2896F6B37(iLocal_4543, 0);
					}
					__LIB_1__::func_649(&iLocal_4769, 2);
					if (func_1308(Local_37[0 /*171*/], 40f))
					{
						__LIB_1__::func_649(&iLocal_4769, 15);
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_4543, false) && !PED::IS_PED_IN_VEHICLE(Local_37[0 /*171*/], iLocal_4543, false))
				{
					__LIB_1__::func_649(&iLocal_4769, 83);
				}
				break;
			case 85:
				if (!func_1239(4))
				{
					fVar4 = 10f;
				}
				else
				{
					fVar4 = 10f;
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4543, fVar4);
				}
				PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar5, 0, 0);
				if (Local_37[0 /*171*/] != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5))
				{
					if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_4543) == Local_37[0 /*171*/] && PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS")))
					{
						PED::SET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 175, true);
						VEHICLE::_0x226C6A4E3346D288(iLocal_4543, 1);
						VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iLocal_4543, true);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2.5f, 4000, 0f, true, true);
					}
				}
				if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_4543) == Global_35)
				{
					__LIB_1__::func_649(&iLocal_4769, 2);
				}
				if (!__LIB_2__::func_343(Global_35, iLocal_4543, 0))
				{
					__LIB_1__::func_649(&iLocal_4769, 2);
				}
				break;
			case 83:
				if (!PED::IS_PED_IN_VEHICLE(Local_37[0 /*171*/], iLocal_4543, false))
				{
					if (!__LIB_0__::func_163(Local_37[0 /*171*/], -1794415470))
					{
						TASK::TASK_ENTER_VEHICLE(Local_37[0 /*171*/], iLocal_4543, 20000, 0, 2f, 1, 0);
					}
					__LIB_1__::func_649(&iLocal_4769, 2);
				}
				else
				{
					__LIB_1__::func_649(&iLocal_4769, 2);
				}
				break;
			case 15:
				if (!__LIB_0__::func_163(Local_37[0 /*171*/], -1442466670) && !PED::GET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 175, true))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_37[0 /*171*/], 100f, 0, 0);
					PED::SET_PED_ACCURACY(Local_37[0 /*171*/], 10);
				}
				__LIB_1__::func_649(&iLocal_4769, 2);
				break;
		}
		return 1;
	}
	return 0;
}

void func_1295(var uParam0)
{
	var uVar0;
	func_1784(uParam0);
	if (__LIB_1__::func_205(Global_35, iLocal_4605, 1, 0))
	{
		if (!func_386(524288))
		{
			if (__LIB_4__::func_979(uParam0) != 7)
			{
				__LIB_11__::func_59(uParam0, 7);
				func_387(524288);
			}
		}
	}
	else if (__LIB_1__::func_205(Global_35, iLocal_4609, 1, 0))
	{
		if (!func_386(1048576))
		{
			if (__LIB_4__::func_979(uParam0) != 8)
			{
				__LIB_11__::func_59(uParam0, 8);
				func_387(1048576);
			}
		}
	}
	else if (__LIB_1__::func_205(Global_35, iLocal_4613, 1, 0))
	{
		if (!func_386(2097152))
		{
			if (__LIB_4__::func_979(uParam0) != 9)
			{
				__LIB_11__::func_59(uParam0, 9);
				func_387(2097152);
			}
		}
	}
	if (!func_386(4194304))
	{
		if (func_1239(8))
		{
			if (__LIB_0__::func_899(&uLocal_4880))
			{
				if (__LIB_9__::func_178(&uLocal_4880) >= 4f)
				{
					__LIB_0__::func_769();
					__LIB_11__::func_59(uParam0, 12);
					func_387(4194304);
				}
			}
		}
	}
	if (iLocal_4834 > 0)
	{
		func_1763(uParam0, &Local_1722, &Local_4932, 50f);
	}
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (__LIB_9__::func_178(&uLocal_4868) >= 2f)
			{
				if (__LIB_5__::func_314(uParam0, "TRN2_Obj5", 0))
				{
					__LIB_4__::func_0(&iLocal_4948);
					iLocal_4948[0] = __LIB_4__::func_983(408396114, func_172(5, 0), 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_4948[0], "TRN2_BLIP_MEET");
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("trn2_toBeaverHollow", &uVar0);
					__LIB_2__::func_259(&uLocal_4868);
					__LIB_2__::func_259(&uLocal_4865);
					__LIB_5__::func_486(uParam0, "TRN2_OBJ05", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_11__::func_59(uParam0, 4);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (!__LIB_9__::func_344())
			{
				__LIB_2__::func_259(&uLocal_4865);
			}
			if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_4543))
			{
				if (__LIB_0__::func_899(&uLocal_4865))
				{
					if (__LIB_9__::func_178(&uLocal_4865) > 10f)
					{
						if (__LIB_11__::func_647(uParam0, "TRN2_OBJ05", 4, 0, 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
							__LIB_11__::func_59(uParam0, -1);
						}
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_4865);
			}
			break;
		case 4:
			if (!__LIB_5__::func_463())
			{
				if (__LIB_0__::func_899(&uLocal_4868))
				{
					if (__LIB_1__::func_583(&uLocal_4868) >= 1f)
					{
						if (!bLocal_4851)
						{
							if (__LIB_5__::func_314(uParam0, "TRN2_SHOT", 0))
							{
								__LIB_2__::func_259(&uLocal_4868);
								__LIB_2__::func_259(&uLocal_4865);
								__LIB_11__::func_59(uParam0, 3);
							}
						}
						else if (__LIB_5__::func_314(uParam0, "TRN2_SHOT_INNO", 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
							__LIB_2__::func_259(&uLocal_4865);
							__LIB_11__::func_59(uParam0, 3);
						}
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_4868);
			}
			break;
		case 5:
			__LIB_2__::func_259(&uLocal_4868);
			__LIB_2__::func_259(&uLocal_4865);
			if (MAP::DOES_BLIP_EXIST(iLocal_4948[0]))
			{
				MAP::REMOVE_BLIP(&(iLocal_4948[0]));
			}
			__LIB_5__::func_486(uParam0, "TRN2_OBJ06", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_11__::func_59(uParam0, 6);
			break;
		case 6:
			if (!__LIB_9__::func_344())
			{
				__LIB_2__::func_259(&uLocal_4865);
			}
			if (__LIB_0__::func_899(&uLocal_4865))
			{
				if (__LIB_9__::func_178(&uLocal_4865) > 8f)
				{
					if (iLocal_4822 == 0)
					{
						if (__LIB_11__::func_647(uParam0, "TRN2_OBJ06", 4, 0, 0))
						{
							__LIB_2__::func_259(&uLocal_4868);
							__LIB_11__::func_59(uParam0, -1);
						}
					}
					else
					{
						__LIB_2__::func_259(&uLocal_4865);
						__LIB_11__::func_59(uParam0, -1);
					}
				}
			}
			break;
		case 7:
			__LIB_17__::func_524(uParam0, "TRN2_INCOMING", 2, 0);
			__LIB_2__::func_259(&uLocal_4868);
			__LIB_2__::func_259(&uLocal_4865);
			__LIB_11__::func_59(uParam0, -1);
			break;
		case 8:
			__LIB_17__::func_524(uParam0, "TRN2_INCOMING", 1, 0);
			__LIB_2__::func_259(&uLocal_4868);
			__LIB_2__::func_259(&uLocal_4865);
			__LIB_11__::func_59(uParam0, -1);
			break;
		case 9:
			__LIB_17__::func_524(uParam0, "TRN2_INCOMING", 0, 0);
			__LIB_2__::func_259(&uLocal_4868);
			__LIB_2__::func_259(&uLocal_4865);
			__LIB_11__::func_59(uParam0, 10);
			break;
		case 10:
			if (iLocal_4834 > 0)
			{
				if (__LIB_5__::func_314(uParam0, "TRN2_KILL_LAW", 0))
				{
					__LIB_11__::func_59(uParam0, 11);
				}
			}
			else
			{
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
		case 12:
			if (__LIB_5__::func_314(uParam0, "TRN2_PHEW", 0))
			{
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_2__::func_259(&uLocal_4865);
				iLocal_4948[0] = __LIB_4__::func_983(408396114, func_172(5, 0), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_4948[0], "TRN2_BLIP_MEET");
				__LIB_5__::func_486(uParam0, "TRN2_OBJ05", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_11__::func_59(uParam0, 13);
			}
			break;
		case 13:
			if (!__LIB_5__::func_463())
			{
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_11__::func_59(uParam0, 14);
			}
			break;
		case 14:
			if (__LIB_0__::func_899(&uLocal_4868))
			{
				if (__LIB_1__::func_583(&uLocal_4868) >= 1f)
				{
					if (__LIB_5__::func_314(uParam0, "TRN2_CAMP_BANT", 0))
					{
						__LIB_2__::func_259(&uLocal_4868);
						__LIB_11__::func_59(uParam0, 51);
					}
				}
			}
			break;
		case 16:
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(0, 0);
			}
			else if (__LIB_5__::func_314(uParam0, "TRN2_SPOT_MICAH", 0))
			{
				__LIB_2__::func_259(&uLocal_4868);
				__LIB_11__::func_59(uParam0, 51);
			}
			break;
		case 18:
			if (iLocal_4834 > 0)
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_17__::func_524(uParam0, "TRN2_CRATE", 0, 0);
					if (!__LIB_0__::func_30(iLocal_4966))
					{
						iLocal_4966 = __LIB_0__::func_45("TRN2_HELP_CRATE", 10000, 0, 0, 0, 1);
					}
					__LIB_2__::func_259(&uLocal_4868);
					__LIB_2__::func_259(&uLocal_4865);
					func_387(1024);
					__LIB_11__::func_59(uParam0, 6);
				}
			}
			break;
		case 19:
			if (iLocal_4834 > 0)
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_17__::func_524(uParam0, "TRN2_CRATE", 1, 0);
					__LIB_2__::func_259(&uLocal_4868);
					__LIB_2__::func_259(&uLocal_4865);
					func_387(2048);
					__LIB_11__::func_59(uParam0, -1);
				}
			}
			break;
		case 20:
			if (iLocal_4834 > 0)
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_17__::func_524(uParam0, "TRN2_CRATE", 2, 0);
					__LIB_2__::func_259(&uLocal_4868);
					__LIB_2__::func_259(&uLocal_4865);
					func_387(4096);
					__LIB_11__::func_59(uParam0, -1);
				}
			}
			break;
		case 51:
			break;
	}
}

bool func_1296(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = __LIB_4__::func_971(uParam0);
	iVar1 = 0;
	func_1786();
	if (PED::_0x33FA048675821DA7(Local_1722[5 /*195*/].f_1, 3))
	{
		PED::_0x06D26A96CA1BCA75(Local_1722[5 /*195*/].f_1, 3, 1f, 0);
	}
	if (PED::_0x33FA048675821DA7(Local_1722[9 /*195*/].f_1, 3))
	{
		PED::_0x06D26A96CA1BCA75(Local_1722[9 /*195*/].f_1, 3, 1f, 0);
	}
	if (PED::_0x33FA048675821DA7(Local_1722[10 /*195*/].f_1, 3))
	{
		PED::_0x06D26A96CA1BCA75(Local_1722[10 /*195*/].f_1, 3, 1f, 0);
	}
	if (!func_1239(8))
	{
		if (iLocal_4822 >= 11)
		{
			__LIB_2__::func_259(&uLocal_4880);
			if (LAW::_0xF46108C50A22B029())
			{
				LAW::_0x29CD4896ECB66C12();
			}
			func_1243(8);
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_4600, 1, 0) && !func_386(2))
	{
		func_387(16);
		func_387(2);
	}
	if (func_386(2))
	{
		if (!func_1787(0, 2))
		{
			return false;
		}
		else
		{
			func_1283(2);
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_4604, 1, 0) && !func_386(4))
	{
		if (!func_1272(1))
		{
			func_1310(1);
		}
		func_387(4);
	}
	if (func_386(4))
	{
		if (!func_1787(3, 4))
		{
			return false;
		}
		else
		{
			func_1283(4);
		}
	}
	if (func_386(16))
	{
		if (!func_1787(5, 5))
		{
			return false;
		}
		else
		{
			if (!PED::_0x33FA048675821DA7(Local_1722[5 /*195*/].f_1, 3))
			{
				PED::_0x2EB75FB86C41F026(Local_1722[5 /*195*/].f_1, 3, 1);
				PED::_0x06D26A96CA1BCA75(Local_1722[5 /*195*/].f_1, 3, 1f, 0);
			}
			if (!PED::IS_PED_USING_ACTION_MODE(Local_1722[5 /*195*/]))
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_1722[5 /*195*/], 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1722[5 /*195*/], func_172(7, 10), 0.75f, 0, 0, 0);
				PED::SET_PED_USING_ACTION_MODE(Local_1722[5 /*195*/], true, -1, 0);
			}
			func_1283(16);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1722[5 /*195*/]))
	{
		if (Local_1722[5 /*195*/].f_185 == 0)
		{
			if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_4543) >= 80)
			{
				if (!__LIB_0__::func_163(Local_1722[5 /*195*/], -2117564886))
				{
					TASK::TASK_COMBAT_HATED_TARGETS(Local_1722[5 /*195*/], -1f);
					Local_1722[5 /*195*/].f_185 = 1;
				}
			}
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_4606, 1, 0) && !func_386(8))
	{
		func_387(8);
	}
	if (func_386(8))
	{
		if (!func_1787(6, 8))
		{
			return false;
		}
		else
		{
			func_1283(8);
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_4610, 1, 0) && !func_386(32))
	{
		func_387(32);
	}
	if (func_386(32))
	{
		if (!func_1787(9, 10))
		{
			return false;
		}
		else
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_1722[9 /*195*/], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_1722[10 /*195*/], 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1722[9 /*195*/], func_172(7, 4), 0.75f, 0, 0, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1722[10 /*195*/], func_172(7, 5), 0.75f, 0, 0, 0);
			if (!func_1239(131072))
			{
				if (!__LIB_0__::func_163(Local_1722[9 /*195*/], 658540077))
				{
					Local_4772 = Local_1722[9 /*195*/].f_194;
					Local_4772.f_2 = 38;
					Local_4772.f_3 = 4220428;
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Local_1722[9 /*195*/], &Local_4772);
					if (!PED::_0x33FA048675821DA7(Local_1722[9 /*195*/].f_1, 3))
					{
						PED::_0x2EB75FB86C41F026(Local_1722[9 /*195*/].f_1, 3, 1);
						PED::_0x06D26A96CA1BCA75(Local_1722[9 /*195*/].f_1, 3, 1f, 0);
					}
				}
				if (!__LIB_0__::func_163(Local_1722[10 /*195*/], 658540077))
				{
					Local_4772 = Local_1722[10 /*195*/].f_194;
					Local_4772.f_2 = 42;
					Local_4772.f_3 = 4220428;
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Local_1722[10 /*195*/], &Local_4772);
					if (!PED::_0x33FA048675821DA7(Local_1722[10 /*195*/].f_1, 3))
					{
						PED::_0x2EB75FB86C41F026(Local_1722[10 /*195*/].f_1, 3, 1);
						PED::_0x06D26A96CA1BCA75(Local_1722[10 /*195*/].f_1, 3, 1f, 0);
					}
				}
				if (Local_1722[9 /*195*/].f_185)
				{
					if (!TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Local_1722[9 /*195*/]))
					{
						TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Local_1722[9 /*195*/], Global_35, 0, 0, -1082130432 /* Float: -1f */);
					}
					if (!TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Local_1722[10 /*195*/]))
					{
						TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Local_1722[10 /*195*/], Global_35, 0, 0, -1082130432 /* Float: -1f */);
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1722[9 /*195*/], 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1722[10 /*195*/], 0))
					{
						func_1243(131072);
					}
					func_1283(32);
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar2 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_1722[iVar2 /*195*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1722[iVar2 /*195*/]))
			{
				if (Local_1722[iVar2 /*195*/].f_184 == 1)
				{
					__LIB_2__::func_259(&(Local_1722[iVar2 /*195*/].f_12));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1722[iVar2 /*195*/]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1722[iVar2 /*195*/].f_1));
					Local_1722[iVar2 /*195*/].f_184 = 0;
					Local_1722[iVar2 /*195*/] = 0;
					Local_1722[iVar2 /*195*/].f_1 = 0;
					iLocal_4822++;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1722[iVar2 /*195*/]) && __LIB_0__::func_272(Local_1722[iVar2 /*195*/], 0))
		{
			iVar1++;
			func_1788(&(Local_1722[iVar2 /*195*/]));
			if (!func_1239(4))
			{
				func_1243(4);
			}
			if (!MAP::DOES_BLIP_EXIST(Local_1722[iVar2 /*195*/].f_2))
			{
				Local_1722[iVar2 /*195*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(-118010418, Local_1722[iVar2 /*195*/]);
				MAP::_BLIP_SET_MODIFIER(Local_1722[iVar2 /*195*/].f_2, 667736658);
			}
			if (PED::IS_PED_SHOOTING(Local_1722[iVar2 /*195*/]))
			{
				if (!func_1239(16))
				{
					__LIB_11__::func_59(uParam0, 5);
					func_1243(16);
				}
			}
			if (!PED::IS_PED_ON_MOUNT(Local_1722[iVar2 /*195*/]) && !ENTITY::IS_ENTITY_IN_AIR(Local_1722[iVar2 /*195*/], 1))
			{
				ENTITY::_SET_ENTITY_HEALTH(Local_1722[iVar2 /*195*/], 0, 0);
			}
			switch (Local_1722[iVar2 /*195*/].f_179)
			{
				case 0:
					func_1789(iVar2, 1);
					break;
				case 1:
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1722[iVar2 /*195*/], joaat("REL_PLAYER_ENEMY"));
					PED::SET_PED_COMBAT_MOVEMENT(Local_1722[iVar2 /*195*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1722[iVar2 /*195*/], 35, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1722[iVar2 /*195*/], 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1722[iVar2 /*195*/], 2, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1722[iVar2 /*195*/], 98, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_1722[iVar2 /*195*/], 512, true);
					PED::SET_PED_ACCURACY(Local_1722[iVar2 /*195*/], 50);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1722[iVar2 /*195*/], Local_1722[iVar2 /*195*/].f_193, true, 0, false, false);
					if (iVar2 == 5)
					{
						if (__LIB_1__::func_205(Global_35, iLocal_4607, 1, 0))
						{
							if (!__LIB_0__::func_163(Local_1722[iVar2 /*195*/], 658540077))
							{
								Local_4772 = Local_1722[iVar2 /*195*/].f_194;
								Local_4772.f_3 = 4220428;
								PED::_0x2EB75FB86C41F026(Local_1722[iVar2 /*195*/].f_1, 3, 0);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Local_1722[iVar2 /*195*/], &Local_4772);
								func_1789(iVar2, 2);
							}
						}
					}
					else if (iVar2 == 9 || iVar2 == 10)
					{
						if (__LIB_1__::func_205(Global_35, iLocal_4612, 1, 0))
						{
							Local_4772 = Local_1722[iVar2 /*195*/].f_194;
							Local_4772.f_2 = -1;
							Local_4772.f_1 = 42;
							Local_4772.f_3 = 4220422;
							PED::_0x2EB75FB86C41F026(Local_1722[iVar2 /*195*/].f_1, 3, 0);
							if (!__LIB_0__::func_163(Local_1722[iVar2 /*195*/], 242628503))
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Local_1722[iVar2 /*195*/], &Local_4772);
							}
							if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_1722[iVar2 /*195*/]))
							{
								TASK::WAYPOINT_PLAYBACK_RESUME(Local_1722[iVar2 /*195*/], false, -1, 0);
							}
							func_1789(iVar2, 2);
						}
					}
					else
					{
						func_1789(iVar2, 2);
					}
					break;
				case 2:
					if (Local_1722[iVar2 /*195*/].f_185)
					{
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Local_1722[iVar2 /*195*/]))
						{
							TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Local_1722[iVar2 /*195*/], Global_35, 0, 0, -1082130432 /* Float: -1f */);
						}
						func_1789(iVar2, 3);
					}
					break;
				case 3:
					if (iVar3 >= 1 || __LIB_0__::func_94(iLocal_4543, func_172(0, 3), 1) < 140f)
					{
						func_1789(iVar2, 5);
					}
					break;
				case 4:
					PED::SET_PED_FLEE_ATTRIBUTES(Local_1722[iVar2 /*195*/], 512, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1722[iVar2 /*195*/], joaat("REL_CIVMALE"));
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1722[iVar2 /*195*/], func_172(2, 3), 3f, -1, 0.25f, 0, 40000f);
					PED::SET_PED_KEEP_TASK(Local_1722[iVar2 /*195*/], true);
					PED::SET_PED_KEEP_TASK(Local_1722[iVar2 /*195*/].f_1, true);
					__LIB_0__::func_490(&(Local_1722[iVar2 /*195*/]), 1);
					__LIB_0__::func_490(&(Local_1722[iVar2 /*195*/].f_1), 1);
					func_1789(iVar2, 4);
					break;
			}
		}
		iVar0++;
	}
	if (!func_1239(512))
	{
		if (iLocal_4822 >= 11 && iVar1 == 0)
		{
			if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_4543) == Local_37[0 /*171*/])
			{
				if (__LIB_0__::func_899(&uLocal_4880))
				{
					if (__LIB_1__::func_583(&uLocal_4880) >= 4f)
					{
						if (!__LIB_5__::func_463())
						{
							bLocal_4849 = true;
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
							func_1243(512);
						}
					}
				}
			}
			else if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_4543) == Global_35)
			{
				bLocal_4849 = false;
				func_1243(512);
			}
		}
	}
	return true;
}

void func_1297(var uParam0)
{
	switch (iLocal_24)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[5 /*16*/]))
			{
				func_1739(5);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_4628[5 /*16*/], iLocal_4543, -1);
				iLocal_24 = 1;
			}
			break;
		case 1:
			if (func_386(16384))
			{
				iLocal_24 = 2;
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[5 /*16*/], false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_4628[5 /*16*/]);
			}
			else
			{
				iLocal_24 = 3;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_37[0 /*171*/], joaat("ARTHUR")))
			{
				if (!func_386(262144))
				{
					if (__LIB_5__::func_314(uParam0, "TRN2_IMTRYING_A", 0))
					{
						func_387(262144);
					}
				}
			}
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || __LIB_0__::func_399(Global_35, 1, 0, 0) != __LIB_0__::func_399(Global_35, 1, 0, 1))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[5 /*16*/]))
				{
					if (!ANIMSCENE::_0xB89FCFF19DAFFF28(Local_4628[5 /*16*/], "player_zero"))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_4628[5 /*16*/], "player_zero", Global_35);
					}
				}
			}
			if (__LIB_3__::func_439(Local_4628[5 /*16*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[5 /*16*/]))
				{
					if (func_386(16384))
					{
						func_1283(16384);
					}
					if (!__LIB_0__::func_899(&uLocal_4907))
					{
						__LIB_4__::func_89(&uLocal_4907, 0);
					}
					iLocal_24 = 4;
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_4628[5 /*16*/]);
				}
			}
			break;
		case 4:
			if (!__LIB_5__::func_463())
			{
				if (__LIB_10__::func_919(&uLocal_4907) >= 2)
				{
					if (__LIB_5__::func_314(uParam0, "TRN2_LAW_CHASE", 0))
					{
						iLocal_24 = 1;
					}
				}
			}
			else
			{
				__LIB_2__::func_259(&uLocal_4907);
			}
			break;
	}
}

void func_1298()
{
	switch (iLocal_20)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[3 /*16*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_37[2 /*171*/]) && ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]))
				{
					func_1739(3);
					iLocal_20 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_205(Global_35, iLocal_4614, 1, 0))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[3 /*16*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_4628[3 /*16*/]);
				}
				else
				{
					iLocal_20 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_665(Local_37[2 /*171*/], Global_35, 1, 1) <= 25f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_4628[3 /*16*/], "Loop_Idle", true, false);
				iLocal_20 = 3;
			}
			break;
		case 3:
			if (__LIB_3__::func_439(Local_4628[3 /*16*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[3 /*16*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_4628[3 /*16*/]);
				}
			}
			break;
	}
}

void func_1299()
{
	switch (iLocal_21)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[4 /*16*/]))
			{
				func_1739(4);
				iLocal_21 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_205(Global_35, iLocal_4615, 1, 0))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[4 /*16*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_4628[4 /*16*/]);
				}
				else
				{
					iLocal_21 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_665(Local_37[2 /*171*/], Global_35, 1, 1) <= 25f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_4628[4 /*16*/], "Loop_Idle", true, false);
				iLocal_21 = 3;
			}
			break;
		case 3:
			if (__LIB_3__::func_439(Local_4628[4 /*16*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_4628[4 /*16*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_4628[4 /*16*/]);
				}
			}
			break;
	}
}

void func_1300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_272(Local_1722[iVar1 /*195*/], 0))
		{
			iVar2++;
		}
		iVar0++;
	}
	iLocal_4834 = iVar2;
}

void func_1301()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar2 = iVar0;
		if (__LIB_0__::func_272(Local_1722[iVar2 /*195*/], 0))
		{
			fVar1 = __LIB_0__::func_665(Local_1722[iVar2 /*195*/], iLocal_4543, 1, 1);
			if (fVar1 < 45f)
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	iLocal_4836 = iVar3;
}

void func_1302()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, func_172(5, 0), 1);
	if (iLocal_4836 >= 6 || fVar0 <= 474f)
	{
		iLocal_4835 = 2;
	}
	else if (iLocal_4836 >= 4 || fVar0 <= 580f)
	{
		iLocal_4835 = 8;
	}
	else if (iLocal_4836 <= 3)
	{
		iLocal_4835 = 11;
	}
}

int func_1303(int iParam0, int iParam1)
{
	var uVar0;
	return func_1791(&uVar0, iParam0, iParam1);
}

void func_1304()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!func_386(16384))
		{
			if (__LIB_1__::func_205(Local_1722[iVar1 /*195*/], iLocal_4601, 1, 0))
			{
				if (AUDIO::_0xE368E8422C860BA7("bugle_1", "NTS3_Sounds", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("bugle_2", Local_1722[1 /*195*/], "NTS3_Sounds", false, 0, 0);
					func_387(16384);
				}
			}
		}
		if (__LIB_0__::func_272(Local_1722[6 /*195*/], 0))
		{
			if (!func_386(32768))
			{
				if (AUDIO::_0xE368E8422C860BA7("bugle_1", "NTS3_Sounds", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("bugle_1", Local_1722[6 /*195*/], "NTS3_Sounds", false, 0, 0);
					func_387(32768);
				}
			}
		}
		if (__LIB_0__::func_272(Local_1722[9 /*195*/], 0))
		{
			if (!func_386(65536))
			{
				if (AUDIO::_0xE368E8422C860BA7("bugle_1", "NTS3_Sounds", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("bugle_2", Local_1722[9 /*195*/], "NTS3_Sounds", false, 0, 0);
					func_387(65536);
				}
			}
		}
		iVar0++;
	}
}

void func_1306()
{
	int iVar0;
	int iVar1;
	switch (iLocal_4833)
	{
		case 0:
			vLocal_4843 = { 0.375f, -0.5f, 0.9f };
			break;
		case 1:
			vLocal_4843 = { -0.4f, -0.5f, 0.4f };
			break;
		case 2:
			vLocal_4843 = { -0.4f, -0.5f, 0.9f };
			break;
		case 3:
			vLocal_4843 = { 0.325f, 0.425f, 0.825f };
			break;
		case 4:
			vLocal_4843 = { 0.145f, -0.5f, 0.3f };
			break;
		case 5:
			vLocal_4843 = { -0.325f, 0.45f, 0.425f };
			break;
		case 6:
			vLocal_4843 = { 0.425f, 1.425f, 1.15f };
			break;
		case 7:
			vLocal_4843 = { -0.025f, 0.45f, 0.425f };
			break;
		case 8:
			vLocal_4843 = { -0.025f, 0.45f, 0.425f };
			break;
		case 10:
			vLocal_4843 = { 0.425f, 1.425f, 1.15f };
			break;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_272(Local_1722[iVar1 /*195*/], 0))
		{
			if (__LIB_0__::func_665(iLocal_4543, Local_1722[iVar1 /*195*/], 1, 1) <= 50f)
			{
				iLocal_4541 = Local_1722[iVar1 /*195*/];
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(iLocal_4541))
				{
					TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iLocal_4541);
				}
			}
			else
			{
				iVar0++;
			}
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(iLocal_4541))
			{
				TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(iLocal_4541, iLocal_4548, 0, 0, -1082130432 /* Float: -1f */);
				PED::SET_PED_ACCURACY(iLocal_4541, 100);
				PED::SET_PED_SHOOT_RATE(iLocal_4541, 500);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_4548, iLocal_4546, 0, vLocal_4843, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				func_387(512);
				func_1283(256);
			}
		}
	}
}

void func_1307()
{
	if (PED::IS_PED_SHOOTING(iLocal_4541))
	{
		if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_4548, true, false), 0.1f, false, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_4548, true, false), 0.1f, false))
		{
			if (ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_4546, iLocal_4541, 1, 1))
			{
				PED::SET_PED_ACCURACY(iLocal_4541, 50);
				if (iLocal_4833 != 8 || iLocal_4833 != 10)
				{
					iLocal_4833++;
				}
				__LIB_2__::func_259(&uLocal_4892);
				TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iLocal_4541);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_4546);
				if (!func_386(33554432))
				{
					func_387(33554432);
				}
			}
		}
	}
	if (!__LIB_0__::func_272(iLocal_4541, 0))
	{
		func_1283(512);
	}
	if (func_386(33554432))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_4541, 0))
		{
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(iLocal_4541))
			{
				TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(iLocal_4541, Global_35, 0, 0, -1082130432 /* Float: -1f */);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_4546);
				func_1283(33554432);
				func_1283(512);
			}
		}
	}
}

bool func_1308(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar2 = iVar0;
		if (__LIB_0__::func_272(Local_1722[iVar2 /*195*/], 0))
		{
			fVar1 = __LIB_0__::func_665(Local_1722[iVar2 /*195*/], iParam0, 1, 1);
			if (fVar1 < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1310(int iParam0)
{
	if (!func_1272(iParam0))
	{
		__LIB_1__::func_683(&iLocal_4821, iParam0);
	}
}

void func_1313(int* iParam0, bool bParam1)
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
		func_1793(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_1318()
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
	iVar0 = func_1303(6291456, 0);
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

int func_1342(var uParam0, int iParam1, int iParam2)
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
		return func_1342(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1373(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
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
						__LIB_9__::func_203(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_846(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1374(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_1814(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
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

bool func_1409(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
					__LIB_9__::func_374(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_382(uParam0, iParam5);
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
				__LIB_5__::func_382(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_11__::func_110(uParam0, iParam5);
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
			__LIB_9__::func_379(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_2262));
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
			if (uParam0->f_2075 >= 0 || __LIB_9__::func_178(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_9__::func_180(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_2__::func_259(&(uParam0->f_2262));
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
						__LIB_5__::func_382(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_180(uParam0, iParam5))
			{
				__LIB_5__::func_382(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1415(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_5__::func_378(uParam4);
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
					__LIB_10__::func_966(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
				{
					__LIB_8__::func_726(uParam4, 4);
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
				__LIB_8__::func_726(uParam4, 3);
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
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (__LIB_5__::func_577(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
					{
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_726(uParam4, 4);
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
						__LIB_10__::func_966(uParam4, &uParam0, uParam5);
						__LIB_8__::func_726(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_8__::func_726(uParam4, 4);
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
					__LIB_2__::func_259(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_726(uParam4, 4);
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
				__LIB_5__::func_378(uParam4);
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
				__LIB_10__::func_934(uParam4);
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
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
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
				__LIB_10__::func_934(uParam4);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
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
			__LIB_8__::func_726(uParam4, 4);
			break;
	}
	return false;
}

int func_1423(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1913(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

void func_1427(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		if (!PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		}
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::TASK_STAND_STILL(iParam0, -1);
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
}

bool func_1435(vector3 vParam0, float fParam3)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4543))
	{
		iLocal_4543 = VEHICLE::CREATE_VEHICLE(iLocal_28, vParam0, fParam3, true, true, false, false);
		VEHICLE::_0xE1A83D4A3B5D7938(iLocal_4543);
		VEHICLE::_0x226C6A4E3346D288(iLocal_4543, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_4543, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_4543, 0f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 2, true);
	}
	else if (__LIB_4__::func_475(&iLocal_4543) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, false, false))
	{
		AUDIO::_FORCE_VEHICLE_ENGINE_AUDIO(iLocal_4543, "WAGON02X_TRN2");
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 3, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 4, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 5, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 6, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 7, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 8, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_4543, 9, true);
		VEHICLE::_SET_VEHICLE_TINT(iLocal_4543, 4);
		VEHICLE::_SET_VEHICLE_LIVERY(iLocal_4543, 4);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iLocal_4534[iVar0] = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_4543, iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_4534[iVar0]))
			{
				PED::_0x73B6F907B913C860(iLocal_4534[iVar0], 0f);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_4534[iVar0], false);
				__LIB_1__::func_991(iLocal_4534[iVar0], joaat("HONOR_EVENT_KILL_HORSE"));
				PED::SET_PED_CONFIG_FLAG(iLocal_4534[iVar0], 253, false);
			}
			__LIB_9__::func_820(iLocal_4534[iVar0], 1, 45);
			iVar0++;
		}
		func_1243(128);
		return true;
	}
	return false;
}

void func_1436(bool bParam0)
{
	if (PROPSET::_DOES_PROPSET_EXIST(PROPSET::_GET_VEHICLE_PROPSET(iLocal_4543)))
	{
		PROPSET::_DELETE_PROPSET(PROPSET::_GET_VEHICLE_PROPSET(iLocal_4543), true, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4547))
	{
		iLocal_4547 = OBJECT::CREATE_OBJECT(joaat("P_TNT_TRAINROBBERY_01X"), 2579.888f, 520.3545f, 75.0227f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_4547, 0f, 0f, 6.5312f, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_4547, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_4547, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_4547, bParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4546))
	{
		iLocal_4546 = OBJECT::CREATE_OBJECT(joaat("P_CRATECOVER06X_TNT"), 2576.033f, 520.1063f, 68.3836f, true, true, false, false, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_4546, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_4546, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_4546, 0f, 5f, 6.5312f, 2, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_4546, true, iLocal_4818);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_4546, bParam0);
	}
}

void func_1437(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iVar1, bParam1);
		}
		iVar0++;
	}
}

void func_1440(var uParam0)
{
	if (__LIB_4__::func_939(uParam0) == 2)
	{
		fLocal_4839 = MISC::GET_RANDOM_FLOAT_IN_RANGE(6f, 8f);
	}
	else
	{
		fLocal_4839 = MISC::GET_RANDOM_FLOAT_IN_RANGE(6.5f, 10f);
	}
}

void func_1456(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar2 = 1;
	switch (iLocal_4771)
	{
		case 0:
			if (iVar0 == iLocal_16)
			{
				if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_11__::func_66(uParam0, "TRN2_FAIL_LAW", "", 1, 0);
				}
				if (__LIB_0__::func_272(Local_37[0 /*171*/], 0))
				{
					func_1923(uParam0, 3, 50f, 100f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"));
				}
				if (func_1239(33554432))
				{
					if (func_1924())
					{
						bLocal_4850 = true;
						func_1777("TRN2_FAIL_PINK");
					}
				}
			}
			if (iVar0 == iLocal_17)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_35) && ENTITY::DOES_ENTITY_EXIST(Local_37[0 /*171*/]))
				{
					if (__LIB_0__::func_272(Local_37[0 /*171*/], 0))
					{
						if (func_1923(uParam0, 3, 60f, 90f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
						{
							if (iLocal_4838 == 1)
							{
								if (MAP::DOES_BLIP_EXIST(iLocal_4955))
								{
									MAP::REMOVE_BLIP(&iLocal_4955);
								}
							}
							if (iLocal_4838 == 2)
							{
								if (MAP::DOES_BLIP_EXIST(iLocal_4948[4]))
								{
									MAP::REMOVE_BLIP(&(iLocal_4948[4]));
								}
							}
							if (iLocal_4838 == 3)
							{
								if (MAP::DOES_BLIP_EXIST(iLocal_4955))
								{
									MAP::REMOVE_BLIP(&iLocal_4955);
								}
							}
							if (iLocal_4838 == 4)
							{
								if (MAP::DOES_BLIP_EXIST(iLocal_4955))
								{
									MAP::REMOVE_BLIP(&iLocal_4955);
								}
							}
						}
						else
						{
							if (iLocal_4838 == 1)
							{
								if (__LIB_4__::func_971(uParam0) == 0)
								{
									if (!MAP::DOES_BLIP_EXIST(iLocal_4955))
									{
										iLocal_4955 = __LIB_4__::func_983(408396114, vLocal_4840, 1);
									}
								}
							}
							if (iLocal_4838 == 2)
							{
								if (!MAP::DOES_BLIP_EXIST(iLocal_4948[4]))
								{
									iLocal_4948[4] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_551[4 /*195*/]);
								}
							}
							if (iLocal_4838 == 3)
							{
								if (!MAP::DOES_BLIP_EXIST(iLocal_4955))
								{
									iLocal_4955 = __LIB_4__::func_983(408396114, vLocal_4840, 1);
								}
							}
							if (iLocal_4838 == 4)
							{
								if (!MAP::DOES_BLIP_EXIST(iLocal_4955))
								{
									iLocal_4955 = __LIB_1__::func_863(iLocal_4543, 408396114, 1, 1);
								}
							}
						}
					}
				}
			}
			if (iVar0 == iLocal_17)
			{
				if (__LIB_0__::func_393(iLocal_4543, iLocal_4597, 0, 1))
				{
					if (!func_1239(2))
					{
						func_1243(2);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_4543) && !__LIB_4__::func_257(iLocal_4543))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
					{
						if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_4543) > 155 && TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_4543) < 166)
						{
							func_1777("CONVOY_ABANDON");
						}
					}
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
				{
					if (func_386(67108864))
					{
						TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_4543, 10f);
					}
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_551[0 /*195*/].f_1, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_551[0 /*195*/].f_1, 1.75f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (!__LIB_0__::func_272(Local_37[0 /*171*/], 1))
				{
					bLocal_4850 = true;
					func_1777("TRN2_FAIL_BILLDEAD");
				}
				if (!__LIB_0__::func_91())
				{
					if (__LIB_4__::func_971(uParam0) == 0)
					{
						iVar1 = 0;
						while (iVar1 < 6)
						{
							if (__LIB_1__::func_205(Local_551[iVar1 /*195*/], iLocal_4625, 1, 0))
							{
								if (!bLocal_4853)
								{
									bLocal_4853 = true;
								}
							}
							iVar1++;
						}
						if (bLocal_4853)
						{
							if (!__LIB_1__::func_205(Global_35, iLocal_4616, 1, 0))
							{
								iVar1 = 0;
								while (iVar1 < 6)
								{
									if (((((PED::_0x7F9B9791D4CB71F6(Local_551[0 /*195*/], Global_35, iVar2, 0) == 1 || PED::_0x7F9B9791D4CB71F6(Local_551[1 /*195*/], Global_35, iVar2, 0) == 1) || PED::_0x7F9B9791D4CB71F6(Local_551[2 /*195*/], Global_35, iVar2, 0) == 1) || PED::_0x7F9B9791D4CB71F6(Local_551[3 /*195*/], Global_35, iVar2, 0) == 1) || PED::_0x7F9B9791D4CB71F6(Local_551[4 /*195*/], Global_35, iVar2, 0) == 1) || PED::_0x7F9B9791D4CB71F6(Local_551[5 /*195*/], Global_35, iVar2, 0) == 1)
									{
										if (__LIB_1__::func_205(Global_35, iLocal_4626, 1, 0) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
										{
										}
										else
										{
											func_1777("TRN2_FAIL_SPOT");
										}
									}
									iVar1++;
								}
							}
						}
					}
				}
			}
			if (iVar0 >= iLocal_17)
			{
				if (((CAM::IS_SCREEN_FADED_IN() && ENTITY::DOES_ENTITY_EXIST(iLocal_4543)) && func_1239(128)) && !func_1239(1))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, true, false))
					{
					}
					if (VEHICLE::_0x18714953CCED17D3(iLocal_4543))
					{
					}
					if (__LIB_3__::func_320(iLocal_4543) <= 0)
					{
					}
					if (OBJECT::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(ENTITY::GET_ENTITY_COORDS(iLocal_4543, true, false), 3f, joaat("P_TNT_TRAINROBBERY_01X"), 1))
					{
					}
					if (VEHICLE::_0xDDBEA5506C848227(iLocal_4543))
					{
					}
					if ((((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, true, false) || VEHICLE::_0x18714953CCED17D3(iLocal_4543)) || __LIB_3__::func_320(iLocal_4543) <= 0) || OBJECT::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(ENTITY::GET_ENTITY_COORDS(iLocal_4543, true, false), 3f, joaat("P_TNT_TRAINROBBERY_01X"), 1)) || VEHICLE::_0xDDBEA5506C848227(iLocal_4543))
					{
						func_1777("TRN2_FAIL_SC");
					}
				}
			}
			break;
		case 1:
			if (bLocal_4850)
			{
				if (__LIB_0__::func_899(&uLocal_4889))
				{
					if (__LIB_1__::func_583(&uLocal_4889) >= 4f)
					{
						__LIB_11__::func_66(uParam0, sLocal_4964, "", 1, 0);
						iLocal_4771 = 2;
					}
				}
			}
			else if (__LIB_0__::func_899(&uLocal_4889))
			{
				if (__LIB_1__::func_583(&uLocal_4889) >= 1.5f)
				{
					__LIB_11__::func_66(uParam0, sLocal_4964, "", 1, 0);
					iLocal_4771 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_1468(var uParam0)
{
	struct<8> Var0;
	func_1936(uParam0);
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
	__LIB_1__::func_561(&(uParam0->f_13106));
	__LIB_2__::func_259(&(uParam0->f_13112));
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
	__LIB_5__::func_472(uParam0);
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

void func_1657(int iParam0)
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
	func_662(iParam0, 1, 1, -142743235, 1);
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
		func_662(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1662(struct<6> Param0)
{
	if (!func_2091(Param0.f_4, 1))
	{
	}
	if (!func_2091(Param0, 1))
	{
	}
	if (!func_2091(Param0.f_2, 1))
	{
	}
	if (!func_2091(Param0.f_5, 1))
	{
	}
	if (!func_2091(Param0.f_3, 1))
	{
	}
	if (!func_2091(Param0.f_1, 1))
	{
	}
}

bool func_1713(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3868[iVar1 /*195*/].f_1))
		{
			switch (iVar1)
			{
				case 0:
					vVar2 = { func_172(10, 0) };
					fVar5 = func_868(10, 0);
					iVar6 = iLocal_32;
					break;
				case 1:
					vVar2 = { func_172(10, 1) };
					fVar5 = func_868(10, 1);
					iVar6 = iLocal_33;
					break;
				case 2:
					vVar2 = { func_172(10, 2) };
					fVar5 = func_868(10, 2);
					iVar6 = iLocal_34;
					break;
			}
			Local_3868[iVar1 /*195*/].f_1 = __LIB_1__::func_545(iVar6, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3868[iVar1 /*195*/].f_1, true);
			__LIB_1__::func_991(Local_3868[iVar1 /*195*/].f_1, joaat("HONOR_EVENT_KILL_HORSE"));
			PED::SET_PED_CONFIG_FLAG(Local_3868[iVar1 /*195*/].f_1, 186, false);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_3868[iVar1 /*195*/].f_1);
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

void func_1729(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4545))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_4545);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_37[1 /*171*/]))
	{
		__LIB_11__::func_757(uParam0, 6, Local_37[1 /*171*/], 0, 0, 1, 0);
	}
}

void func_1731()
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::DOES_GROUP_EXIST(iLocal_4789))
		{
			iLocal_4789 = PED::CREATE_GROUP(2);
			PED::SET_GROUP_FORMATION(iLocal_4789, 10);
			PED::SET_PED_CONFIG_FLAG(Local_37[0 /*171*/], 279, true);
			PED::SET_PED_AS_GROUP_LEADER(Local_37[0 /*171*/], iLocal_4789, false);
			PED::_0x9BBEAF8B0C007F1E(Local_37[0 /*171*/], 0);
			PED::_0x154B7E841AC7412F(iLocal_4789, 1);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), Local_37[0 /*171*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
			PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), Local_37[0 /*171*/], 1);
		}
	}
}

bool func_1737()
{
	float fVar0;
	if (__LIB_0__::func_163(Local_37[0 /*171*/], 242628503))
	{
		fVar0 = 10f;
	}
	else
	{
		fVar0 = 15f;
	}
	if (__LIB_0__::func_665(Global_35, Local_37[0 /*171*/], 1, 1) < fVar0)
	{
		return true;
	}
	return false;
}

void func_1739(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "BillWilliamson", Local_37[0 /*171*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "JohnMarston", Local_37[2 /*171*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "MicahBell", Local_37[1 /*171*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "ARTHUR", Global_35, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "CS_BillWilliamson", Local_37[0 /*171*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "U_M_Y_ARMENLISTED_01", Local_551[0 /*195*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "U_M_Y_ARMENLISTED_02", Local_551[1 /*195*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "P_C_HORSE_01", Local_551[0 /*195*/].f_1, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "w_rifle_boltaction01", iLocal_4915, 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "CS_BillWilliamson", Local_37[0 /*171*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "U_M_Y_ARMENLISTED_03", Local_551[5 /*195*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "U_M_Y_ARMENLISTED_04", Local_551[4 /*195*/], 0);
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "CS_BillWilliamson", Local_37[0 /*171*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "player_zero", Global_35, 0);
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "CS_BillWilliamson", Local_37[0 /*171*/], 0);
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "Bill_Horse", Local_37[0 /*171*/].f_1, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "CS_BillWilliamson", Local_37[0 /*171*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_4628[iParam0 /*16*/], "Carcano", iLocal_4914, 0);
			break;
	}
}

Vector3 func_1755(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return -0.57f, -2.75f, -1f;
		case 9:
			return 0.57f, -2.75f, -1f;
		case 10:
			return 1.31f, 1.4f, -1f;
		case 11:
			return 1.3f, -2.1f, -1f;
		case 12:
			return -1.46f, 1.28f, -1f;
		case 13:
			return -1.25f, -1.68f, -1f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1757(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	if (!func_2160(0, 3, 1, bParam4))
	{
		return false;
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_551[iVar1 /*195*/]))
		{
			switch (iVar1)
			{
				case 0:
					if (bParam4)
					{
						vVar3 = { func_172(1, 6) + Vector(0f, 0f, 0.5f) };
						fVar6 = func_868(1, 6);
					}
					else
					{
						vVar3 = { func_172(1, 12) + Vector(0f, 0f, 0.5f) };
						fVar6 = func_868(1, 12);
					}
					bVar2 = true;
					iVar7 = 313000949;
					break;
				case 1:
					if (bParam4)
					{
						vVar3 = { func_172(1, 7) + Vector(0f, 0f, 0.5f) };
						fVar6 = func_868(1, 7);
					}
					else
					{
						vVar3 = { func_172(1, 13) + Vector(0f, 0f, 0.5f) };
						fVar6 = func_868(1, 13);
					}
					bVar2 = true;
					iVar7 = 609199960;
					break;
				case 2:
					if (bParam4)
					{
						vVar3 = { func_172(1, 8) + Vector(0f, 0f, 0.5f) };
						fVar6 = func_868(1, 8);
					}
					else
					{
						vVar3 = { func_172(1, 14) + Vector(0f, 0f, 0.5f) };
						fVar6 = func_868(1, 14);
					}
					bVar2 = true;
					iVar7 = 487954660;
					break;
				case 3:
					if (bParam4)
					{
						vVar3 = { func_172(1, 9) + Vector(0f, 0f, 0.5f) };
						fVar6 = func_868(1, 9);
					}
					else
					{
						vVar3 = { func_172(1, 15) + Vector(0f, 0f, 0.5f) };
						fVar6 = func_868(1, 15);
					}
					bVar2 = true;
					iVar7 = 246152209;
					break;
				case 4:
					if (bParam4)
					{
						vVar3 = { func_172(1, 10) };
						fVar6 = func_868(1, 10);
					}
					else
					{
						vVar3 = { func_172(1, 16) };
						fVar6 = func_868(1, 16);
					}
					iVar7 = 880488647;
					break;
				case 5:
					if (bParam4)
					{
						vVar3 = { func_172(1, 10) };
						fVar6 = func_868(1, 10);
					}
					else
					{
						vVar3 = { func_172(1, 16) };
						fVar6 = func_868(1, 16);
					}
					iVar7 = -802281761;
					break;
			}
			Local_551[iVar1 /*195*/] = __LIB_1__::func_545(iLocal_30, vVar3, fVar6, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_551[iVar1 /*195*/]);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_551[iVar1 /*195*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_551[iVar1 /*195*/], 186, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_551[iVar1 /*195*/], 512, true);
			TASK::_0x42CFD8FD8CC8DC69(Local_551[iVar1 /*195*/], 1);
			__LIB_1__::func_991(Local_551[iVar1 /*195*/], 0);
			PED::SET_PED_ACCURACY(Local_551[iVar1 /*195*/], 40);
			if (iVar1 == 0)
			{
				PED::_0x8ACC0506743A8A5C(Local_551[iVar1 /*195*/], joaat("SCRIPT_STARTOFCOMBAT_COVERINGFIRE"), 2, -1082130432 /* Float: -1f */);
			}
			else
			{
				PED::_0x8ACC0506743A8A5C(Local_551[iVar1 /*195*/], joaat("SCRIPT_STARTOFCOMBAT_UNDERFIRE"), 2, -1082130432 /* Float: -1f */);
			}
			PED::_0x9238A3D970BBB0A9(Local_551[iVar1 /*195*/], -820192119);
			PED::SET_COMBAT_FLOAT(Local_551[iVar1 /*195*/], 31, 1000f);
			PED::SET_COMBAT_FLOAT(Local_551[iVar1 /*195*/], 65, 1000f);
			PED::SET_COMBAT_FLOAT(Local_551[iVar1 /*195*/], 63, 0f);
			if (iVar1 == 0)
			{
				__LIB_5__::func_106(uParam0, Local_551[0 /*195*/], "TRN2_ConvoyGuard1", 0);
			}
			ENTITY::_SET_ENTITY_HEALTH(Local_551[iVar1 /*195*/], 90, 0);
			if (bVar2)
			{
				__LIB_1__::func_571(Local_551[iVar1 /*195*/], Local_551[iVar1 /*195*/].f_1, 0, -1, 1);
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_551[iVar1 /*195*/], "TRN2_Convoy_Group", 0f);
			PED::_SET_PED_BODY_COMPONENT(Local_551[iVar1 /*195*/], iVar7);
			PED::_UPDATE_PED_VARIATION(Local_551[iVar1 /*195*/], false, true, true, true, false);
			if (bParam3)
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

void func_1758(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_551[iVar1 /*195*/].f_1))
		{
			switch (iVar1)
			{
				case 0:
					if (bParam0)
					{
						vVar2 = { func_172(1, 6) };
						fVar5 = func_868(1, 6);
					}
					else
					{
						vVar2 = { func_172(1, 12) };
						fVar5 = func_868(1, 12);
					}
					break;
				case 1:
					if (bParam0)
					{
						vVar2 = { func_172(1, 7) };
						fVar5 = func_868(1, 7);
					}
					else
					{
						vVar2 = { func_172(1, 13) };
						fVar5 = func_868(1, 13);
					}
					break;
				case 2:
					if (bParam0)
					{
						vVar2 = { func_172(1, 8) };
						fVar5 = func_868(1, 8);
					}
					else
					{
						vVar2 = { func_172(1, 14) };
						fVar5 = func_868(1, 14);
					}
					break;
				case 3:
					if (bParam0)
					{
						vVar2 = { func_172(1, 9) };
						fVar5 = func_868(1, 9);
					}
					else
					{
						vVar2 = { func_172(1, 15) };
						fVar5 = func_868(1, 15);
					}
					break;
			}
			func_846(Local_551[iVar1 /*195*/].f_1, vVar2, fVar5, 2, 1073741824 /* Float: 2f */);
		}
		iVar0++;
	}
	iVar0 = 4;
	while (iVar0 <= 5)
	{
		iVar6 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_551[iVar6 /*195*/]))
		{
			switch (iVar6)
			{
				case 4:
					if (bParam0)
					{
						vVar7 = { func_172(1, 10) };
						fVar10 = func_868(1, 10);
					}
					else
					{
						vVar7 = { func_172(1, 16) };
						fVar10 = func_868(1, 16);
					}
					break;
				case 5:
					if (bParam0)
					{
						vVar7 = { func_172(1, 10) };
						fVar10 = func_868(1, 10);
					}
					else
					{
						vVar7 = { func_172(1, 16) };
						fVar10 = func_868(1, 16);
					}
					break;
			}
			func_846(Local_551[iVar6 /*195*/], vVar7, fVar10, 2, 1073741824 /* Float: 2f */);
		}
		iVar0++;
	}
}

void func_1762()
{
	if (PED::DOES_GROUP_EXIST(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (PED::_0x0455546F23FF08E4(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_37[0 /*171*/]))
			{
				if (PED::IS_PED_GROUP_MEMBER(Local_37[0 /*171*/], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_37[0 /*171*/]);
				}
			}
		}
	}
}

void func_1763(var uParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	struct<16> Var1;
	vector3 vVar196[24];
	__LIB_4__::func_89(&uLocal_4910, 0);
	if (__LIB_9__::func_178(&uLocal_4910) > fLocal_4839)
	{
		iVar0 = __LIB_17__::func_522(uParam2);
		if (iVar0 >= 0)
		{
			Var1.f_15 = 117;
			Var1.f_15.f_118 = 45;
			if (func_2162(iParam1, &Var1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fParam3))
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar0 /*5*/]))
				{
					__LIB_11__::func_751(uParam0, (*uParam2)[iVar0 /*5*/]);
				}
				__LIB_5__::func_106(uParam0, Var1, (uParam2[iVar0 /*5*/])->f_2, 0);
				(*uParam2)[iVar0 /*5*/] = Var1;
				StringCopy(&cVar196, (uParam2[iVar0 /*5*/])->f_1, 24);
				if (__LIB_1__::func_104(&(uParam0->f_5310), cVar196, 1, (uParam2[iVar0 /*5*/])->f_4, 0, 0))
				{
					__LIB_1__::func_561(&uLocal_4910);
					func_1440(uParam0);
					(uParam2[iVar0 /*5*/])->f_4++;
				}
			}
		}
	}
}

void func_1764()
{
	vLocal_4840 = { func_172(1, 2) };
	vLocal_4840.f_2 = (vLocal_4840.z + 5f);
	if (!MAP::DOES_BLIP_EXIST(iLocal_4955))
	{
		iLocal_4955 = __LIB_4__::func_983(408396114, vLocal_4840, 1);
	}
}

void func_1767(int iParam0, int iParam1)
{
	if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[iParam0 /*16*/], false) && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_4628[iParam0 /*16*/], func_410(iParam1))) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_4628[iParam0 /*16*/], func_410(iParam1)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_4628[iParam0 /*16*/], func_410(iParam1));
	}
}

int func_1768(int iParam0, int iParam1)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_4628[iParam0 /*16*/], false) && !ANIMSCENE::_0x1F0E401031E20146(Local_4628[iParam0 /*16*/], func_410(iParam1)))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_4628[iParam0 /*16*/], func_410(iParam1)))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_4628[iParam0 /*16*/], func_410(iParam1), true);
			return 1;
		}
	}
	return 0;
}

bool func_1769()
{
	int iVar0;
	struct<28> Var1;
	Var1.f_8 = -1;
	Var1.f_17 = 1097859072;
	Var1.f_18 = 1000;
	Var1.f_19 = 1067450368;
	Var1.f_20 = 5000;
	Var1.f_21 = 42;
	Var1.f_22 = 1103626240;
	Var1.f_23 = 1077936128;
	Var1.f_24 = 1106247680;
	Var1.f_25 = 1103101952;
	Var1.f_26 = 1097859072;
	Var1.f_27 = 1103626240;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_0__::func_272(Local_551[iVar0 /*195*/], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_551[iVar0 /*195*/], Global_35, 1, 1))
			{
				return true;
			}
			if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_551[iVar0 /*195*/], true, false), 10f, true, true) && !WEAPON::_0xBDD9C235D8D1052E(Global_35))
			{
				return true;
			}
			if (__LIB_2__::func_875(Global_35, Local_551[iVar0 /*195*/], &Var1))
			{
				return true;
			}
			if (__LIB_2__::func_877(Global_35, Local_551[iVar0 /*195*/], &Var1, 0))
			{
				return true;
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_551[iVar0 /*195*/], true, false), 50f))
			{
				return true;
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if ((PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_0xBDD9C235D8D1052E(Global_35)) && WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_399(Global_35, 1, 0, 0)))
		{
			return true;
		}
		if (PED::IS_PED_SHOOTING(Global_35) && __LIB_0__::func_399(Global_35, 1, 0, 1) == joaat("WEAPON_THROWN_DYNAMITE"))
		{
			return true;
		}
	}
	if (iLocal_4770 == 15)
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_4543, Global_35, 1, 1))
	{
		return true;
	}
	return false;
}

void func_1775()
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, false, false))
	{
		return;
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_4543, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_551[4 /*195*/]))
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_551[4 /*195*/], iLocal_4543, func_413(2), 0, 0, 40, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_551[5 /*195*/]))
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_551[5 /*195*/], iLocal_4543, func_413(2), 0, 0, 40, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
		}
	}
}

void func_1776(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_4543, false, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_551[0 /*195*/]))
	{
		if (PED::IS_PED_ON_MOUNT(Local_551[0 /*195*/]))
		{
			if (bParam0)
			{
				if (!Local_551[0 /*195*/].f_188)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_4628[1 /*16*/], "P_C_HORSE_01", Local_551[0 /*195*/].f_1);
					TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_551[0 /*195*/], iLocal_4543, func_413(2), (-2.25f * 1f), (4f * 2.5f), 0, 4227112, -1, bParam0);
					Local_551[0 /*195*/].f_188 = 1;
				}
			}
			else if (!__LIB_0__::func_163(Local_551[0 /*195*/], 999013589))
			{
				TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_551[0 /*195*/], iLocal_4543, func_413(2), (-2.25f * 1f), (4f * 2.5f), 0, 4227112, -1, false);
			}
		}
		else
		{
			if (!__LIB_0__::func_163(Local_551[0 /*195*/].f_1, 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "trn2_horse_flee_1", 0, 4194314, -1, 0, 0, -1);
				TASK::_TASK_FLEE_FROM_COORD(0, 2970.594f, 603.3129f, 44.5519f, 0f, 0f, 0f, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_551[0 /*195*/].f_1, iVar1);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2964.528f, 533.7715f, 43.15928f, Local_37[0 /*171*/], 3f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			if (!__LIB_0__::func_163(Local_551[0 /*195*/], 242628503))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_551[0 /*195*/], iVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_551[1 /*195*/]))
	{
		if (bParam0)
		{
			if (!Local_551[1 /*195*/].f_188)
			{
				TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_551[1 /*195*/], iLocal_4543, func_413(2), 2.25f, (4f * 2.5f), 0, 4227112, -1, bParam0);
				Local_551[1 /*195*/].f_188 = 1;
			}
		}
		else if (!__LIB_0__::func_163(Local_551[1 /*195*/], 999013589))
		{
			TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_551[1 /*195*/], iLocal_4543, func_413(2), 2.25f, (4f * 2.5f), 0, 4227112, -1, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_551[2 /*195*/]))
	{
		if (bParam0)
		{
			if (!Local_551[2 /*195*/].f_188)
			{
				TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_551[2 /*195*/], iLocal_4543, func_413(2), (-2.25f * 1f), -4f, 0, 4227112, -1, bParam0);
				Local_551[2 /*195*/].f_188 = 1;
			}
		}
		else if (!__LIB_0__::func_163(Local_551[2 /*195*/], 999013589))
		{
			TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_551[2 /*195*/], iLocal_4543, func_413(2), (-2.25f * 1f), -4f, 0, 4227112, -1, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_551[3 /*195*/]))
	{
		if (bParam0)
		{
			if (!Local_551[3 /*195*/].f_188)
			{
				TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_551[3 /*195*/], iLocal_4543, func_413(2), 2.25f, -4f, 0, 4227112, -1, bParam0);
				Local_551[3 /*195*/].f_188 = 1;
			}
		}
		else if (!__LIB_0__::func_163(Local_551[3 /*195*/], 999013589))
		{
			TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Local_551[3 /*195*/], iLocal_4543, func_413(2), 2.25f, -4f, 0, 4227112, -1, false);
		}
	}
}

void func_1777(char* sParam0)
{
	__LIB_2__::func_259(&uLocal_4889);
	sLocal_4964 = sParam0;
	iLocal_4771 = 1;
}

Vector3 func_1778(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar12.f_2 = vVar9.z;
	vVar0 = { vVar12 - vVar9 };
	vVar3 = { __LIB_0__::func_173(vVar0) };
	vVar6 = { vVar3 * Vector(fParam2, fParam2, fParam2) };
	return vVar6;
}

void func_1783(int iParam0)
{
	if (func_1272(iParam0))
	{
		__LIB_1__::func_681(&iLocal_4821, iParam0);
	}
}

void func_1784(var uParam0)
{
	if ((__LIB_4__::func_979(uParam0) != 7 || __LIB_4__::func_979(uParam0) != 8) || __LIB_4__::func_979(uParam0) != 9)
	{
		if (func_1308(Global_35, 50f))
		{
			if ((!__LIB_1__::func_205(Global_35, iLocal_4619, 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_4620, 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_4621, 1, 0))
			{
				if (iLocal_4833 == 2)
				{
					if (!func_386(1024))
					{
						if (__LIB_4__::func_979(uParam0) != 18)
						{
							__LIB_11__::func_59(uParam0, 18);
						}
					}
				}
				if (iLocal_4833 == 4)
				{
					if (!func_386(2048))
					{
						if (__LIB_4__::func_979(uParam0) != 19)
						{
							__LIB_11__::func_59(uParam0, 19);
						}
					}
				}
				if (iLocal_4833 == 5)
				{
					if (!func_386(4096))
					{
						if (__LIB_4__::func_979(uParam0) != 20)
						{
							__LIB_11__::func_59(uParam0, 20);
						}
					}
				}
			}
		}
	}
}

void func_1786()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
			case 1:
			case 2:
				if (__LIB_1__::func_205(Local_1722[iVar1 /*195*/], iLocal_4601, 1, 0))
				{
					if (Local_1722[iVar1 /*195*/].f_185 == 0)
					{
						Local_1722[iVar1 /*195*/].f_185 = 1;
					}
				}
				break;
			case 3:
			case 4:
				if (Local_1722[iVar1 /*195*/].f_185 == 0)
				{
					Local_1722[iVar1 /*195*/].f_185 = 1;
				}
				break;
			case 6:
			case 7:
			case 8:
				if (__LIB_1__::func_205(Local_1722[iVar1 /*195*/], iLocal_4608, 1, 0))
				{
					if (Local_1722[iVar1 /*195*/].f_185 == 0)
					{
						Local_1722[iVar1 /*195*/].f_185 = 1;
					}
				}
				break;
			case 9:
			case 10:
				if (__LIB_1__::func_205(Local_1722[iVar1 /*195*/], iLocal_4611, 1, 0))
				{
					if (Local_1722[iVar1 /*195*/].f_185 == 0)
					{
						Local_1722[iVar1 /*195*/].f_185 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
}

bool func_1787(int iParam0, int iParam1)
{
	if (!func_2168(iParam0, iParam1, 1))
	{
		return false;
	}
	return true;
}

void func_1788(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = __LIB_0__::func_665(iLocal_4543, *uParam0, 1, 1);
	fVar0 = (fVar1 / uParam0->f_183);
	fVar2 = (3f * fVar0);
	if (fVar2 < 1.501f)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam0, 1.501f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else if (fVar2 > 3f)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam0, 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam0, fVar2, 0, -1082130432 /* Float: -1f */, 0);
	}
}

void func_1789(int iParam0, int iParam1)
{
	Local_1722[iParam0 /*195*/].f_179 = iParam1;
}

int func_1791(var uParam0, int iParam1, int iParam2)
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
		return func_1791(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1793(int* iParam0)
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
					func_846(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

void func_1814(var uParam0, int iParam1, int iParam2, char* sParam3)
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
		func_863(uParam0, iParam1, 133521, 0, sParam3, 67108863, 1023, 3, iParam2);
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

int func_1913(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_2281(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_1923(var uParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_11__::func_602(iParam1) };
	Var8 = { __LIB_9__::func_94(iParam1) };
	return func_2293(uParam0, __LIB_8__::func_868(uParam0, iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

bool func_1924()
{
	int iVar0;
	if (func_2294())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_0__::func_272(Local_3868[iVar0 /*195*/], 0))
			{
				if (!__LIB_0__::func_163(Local_3868[iVar0 /*195*/], -1442466670))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_3868[iVar0 /*195*/], 300f, 0, 0);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_1936(var uParam0)
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
							iVar1 = func_2301(128);
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
			func_2302(uParam0);
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

bool func_2091(int iParam0, int iParam1)
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
				if (func_2091(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2091(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2091(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2091(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_2160(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_551[iVar1 /*195*/].f_1))
		{
			switch (iVar1)
			{
				case 0:
					if (bParam3)
					{
						vVar2 = { func_172(1, 6) };
						fVar5 = func_868(1, 6);
					}
					else
					{
						vVar2 = { func_172(1, 12) };
						fVar5 = func_868(1, 12);
					}
					break;
				case 1:
					if (bParam3)
					{
						vVar2 = { func_172(1, 7) };
						fVar5 = func_868(1, 7);
					}
					else
					{
						vVar2 = { func_172(1, 13) };
						fVar5 = func_868(1, 13);
					}
					break;
				case 2:
					if (bParam3)
					{
						vVar2 = { func_172(1, 8) };
						fVar5 = func_868(1, 8);
					}
					else
					{
						vVar2 = { func_172(1, 14) };
						fVar5 = func_868(1, 14);
					}
					break;
				case 3:
					if (bParam3)
					{
						vVar2 = { func_172(1, 9) };
						fVar5 = func_868(1, 9);
					}
					else
					{
						vVar2 = { func_172(1, 15) };
						fVar5 = func_868(1, 15);
					}
					break;
			}
			Local_551[iVar1 /*195*/].f_1 = __LIB_1__::func_545(iLocal_27, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::_SET_PED_SCALE(Local_551[iVar1 /*195*/].f_1, 1f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_551[iVar1 /*195*/].f_1, true);
			__LIB_1__::func_991(Local_551[iVar1 /*195*/].f_1, joaat("HONOR_EVENT_KILL_HORSE"));
			PED::SET_PED_CONFIG_FLAG(Local_551[iVar1 /*195*/].f_1, 186, false);
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

bool func_2162(int iParam0, var uParam1, vector3 vParam2, float fParam5)
{
	int iVar0[50];
	int iVar51;
	int iVar52;
	iVar51 = 0;
	while (iVar51 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar51 /*195*/], 0))
		{
			if ((__LIB_0__::func_266((*iParam0)[iVar51 /*195*/], vParam2, fParam5, 1, 1) || __LIB_0__::func_86(vParam2)) || fParam5 <= 0f)
			{
				iVar0[iVar52] = iVar51;
				iVar52++;
			}
		}
		iVar51++;
	}
	if (iVar52 > 0)
	{
		*uParam1 = { *(iParam0[iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar52)] /*195*/]) };
		return true;
	}
	return false;
}

bool func_2168(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	char[] cVar7[8];
	if (!func_2426(iParam0, iParam1, 1))
	{
		return false;
	}
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1722[iVar1 /*195*/]))
		{
			switch (iVar1)
			{
				case 0:
					vVar3 = { func_172(7, 9) };
					fVar6 = func_868(7, 9);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REPEATER_CARBINE");
					cVar7 = func_413(4);
					Local_1722[iVar1 /*195*/].f_183 = 10f;
					break;
				case 1:
					vVar3 = { func_172(7, 0) };
					fVar6 = func_868(7, 0);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REPEATER_CARBINE");
					cVar7 = func_413(5);
					Local_1722[iVar1 /*195*/].f_183 = 15f;
					break;
				case 2:
					vVar3 = { func_172(7, 1) };
					fVar6 = func_868(7, 1);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REVOLVER_CATTLEMAN");
					cVar7 = func_413(6);
					Local_1722[iVar1 /*195*/].f_183 = 20f;
					break;
				case 3:
					vVar3 = { func_172(7, 2) };
					fVar6 = func_868(7, 2);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REPEATER_CARBINE");
					cVar7 = func_413(7);
					Local_1722[iVar1 /*195*/].f_183 = 20f;
					break;
				case 4:
					vVar3 = { func_172(7, 3) };
					fVar6 = func_868(7, 3);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REVOLVER_CATTLEMAN");
					cVar7 = func_413(8);
					Local_1722[iVar1 /*195*/].f_183 = 25f;
					break;
				case 5:
					vVar3 = { func_172(7, 10) };
					fVar6 = func_868(7, 10);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REPEATER_CARBINE");
					cVar7 = func_413(9);
					Local_1722[iVar1 /*195*/].f_183 = 15f;
					break;
				case 6:
					vVar3 = { func_172(7, 6) };
					fVar6 = func_868(7, 6);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REPEATER_CARBINE");
					cVar7 = func_413(10);
					Local_1722[iVar1 /*195*/].f_183 = 25f;
					break;
				case 7:
					vVar3 = { func_172(7, 7) };
					fVar6 = func_868(7, 7);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REVOLVER_CATTLEMAN");
					cVar7 = func_413(12);
					Local_1722[iVar1 /*195*/].f_183 = 28f;
					break;
				case 8:
					vVar3 = { func_172(7, 8) };
					fVar6 = func_868(7, 8);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REVOLVER_CATTLEMAN");
					cVar7 = func_413(11);
					Local_1722[iVar1 /*195*/].f_183 = 20f;
					break;
				case 9:
					vVar3 = { func_172(7, 11) };
					fVar6 = func_868(7, 11);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REPEATER_CARBINE");
					cVar7 = func_413(13);
					Local_1722[iVar1 /*195*/].f_183 = 28f;
					break;
				case 10:
					vVar3 = { func_172(7, 12) };
					fVar6 = func_868(7, 12);
					bVar2 = true;
					Local_1722[iVar1 /*195*/].f_193 = joaat("WEAPON_REVOLVER_CATTLEMAN");
					cVar7 = func_413(14);
					Local_1722[iVar1 /*195*/].f_183 = 31f;
					break;
			}
			if (!Local_1722[iVar1 /*195*/].f_184)
			{
				Local_1722[iVar1 /*195*/] = __LIB_1__::func_545(iLocal_30, vVar3, fVar6, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				Local_1722[iVar1 /*195*/].f_179 = 0;
				Local_1722[iVar1 /*195*/].f_185 = 0;
				Local_1722[iVar1 /*195*/].f_194 = cVar7;
				if (!PED::_0xCC2B20596E29E4E3(Local_1722[iVar1 /*195*/], 112))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1722[iVar1 /*195*/], 112, true);
				}
				if (!PED::_0xCC2B20596E29E4E3(Local_1722[iVar1 /*195*/], 30))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1722[iVar1 /*195*/], 30, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1722[iVar1 /*195*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_1722[iVar1 /*195*/], 186, false);
				PED::_0x8ACC0506743A8A5C(Local_1722[iVar1 /*195*/], joaat("SCRIPT_MOUNTEDFASTFIRING"), 1, -1082130432 /* Float: -1f */);
				AUDIO::STOP_PED_SPEAKING(Local_1722[iVar1 /*195*/], true);
				__LIB_1__::func_991(Local_1722[iVar1 /*195*/], 0);
				__LIB_1__::func_766(Local_1722[iVar1 /*195*/], Local_1722[iVar1 /*195*/].f_193, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				if (bVar2)
				{
					__LIB_1__::func_571(Local_1722[iVar1 /*195*/], Local_1722[iVar1 /*195*/].f_1, 0, -1, 0);
				}
				if ((iVar1 != 5 && iVar1 != 9) && iVar1 != 10)
				{
					if (!__LIB_0__::func_163(Local_1722[iVar1 /*195*/], 658540077))
					{
						Local_4772 = Local_1722[iVar1 /*195*/].f_194;
						Local_4772.f_3 = 4220428;
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Local_1722[iVar1 /*195*/], &Local_4772);
						PED::FORCE_PED_MOTION_STATE(Local_1722[iVar1 /*195*/].f_1, joaat("MOTIONSTATE_RUN"), false, 0, false);
						PED::_0x2208438012482A1A(Local_1722[iVar1 /*195*/].f_1, false, false);
					}
				}
				Local_1722[iVar1 /*195*/].f_184 = 1;
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

int func_2281(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_1__::func_626(iParam0, vVar0, fParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_846(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

bool func_2293(var uParam0, int iParam1, var uParam2, var uParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
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
	bVar0 = __LIB_11__::func_727(uParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), uParam2, uParam3, 1, sParam4, iParam5, fParam7, fParam8);
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

bool func_2294()
{
	int iVar0;
	float fVar1;
	struct<28> Var2;
	Var2.f_8 = -1;
	Var2.f_17 = 1097859072;
	Var2.f_18 = 1000;
	Var2.f_19 = 1067450368;
	Var2.f_20 = 5000;
	Var2.f_21 = 42;
	Var2.f_22 = 1103626240;
	Var2.f_23 = 1077936128;
	Var2.f_24 = 1106247680;
	Var2.f_25 = 1103101952;
	Var2.f_26 = 1097859072;
	Var2.f_27 = 1103626240;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_3868[0 /*195*/], 0))
	{
		if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_3868[0 /*195*/]) >= 131)
		{
			fVar1 = 1f;
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_3868[0 /*195*/]) >= 100)
		{
			fVar1 = 1f;
		}
		else
		{
			fVar1 = 1f;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(Local_3868[iVar0 /*195*/], 0))
		{
			if (!func_1239(524288))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3868[iVar0 /*195*/], Global_35, 1, 1))
				{
					return true;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3868[iVar0 /*195*/].f_1, Global_35, 1, 1))
				{
					return true;
				}
				if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_3868[iVar0 /*195*/], true, false), 10f, true, true) && !WEAPON::_0xBDD9C235D8D1052E(Global_35))
				{
					return true;
				}
				if (__LIB_2__::func_875(Global_35, Local_3868[iVar0 /*195*/], &Var2))
				{
					return true;
				}
				if (__LIB_2__::func_877(Global_35, Local_3868[iVar0 /*195*/], &Var2, 0))
				{
					return true;
				}
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_3868[iVar0 /*195*/], true, false), 50f))
				{
					return true;
				}
				if (__LIB_0__::func_665(Global_35, Local_3868[iVar0 /*195*/], 1, 1) <= 10f)
				{
					return true;
				}
			}
			else
			{
				if (__LIB_2__::func_123(Local_3868[iVar0 /*195*/], Global_35, fVar1) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_3868[iVar0 /*195*/], Global_35, 17))
				{
					return true;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3868[iVar0 /*195*/], Global_35, 1, 1))
				{
					return true;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3868[iVar0 /*195*/].f_1, Global_35, 1, 1))
				{
					return true;
				}
				if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_3868[iVar0 /*195*/], true, false), 10f, true, true) && !WEAPON::_0xBDD9C235D8D1052E(Global_35))
				{
					return true;
				}
				if (__LIB_2__::func_875(Global_35, Local_3868[iVar0 /*195*/], &Var2))
				{
					return true;
				}
				if (__LIB_2__::func_877(Global_35, Local_3868[iVar0 /*195*/], &Var2, 0))
				{
					return true;
				}
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_3868[iVar0 /*195*/], true, false), 50f))
				{
					return true;
				}
				if (__LIB_0__::func_665(Global_35, Local_3868[iVar0 /*195*/], 1, 1) <= 10f)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	if (!func_1239(262144))
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if ((PED::IS_PED_SHOOTING(Global_35) && !WEAPON::_0xBDD9C235D8D1052E(Global_35)) && WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_399(Global_35, 1, 0, 0)))
			{
				return true;
			}
			if (PED::IS_PED_SHOOTING(Global_35) && __LIB_0__::func_399(Global_35, 1, 0, 1) == joaat("WEAPON_THROWN_DYNAMITE"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_2301(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1342(&uVar0, iParam0, 0);
	iVar9 = func_1791(&uVar4, iParam0, 0);
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

void func_2302(var uParam0)
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
					iVar2 = func_2301(128);
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
				iVar3 = func_2301(128);
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

bool func_2426(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1722[iVar1 /*195*/].f_1))
		{
			switch (iVar1)
			{
				case 0:
					vVar2 = { func_172(7, 9) };
					fVar5 = func_868(7, 9);
					break;
				case 1:
					vVar2 = { func_172(7, 0) };
					fVar5 = func_868(7, 0);
					break;
				case 2:
					vVar2 = { func_172(7, 1) };
					fVar5 = func_868(7, 1);
					break;
				case 3:
					vVar2 = { func_172(7, 2) };
					fVar5 = func_868(7, 2);
					break;
				case 4:
					vVar2 = { func_172(7, 3) };
					fVar5 = func_868(7, 3);
					break;
				case 5:
					vVar2 = { func_172(7, 10) };
					fVar5 = func_868(7, 10);
					break;
				case 6:
					vVar2 = { func_172(7, 6) };
					fVar5 = func_868(7, 6);
					break;
				case 7:
					vVar2 = { func_172(7, 7) };
					fVar5 = func_868(7, 7);
					break;
				case 8:
					vVar2 = { func_172(7, 8) };
					fVar5 = func_868(7, 8);
					break;
				case 9:
					vVar2 = { func_172(7, 11) };
					fVar5 = func_868(7, 11);
					break;
				case 10:
					vVar2 = { func_172(7, 12) };
					fVar5 = func_868(7, 12);
					break;
			}
			Local_1722[iVar1 /*195*/].f_1 = __LIB_1__::func_545(iLocal_27, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1722[iVar1 /*195*/].f_1, true);
			__LIB_1__::func_991(Local_1722[iVar1 /*195*/].f_1, joaat("HONOR_EVENT_KILL_HORSE"));
			PED::SET_PED_CONFIG_FLAG(Local_1722[iVar1 /*195*/].f_1, 186, false);
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

