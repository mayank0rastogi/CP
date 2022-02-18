import math
n,k,l,c,d,p,nl,np=list(map(int,input().split()))

tot_drink=k*l
tot_limes=c*d
tot_salt=p

one_person=tot_drink//nl
# print(one_person)
lime_slice_one_person_needed=tot_limes//1
salt_nedeed_one_person=tot_salt//np

final=min(one_person,lime_slice_one_person_needed,salt_nedeed_one_person)
final=math.floor(final//n)
print(final)
