## Table no: High Level test plan

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|H\_01|Electricity bill calculation of domestic consumers|Choice|SUCCESS|SUCCESS|
|H\_02|Electricity bill calculation of commercial consumers|Choice|SUCCESS|SUCCESS|
|H\_03|Units consumed per month|Choice|SUCCESS|SUCCESS|
|H\_04|Calculates total cost including penalty for domestic consumer|Choice|SUCCESS|SUCCESS|


## Table no: Low Level test plan


|Test ID|HL\_ID|Description|Exp input-Unit, Fine(0,1)|Exp Output|Actual Output|
| :- | :- | :- | :- | :- | :- |
|L\_01|H\_01|Electricity bill calculation of domestic consumers if(units<=100)|92 units, 0(fine)|0.00 rupees|0.00 rupees|
|L\_02|H\_01|Electricity bill calculation of domestic consumers if(units<=100)|92 units, 1(no fine)|0.00 rupees|0.00 rupees|
|L\_03|H\_01|Electricity bill calculation of domestic consumers if(units<=200)|180 units, 0(fine)|160.37 rupees|160.37 rupees|
|L\_04|H\_01|Electricity bill calculation of domestic consumers if(units<=200)|180 units, 1(no fine)|158.00 rupees|158.00 rupees|
|L\_05|H\_01|Electricity bill calculation of domestic consumers if(units<=500)|480 units, 0(fine)|1134.77 rupees|1134.77 rupees|
|L\_06|H\_01|Electricity bill calculation of domestic consumers if(units<=500)|480 units, 1(no fine)|1118.00 rupees|1118.00 rupees|
|L\_07|H\_01|Electricity bill calculation of domestic consumers if(units>500)|1672 units, 0(fine)|9827.64 rupees|9827.64 rupees|
|L\_08|H\_01|Electricity bill calculation of domestic consumers if(units>500)|1672 units, 1(no fine)|9682.40 rupees|9682.40 rupees|
|L\_09|H\_02|Electricity bill calculation of commercial consumers if(units<500)|490 units|1960.00 rupees|1960.00 rupees|
|L\_10|H\_02|Electricity bill calculation of commercial consumers if(units>=500)|570 units|2622.00 rupees|2622.00 rupees|
