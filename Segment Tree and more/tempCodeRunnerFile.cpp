for (int i = 0; i < 2*n; i++) {
		int temp = a[i]; //index
		temp--;
		//cout << vec1[temp] << " ";
		//cout << arr[temp][0] << " " << arr[temp][1] << "\n";
		vec1[temp]+=1; // # incidencias
		if (vec1[temp] == 2) {
			arr[temp][1] = i;
			ans[temp] = st.sum(arr[temp][0]+1, arr[temp][1]);
			
            //cout << st.sum(arr[temp][0], arr[temp][1]) << " ";
            st.set(arr[temp][0], 0);
            st.set(arr[temp][1], 0);
            //st.set(arr[temp][0], 0);
            //if (!ans[temp]) st.set(arr[temp][1], 0);
		} else {
			//cout << i << " ";
			arr[temp][0] = i;
		}
	}