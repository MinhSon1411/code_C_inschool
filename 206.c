#include<stdio.h>
int main () {
	int r1,r2,r3,d1,d2,d3,x;
	scanf("%d%d%d%d%d%d",&r1,&d1,&r2,&d2,&r3,&d3);
	if (r1==r2 && r2==r3 && d1+d2+d3==r1) {
			printf("YES");
	}
	else {
			if (d1==d2 && d2==d3 && r1+r2+r3==d1) {
						printf("YES");
				} else {
					if ((d2==d3 && r1==r2+r3) || (d1==d3 && r2==r1+r3) || (d2==d1 && r3==r1+r2)) {
						printf("YES");
					} else {
						if ((r3==r2 && d1==d2+d3) || (r1==r3 && d2==d1+d3) || (r1==r2 && d3==d1+d2)) {
							printf("YES");
						}	else {
							x=r1;
							r1=d1;
							d1=x;
							if (r1==r2 && r2==r3 && d1+d2+d3==r1) {
									printf("YES");
							}
							else {
									if (d1==d2 && d2==d3 && r1+r2+r3==d1) {
												printf("YES");
										} else {
											if ((d2==d3 && r1==r2+r3) || (d1==d3 && r2==r1+r3) || (d2==d1 && r3==r1+r2)) {
												printf("YES");
											} else {
												if ((r3==r2 && d1==d2+d3) || (r1==r3 && d2==d1+d3) || (r1==r2 && d3==d1+d2)) {
													printf("YES");
												}	else {
													x=r2;
													r2=d2;
													d2=x;
													if (r1==r2 && r2==r3 && d1+d2+d3==r1) {
															printf("YES");
													}
													else {
															if (d1==d2 && d2==d3 && r1+r2+r3==d1) {
																		printf("YES");
																} else {
																	if ((d2==d3 && r1==r2+r3) || (d1==d3 && r2==r1+r3) || (d2==d1 && r3==r1+r2)) {
																		printf("YES");
																	} else {
																		if ((r3==r2 && d1==d2+d3) || (r1==r3 && d2==d1+d3) || (r1==r2 && d3==d1+d2)) {
																			printf("YES");
																		}	else {
																			x=r3;
																			r3=d3;
																			d3=x;
																			if (r1==r2 && r2==r3 && d1+d2+d3==r1) {
																					printf("YES");
																			}
																			else {
																					if (d1==d2 && d2==d3 && r1+r2+r3==d1) {
																								printf("YES");
																						} else {
																							if ((d2==d3 && r1==r2+r3) || (d1==d3 && r2==r1+r3) || (d2==d1 && r3==r1+r2)) {
																								printf("YES");
																							} else {
																								if ((r3==r2 && d1==d2+d3) || (r1==r3 && d2==d1+d3) || (r1==r2 && d3==d1+d2)) {
																									printf("YES");
																								}	else {
																									printf("NO");
																								}
																							}
																							
																						} 
																				}
																			
																		}
																	}
																	
																} 
														}
													
												}
											}
											
										} 
								}	
						
						}
					}
					
				} 
		}
}